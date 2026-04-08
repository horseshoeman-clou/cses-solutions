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

long long best=a[0];
long long current=a[0];

for(int i=1;i<n;i++){
current= max(a[i],current+a[i]);
best=max(best,current);
}

cout<<best<<"\n";

return 0;
}
