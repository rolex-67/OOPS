#include<iostream>
using namespace std;
class Nipun{
    public:
    int age;
    static int timetaken;
    static int random(){
        //Only an be accesed and used by static functions
        return timetaken;
    }

};
int Nipun::timetaken=10;
int main(){
    cout<<Nipun::timetaken<<endl;
    Nipun n;
    cout<<n.timetaken<<endl;
}