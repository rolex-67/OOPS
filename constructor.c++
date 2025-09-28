#include<iostream>
using namespace std;
class cons {
    public:
    int health;
    char level;
    cons(){
        cout<<"Consturctor is called"<<endl;
    }
    cons(int h,char l){
        this->health=h;
        this->level=l;
    }
    
};
int main(){
    cons c(10,'N');
    cout<<c.health<<c.level<<endl;
    cout<<&c<<endl;
    cons *d=new cons(11,'M');
    cout<<(*d).health<<(*d).level<<endl;
    cout<<&d<<endl;
    


return 0;
}