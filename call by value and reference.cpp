#include<iostream>
using namespace std;
class student{
	int marks;
	public:
		void setmarks(int m)
		{
			marks=m;
		}
		void showmarks()
		{
			cout<<"Marks:"<<marks<<endl;
		}
		void addbonus(student &s)
		{
			s.marks+=5;
		}
};
int main()
{
	student s1,s2;
	s1.setmarks(90);
	s2.setmarks(85);
	s1.addbonus(s1);
	s1.showmarks();
	return 0;
}
