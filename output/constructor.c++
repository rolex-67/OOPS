#include<iostream>
using namespace std;
class Nipun{
    public:
    int age;
    string name;  
    Nipun(int age,string name){
        this->age=age;
        this->name=name;
    }
    Nipun(Nipun& temp){
        this->age=temp.age;
        this->name=temp.name;
    }
    void print(){
        cout<<"Age is:"<<age<<endl;
        cout<<"Name is:"<<name<<endl;
    }
};
int main(){
    // //Constructor
    // cout<<"Hello"<<endl;
    // Nipun n(10);
    // cout<<"Adresses"<<&n<<endl;
    // cout<<"Hi"<<endl;  
    //Copy Constructor
    Nipun n(10,"CSK");
    n.print();
    Nipun r(n);
    r.print();
}