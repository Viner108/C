#include <iostream>
using std::cout;

struct MyClass {
    int i= 0;
};

void changeI(MyClass* myClass){
    (*myClass).i = 10;
}

int main(){
    MyClass myClass;
    cout << myClass.i << '\n';
    changeI(&myClass);
    cout << myClass.i << '\n';
}