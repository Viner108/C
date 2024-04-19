#include <iostream>
#include <vector>
void f(int&){
	std cout << 1;
}

void swap(int& x, int& y){
	int t = x;
	x = y;
	y = t;
}

int& bad(int x){
	++x;
	return x;
}

int main(){
	using std::cout;
	using std::vector;

	{
		int a =1;
		int b = 2;
		swap(&a,&b);

		cout << a << ' ' << b << '\n';
	}

	{
		int x = bad(0);
		cout << x;
	}

	vector<int> v = {1,2,3,4,5};

	vector<int>& vv = v;

	vv[0] = 5;

	cout << v[0] << '\n';

	int x=0;

	int& y = x;

	++y;
	int z=0;

	y=z;
	cout << &x - &z << ' ';

	cout << sizeof(y);



}
