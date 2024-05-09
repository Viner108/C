#include <iostream>
#include <exception>


void f() noexcept{
    throw std::runtime_error("Hi!");
}


int main(){
    std::cout << noexcept(f()) << '\n';
    try{
        f();
    }catch(...){

    }
    std::runtime_error re("Hello!");
    std::cout << re.what();
}