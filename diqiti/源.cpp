#include<iostream>
using namespace std;
int chen(int x,int y)
{
	int m=1;
	if (y==0)
		m=1;
	else
		m=m*x*chen(x,y-1);
	return (m);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<chen(a,b)<<endl;
	system("pause");
}