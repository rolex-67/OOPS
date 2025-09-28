#include<iostream>
using namespace std;
class student{
    private:
    int age;
    int height;
    public:
    int getage(){
        return this->age;
    }
    int setage(int age){
        this->age=age;
    }
};
int main(){
    student s;
    s.setage(23);
    cout<<"Age is"<<s.getage()<<endl;
}