#include<bits/stdc++.h>
using namespace std;

bool possible(vector<long long>& a,long long k,long long mx){

long long groups=1;
long long curr=0;

for(long long x:a){
if(curr+x<=mx){
curr+=x;
}

else{
groups++;
curr=x;
}
}

return groups<=k;
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,k;
cin>>n>>k;

vector<long long> a(n);

long long low=0;
long long high=0;

for(int i=0;i<n;i++){
cin>>a[i];

low=max(low,a[i]);
high+=a[i];
}

long long ans=high;

while(low<=high){
long long mid=low+(high-low)/2;

if(possible(a,k,mid)){
ans=mid;
high=mid-1;
}
else{
low=mid+1;
}
}

cout<<ans<<'\n';

}



