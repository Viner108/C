#include <iostream>
#include <vector>
void f(std::vector<double> v);

int main(){
	int a[5]={1,2,3,4,5};
	
	std::cout << a[0] << '\n';

	int* p =a+2;

	std::cout << *(p-2) << '\n';

	int b[5];
	std::cout << b - a << ' ';

	int* pa = new int[100];
	delete[] pa;
}
