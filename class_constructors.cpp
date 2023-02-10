#include<iostream>

using namespace std;

class myclass{
    public:
    string name= "Manoj";
    myclass()
    {
        cout << "I am Class constructor without parameters. "<<endl;
    }
};

int main(){
    myclass obj;
    cout << obj.name;
    return 0;
}