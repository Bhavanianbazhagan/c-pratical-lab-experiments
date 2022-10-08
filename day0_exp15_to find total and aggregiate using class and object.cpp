#include<iostream>
using namespace std;
class student
{
	public:
		float s,h,m,l;
		float total,aggregiate;
		void marks()   //member function
		{
			cout<<"enter the marks in science:";
			cin>>s;
			cout<<"enter the marks in history:";
			cin>>h;
			cout<<"enter the marks in maths:";
			cin>>m;
			cout<<"enter the marks in language:";
			cin>>l;	
			total=s+h+m+l;
            aggregiate=total/4;
            cout<<"the total ="<<total;
			cout<<"the average ="<<aggregiate;
       	}
       	v
       	
}obj1;
int main()
{

	obj1.marks();
	obj1.display();
	return 0;
}
