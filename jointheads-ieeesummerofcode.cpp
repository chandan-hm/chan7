#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[100]={},maxi=0;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            for(int j=0;j<k;j++)
            {
                int m;
                cin>>m;
                a[m-1]++;
                maxi=max(maxi,m-1);
            }
        }
        int s=0;
        for(int i=0;i<=maxi;i++)
            if(a[i]==1)
            s++;
        cout<<s<<'\n';
    }
    return 0;
}
