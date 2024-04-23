#include <iostream>



struct Granny{
	int a = 0;
protected:
	void f(int){
		std::cout << "Granny\n";
	}
	Granny(int a): a(a){}
};

struct Mom : Granny{
	int a = 1;
	using Granny::Granny;
	void f(int){
		std::cout << "Mom\n";
	}
};

int main(){
	Mom m;
	m.f(0.0);
	//std::cout << m.Granny::a;
}
