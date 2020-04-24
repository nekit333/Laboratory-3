#include "projectManager.h"

projectManager::projectManager():projectManager("No name","No surname",1900,0){}
projectManager::projectManager(string name,string surename,int year,int amountWorkers)
{
    setName(name);
    setSurename(surename);
    setYear(year);
    setAmount(amountWorkers);
}

projectManager::projectManager(const projectManager &k):projectManager(k.name,k.surename,k.year,k.amountWorkers){}

void projectManager::setAmount(int amountWorkers)
{
    this->amountWorkers = amountWorkers;
}

int projectManager::getAmount()const
{
    return amountWorkers;
}

void projectManager::print()const
{
    cout << "Name: " << name << endl;
    cout << "Surename: " << surename << endl;
    cout << "Year: " << year << endl;
    cout << "Number of workers: " << amountWorkers << endl;
}

projectManager& projectManager::operator = (const projectManager &Manager)
{
    this->name = Manager.name;
    this->surename = Manager.surename;
    this->year = Manager.year;
    this->amountWorkers = Manager.amountWorkers;
    return *this;
}
