#include<iostream>
#include<string>

using namespace std;

class name{
    public:
    string fname;
    string lname;
    // string lname;
    int age;

    string namae(string namae);
};

string name :: namae(string namae)
{
    string TheName;
    string  addname = "Sir";

    TheName = namae.append(addname);

    return TheName;  
}
int main()
{
    name person1;
    cout << "Enter the first, last name and age of the person: " << endl ;
    cin >> person1.fname >> person1.lname >> person1.age;

    cout << "Name: " <<person1.fname << " " << person1.lname << " Age: " <<person1.age ;

    string value_from_function = person1.namae("ManojkumarBaniya");

    cout << "\nThe name that we get back is: " << value_from_function;

    return 0;
}