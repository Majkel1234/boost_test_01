#include "myClass.hpp"
//A
A::A(int xx){
   ptr = new int(xx);
}

A::~A(){
   delete ptr;
}

void A::setX(int xx){
   *ptr = xx;
}

int A::getX(){
   return *ptr;
}

//B
B::B(int xx,int yy):A(xx){
   ptr2 = new int(yy);
}

B::~B(){
   delete ptr2;
}

void B::setY(int yy){
   *ptr2 = yy;
}

int B::getY(){
   return *ptr2;
}

