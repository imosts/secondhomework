#include<iostream>
using namespace std;

double mi(double n,int m){
	double s;
	if(m<2)
		s=n;
	else
	{
	n=n*n;
	s=mi(n,m-1);
	}
	return s;
}
int main()
{
	double x;
	int y;
	cout<<"calculate x^y,please input x and y(y>0)!"<<endl;
	cin>>x>>y;
	if(y<0)
		cout<<"ERROR! y<0"<<endl;
	else
		cout<<mi(x,y)<<endl;
	return 0;

}