#include<iostream>
using namespace std;
class parent
{
	public:
		virtual void show()
		{
			cout<<"\nInside base class-show() function";
		}
};
class child:public parent
{
	public:voidshow()
	{
		cout<<"\nInside derived class - show() function";
	}
};
int main()
{
	parent p;
	p.show();
	
	child c;
	c.show();
	parent*ptr=new child();
	ptr->show();
	return 0;
}
