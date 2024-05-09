#include <iostream>

struct Base
{
    virtual void f(){
        std::cout << "Base\n";
    }
};

struct Derived: public Base
{
    void f() override{
        std::cout << "Devired\n";
    }
};


int main(){
    int n;
    std::cin >> n;
    Derived d;
    Base b;

    Base& bb = (n % 2 ? b : d);
    std::cout << typeid(bb).name();
}