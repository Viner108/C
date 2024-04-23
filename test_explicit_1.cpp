#include <iostream>

struct UserId{
private:
	int id = 0;
public:
	explicit UserId(int id): id(id) {}

	explicit operator int(){
	 return id;
	}
};

UserId operator ""_uid(unsigned long long x){
	return UserId(x);
}

UserId operator ""_uid(const char* x){
	return UserId(0);
}

struct GroupId{
private:
        int id = 0;
public:
        GroupId(int id): id(id) {}

        operator int(){
         return id;
        }
};

int main(){
	"12345"_uid;

	UserId uid = 5_uid;

//	UserId id = 5;
//	GroupId gid = 10;
//	std::cout << id + 5;
}
