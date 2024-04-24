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

//int a = 0;

template <typename T>
void f(){
  typename S<T>::X* a;
}

template <typename T>
struct SS
{
    template <int M, int N>
    struct A
    {
        
    };
    
};

template <>
struct SS<int>
{
    static const int A =0;
};

template<typename T>
void g(){
   typename SS<T>::template A < 1,2 > a;
}


int main(){
    //f<int>();
    //f<double>();
}