#include <iostream>
#include <cstring>
#include <algorithm>


struct A {
        const int& a;
        void f(int);
};


class String{
private:
        size_t sz = 0;

	char* str= nullptr;

	friend void A::f(int);

public:
	String() = default;
        String(size_t sz, char c='\0'): sz(sz), str(new char[sz]){
                memset(str,c,sz);
        }

	String(const String& s): String(s.sz, '\0'){
		memcpy(str,s.str,sz);
        }

	String(std::initializer_list<char> lst): sz(lst.size()), str(new char[sz]){
	std::copy(lst.begin(), lst.end(), str);
	}

	String& operator=(String s){
		swap(s);
		return *this;
	}

	void swap(String& s){
		std::swap(sz,s.sz);
		std::swap(str,s.str);
	}

	size_t size() const{
		return sz;
	}

	char& operator[](size_t index) {
		return str[index];
	}

	const char& operator[](size_t index) const{
                return str[index];
        }

	~String(){
		delete[] str;
	}

};

std::ostream& operator<<(std::ostream& out, const String& s){
	for(size_t i = 0;  i < s.size(); ++i){
		out << s[i];
	}
	return out;
}

std::istream& operator>>(std::istream in, String& s){
	//...
        return in;	
}

void A::f(int){
	String s(10, 'a');
	s.sz = 0;
}

int main(){
	const String s(5,'s');

//	s[0] = 'b';
	
	String ss(10,'b');

	s.size();

	//s=ss;

}
