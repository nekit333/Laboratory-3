#ifndef PROJECTMANAGER_H_INCLUDED
#define PROJECTMANAGER_H_INCLUDED

#include "worker.h"

class projectManager: public worker
{
private:
    int amountWorkers;
public:
    projectManager();
    projectManager(string name,string surename,int year,int amountWorkers);
    projectManager(const projectManager &k);

    void setAmount(int amountWorkers);
    int getAmount()const;

    void print()const;

    projectManager& operator = (const projectManager &Manager);
};

#endif // PROJECTMANAGER_H_INCLUDED
