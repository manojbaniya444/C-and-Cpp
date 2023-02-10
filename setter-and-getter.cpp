#include <iostream>

using namespace std;

class employee
{
private:
    int salary;

public:
    string name;
    int rank;

    void setter(int s)
    {
        salary = s;
    }

    int getter()

    {
        return salary;
    }

    void salaryadd(int x, int y);
};

void employee::salaryadd(int x, int y)
{
    int totalsalary;

    totalsalary = x + y;
    cout << totalsalary;
}

int main()
{

    // Input to the employee1 details
    employee employee1;
    cout << "Enter the name of the employee1: " << endl;
    cin >> employee1.name;

    cout << "Enter the rank of the employee1: " << endl;
    cin >> employee1.rank;

    cout << "Enter the salary of the employee1: " << endl;

    int s;

    cin >> s;
    employee1.setter(s);

    // Output to the employee1 details

    cout << "Name :" << employee1.name << "\nRank: " << employee1.rank << "\nSalary: " << employee1.getter() << endl;

    // employee1.salary = 50000;  Inaccessable due to the private access specifier

    int ss;
    employee employee2;
    cout << "Enter the salary of the employee2:" << endl;
    cin >> ss;

    employee2.setter(ss);

    employee1.salaryadd(s, ss);
    cout << endl;
    employee2.salaryadd(s, ss);

    return 0;
}