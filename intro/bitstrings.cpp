#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

ll n;
cin>>n;

const ll md=1e9+7;

ll ans=1;

while(n--)
ans=(ans*2)%md;

cout<<ans;

return 0;
}


