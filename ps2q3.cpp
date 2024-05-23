#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    vector <int> v(1000001);
    v[0]=0;
    for(int i=1;i<1000001;i++)
    {
        for(int j=i;j<1000001;j+=i)
        {
            if(i==1)
            {
                v[j]=1;
            }
            else
            {
                v[j]+=1;
            }
        }
    }
    int n;
    cin>>n;
    int x;
    while(n--)
    {
        cin>>x;
        cout<<v[x]<<"\n";
    }
}