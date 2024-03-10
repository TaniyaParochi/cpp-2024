#include<iostream>
using namespace std;

class github{
private:
    int private_variable;
protected:
    int protected_variable;
public:
    github(){
        private_variable=12;
        protected_variable=34;

    }

   friend class f;
   };
   class f{
   public:
   void display(github& t){

   cout<<"the value of private variable="
       <<t.private_variable<<endl;
       cout<<"the value of protected variable="
       <<t.protected_variable;
    }

};

int main()
{
     github g;
     f fri;
    fri.display(g);


   return 0;
}
