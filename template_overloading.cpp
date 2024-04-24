#include <iostream>

template< typename T>
void f(T& x){
    std::cout << 1;
}

template< typename T>
void f(const T& x){
    std::cout << 2;
}

int main(){
    int x =0;
    int& y = x;
    f(y);
}