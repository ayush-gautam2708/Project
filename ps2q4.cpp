#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    long long n;
    cin>>n;
    vector<long long> arr(n);
    vector<long long> cnt(1000001);
    for(long long i=0;i<1000001;i++)
    {
        cnt[i]=0;
    }
    long long x;
    for(long long i=0;i<n;i++)
    {
        cin>>x;
        arr[i]=x;
        cnt[arr[i]]+=1;
    }
    for(long long i=1000000;i>=1;i--)
    {
        long long d=0;
        for(long long j=i;j<1000001;j+=i)
        {
            d+=cnt[j];
            
        }
        if(d>=2)
            {
                cout<<i;
                return 0;
            }
    }
}