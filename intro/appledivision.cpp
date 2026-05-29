#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

vector<int> a(n);

for(int i=0;i<n;i++) cin>>a[i];

long long total=0;

for(int x:a) total+=x;

long long ans=LLONG_MAX;

for(long long mask=0;mask<(1LL<<n);mask++)
{
long long sum1=0;
for(int i=0;i<n;i++)
{
if(mask&(1<<i))
sum1+=a[i];
}
long long sum2=total-sum1;

ans=min(ans,llabs(sum1-sum2));
}

cout<<ans;

return 0;
}

