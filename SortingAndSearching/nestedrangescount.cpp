#include<bits/stdc++.h>
using namespace std;

struct Fenwick{
int n;
vector<int> bit;

Fenwick(int n): n(n), bit(n+1,0){}

void update(int i,int val){
for(; i<=n;i+=i&-i)
bit[i]+=val;
}

int query(int i){
int s=0;
for(; i>0;i-=i&-i)
s+=bit[i];
return s;
}
};

struct Ranges{
int l,r,idx;
};

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<Ranges> v(n);
vector<int> rvals;

for(int i=0;i<n;i++){
cin>>v[i].l>>v[i].r;
v[i].idx=i;
rvals.push_back(v[i].r);
}

sort(rvals.begin(),rvals.end());

rvals.erase(unique(rvals.begin(),rvals.end()),rvals.end());

for(auto &x :v){
x.r=lower_bound(rvals.begin(),rvals.end(),x.r)-rvals.begin() + 1;
}

sort(v.begin(),v.end(),[](auto &a, auto &b){
if(a.l==b.l) return a.r>b.r;
return a.l<b.l;
});

vector<int> contains(n),contained(n);

Fenwick ft(n);

for(int i=0;i<n;i++){
int total=ft.query(n);
int smaller=ft.query(v[i].r-1);

contained[v[i].idx]=total-smaller;
ft.update(v[i].r,1);
}

ft=Fenwick(n);

for(int i=n-1;i>=0;i--){
contains[v[i].idx]=ft.query(v[i].r);
ft.update(v[i].r,1);
}

for(int x:contains) cout<<x<<" ";
cout<<"\n";
for(int x: contained) cout<<x<<" ";
cout<<"\n";

}
