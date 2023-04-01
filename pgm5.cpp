#include<iostream>
using namespace std;

class person {

  private :
           string name;
           int age;
  
  public :
          person()
          {
            cout <<"default contructer is called" <<endl;
            name = "student";
            age = 12;
          }
      
      void display() {

        cout <<"name of current object :"<<name<<endl;
        cout <<"age of current object :"<<age<<endl;
        }
};
int main() {
  person obj;
  obj.display();
  return 0;
}