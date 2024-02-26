#include<iostream>
using namespace std;



void regestion(void);

string name;
string dob;
string user_id;
string password;

string intered_user_id;
string intered_password;
int main(){






regestion();



return 0;


}

void regestion(void){
cout<<"enter name:";
cin>>name;
cout<<"\n enter dob:";
cin>>dob;
cout<<"\n enter user_id:";
cin>>user_id;
cout<<"\n enter password:";
cin>>password;





}

void login(void){


cout<<"\n enter intered_user_id:";
cin>>intered_user_id;
cout<<"\n enter intered_password:";
cin>>intered_password;
if(intered_user_id== user_id &&intered_password==password)
 cout<<"welcome back"<<name;



}
else{


    cout<<"please enter correct password";

}








