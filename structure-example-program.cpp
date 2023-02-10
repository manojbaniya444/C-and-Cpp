/* 
Creating a program in c++ for storing a details of 3 students

1:define variables and necessary headers.
2:Take the details of three students using array of structures ofc.
3:Loop should be used while taking input of the details in array of structures.
4:After taking the details ask the user if they want a printed list of the students entered lastly.
5:Check conditions if they enter yes than print the list and if they press no then display a message saying successfully entered the lists of the students in the program.
6:End the proram.
*/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct students{
    string name;
    int rollno;
    double marks;
    string grade;
};

int main(){
    students s[3];

    cout << "Enter the details of the students: \n";
    int i;

    for (i=0;i<3;i++)
    {
        cout << "Detail of student: " << i+1 <<endl;
        cout << "Name:\t";
        cin >> s[i].name;
        // getline(cin,s[i].name);

        cout << "rollno:\t";
        cin >> s[i].rollno;

        cout << "marks:\t";
        cin >> s[i].marks;

        cout << "grade:\t";
        cin >> s[i].grade;
    }

    cout << "Do you want to check the list of the entered students lists:\n";

    cout << "choose 'y' or 'n' :   ";
    string answer;

    cin >> answer;

    if (answer == "y" || "Y")
    {
        cout << "The details of the students are printed below:\n";
        cout << "SN\tName\tRoll No\tMarks\tGrades.\n";
        for (i=0;i<3;i++)
        {
            cout << i << "\t" << s[i].name << "\t" << s[i].rollno <<"\t"<< s[i].marks << "\t" << s[i].grade ;

            cout<<endl;
        }

    }

    else{
        cout << "The entere list is saved successfully Thank you!!";
    }
    return 0;
}