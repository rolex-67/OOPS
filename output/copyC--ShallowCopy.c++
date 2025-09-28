#include<iostream>
using namespace std;
class Nipun{
    public:
    //Shallow copy
    int age;
    string name;  
    void print(){
        cout<<"Age is:"<<age<<endl;
        cout<<"Name is:"<<name<<endl;
    }
};
int main(){
    Nipun n;
    n.age=10;
    n.name="Utkarsh";
    n.print();
    Nipun S(n);
    S.print();
    n.name[0]='G';
    n.print();
    S.print();
}