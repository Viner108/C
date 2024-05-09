#include <iostream>

struct S
{
    S(const S&){
        std::cout << "copy\n";
    }
    ~S(){
        std::cout << "dectruct\n";
    }
};

void f(){
    S s;
    throw s;
}

void g(){
    try
    {
        f();
    }
    catch(S& s)
    {
        std::cout << "catch\n";
        throw;
    }
    
}

int main(){
    try
    {
        g();
    }
    catch(S& s)
    {
        std::cout << "cautch in main\n";
    }
    
}