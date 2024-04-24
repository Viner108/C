#include <iostream>
#include <type_traits>

template<typename U, typename V>
struct is_name
{
    static const bool value = false;
};

template<typename U>
struct is_name<U,U>
{
    static const bool value = true;
};

template <typename T>
struct  remove_const
{
    using type = T;
};

template <typename T>
struct  remove_const<const T>
{
    using type = T;
};

template <typename T>
struct  remove_reference
{
    using type = T;
};

template <typename T>
struct  remove_reference<T&>
{
    using type = T;
};

template <typename T>
struct  remove_pointer
{
    using type = T;
};

template <typename T>
struct  remove_pointer<T*>
{
    using type = T;
};

template <typename T>
struct  remove_extent
{
    using type = T;
};

template <typename T>
struct  remove_extent<T[]>
{
    using type = T;
};

template<typename U, typename V>
const bool is_name_v = is_same<U,V>::value;




template<typename U, typename V>
void f(U x,V y){

     typename remove_const<U>:: type a;
// ...
// ...
// ...
// ...

if (is_name<U,V>::value){

}else{

}






}
template<typename T>
struct C
{
    C() = delete;
};



int main(){
   // C<std::decay<int[10]>::type> x;
}