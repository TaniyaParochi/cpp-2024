#include<iostream>
using namespace std;
void add(void);
void sub(void);
 void mul(void);



int main(){
add(); // call
 sub(); //call
 mul();// call 

 
}



void add(void){
    int sum;
    int num1;
    int num2;
    cout<<"enter  the first  num";
    cin>>num1;
    cout<<"enter the secend num";
    cin>>num2;
    sum=num1+num2;
    cout<<"your sum is"<<sum;

 }

 void sub(void){
    int sub;
    int num1;
    int num2;
    cout<<"enter  the first  num";
    cin>>num1;
    cout<<"enter the secend num";
    cin>>num2;
    sum=num1+num2;
    cout<<"your sub is"<<sub;


 }



 void mul(void){
    int mul;
    int num1;
    int num2;
    cout<<"enter  the first  num";
    cin>>num1;
    cout<<"enter the secend num";
    cin>>num2;
    mul=num1*num2;
    cout<<"your mul is"<<mul;
 }
return 0;
 }
