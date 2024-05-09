#include <iostream>
#include <vector>
#include <array>

template <typename T,template <typename,int> class Container=std::vector>
struct Stack
{
    Container<T> c;
};


int main(){
    Stack<int> s;
}