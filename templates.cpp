#include <iostream>
/*
int max(int a, int b){
    return a > b ? a : b;
}
 
double max(double a,double b){
    return a > b ? a : b;
}

std::string max(const std::string a, const std::string b){
    return a > b ? a : b;
}
*/

template<typename T, typename U>
T maximum(const T& a, const U& b){
    return a > b ? a : b;
}

template<typename T>
class vector{};

//template <typename T>
//using mymap = std::map<T, T>;

template<typename T>
const T pi = 3.14;

int main(){
    //mymap<int> m;

    std::cout << pi<double> << '\n';

    std::cout << pi<int> << '\n';

    std::cout << maximum(1,2.0);
}