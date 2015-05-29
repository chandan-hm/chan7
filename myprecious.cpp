#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,l=0,u=0;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    
    for(i=1;i<n;i++)
        {
        if(a[i]>a[i+1])
            {
            l=i;
            for(j=i+1;j<n;j++)
                if(a[j]<a[j+1])
                {
                u=j;
                break;
            }
            if(j==n)
                u=j;
            break;
        }
    }
    
    if(i==n)
        {
        l=1;u=1;
    }
    if(l)
        {
        reverse(a+l,a+u+1);
        j=0;
        for(i=1;i<n;i++)
            if(a[i]>a[i+1])
            {
            j=1;
            break;
        }
        if(j==0)
            cout<<"Gollum\n"<<l<<" "<<u;
        else
            cout<<"Smeagol";
    }
    else
        cout<<"Smeagol";
    return 0;
}
