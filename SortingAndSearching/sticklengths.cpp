#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<long long > a(n);

for(int i=0;i<n;i++) cin>>a[i];

sort(a.begin(),a.end());

long long median=a[n/2];
long long cost=0;

for(long long x:a)
cost+=abs(x-median);

cout<<cost<<"\n";
return 0;

}
