#include<iostream>

using namespace std;

int main()

{

    int j,i;
    int array[10][10],m,n;

    cout << "Enter the number of rows of an array" <<endl;
    cin >> m;

    cout << "Enter the number of columns of an array" <<endl;
    cin >> n;

    cout << "Enter the elements of an array: "<<endl;

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            cin >> array[j][i];
        }
    }

    cout << "The elements of an array are printed below.\n";

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            cout << array[j][i] <<"\t";
        }

        cout << endl;
    }

    return 0;
 
}