#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<long long>a(n);
for(int i=0;i<n;i++) cin>>a[i];

unordered_set<long long> s;

long long left=0,ans=0;

for(int right=0;right<n;right++){
while(s.count(a[right])){
s.erase(a[left]);
left++;
}

s.insert(a[right]);
ans=max(ans,right-left+1);
}
cout<<ans<<"\n";
return 0;
}
