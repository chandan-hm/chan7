#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s=0,i=0;
		cin>>n;
		while(n--)
		{
			int m;
			cin>>m;
			if(m-i>0)
			s+=m-i;
			i=m;
		}
		cout<<s<<endl;
	}
	return 0;
}
