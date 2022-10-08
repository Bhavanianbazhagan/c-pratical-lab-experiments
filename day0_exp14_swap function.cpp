#include <iostream>
using namespace std;
void swap(int &x, int &y) 
{
   int temp;
   temp = x; 
   x = y;   
   y = temp; 
   return;
}
int main () 
{
   int a,b;
   cout << "Before swap, the value of a :";
   cin>>a;
   cout << "Before swap, the value of b :";
   cin>>b;
   swap(a,b);
   cout << "After swap, the value of a :" << a << endl;
   cout << "After swap, the value of b :" << b << endl;
   return 0;
}
