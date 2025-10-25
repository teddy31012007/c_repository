#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"This is a vehicle"<<endl;
		}
};
class car: public vehicle
{
	public:
		car()
		{
			cout<<"This is a 4-wheeler"<<endl;
		}
};
class sports
{
	public:
		sports()
		{
			cout<<"It is of sports category"<<endl;
		}
};
class Bmw: public car,public sports
{
	public:
		Bmw()
		{
			cout<<"Bmw is a sports car\n";
		}
};
int main()
{
	Bmw obj1;
	return 0;
}
