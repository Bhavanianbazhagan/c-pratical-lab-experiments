#include<iostream>
using namespace std;
class saveetha  //class declaration   base class 1
{
	public:
		char x;   //data member
		void getdata()  //member function
		{
			cout<<"enter the institution name you are studying:"<<endl;
			cin>>x;
		}
};
class principal : public saveetha   //  base class 2
{
	public:
	    char y;  //data members
	    void readdata()  //member function
		{
			cout<<"enter the principal name:"<<endl;
			cin>>y;
		}
};
class staffs : public principal //derived class
{
	public:
		int z,n;   //data members
		void display()  //member function
		{
			getdata();
     		readdata();
		cout<<"how many staffs are available:"<<endl;
		cin>>z;
		cout<<"how many non-teaching staffs are available:"<<endl;
		cin>>n;
     	}
     	void stu()  //member function
     	{
     		int a,b,c,d,e;   //data members
     		cout<<"total number of student in CSE department:"<<endl;
     		cin>>a;
     		cout<<"total number of student in ECE department:"<<endl;
     		cin>>b;
     		cout<<"total number of student in EEE department:"<<endl;
     		cin>>c;
     		cout<<"total number of student in MECHANICAL department:"<<endl;
     		cin>>d;
     		cout<<"total number of student in AGRI department:"<<endl;
     		cin>>e;
     		
		 }
		
	
};
int main()
{
	 staffs s;
	 s.display();
	 s.stu();
	return 0;
}
