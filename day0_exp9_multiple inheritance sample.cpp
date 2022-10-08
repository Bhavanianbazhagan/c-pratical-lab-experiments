#include<iostream>
using namespace std;
class student1
{
	char name1[50];
	int m1;
	public:
		student()
		{
			cout<<"enter first student name:";
			cin>>name1;
		}
		void mark1()
		{
			cout<<"enter first student mark:";
			cin>>m1;
		}
};
class student2
{
	char name2[60];
	int m2;
	public:
		student2()
		{
			cout<<"enter second student name:";
			cin>>name2;
		}
		void mark2()
		{
			cout<<"enter second student mark:";
			cin>>m2;
		}
	
};
class staff : public student1,public student2
{
	char name3[600];
	public:
	void staff1()
	{
		
			student1();
	        student2();
		cout<<"the highest mark is";
		cin>>name3;
		
	}
};
main()
{
	staff s;
	s.staff1();
}
