#include <iostream>
#include <cstring>
using namespace std;
class Nipun {
    private:
    char name[100];
    int age;
    char *address;
    int health;
    int level;
    public:
    void setter(const char* n, int a){
        strncpy(this->name, n, sizeof(this->name)-1);
        this->name[sizeof(this->name)-1] = '\0';
        this->age = a;
    }
    int getAge(){
        return age;
    }
    Nipun(){
        cout << "Simple constructor called" << endl;
        address = new char[100];
        health = 100;
        level = 1;
    }
    void setaddress(const char address[]){
        strcpy(this->address, address);
    }
    void print(){
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Address: " << this->address << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }
    ~Nipun() {
        delete[] address;
    }
};

int main(){
    Nipun hero1;
    hero1.setter("Surbhit", 19);
    char addr[100] = "OM";
    hero1.setaddress(addr);
    hero1.print();
    return 0;
}