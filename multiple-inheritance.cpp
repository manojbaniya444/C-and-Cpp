#include<iostream>

using namespace std;

class topclass{
    public:
    string fname="Manoj";

};

class anothertopclass{
    public:
    string lname="Baniya";
};

class combineclass:public topclass,public anothertopclass{
   //Default access specifier is private which means we cannot access it directly
};

int main()
{
    combineclass object;
    cout << object.fname;
    cout << endl;
    cout << object.lname;  

    return 0;
}