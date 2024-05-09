#include <iostream>

struct S
{
    int x = 0;
    std::string s;

    S(int x, const std::string& s) noexcept try: x(x), s(s){

    }catch(...){
        
    }
};


int f(int y) noexcept try{
    int x = 0;
}catch(...){
    y = 1;
}


int main(){

}