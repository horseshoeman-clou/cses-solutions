#include<bits/stdc++.h>
using namespace std;

struct Range{
int l,r,idx;
};

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);

long long n;
cin>>n;

vector<Range> v(n);
for(int i=0;i<n;i++){
cin>>v[i].l>>v[i].r;
v[i].idx=i;
}

sort(v.begin(),v.end(),[](Range a, Range b){
if(a.l==b.l) return a.r>b.r;
return a.l<b.l;
});

vector<int> contains(n,0),contained(n,0);

int max_r=0;
for(int i=0;i<n;i++){
if(v[i].r<=max_r)
contained[v[i].idx]=1;
max_r=max(max_r,v[i].r);
}

int min_r=INT_MAX;
for(int i=n-1;i>=0;i--){
if(v[i].r>=min_r)
contains[v[i].idx]=1;
min_r=min(min_r,v[i].r);
}

for(int i=0;i<n;i++)
cout<<contains[i]<<" ";
cout<<'\n';

for(int i=0;i<n;i++)
cout<<contained[i]<<" ";
cout<<'\n';

}

