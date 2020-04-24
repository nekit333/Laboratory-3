#include "customer.h"
#include "projectManager.h"
#include "programmer.h"

int main()
{
    string name;
    string surename;
    int year;
    string ProjectName;
    int amountWorkers;

    customer a;
    projectManager b;
    Programmer c;

    cout << "1 - Make customer." << endl;
    cout << "2 - Copy customer." << endl;
    cout << "3 - Make project manager." << endl;
    cout << "4 - Copy project manager." << endl;
    cout << "5 - Make programmer." << endl;
    cout << "6 - Copy programmer." << endl;
    cout << "0 - Exit." << endl;
    short k;
    while(true)
    {
        cout << "\n";
        cin >> k;
        switch(k)
            {
            case 1:
                {
                    cout << "Input name: ";
                    cin >> name;
                    a.setName(name);
                    cout << "Input surename: ";
                    cin >> surename;
                    a.setSurename(surename);
                    cout << "Input year: ";
                    cin >> year;
                    a.setYear(year);
                    cout << "Input Project Name: ";
                    cin >> ProjectName;
                    a.setProjectName(ProjectName);
                    cout << "\n";
                    a.print();
                    break;
                }
            case 2:
                {
                    customer a1(a);
                    cout << "\n";
                    a1.print();
                    break;
                }
            case 3:
                {
                    cout << "Input name: ";
                    cin >> name;
                    b.setName(name);
                    cout << "Input surname: ";
                    cin >> surename;
                    b.setSurename(surename);
                    cout << "Input year: ";
                    cin >> year;
                    b.setYear(year);
                    cout << "Input amount workers: ";
                    cin >> amountWorkers;
                    b.setAmount(amountWorkers);
                    cout << "\n";
                    b.print();
                    break;
                }
            case 4:
                {
                    projectManager b1(b);
                    cout << "\n";
                    b1.print();
                    break;
                }
            case 5:
                {
                    cout << "Input name: ";
                    cin >> name;
                    c.setName(name);
                    cout << "Input surname: ";
                    cin >> surename;
                    c.setSurename(surename);
                    cout << "Input year: ";
                    cin >> year;
                    c.setYear(year);
                    cout << "Input Project Name: ";
                    cin >> ProjectName;
                    c.setProjectName(ProjectName);
                    cout << "\n";
                    c.print();
                    break;
                }

            case 6:
                {
                    Programmer c1(c);
                    cout << "\n";
                    c1.print();
                    break;
                }
            default:
            break;
            }
        if(k==0)
            break;
    }
    return 0;
}
