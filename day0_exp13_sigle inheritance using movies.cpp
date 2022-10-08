#include<iostream>
using namespace std;
class movie
{
	public:
		void n1()
		{
			cout<<"THE CHARACTERS ARE........."<<endl;
			cout<<"1.VIKRAM"<<endl;
			cout<<"2.ROLEX"<<endl;
			cout<<"3.SANTHANAM"<<endl;
			cout<<"4.FAFA"<<endl;
		}
	
};
class favorite : movie
{
	char name[50];
	public:
		void n_1()
		{
			n1();
			cout<<"ENTER YOUR FAVOURITE CHARACTER:"<<endl;
			cin>>name;
			
		}
};
int main()
{
	favorite f;
	f.n_1();
	return 0;
}
