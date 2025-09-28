#include<iostream>
using namespace std;
class B{
    public:
    int a,b;
    int add(){
        return a+b;
    }
    void operator+ (B &obj ){
        int value=this->a;
        int value2=obj.a;
        cout<<"Output:  "<<value2-value<<endl;
    }
    void operator() (){
        cout<<"Main bracket hu"<<endl;
    }
};
int main(){
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    obj1();
}