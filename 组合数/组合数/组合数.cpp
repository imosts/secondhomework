#include<iostream>
using namespace std;
double jiecheng(double n)
{
	double x,y;
	x=n;
	y=1;
	for(x;x>1;x--)
		y=y*x;
	return y;
}
int main()
{
	double n,m,c;
	cout<<"Now calculate C(m,n), please input n(n>0) and m(m>0)!"<<endl;
	cin>>n>>m;
	if(n<0||m<0||m<n)cout<<"ERROR!"<<endl;
	c=jiecheng(m)/(jiecheng(n)*jiecheng(m-n));
	cout<<"C(m,n)="<<c<<endl;
}