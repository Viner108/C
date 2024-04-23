#include <iostream>

using namespace std;

class MyVector{
private:
	int* data;
	size_t length;
public:
	MyVector(size_t size): length(size){
	data = new int[size];
	for(size_t i = 0;i < size; ++i){
		data[i]=2;
	}
	}


	~MyVector(){
		delete[] data;
	}

        MyVector(const MyVector& other) : length(other.length) {
        data = new int[other.length];
        for (size_t i = 0; i < other.length; ++i) {
            data[i] = other.data[i];
        }
        }

        MyVector& operator=(const MyVector& other) {
        if (this != &other) {
            delete[] data;
            length = other.length;
            data = new int[length];
            for (size_t i = 0; i < length; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
        }
   

	size_t size() const{
	return length;
	}

	int& operator[](size_t index){
	if(index >= length){
		cerr << "Error" << '\n';
		return data[0];
	}
	return data[index];
	}

	const int& operator[](size_t index) const {
        if (index >= length) {
            cerr << "Error" << '\n';
            return data[0];
        }
        return data[index];
        }

        MyVector operator*(const MyVector& other) const {
        if (this->size() != other.size()) {
            cerr << "Error" << endl;
            return MyVector(0);
        }

        MyVector result(this->size());
        for (size_t i = 0; i < this->size(); ++i) {
            result[i] = (*this)[i] * other[i];
        }
        return result;
        }

        MyVector operator+(const MyVector& other) const {
        if (this->size() != other.size()) {
            cerr << "Error" << endl;
            return MyVector(0);
        }

        MyVector result(this->size());
        for (size_t i = 0; i < this->size(); ++i) {
            result[i] = (*this)[i] + other[i];
        }
        return result;
        }

        void print() const{
	cout << "start vector ";
	for(size_t i = 0; i < length; ++i){
	cout << data[i] << " ";
	}
        cout << "end vector " << '\n';
	}
};


class Matrix{
private:
       size_t rows;
       size_t columns;
       MyVector* vectors;
public:
    Matrix(size_t rows, size_t columns) : rows(rows), columns(columns) {
    
    }

    ~Matrix() {
        delete[] vectors;
    }

    Matrix(const Matrix& other) : rows(other.rows), columns(other.columns) {
        
    }

    Matrix& operator=(const Matrix& other) {
        return *this;
       }

    size_t getRows() const {
        return rows;
    }

    size_t getColumns() const {
        return columns;
    }

    MyVector& operator[](size_t index) {
        
    }

    const MyVector& operator[](size_t index) const {
        
    }

    void print() const {

    }
};



int main(){
	MyVector vector1(3);
	MyVector vector2(3);
	
	cout << "Vector 1 ";
	vector1.print();

	cout << "Vector 2 ";
	vector2.print();

	MyVector result1 = vector1 + vector2;
	result1.print();

	MyVector result2 = vector1 * vector2;
	result2.print();


};
