#include<iostream>
#include<string>

using namespace std;

int main()
{
    string fname,lname,Fname;
    cout<<"Enter your first name:"<<endl;
    cin>>fname;

    cout<<"Enter your last name:\n";
    cin>>lname;

    Fname=fname + ' ' +  lname;

    cout<<"Your full name is:"<<Fname;

    int myAge=20;

    cout<<"\nMy name is "<<Fname<<" and I am "<<myAge<<" Years old.";

    return 0;
}