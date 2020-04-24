#include "programmer.h"

Programmer::Programmer():Programmer("No name","No surename",0,"No projectName"){}
Programmer::Programmer(string name,string surename,int year,string projectName)
{
    setName(name);
    setSurename(surename);
    setYear(year);
    setProjectName(projectName);
}

Programmer::Programmer(const Programmer &k):Programmer(k.name,k.surename,k.year,k.projectName){}

void Programmer::setProjectName(string projectName)
{
    this->projectName = projectName;
}

string Programmer::getProjectName()
{
    return projectName;
}

void Programmer::print()const
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surename << endl;
    cout << "Year: " << year << endl;
    cout << "Name of the  project: " << projectName << endl;
}

Programmer& Programmer::operator = (const Programmer &prog)
{
    this->name = prog.name;
    this->surename = prog.surename;
    this->year = prog.year;
    this->projectName = prog.projectName;
    return *this;
}
