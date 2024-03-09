#include<iostream>
using namespace std;
class perent{
protected:
    string name;
} ;
class child :public parent{
public:
    void put(void){

    cout<<"enter your name:";
    cin>>name;
    }
    void show(void){
      cout<<"your name is:"<<name;

    }
};
int main(){
    child obj1;
    obj1.put();
    obj1.show();


return 0;
}
