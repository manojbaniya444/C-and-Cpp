#include<iostream>

using namespace std;

class myclass{
    protected:
        string name;
};

//Derived class

class derivedclass:public myclass{
    public:
        void setter(string n)
        {
            name = n;
        }

        string getter()
        {
            return name;
        }
};

int main()
{
    derivedclass object;
    cout << "Enter your name:" <<endl;
    string temp;
    cin >> temp;

    object.setter(temp);

    cout <<"Your name is " << object.getter();

    return 0;
}