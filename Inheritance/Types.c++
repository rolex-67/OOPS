// //{Single Level Inheritance}
// #include<iostream>
// using namespace std;
// class Animal {
//     public:
//     char color;
//     int age;
//     int weight;
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog: public Animal {

// };
// int main(){
//     Dog d;
//     d.speak();
//     cout<<d.age<<endl;

// return 0;
// }

//Multi Lvel INheritance

// #include<iostream>
// using namespace std;
// class Human {
//     private:
//     int height;
//     int weight;
//     public:
//     void info(){
//         cout<<"I am human"<<endl;
//     }
// };
// class Male: public Human {
//     private:
//     int maleheight;
//     int maleweight;
//     public:
//     void maleinfo(){
//         cout<<"I am Male"<<endl;

//     }


// };
// class Boy: public Male{
//     private:
//     int boyheight;
//     int boyweight;
    
//     public:
//     void boyinfo(){
//         cout<<"I am boy"<<endl;
//     }
    
//     void getter(int h){
//         this->boyheight=h;
//     }

//     int setter(){
//         return  boyheight;
//     }
// };

// int main(){
//     Boy B;
//     B.getter(78);
//     cout<<B.setter()<<endl;
// return 0;
// }

// //Multiple Inheritance
// #include<iostream>
// using namespace std;
// class Male {
//     public:
//     int maleheight;
//     int maleweight;
// };
// class Female {
//     public:
//     int femaleheight;
//     int femaleweight;
//     void setter(int f){
//         this->femaleweight=f;
//     }
// };
// class Hybrid:public Male,public Female {

// };
// int main(){
//     Hybrid H;
//     H.setter(45);
//     cout<<H.femaleweight<<endl;
    


// return 0;
// }

//Hierarchial Inheritance

// #include<iostream>
// using namespace std;
// class Human {
//     public:
//     int height;
//     int weight;
//     int setter(int h){
//         this->height=h;
//     }
// };
// class Male:public Human {
//     public:
//     int maleheight;
//     int maleweight;
// };
// class Female:public Human {
//     public:
//     int femaleheight;
//     int femaleweight;
// };
// int main(){
//     Female f;
//     f.setter(6);
//     Male m;


//     Human h;
// return 0;
// }


//Hybrid Inheritance
// #include<iostream>
// using namespace std;
// class Vehicle {
//     public:
//     void info(){
//         cout<<"I am Vehicle "<<endl;
//     }
// };
// class Car:public Vehicle{
//     public:
//     void info1(){
//         cout<<"i am Car"<<endl;
//     }
// };
// class Bus {
//     public:
//     void info2(){
//         cout<<"I am Bus"<<endl;
//     }
// };
// class Fare:public Bus{
//     public:
//     void info3(){
//         cout<<"I am fare"<<endl;
//     }
// }
// int main(){

// return 0;
// }

//  //Scope Resolution Operator(Ambiguity Eliminator)
//  #include<iostream>
//  using namespace std;
//  class A {
//     public:
//     void func(){
//         cout<<"I am A"<<endl;
//     }
// };
// class  B {
//     public:
//     void func(){
//         cout<<"I am B"<<endl;
//     }
// };
// class C:public A,public B {
// };
//  int main(){
//     C obj;
//     obj.A::func();
//     obj.B::func();
 
//  return 0;
//  }