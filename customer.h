#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include "Person.h"

class customer : public Person
{
private:
    string projectName;
public:
    customer();
    customer(string name,string surename,int year,string projectName);
    customer(const customer &cl);

    void setProjectName(string projectName);
    string getProjectName()const;

    void print()const;

    customer& operator = (const customer &customer);
};

#endif // CUSTOMER_H_INCLUDED
