#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
long long x;
cin>>n>>x;

vector<long long> a(n);
for(int i=0;i<n;i++) cin>>a[i];

map<long long, long long> freq;

freq[0]=1;

long long prefix=0;
long long answer=0;

for(int i=0;i<n;i++){

prefix+=a[i];

answer+=freq[prefix-x];

freq[prefix]++;
}
cout<<answer<<'\n';

return 0;
}
