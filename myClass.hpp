#pragma once

class A{
public:
   A(int xx);
   virtual ~A();
   void setX(int xx);
   int getX();
private:
   int *ptr;
};

class B : public A{
public:
   B(int xx,int yy);
   ~B();
   void setY(int yy);
   int getY();
private:
   int *ptr2;
};
