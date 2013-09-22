#include<iostream>
using namespace std;
int main()
{
	float f,c;
	int a;
	cout<<"You want trans F to C,input 1;You want trans C to F,intput 2"<<endl;
		cin>>a;
		switch (a)
		{
		case 1:
				cout<<"Please input temperture F;"<<endl;
				cin>>f;
				c=(float)5/9*(f-32);
				cout<<c<<endl;
				break;
			case 2:
				cout<<"Please input temperture C;"<<endl;
				cin>>c;
				f=(float)9/5*c+32;
				cout<<f<<endl;
				break;
		default:
			cout<<"ERROR! You input the wrong number;"<<endl;
			break;
		}
	
	return 0;






}