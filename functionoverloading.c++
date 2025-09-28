#include<iostream>
using namespace std;
class Nipun{
    public:
    //Function overloading concept
    void name(){
        cout<<"Name is Nipun"<<endl;
    }
    int name(char r){
        cout<<"Name is Messi"<<endl;
        return r;
    }
    int name(char r,int n=10){
        cout<<"Name is Ronaldo"<<endl;
        return n;
    }

};
int main(){
    Nipun n;
    n.name();
}