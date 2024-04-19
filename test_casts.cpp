#include <iostream>

void f(const int& x){
	std::cout <<1;
}

void f(int& x){
	std::cout <<2;
}

int main(){
	using std::cout;

	int x = 0;

	double d = static_cast<double>(x);

	double dd = 3.14;

	//cout << std::hex << reinterpret_cast<double&>(dd);
	{
	const int cx = 1;
	int& x = const_cast<int&>(cx);

	x = 2;

	cout << cx;
	}
	{
		int x = 0;
		const int& y = x;
		f(const_cast<const_int&>(x));
	}
	{
		int x =0;
		double d =(double) x;
	}







}
