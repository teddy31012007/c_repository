#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Maximum
{
    private:
        T1 a;
        T2 b;
    public:
        Maximum(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        auto getMax()
        {
            return (a > b) ? a : b;
        }
};

int main()
{
    Maximum<int, int> obj1(10, 20);
    cout << "Maximum of int and int = " << obj1.getMax() << endl;

    Maximum<int, float> obj2(5, 2.5f);
    cout << "Maximum of int and float = " << obj2.getMax() << endl;

    Maximum<double, int> obj3(3.5, 4);
    cout << "Maximum of double and int = " << obj3.getMax() << endl;

    return 0;
}
