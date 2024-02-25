#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<windows.h>
#include <unistd.h>

using namespace std;
int main(){
     system("color 4A");
     int hour,min,sec;
     cout<<setw(70)<<"enter current time*\n";
     cout<<"HH-";
     cin>>hour;
     cout<<"MM-";
     cin>>min;
     cout<<"SS-";
     cin>>sec;

     system("color 4A");
     if(hour>23){
        cout<<"incorrect input"<<endl;

}
    else if(min>60){
        cout<<"incorrect input"<<endl;

   }
   else if(sec>60){
        cout<<"incorrect input"<<endl;

  }

    else{
       while(1){
        system("cls");
        for(hour;hour<24;hour++){
             for(min;min<60;min++){
                 for(sec;sec<60;sec++){
                     system("cls");
                     cout<<"Current time is:"<<hour<<":"<<min<<":"<<sec<<"Hrs"<<endl;
                     sleep(1000);




                 }

             sec=0;


             }
             min=0;
        }

    }


}



}
