#include <iostream>

struct S
{
    S(){
        std::cout << "S\n";
    }
    ~S() noexcept(false){
        std::cout << "~S\n";
        if(!std::uncaught_exception()){
            throw 2;
        }
        
    }
};

void f(){
    S s;
    throw 1;
}

int main(){
    try{
        f();
    }catch(...){
        std::cout << "caught in main\n";
    }
}