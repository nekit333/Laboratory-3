#ifndef PROGRAMMER_H_INCLUDED
#define PROGRAMMER_H_INCLUDED

#include "worker.h"

class Programmer : public worker
{
private:
    string projectName;
public:
    Programmer();
    Programmer(string name,string surename,int year,string projectName);
    Programmer(const Programmer &k);

    void setProjectName(string projectName);
    string getProjectName();

    void print()const;

    Programmer& operator = (const Programmer &prog);
};

#endif // PROGRAMMER_H_INCLUDED
