#include <iostream>

struct Granny
{
    int g;
};

struct Mother: public virtual Granny
{
    int m;
};

struct Father: public virtual Granny
{
    int f;
};

struct Son: public Mother, public Father
{
    int s;
};


int main(){
    Son s;

    Granny& g = s;
    std::cout << &s << ' ' << &g;

    
    std::cout << &s << ' ' << &s.m << ' ' << &s.f << ' ' << &s.s << ' ' << &s.g << '\n';
    Father& f =s;
    std::cout << sizeof(f);
    f.g;
}
