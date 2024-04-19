#include <iostream>

int main(){
	using std::cout;
	int x =0xff;

	int* p =&x;

	
	{
		int x=0;
		int* p=&x;
		double y = 0.0;
	}

	nullptr;

	{
		void* vp = (void*)p;
		vp++;
	}
	std::cout << *p << '\n';
	std::cout << sizeof(p) << '\n';


}


