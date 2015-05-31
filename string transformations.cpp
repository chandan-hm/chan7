#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char s[1001];
	int q;
	cin>>s>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		reverse(s+a,s+b+1);
		cout<<s<<endl;
    }
	
	return 0;
}
