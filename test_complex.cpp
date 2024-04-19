#include <iostream>


struct Complex{
	double re = 0.0;
	double im = 0.0;

	Complex(){
		std::cout << "A";
	}

	Complex(double x = 0.0, double y = 0.0): re(x), im(y) {}

	Complex& operator+=(const Complex& z){
		re+=z.re;
		im+=z.im;
		return *this;
	}

	Complex& operator++(){
		*this +=1;
		return *this;
	}

	Complex operator++(int){
		Complex copy = *this;
		++*this;
		return copy;
	}

};

 bool operator<(const Complex& a, const Complex& b){
	 return a.re * a.re + a.im * a.im < b.re * b.re + b.im * b.im;
 }
 bool operator>(const Complex& a, const Complex& b){
	 return b < a;
 }
 bool operator==(const Complex& a, const Complex& b){
	 return !(b < a || a < b);
 }
 bool operator!=(const Complex& a, const Complex& b){
	 return !(a == b);
 }

 Complex operator+(const Complex& a, const Complex& b){
                Complex copy = a;
		copy +=b
                return copy;
        }


int main(){
	Complex c(2.0);
	Complex d(3.0,1.0);

	Complex sum = c + d;

}
