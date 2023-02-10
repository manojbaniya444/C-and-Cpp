#include<iostream>

using namespace std;

class Employee{
    private:   //Cannot access to the salary directly
     int salary;
    
    public:

    void setter(int s){
        salary = s;
    }

    int getter(){
        return salary;
    }
};

int main()
{
    Employee emp1;
    //emp1.salary = 20000;  We cannot set the salary directly because the salary is private so what we do is Encapsulation.
    emp1.setter(20000);
    cout << "The salary of the employee 1 is : " << emp1.getter() << "\n" ;
     return 0;
}