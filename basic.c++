#include<iostream>
using namespace std;
class Hero {
    private:
    int health;
    public:
    char level;

    int getter(){
        return health;
    }
    void setter(int h){
        health=h;
    }
    

};
int main(){

    //Static
    Hero h1;
    h1.level='A';
    h1.setter(69);
    cout<<h1.getter()<<endl;
    cout<<h1.level<<endl;

    //dynamic
    Hero *b=new Hero;
    b->setter(89);
    cout<<"Level is:"<<(*b).level<<endl; 
    cout<<"Health is:"<<(*b).getter()<<endl;

return 0;
}