#include<iostream>
using namespace std;
class  Human {
    protected:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }
    int getweight(){
        return weight;
    }

};
class Female:protected Human{
    public:
    string fname;
    int fage;
    void hello(int n){
        this->fage=n;
        
    }

};

class Male:public Human {
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping";
    }
};



int main(){
    Male obje1;
    
    obje1.age=31;
    cout<<obje1.age<<endl;
    cout<<obje1.getweight()<<endl;

    Female f;
    f.hello(45);
    


return 0;
}