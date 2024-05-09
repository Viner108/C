#include <iostream>

struct Base
{
    Base();
    Base(const Base&){
        std::cout << "copy Base\n";
    }
};

struct Derived: public Base
{
    Derived();
    Derived(const Derived&){
        std::cout << "copy Derived\n";
    }
};



void f(){
    throw Derived();
}

int main(){
    try{
        f();
    }catch(double x){
        std::cout << "caught double\n";
    }catch(long long x){
        std::cout << "caught long long\n";
    }catch(unsigned int x){
        std::cout << "caught unsigned int\n";
    }catch(int x){
         std::cout << "caught int\n";
    }catch(Base& b){
         std::cout << "caught Base\n";
    }
}