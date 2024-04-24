#include <iostream>
#include <functional>

template <typename T>
class C{
    C() = delte;
};

template <typename T>
void f(T x){
    C<T> c;
}

int main(){

    int x = 0;

    int& y = x;

    const int& z = y;

    const int t =1;

    f(std::cref(y));
}