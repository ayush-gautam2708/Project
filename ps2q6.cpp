#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int l=1e9+7;
long long exponentiation(long long a,long long b)
{
    long long res=1;
    a=a%l;
    while(b>0)
    {
        if(b&1)
        {
            res*=a%l;
        }
        a*=a%l;
        b=b>>1;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    vector <int> p(n);
    vector <int> k(n);
    int x,m;
    for(int i=0;i<n;i++)
    {
        cin>>x>>m;
        p[i]=x;
        k[i]=m;
    }
    long long nd=1;
    long long sd=1;
    long long a=1;
    for(int i=0;i<n;i++)
    {
        a*=pow(p[i],k[i]);
        nd=(nd%l)*(((k[i]%l)+1%l)%l);
        sd=(sd%l)*(((exponentiation(p[i],k[i]+1)-1)%l)/((p[i]-1)%l));
    }
    int pd=exponentiation(a,nd/2);
    cout<<nd<<"\n"<<sd<<"\n"<<pd;


}