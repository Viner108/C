#include <iostream>
#include <vector>

double inv(double x){
    if(x == 0){
        throw std::string("abc");
    }

    return 1/x;
}

int main(){
    try{
    std::vector<int> v;
    v.at(100000000) = 1;
    }catch(...){
        std::cout << "AA!";
    }
}