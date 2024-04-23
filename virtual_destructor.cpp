#include <iostream>

struct GrandBase{
  virtual void f() = 0;
  virtual ~GrandBase() = 0;
};

GrandBase::~GrandBase(){}

struct Base: public GrandBase
{
    int* a = new int();
    void f() override {};
    virtual ~Base() {
        delete a;
        std::cout << "~Base";
    }
};

struct Derived: public Base
{
    int* b = new int();
    ~Derived(){
        delete b;
        std::cout << "~Derived";
    }
};

int main(){
    Base* b = new Derived();
    delete b;
}

