#include<iostream>

using namespace std;

class animal{
    public:
        void animalsound();
};

void animal::animalsound(){
    cout << "Animal has different languages." << endl;
}

class cat:public animal{
    public:
        void animalsound(){
            cout << "Meow Meow Meow!!!" << endl;
        }
};
class dog:public cat{
    public:
        void animalsound()
        {
            cout << "Bow Bow Bow!!!" << endl;
        }
};
int main()
{
    animal myanimal;
    cat mycat;
    dog mydog;

    myanimal.animalsound();
    mycat.animalsound();
    mydog.animalsound();
    return 0;
}