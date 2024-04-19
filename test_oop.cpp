#include <iostream>


class S{
private:
	int x= 0 ;
	std::string s;
	double d;

	void add_and_print(int);
public:
	void add_and_print(double a){
		std::cout << x + a + 1 << '\n';
	}

};

void C::add_and_print(int x){
	std::cout << this->x + x << '\n';

int main(){
	using std::cout;
	S s;
	cout << sizeof(s) << '\n';
	
	s.add_and_print(1);
	//cout << s.x;


}
