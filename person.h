#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class Person{
protected:
    string name;
    string surename;
    int year;
public:
    Person();
    Person(const string name, const string surename, int year);
    Person(const Person &P);

    void setName (const string name);
    void setSurename (const string surename);
    bool setYear (int year);

    string getName(string name) const;
    string getSurename(string surename) const;
    int getYear();

    virtual void print()const = 0;
};

#endif // PERSON_H_INCLUDED
