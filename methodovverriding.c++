#include<iostream>
using namespace std;
class animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
class dog:public animal{
    public:
    void speak(){
        cout<<"Blushing"<<endl;
    }
};
int main(){
    dog d;
    d.speak();
}