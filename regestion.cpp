#include<iostream>
using namespace std;

class account{
private:
    string name;
    string user_id;
    string password;


public:
    void registaion(void){
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter your id:";
    cin>>user_id;
    cout<<"enter your password:";
    cin>>password;
    }
};

int main(){

account a1;
a1.registaion();



return 0;



}
