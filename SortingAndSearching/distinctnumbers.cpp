#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<int> a(n);
for(long long i=0;i<n;i++)
cin>>a[i];

sort(a.begin(),a.end());

int distinct=0;
for(int i=0;i<n;i++){
if(a[i]!=a[i-1])
distinct++;
}
cout<<distinct<<"\n";
}
