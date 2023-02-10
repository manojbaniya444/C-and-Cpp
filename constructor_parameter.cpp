#include<iostream>
using namespace std;

class car{
    public:
    string name;
    string model;
    int price;
     car(string x,string y,int z)
     {
         name = x;
         model = y;
         price = z;
     }
};
int main()
{
    car mycar1("BMW" , "X5" , 20000);
    car mycar2("Tesla" , "X", 19000);

    cout << mycar1.name << " " <<mycar1.model << " " << mycar1.price << endl;
    cout << mycar2.name << " " <<mycar2.model << " " << mycar2.price << endl;
    return 0;
}