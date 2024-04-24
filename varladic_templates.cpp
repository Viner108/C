#include <iostream>
#include <type_traits>

template<typename First,typename Second,typename... Types>
struct is_homogeneous
{
    static const bool value = std::is_same_v<First,Second> && is_homogeneous<Second,Types...>::value;
};

template<typename Fist,typename Second, typename...>
struct is_homogeneous<Fist,Second>
{
    static const bool value = std::is_same_v<First,Second>;
};


template<typename... Args>
const bool is_homogeneous_v = is_homogeneous<Args...>::value;


void print(){}

template<typename Head, typename... Tail>
void print(const Head& head,const Tail&... tail){
std::cout << head << '\n';
std::cout << sizeof...(tail) << '\n';
print(tail...);
}





int main(){
    std::cout << is_homogeneous_v<int,int,int,int,int> << '\n';
    //print(1,3,"abc", 5.0);
    //print("advbhb",0,67,3.0);
}