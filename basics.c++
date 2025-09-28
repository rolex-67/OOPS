#include<iostream>
using namespace std;
class Nipun{
    public:
    int age;
    string name;
    private:
    string passwd;
    string emailid;
    void prin(){
        cout<<"Age is:"<<age<<endl;
    }
    public:
    string getpasswd(){
        return passwd;
    }
    string getemailid(){
        return emailid;
    }
    void setpasswd(string p){
        passwd=p;
    }
    void setemailid(string p){
        emailid=p;
    }
};
int main(){
    Nipun n;
    n.age=19;
    n.name="Nipun";
    cout<<"The name is:"<<n.name<<"  "<<"& the age is:"<<n.age<<endl;
    cout<<n.getpasswd()<<endl;
    n.setpasswd("nrt");
    cout<<n.getpasswd()<<endl;
}