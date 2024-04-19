#include <iostream>

int a=0;

void f(int a){
	static int b=0;
	std::cout << b;
	++b;
}

int main(){
	int a;
	std::cout << &a;
        int* p = new int(5);
	std::cout << *p << ' ' << p << '\n';

	delete p;

}
