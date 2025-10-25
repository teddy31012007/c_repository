#include<iostream>
using namespace std;
class A{
	public:
		void base1()
		{
			cout<<"This is base class 1"<<endl;
     	}
};
class B
{ 
    public:
	    void base2()
	    {
		    cout<<"This is a base class 2"<<endl;
	    }
};
class C	: public A,public B
{
	public:
		void child()
		{
			cout<<"This is child class"<<endl;
		}
};
int main()
{
	C obj1;
	obj1.base1();
	obj1.base2();
	obj1.child();
	return 0;
}
