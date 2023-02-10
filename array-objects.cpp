#include<iostream>

using namespace std;

class myclass{
    public:
    string myname;
    int myage;
};

int main()
{
    myclass myobj[5];

    for (int i=0;i<5;i++)
    {
        cout << "Enter the name of student " << i+1;
        cout << endl;
        cin >> myobj[i].myname;

        cout << "\nEnter the age of student " << i+1;
        cout << endl;
        cin >> myobj[i].myage;
    }

    //Printing the list of 5 students

    cout << "\nThe details of the 5 students registered are:";
     for (int i=0;i<5;i++)
     {
         cout << "\nName: " << myobj[i].myname << " Age: " << myobj[i].myage ;
         cout << endl;
     }

     return 0;
}