#include <iostream>

template<int N>
struct Fibonacci
{
    static const long long value = Fibonacci<N-1>::value + Fibonacci<N-2>::value;
};

template<>
struct Fibonacci<1>
{
    static const long long value = 1;
};

template<>
struct Fibonacci<0>
{
    static const long long value = 0;
};

template<size_t N,size_t D>
struct IsPrimeHelper
{
    static const bool value = N % D == 0 ? false : IsPrimeHelper<N,D-1>::value;
};

template<size_t N>
struct IsPrimeHelper<N,1>{
    static const bool value = true;
};

template<size_t N>
struct IsPrime
{
    static const bool value = IsPrimeHelper<N,N-1>::value;
};

int main(){
    std::cout << Fibonacci<30>::value << '\n';
    std::cout << IsPrime<17>::value << '\n' << IsPrime<25>::value << '\n';
}