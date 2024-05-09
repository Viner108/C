#include <iostream>
#include <type_traits>

template<typename Head, typename... Tail>
struct is_homogeneous{
    static const bool value = (std::is_same_v<Head,Tail> && ...);
};

// template<typename T, typename U>
// struct is_homogeneous<T,U>{
//     static const bool value = std::is_same_v<T,U>;
// };

void print(){

}

template<typename... Args>
void print(const Args&...args){
    (std::cout << ... << args) << '\n';
    // (args op ...);
    // (... op args);
    //std::cout << sizeof...(Tail);
    //std::cout << head << ' ';
    //print(tail...);
}

int main (){
    //print(1,2,"asd",3.0);

    std::cout << is_homogeneous<int,int,int>::value;
    std::cout << is_homogeneous<int,bool,char>::value;
}