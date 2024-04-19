#include <iostream>


class C{
	static C* obj;
	C(){}
public: 
	static C& GetObject(){
		if (obj) return *obj;
		obj = new C();
		return *obj;
	}

	static void destroy(){
		delete obj;
	}

};

C* C::obj = nullptr;

int main(){
	C c = C::GetObject();
}
