#include <iostream>

template <typename T>
struct S
{
    using X = T;
};


template<>
struct S<int>
{
    static int X;
};
int a = 0;

template <typename T>
void f(){
    S<T>::X * a;
}


int main(){
    f<int>();
    f<double>();
}