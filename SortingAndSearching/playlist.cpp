#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int n;
cin>>n;

vector<long long> a(n);

for(int i=0;i<n;i++) cin>>a[i];

vector<long long> b=a;
sort(b.begin(),b.end());
b.erase(unique(b.begin(),b.end()),b.end());

for(int i=0;i<n;i++){
a[i]=lower_bound(b.begin(),b.end(),a[i])-b.begin();
}

vector<long long> last(b.size(),-1);
int start=0;
int ans=0;

for(int i=0;i<n;i++){
if(last[a[i]]>=start){
start=last[a[i]]+1;
}

last[a[i]]=i;
ans=max(ans,i-start+1);
}
cout<<ans<<'\n';
}
