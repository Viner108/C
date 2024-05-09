#include <iostream>
#include <array>

template< typename T, size_t N>
class arr{
    T a[N];
public:
};

template<typename T,T* P>
struct MyStruct
{
    
};

template<typename Field, size_t M,size_t N>
class Matrix{

};

template<typename Field, size_t M,size_t N,size_t K>
Matrix<Field,M,K> operator*(const Matrix<Field,M,N>&, const Matrix<Field,N,K>&);

int f(int x){
    return x*x;
}

int main(){
    const int y = 5;
    const int x = y;
    std::array<int,y> a;

}