#include <iostream>
#include <type_traits>
#include <functional>
#include <vector>

template <typename T>
class C{
    C()= delete;
};

template<typename T>
void f(T x){
    x = 5;
    //C<T>();
    //std::cout << std::is_reference_v<T>;
}

template<typename T>
struct S
{
    S(T x){
        C<T>();
    }
};

S(const char*) -> S<std::string>;

template<typename T>
S(const T&) -> S<T&>;

int main(){
    S s("abc");

    //std::vector v(1,5.0);

    int x =0;
    //f(x);

    int& y = x;

    f(std::ref(x));
}