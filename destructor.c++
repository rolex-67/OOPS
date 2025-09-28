#include<iostream>
using namespace std;
class Nipun{
    public:
    int age;
    char name;
    Nipun(){
        cout<<"Constructor is called:"<<endl;
    }
    ~Nipun(){
        cout<<"Destructor is called:"<<endl;
    }
};
int main(){
    //In Static memory allocatio the destructor is called automatically
    Nipun n;
    //In dynamic memory allocation the destructor is called manually
    Nipun *b=new Nipun();
    delete b;
    
    

}