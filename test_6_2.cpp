#include <iostream>
#include <vector>
#include <algorithm>

size_t find(const std::string& text,const std::string& str){
	return 0;
}

int main(){
	using std::cout;

	find('fds','fsdf');

	const int& r = 6;

	const int x = 0;

	const std::vector<int> v = {1,2,3,4,5};

	//std::sort(v.begin(), v.end());

	int y = 1;

	//(true ? y : x) = 5;
	
//	int*  p = &x;
//	++p;
	//*p = 1;
	
	int* const pp = &y;

	*pp = 1;

	const int* const ppp = &y;

	const int& ry = y;

	++y;

	cout << ry << ' ';






}
