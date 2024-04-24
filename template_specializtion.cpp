#include <iostream>

template<typename T, typename U>
struct S {
 void f(){
        std::cout << 1;
    }
};

template<>
struct S<bool,double> {
 void f(){
        std::cout << 2;
    }
};

template<typename T>
struct S<T, T>
{
    void f(){
        std::cout << 3;
    }
};

template<typename T, typename U = int>
void f(T x,U y = 10){
    std::cout << 1;
}
/*
template<>
void f(int,int){
    std::cout << 3;
}

template<typename T>
void f(T,T){
    std::cout << 2;
}

template<typename Key, typename Value, typename Cmp = std::less<Key>>
class map{

};*/


int main(){
    //S<int, int> s;
   // s.f();
   f(0);
}