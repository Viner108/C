#include <iostream>

// template<typename T, typename U>
// void f(T x, U y){
// std::cout << 1 << '\n';
// }

template<typename T>
void f(T x, T y){
std::cout << 2 << '\n';
}

void f(int x, int y){
std::cout << 3 << '\n';
}

template<typename T>
void g(T& x){
std::cout << 1 << '\n';
}

template<typename T>
void g(const T& x){
std::cout << 2 << '\n';
}

template<typename T, typename U = int>
void h(T x){
    U y = 1;
std::cout << y << '\n';
}

int main(){
    f<int>(0.0,1);

    f(1,1.0);
    f(1.0,1.0);
    f(1,1);

    const int x = 0;
    g(x);

    h(0);
}