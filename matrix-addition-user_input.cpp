//Array Problem
//Matrix addition problem
//Taking two matrix from user with user's choice of number of rows and columns and then adding and storing in matrix3 variable
//Then printing the matrix3 in matrix form

#include<iostream>

using namespace std;

int main()
{

    //Declaring neceaasay variables
    int matrix1[10][10],a,b,matrix2[10][10],m,n,matrix3[10][10];
     
    //Taking input from user for matrix 1
    cout << "Enter the number of rows and columns for matrix1:"<<endl;

    cin >> a >>b;

    cout << "Enter the elements of matrix1 (first row and then column:"<<endl;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin >> matrix1[i][j];
        }
    }

    //Taking input from user for matrix 2

    cout << "Enter the number of rows and columan for matrix 2:" << endl ;

    cin >> m >>n;

    cout << "Enter the elements of matrix2 (first row and then column:" <<endl;

    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix2[i][j];
        }
    }

    //Testing the condition for the matrix addition

    if(a==m && b==n)
    {
        for (int i=0;i<a;i++)
        {
            for (int j=0;j<n;j++)
            {
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
    }
     
    //If the condition does not satisfy then else condition to display the error message

    else
    {
        cout << "Sorry matrix addition is not possible: " <<endl;
        cout << "May be number of rows or column of two matrices is not possible for matrix addition";
        cout <<endl;
    }

    //Printing the sum of the matrix 1 and 2 in matrix format

    cout << "The sum of two matrix is: " <<endl;

    // cout << "_______________";

//Decorating the matrix

    for (int i=0;i<a;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << matrix1[i][j] << "+" << matrix2[i][j] << "=" <<matrix3[i][j] <<"\t";
        }
        
        cout<<endl;
    }
    //Decorating the matrix

    // cout << "_______________";

return 0;

//program ends here

}