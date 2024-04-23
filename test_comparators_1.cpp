#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
struct GreaterThanZero{
	bool operator()(int x){
		return x >0;
	}
};

struct MyCompare{
	bool operator()(int x,int y){
		return abs(x) < abs(y);
	}
};

int main(){
	using std::cout;

	std::vector<int> v{-1,-2,4,0,3};

	//cout << *std::find_if(v.begin(), v.end(), GreaterThanZero());

	std::set<int, std::greater<int>> s;
	s.insert(0);
	s.insert(-1);
	s.insert(2);

	std::sort(v.begin(), v.end(), MyCompare());

	for(int x: s){
		cout << x << ' ';
	}


}
