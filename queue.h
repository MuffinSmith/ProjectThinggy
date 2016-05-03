#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <cassert>

using namespace std;

const int DEFAULT_SIZE=15;


class Queue_Error
{
private:
    string error;
public:
    Queue_Error(string msg) { error = msg; }
    string getErrorMessage() const { return error; }
};


template<class T>
class Queue
{
public:
    ///
    ///       CONSTRUCTOR / DESTRUCTOR
    /// DEFAULT: Creates an empty Queue with the default size (15)
    Queue(): HPtr(NULL), TPtr(NULL), count(0), MAX_SIZE(DEFAULT_SIZE){}

    /// Creates a Queue with an explicitly defined maximum size
    Queue(int maxSize): HPtr(NULL), TPtr(NULL), count(0), MAX_SIZE(maxSize){}

    /// Copies a Queue and increases size ** Queue < oldQ **
    Queue(Queue &oldQ, int maxSize): HPtr(oldQ.HPtr), TPtr(oldQ.TPtr),
        count(oldQ.count), MAX_SIZE(maxSize){}

    /// Exact copy of a Queue
    Queue(Queue &oldQ): HPtr(oldQ.HPtr), TPtr(oldQ.TPtr), count(oldQ.count),
        MAX_SIZE(oldQ.MAX_SIZE){}

    ~Queue(){}
    ///
    ///
    ///       MUTATORS
    void EnQueue(T data)
    {
        if(isFull())
        {
            throw Queue_Error("The Queue is full.");
        }else
        {
            //              assert(isFull());
            Node *newItem = new Node;
            newItem->item = data;
            newItem->next = NULL;

            if(isEmpty())
            {
                HPtr = newItem;
            }else
            {
                TPtr->next = newItem;
            }

            TPtr = newItem;
            count++;
        }
    }

    void DeQueue()
    {
        if(isEmpty())
        {
            throw Queue_Error("The Queue is empty.");
        }else
        {
            --count;

            Node *temp = HPtr;

            if(HPtr == TPtr)
            {
                HPtr = NULL;
                TPtr = NULL;
            }else
            {
                HPtr = HPtr->next;
            }

            cout << temp->item << endl;
            delete temp;
        }
    }
    ///
    ///
    ///       ACCESSORS
    void PrintQue(void)
    {
        if(isEmpty())
        {
            throw Queue_Error("The Queue is empty.");
        }else
        {
            Node *temp = HPtr;

            while(temp != NULL)
            {
                cout << temp->item << endl;
                temp = temp->next;
            }
        }
    }

    void Front(void) const
    {cout << HPtr->item << endl;}

    int Count(void) const
    {return count;}

    int Size(void) const
    {return MAX_SIZE;}

    bool isEmpty() const
    {return (count == 0);}

    bool isFull() const
    {return (count >= MAX_SIZE);}

private:
    ///
    ///       DATA MEMBERS
    ///
    struct Node{
        T item;                 /// data stored
        Node *next;             /// points to next node
    };

    Node *HPtr;                 /// head pointer
    Node *TPtr;                 /// tail pointer
    int count;                  /// size of queue
    const int MAX_SIZE;         /// maximum number of nodes
};


#endif // QUEUE_H
