#include <iostream>

struct Granny
{
    virtual void f() {
        std::cout << 1;
    }
};

struct Mother: public Granny
{
    void f() override {
        std::cout << 2;
    }
};

struct Father : public Granny
{
    
};

struct Son: public Mother, public Father
{
    
};




int main(){
    Son s;
    Mother& m = s;

    std::cout << (typeid(m) == typeid(s)) << '\n';
    std::cout << typeid(m).name() << '\n';
    //dynamic_cast<Father&>(m);

}