#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int s=0,x=5;
		short i;
		cin>>n;
		i=1;
		while(x<=n)
		{
			s+=n/x;
			i++;
			x=pow(5,i);
		}
		cout<<s<<endl;
	}
	return 0;
}






