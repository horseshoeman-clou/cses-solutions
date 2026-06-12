#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,k;
cin>>n>>k;

vector<long long> a(n);
for(int i=0;i<n;i++) cin>>a[i];

map<long long,int> freq;

long long answer=0;
int distinct=0;
int l=0;

for(int r=0;r<n;r++){

if(freq[a[r]]==0)
distinct++;

freq[a[r]]++;

while(distinct>k){
freq[a[l]]--;

if(freq[a[l]]==0)
distinct--;

l++;
}

answer+=(r-l+1);
}

cout<<answer<<'\n';
}
