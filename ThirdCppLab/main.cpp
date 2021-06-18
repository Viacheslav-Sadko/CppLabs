#include<iostream>
using namespace std;
template <typename T>
T max(T x, T y, T z)
{
	double res;
	if(y>z)
	{
		if(x>z)
		{
			res=x;
		}
		else
			res=y;
	}
	else if(x>z)
	{
		res=x;
	}
	else
	{
		res=z;
	}
	return res;
}
int main()
{	
	double a,b,c;
	cin>>a>>b>>c;
	cout<<"max= "<<max(a,b,c)<<endl;
}
