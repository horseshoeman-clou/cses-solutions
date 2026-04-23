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

const long long MOD=1e9+7;

long long result=1;
long long freq=1;

for(int i=1;i<n;i++){
if(a[i]==a[i-1]){
freq++;
}
else{
result=(result*(freq+1))%MOD;
freq=1;
}
}

result=(result*(freq+1))%MOD;

result=(result-1+MOD)%MOD;
cout<<result<<"\n";
}
