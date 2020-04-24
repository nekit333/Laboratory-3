#include "Person.h"

Person::Person(){
    setName("noName");
    setSurename("noSurename");
    year = 1900;
}

Person::Person(const string name, const string surename, int year){
    setName(name);
    setSurename(surename);
    this->year=1900;
    setYear(year);
}

Person::Person(const Person &P){
    setName(P.name);
    setSurename(P.surename);
    year = P.year;
}

void Person::setName(const string name){
    this->name = name;
}

void Person::setSurename(const string surename){
    this->surename = surename;
}

bool Person::setYear(int yearROM){
    struct tm *t;
    time_t z = time(NULL);
    t = localtime(&z);
    if (yearROM >= t->tm_year+1780 && yearROM <= t->tm_year+1900){
        year = yearROM;
        return true;
    }
    return false;
}

string  Person::getName(string name) const{
    return name;
}

string  Person::getSurename(string surename) const{
    return surename;
}

int Person::getYear(){
    return year;
}
