#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int t;
cin>>t;

while(t--)
{
long long int p1,p2;
cin>>p1>>p2;

long long big=max(p1,p2), small=min(p1,p2);

if((big+small)%3==0&&big/2<small)
cout<<"YES\n";

else cout<<"NO\n";
}

return 0;
}
