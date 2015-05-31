#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,i;
	set<int> s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int j,x;
		x=s.size();
		cin>>j;
		s.insert(j);
		if(x==s.size())
		cout<<"REDUNDANT"<<'\n';
		else
		cout<<"ADDED"<<'\n';
	}
	return 0;
}
