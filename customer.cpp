#include "customer.h"

customer::customer():customer("No name","No surename",0,"No projectName"){}

customer::customer(string name,string surename,int year,string projectName)
{
    setName(name);
    setSurename(surename);
    setYear(year);
    setProjectName(projectName);
}
customer::customer(const customer &k):customer(k.name,k.surename,k.year,k.projectName){}

void customer::setProjectName(string projectName)
{
    this->projectName = projectName;
}
string customer::getProjectName()const
{
    return projectName;
}

void customer::print()const
{
    cout << "Name: " << name << endl;
    cout << "Surename: " << surename << endl;
    cout << "Year: " << year << endl;
    cout << "Project name: " << projectName << endl;
}

customer& customer::operator = (const customer &customer)
{
    this->name = customer.name;
    this->surename = customer.surename;
    this->year = customer.year;
    this->projectName = customer.projectName;
    return *this;
}
