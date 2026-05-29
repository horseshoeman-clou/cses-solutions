#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<long long> time(n);
for(int i=0;i<n;i++) cin>>time[i];

long long sum=0;

for(auto t:time)sum+=t;

long long max_time=*max_element(time.begin(),time.end());

long long ans=max(max_time*2,sum);

cout<<ans<<"\n";

return 0;
} 
