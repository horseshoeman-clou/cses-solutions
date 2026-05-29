#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<long long> a(n);
for(int i=0;i<n;i++) cin>>a[i];

sort(a.begin(),a.end());

long long reachable=0;

for(long long x:a){
if (x>reachable+1)
break;
reachable+=x;
}
cout<< reachable+1;
return 0;
}
