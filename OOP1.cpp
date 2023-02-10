#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    string schoolname;
    double height;
    student(string x, int y, string z, double a)
    {
        name = x;
        age = y;
        schoolname = z;
        height = a;
    }
    void add();
};
void student::add()
{

    cout << "I am add function." << endl;
}
int main()
{
    student student1("manoj", 20, "IOE", 5.7);

    cout << student1.name << endl;

    string newname, newschoolname;
    int newage;
    double newheight;

    cout << "Enter the name,age,school name and height of student 2:" << endl;
    cin >> newname >> newage >> newschoolname >> newheight;
    student student2(newname, newage, newschoolname, newheight);
    cout << "Name: " << student2.name << " Age: " << student2.age << " School: " << student2.schoolname << " Height: " << student2.height << endl;
    student1.add();
    student2.add();
    return 0;
}