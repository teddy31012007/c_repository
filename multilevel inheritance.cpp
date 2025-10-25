#include<iostream>
using namespace std;
class grandfather{
	public:
		void born(int year){
			cout<<"Grand Father born on "<<year<<endl;
		}
};
class father:public grandfather{
	public:
	void bornf(int year){
		cout<<"Father born on "<<year<<endl;
	}
};
class daughter:public father{
	public:
	void bornd(int year){
		cout<<"Daughter born on "<<year<<endl;
	}
};
int main()
{
	daughter j;
	j.bornd(2007);
	j.bornf(1980);
	j.born(1940);
}
