#include <iostream>

template<int T>
struct Danger
{
    int a[N];
};

template<typename T, int N>
struct S
{
    //Danger<N> d;
    void f(){
        Danger<N> d;
    }

    virtual void g(){
        Danger<-1> d;
    }
};



//template struct S<int, -1>;

int main(){
    int x;
    S<int, -1>& s;
    //S<int, -1>& ps = reinterpret_cast<S<int, -1>&>(x);
    //ps.f();
}