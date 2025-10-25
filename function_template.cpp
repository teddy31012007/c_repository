#include <iostream>
using namespace std;
template <typename T1, typename T2>
auto add(T1 a, T2 b) {
    return a + b;
}
int main() { 
    cout << "Addition of int and int: " << add<int,int>(10, 20) << endl;
    cout << "Addition of int and float: " << add<int,float>(10, 8.0f) << endl;
    cout << "Addition of double and int: " << add<double,int>(10.0, 8) << endl;
    cout << "Addition of float and double: " << add<float,double>(2.2f, 15.8) << endl;

    return 0;
} 
