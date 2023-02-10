#include<iostream>

using namespace std;

//Parent class
class Father{
    public:
    string fname;
    int age;
    int salary;

    void fatherfun(){
        cout << "Baap baap hota hain samaj main aaya na ab!";
    }
};

//Derived class

class son:public Father{
    public:
    string lname;
};

//Multilevel inheritance

class grandson:public son{
    string fullname;
};

int main()
{
    grandson object1;

    cout << "Press 9 if you want to talk to your father, dear grandson." <<endl;

    int answer;
    cin >> answer;

    if (answer==9)
    {
    object1.fatherfun();
    }

    else {
        cout << "Arey baap se nahi bolna hai kya 1 dalne ko bola tha kya daaldiya re.";
    }

    return 0;
}