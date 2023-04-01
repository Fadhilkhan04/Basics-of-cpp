#include<iostream>
using namespace std;

class class_name {

  private:
      int a,b;

  public:
      //declaring constructor
      class_name(int aa, int bb) {

        cout <<"contructor is called"<<endl;
        a=aa;
        b=bb;
        cout <<"value of a:"<<a<<endl;
        cout <<"value of b:"<<b<<endl;
        
      } 
      //declaring deconstructor
      ~class_name() {
        cout <<"destructor is called"<<endl;
        cout <<"value of a:"<<a<<endl;
        cout <<"value of b:"<<b<<endl;
        }
};

int main() {
   
   class_name obj(5,6);

   return 0;
}