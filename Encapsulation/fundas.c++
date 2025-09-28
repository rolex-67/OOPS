#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    int age;
    int height;
    public:
    int getAge(){
        return this->age;
    }
};
int main(){
    Student first;
    cout<<"Your age is"<<first.getAge()<<endl;
    cout<<"Sahi chal rha hai"<<endl;
return 0;
}   