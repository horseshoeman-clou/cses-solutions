#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int i,n;
cin>>n;

for( i=1;i-1<n;i++)
{
long long int ans;
if(i==1)
ans=0;
else if (i==2)
ans=6;
else
{
long long int k2=(i*i);
ans=(k2*(k2-1))/2-4*(i-1)*(i-2);
}

cout<<ans<<"\n";
}
return 0;

}
