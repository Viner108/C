#include <iostream>

int x=0;

namespace N{
        int y=1;
}

int main(){

	using namespace N;
	using std::cout;
int x=4;
int y=0;
cout << ::x;

cout << y;

{
	int x=5;
	cout << x;
}
cout << x;
}
