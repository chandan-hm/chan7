#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t,s=0;
    cin>>n>>t;
    int a[n],x[n];
    for(int i=0;i<n;i++)
        {
        cin>>x[i]>>a[i];
    }
    int m,p;
    for(int i=0;i<n;i++)
        {
        int k;
        m=x[i];
        k=a[i];
        p=i;
        for(int j=i;j<n;j++)
        {
        if(x[j]<m)
            {
            p=j;
            m=x[j];
            k=a[j];
        }}
        x[p]=x[i];
        x[i]=m;
        a[p]=a[i];
        a[i]=k;
    }
    for(int i=0;i<(n-1);i++)
        {
        float j;
        j=(x[i+1]-(float)a[i+1]/2)-(x[i]+(float)a[i]/2);
        if(t<j)
            s+=2;
        if(t==j)
            s++;
    }
    cout<<s+2;
    return 0;
}

