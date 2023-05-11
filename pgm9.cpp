#include<iostream>
using namespace std;

class shape {
  public :

    virtual int area()=0;

    void setwidth (int w) {
      width =w;
    }

    void setheight (int h) {
      height =h;
    }
    
    protected :
       int width;
       int height;
};

class rectangle :public shape {

   public:
       int area() {
        return (width*height);
       }
};


class triangle :public shape {
    
    public:
      int area() {
        return (width*height)/2;
      }
};

int main() {
  rectangle r;
  triangle t;
  r.setwidth(5);
  r.setheight(10);
  t.setwidth(20);
  t.setheight(8);
  cout << " the area of rectangle is :"<<r.area()<<endl;
  cout << "the area of triangle is :"<<t.area()<<endl;

}