#include<iostream>
using namespace std;



void regestion(void);


void login(void);
void forget(void);

string name;
string dob;
string user_id;
string password;

string intered_user_id;
string intered_password;
int main(){






regestion();
login();



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
if(intered_user_id== user_id &&intered_password==password){
 cout<<"welcome back"<<name;



}
else{


    cout<<"please enter correct password";

}


}

void forget(void){


string user_id_entered;
string name_intered;
string dob_entered;
string new_password;
string conform_password;
cout<<"<-----------------forget password--------------->\n";
cout<<"make new password\n";
cout<<"enter youre password:";
cin>>user_id_entered;
cout<<"\n enter your name:";
cin>>name_intered;
cout<<"\n enter your password:";
cin>>dob_entered;


if(user_id_entered==user_id && name_intered==name&& dob_entered==dob){

    cout<<"\n\n<***********************************************>";
    cout<<"\n make new password";
    cout<<"n\n enter your password:";
    cin>>new_password;
    cout<<"\n conform your password:";
    cin>>conform_password;

    if(new_password==conform_password){
        password=new_password;
    }
}

else{
    cout<<"\n\n!please enter vaild cradential";




}
}




