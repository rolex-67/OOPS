#include<iostream>
using namespace std;
class Nipun(){
    private:
    char health;
    public:
    int level;
    char *name;
    Nipun(){
        cout<<"Constucttor is called"<<endl;
        name=new char[100];
    }
    //Parametrised Constuctor
    Nipun(int health){
        this->health=health;
    } 
    Nipun(int health,char level){
        this->level=level;
        this->health=health;
    }
    //Copy constructor
    Nipun(Nipun& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
};
int main(){
    Nipun n;
    n.setheatlh(12);
    n.setlevel("D");
    char name[20]="Ana De Armas";
    n.setname(name);
    n.print();
}