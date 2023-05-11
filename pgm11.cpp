#include<iostream>
using namespace std;

class baseclass {

  public:
     virtual void display() {
      cout<<"\n this is display() method of base class";
     }

    void show() {
      cout<<"\n this is show() method of base class";
    }
      
};

class derivedclass : public baseclass {
  public:
     void display() {
       cout<<"\n this is the display () method of the derived class";
     }
};

int main() {
  derivedclass dr;
  baseclass &bs=dr;
  bs.display();
  dr.show();
}