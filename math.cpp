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
		data[i]=3;
	}
	}


	~MyVector(){
		delete[] data;
	}

    MyVector(const MyVector& other) : length(other.length) {
    data = new int[length];
    for (size_t i = 0; i < length; ++i) {
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
		cerr << "Error MyVector operator[]" << '\n';
		return data[0];
	}
	return data[index];
	}

	const int& operator[](size_t index) const {
        if (index >= length) {
            cerr << "Error MyVector operator[] const" << '\n';
            return data[0];
        }
        return data[index];
        }

        int operator*(const MyVector& other) const {
        if (this->size() != other.size()) {
            cerr << "Error MyVector operator*" << endl;
            return 0;
        }
        int result = 0;
        for (size_t i = 0; i < this->size(); ++i) {
            result += (*this)[i] * other[i];
        }
        return result;
        }

        MyVector operator+(const MyVector& other) const {
        if (this->size() != other.size()) {
            cerr << "Error MyVector operator+ " << endl;
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
       MyVector** vectors;
public:
    Matrix(size_t rows, size_t columns) : rows(rows), columns(columns) {
    vectors  = new MyVector*[rows];
    for (size_t i = 0; i < rows; ++i)
    {
        vectors[i] = new MyVector(columns);
    }
    }

    Matrix(size_t rows, const MyVector& myVector) : rows(rows), columns(myVector.size()) {
    vectors  = new MyVector*[rows];
    for (size_t i = 0; i < rows; ++i)
    {
        vectors[i] = new MyVector(myVector);
    }
    }

    ~Matrix() {
    for (size_t i = 0; i < rows; ++i)
    {
       delete vectors[i];
    }
        delete[] vectors;
    }

    Matrix(const Matrix& other) : rows(other.rows), columns(other.columns) {
        vectors = new MyVector*[other.rows];
        for (size_t i = 0; i < other.rows; ++i)
        {
            vectors[i] = new MyVector(*other.vectors[i]);
        }
        
    }

    Matrix& operator=(const Matrix& other) {
    if (this != &other) {
        for (size_t i = 0; i < rows; ++i) {
            delete vectors[i];
        }
        delete[] vectors;
    
        rows = other.rows;
        columns = other.columns;
        vectors = new MyVector*[rows];
        for (size_t i = 0; i < rows; ++i) {
            vectors[i] = new MyVector(*other.vectors[i]);
        }
    }
    return *this;
    }

    size_t getRows() const {
        return rows;
    }

    size_t getColumns() const {
        return columns;
    }

    MyVector& operator[](size_t index) {
    if(index >= rows){
        cerr << "Error operator[] " << '\n';
        return *vectors[0]; 
    }
    return *vectors[index];
    } 

    const MyVector& operator[](size_t index) const {
    if(index >= rows){
        cerr << "Error operator[] const " << '\n';
        return *vectors[0]; 
    }
    return *vectors[index];
    }

    Matrix operator+(const Matrix& other) const {
    if (this->getRows() != other.rows) {
        cerr << "Error operator+ " << '\n';
        return Matrix(0, 0);
    }
    Matrix result(this->getRows(), this->getColumns());
    for (size_t i = 0; i < this->getRows(); ++i) {
            result[i] = (*this)[i]+ other[i];
    }
    return result;
    }


    Matrix operator+(const MyVector& other) const {
    if (this->getRows() != other.size()) {
        cerr << "Error operator+ " << '\n';
        return Matrix(0, 0);
    }
    Matrix vector = Matrix(other.size(),other);

    Matrix result = *this + vector;
    return result;
    }

   
    
    MyVector operator*(const MyVector& other) const {
    if (this->getColumns() != other.size()) {
        cerr << "Error operator* " << '\n';
        return MyVector(0);
    }

    MyVector result(this->getRows());
    for (size_t i = 0; i < this->getRows(); ++i) {
        int sum = 0;
        for (size_t j = 0; j < this->getColumns(); ++j) {
            sum += (*this)[i][j] * other[j];
        }
        result[i] = sum;
    }
     return result;
    }

    void print() const {
    cout << " start matrix ";
	for(size_t i = 0; i < rows; ++i){
	    vectors[i]->print();
	}
        cout << " end matrix " << '\n';
    }
};



int main(){
	MyVector vector1(2);
	MyVector vector2(2);
	
	cout << "Vector 1 ";
	vector1.print();

	cout << "Vector 2 ";
	vector2.print();

	MyVector result1 = vector1 + vector2;
    cout << "Result of vector addition ";
	result1.print();

	int result2 = vector1 * vector2;
    cout << "Result of vector multiplication " << result2 << '\n';

    Matrix mat(2,2);
    cout << "Matrix 1 ";
    mat.print();

    Matrix result3 = mat + vector1;
    cout << "Matrix result3 ";
    result3.print();

    MyVector result4 = mat * vector1;
    cout << "Matrix result4 ";
    result4.print();

};
