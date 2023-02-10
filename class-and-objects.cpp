#include<iostream>
using namespace std;

class vehicle{
    public:
    string name;
    string model;
    int year;

    void price(){
        cout << "The price of the car is $20000";
    };
};

int main()
{
    vehicle mycar1;

    cout << "Enter the name of the car1" <<endl;
    cin >> mycar1.name;

    // cout << mycar1.name;

    cout << "Enter the model and the year of the car:\n";
    cin >> mycar1.model >> mycar1.year ;

    cout << "Name: " << mycar1.name << " Model: " << mycar1.model << " Year: " <<mycar1.year <<endl ;

    mycar1.price();      //Calling the methods in the class
    return 0;
}