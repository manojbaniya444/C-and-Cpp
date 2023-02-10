#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name1,name2,name3;
    name1="ABCDEFG";
    name2="HIJKLMNOP";

    name3= name1.append(name2);

    cout<<"The length of the string name3 is: "<<name3.size();  //can be used size() or length()

    return 0;
}