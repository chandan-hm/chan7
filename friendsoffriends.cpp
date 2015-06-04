#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	
	set<int> s;
	while(n--)
	{
		int a;
		cin>>a;
		int m;
		cin>>m;
		while(m--)
		{
			int x,y;
			cin>>x;
			y=s.size();
			s.insert(x);
			if(y!=s.size())
			c++;
		}
		m=s.size();
		s.insert(a);
		if(m==s.size())
		c--;
	}
	cout<<c;
	return 0;
}

