#include <iostream>

template<typename T,typename U>
struct MyStruct
{
    void f{
        std::cout << 0;
    }
};

template<typename T,typename U>
struct MyStruct<T&,U>
{
    void f{
        std::cout << 4;
    }
};

template<typename T,typename U>
struct MyStruct<T&,U&>
{
    void f{
        std::cout << 1;
    }
};

// template<typename T>
// struct MyStruct<T,T>
// {
//     void f{
//         std::cout << 2;
//     }
// };

template<typename T>
struct Hash;

template<>
struct Hash<int>
{
    size_t operator()(int x){
        return x * x;
    }
};




template <typename T>
struct S
{
    T x = 0;;
};

template<>
struct S<int>
{
    int y = 0;
};

template <typename T, typename U>
void f(T x, U y){
    std::cout << 1;
}

template <>
void f(int x, int y){
    std::cout << 2;
}

template <typename T>
void f(T x, T y){
    std::cout << 3;
}

int main(){

    f(0,0);
}