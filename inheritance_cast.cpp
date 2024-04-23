#include <iostream>

class GrandBase{

};

class Base: public GrandBase{
public:
	int a = 0;
	Base() = default;
	Base(const Base&){
		std::cout << "copy Base\n";
	}

	operator GrandBase&() = delete;
};

class Derived: public Base{
public:
	int b = 1;
	Derived() = default;
	Derived(const Derived&) {
		std::cout << "copy Derived\n";
	}
};
void g(Derived& d){

}

void f(Base& b){
//g(b);
}

int main(){

Derived d;
Base& pb = d;
static_cast<Derived&>(b).b;
//Derived* pd = pd;

}
