#include<iostream>
using namespace std;

void print_object(void);
class Engineer{

public:
string name;

int age;

};
Engineer e1;

void print_object(void){

      cout<<e1.name;

}
int main(){

     Engineer e1;

     cin>>e1.name;
     print_object();

  return 0;
}
