#include <iostream>


class Base{
protected: 
	int a = 0;
public:
	void f(){
		std::cout << "Base\n";
	}
	//friend int main();
};

class Derived: protected Base{
public:
	//friend int main();
	int b = 1;
	void g(const Base& x){
		std::cout << "Derived\n"<<x.a;
	}
};

class Subderived: public Derived{
public:
	void h(){
		std::cout << a;
	}
};

int main(){
	Derived d;

	Subderived s;

	std::cout << d.b;
        std::cout << d.a;
}
