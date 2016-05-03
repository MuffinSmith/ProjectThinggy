#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

///
/// \brief The CustomerList class is a wrapper class composed of a queue
/// template decalred for the Customer class.
///

#include "customer.h"
#include "queue.h"

class CustomerList{
public:
    Queue<Customer> list;
};

#endif // CUSTOMERLIST_H
