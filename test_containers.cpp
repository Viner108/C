#include <iostream>
#include <vector>
#include <deque>
#include <list>

struct S
{
    int x;
    S(int x): x(x){}
    S(const S&) = delete;
};


int main(){

    const std::list<int> a = {1,2,3};
    // for(std::list<int>::const_iterator it = a.cbegin(); it != a.cend(); ++it){
    //     std::cout << *it;
    // }

    for(int x : a){
        std::cout << x;
    }


    // std::deque<S> v;
    // for (int i = 0; i < 1000; i++)
    // {
    //     v.emplace_back(0);
    // }
    
}