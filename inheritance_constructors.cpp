#include <iostream>


struct A{
    A() { std::cout << "A";} 
    ~A() {std::cout << "~A";}
};

struct B{
    B() { std::cout << "B";}
    ~B() { std::cout << "~B";}
};

struct Base{
	int x = 0;
	A a;
	Base() { std::cout << "Base"; }
	Base(int x): x(x) { std::cout << "Base "<< x; }
	~Base() { std::cout << "~Base"; }
};

struct Derived: Base{
	int y = 0;
	B b;
	Derived() { std::cout << "Derived"; }
	Derived(int x, int y): Base(x), y(y) { std::cout << "Derived"<< x << y; }
	~Derived() { std::cout << "~Derived"; }
};

int main(){
	Derived d(1,2);
}
