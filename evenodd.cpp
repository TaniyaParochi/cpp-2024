/*
 Auther: Ranjeeta kakodiya
# @projet for seprating even and odd number
date: 19-2-24
time:  22:25
 version : 1.1         


#include<iostream>
using namespace std;
int main(){
          int  num1[6]={7,9,9,9,4,7};
          int  num2 [6]={NULL};
          int  num3[6]={NULL};
          for(int i=0; i<6; i++){
               if( num1[i]%2==0){
                 num2[i]=num1[i];
               }
               else{

               num3[i]=num1[i];
            }

          }
          for(int j=0; j<6; j++ ){
            if(num2[j]!=NULL){
                cout<<num2[j]<<" ";
            }
          }
          cout<<endl;
          for(int k=0; k<6; k++){
            if(num3[k]!=NULL){
                cout<<num3[k]<<" ";
            }
          }




}
