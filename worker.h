#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED

#include <string>
#include "Person.h"

class worker : public Person
{
    public:
    worker();
    worker(string name,string surename,int year);
    worker(const worker &k);

    virtual void print()const = 0;
};

#endif // WORKER_H_INCLUDED
