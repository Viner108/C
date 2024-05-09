#include <iostream>

struct Granny{
 int g;
 virtual void foo(){

 }
};

struct Mother: public Granny{
    int m;
};

struct Father: public Granny{
    int f;
};

struct Son: public Mother, public Father
{
    int s;
};

int main(){
    Son s;

    //s.foo();

    Mother* pm = &s;

    Father* pf = dynamic_cast<Father*>(pm);
}
