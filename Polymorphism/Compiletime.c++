//Function overloading
// #include<iostream>
// using namespace std;
// class A {
//     public:
//     int  info(int name){
//         cout<<"I am v1"<<endl;
//         return name;
//     }
//     void info(){
//         cout<<"I am v2"<<endl;
//     }
// };
// int main(){
//     A obj;
//     obj.info(52);

// return 0;
// }

//Operator overlaoding
#include<iostream>
using namespace std;
class  B{
    public:
    int a;
    int b;
    public:
    int add(){
        return  a+b;
    }
    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2 - value1<<endl;
    }
    void operator() (){
        cout<<"Main braket hu"<<endl;
    }
};
int main(){
    B obj1,obj2;
    obj1.a=5;
    obj2.a=7;
    obj1+obj2;
return 0;
}