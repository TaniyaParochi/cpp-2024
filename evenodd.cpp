#include<iostream>
using namespace std;
int main(){
          int  num1[6]={7,9,9,9,4,7};
          int  num2 [6]={null};
          int  num3[6]={null};
          for(int i=0; i<6; i++){
               if( num1[i]%2==0){
                 num2[i]=num1[i];
               }
               else{

               num3[i]=num1[i];
            }

          }
          for(int j=0; j<6; j++ ){
            cout<<num2[j]<<" ";
          }
          cout<<endl;
          for(int k=0; k<6; k++){
            cout<<num3[k]<<" ";
          }




}
