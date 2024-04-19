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

struct GroupId{
private:
        int id = 0;
public:
        UserId(int id): id(id) {}

        operator int(){
         return id;
        }
};

int main(){
	UserId id = 5;
	GroupId gid = 10;
	std::cout << id + 5;
}
