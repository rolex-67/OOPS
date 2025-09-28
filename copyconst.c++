#include <iostream>
class Nipun {
    private:
    int health;
    char level;
    public:
    int getter(){
        return health;
    }
    void setter(int h, char l){
        this->health = h;
        this->level = l;
    }
    Nipun(){
        std::cout << "Default Constructor called" << std::endl;
    }
    Nipun(int h, char l) {
        this->health = h;
        this->level = l;
        std::cout << "Parameterized Constructor called" << std::endl;
    }
    Nipun(Nipun& temp){
        std::cout<<"Copy Constructor initialized"<<std::endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        std::cout<<health<<std::endl;
        std::cout<<level<<std::endl;
    }
};
int main(){
    Nipun object(1,'A');
    object.print();
    Nipun R(object);
    R.print();  
return 0;
}