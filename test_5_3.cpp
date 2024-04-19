#include <iostream>

void f(int){
	std::cout << 1;
}

void f(double){
	std::cout << 2;
}

void f(...){
	sdt::cout << 4;
}

void g(int,char){
	std::cout << 3;
}

bool cmp(int a,int b){
	return a > b;
}

int main(){
	f(0.0);

	double (*pf)(int) = &f;
	f(1);

	void(*pg)(int,char) = g;
	pg(1,'a');

	int a[5] = {1,7,6,4,5};

	std::sort(a,a+5,cmp);
	for(int i = 0; i<5; ++i) std::cout <<a[i] << ' ';
}
