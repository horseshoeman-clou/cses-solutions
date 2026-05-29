#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<long long> a(n);

for(int i=0;i<n;i++) cin>>a[i];

set<int> s;

long long ans=0;
int l=0;

for(int r=0;r<n;r++){
while(s.count(a[r])){
s.erase(a[l]);
l++;
}
s.insert(a[r]);
ans+=(r-l+1);
}
cout<<ans<<"\n";
return 0;
}
