#include <iostream>

struct Mother{
	int m = 1;
};

struct Father{
	int f = 2;
};

struct Son: public Mother, public Father {
	int s = 3;
};


int main(){
	Son s;
	std::cout << sizeof(s);
}
