#include "worker.h"

worker::worker():worker("No name","No surname",1900){}
worker::worker(string name,string surename,int year)
{
    setName(name);
    setSurename(surename);
    setYear(year);
}

worker::worker(const worker &k):worker(k.name,k.surename,k.year){}
