#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
long long m=1e9+7;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        long long res=1;
        a=a%m;
        while(b>0)
        {
            if(b&1)
            {
                res=res*a% m;
            }
            a=a*a%m;
            b=b>>1;
        }
        cout<<res<<"\n";
    }
}