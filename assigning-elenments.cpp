#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int array[5];

    cout << "Enter the elements of an array:" <<endl;

    for(int i=0;i<5;i++)
    {
        cin >>array[i];
    }

    cout << "The elements of an array are:"<<endl;

    for (int i=0;i<5;i++)
    {
        cout << array[i] <<endl;
    }

    return 0;
}