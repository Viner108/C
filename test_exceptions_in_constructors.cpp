#include <iostream>

struct A
{
    A(){
        std::cout << "A\n";
    }
    ~A(){
         std::cout << "~A\n";
    }
};


struct S{
    int x = 0;
    int* p;
    int* pp;
    A a;

    S(){
        p = new int(5);
        throw 1;
        pp = new int(3);
    }

    ~S(){
         std::cout << "~S\n";
        delete p;
        delete pp;
    }
};

void f(){
   // std::shared_ptr<int> p(new int(5));

    throw 1;

}

int main(){
    try
    {
        f();
    }
    catch(...)
    {
        std::cout << "caught\n";
    }
    
}