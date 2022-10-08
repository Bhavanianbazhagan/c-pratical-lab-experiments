#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"enter the number:";
	cin>>n;
	if(isdigit(n))
	{
		for(int i;i<=n;i++)
		{
		fact=fact*i;
	    }
	    cout<<"the factorial of"<<n<<"is="<<fact;
	}
    else
        cout<<"invalid";
}
