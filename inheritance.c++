#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getage(){
        return this->age;
    }
    int getweight(){
        return this->weight;
    }
    int getheight(){
        return this->height;
    }
    void setweight(int weight){
        this->weight=weight;
    }
    void setheight(int height){
        this->height=height;
    }
};
class Male:public human{
    public:
    string color;
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
};
int main(){
    Male obj1;
    cout<<obj1.age<<endl;
    obj1.setheight(54);
    cout<<obj1.height<<endl;

}