#include<bits/stdc++.h>
using namespace std;

struct Fenwick{
int n;
vector<int> bit;

Fenwick(int n) : n(n), bit(n+1,0) {}

void update(int i,int val){
for(; i<=n;i+=i & -i)
bit[i]+=val;
}

int sum(int i){
int s=0;
for(; i>0; i-=i & -i)
s+=bit[i];
return s;
}

int find_kth(int k){
int pos=0;
for(int i=1<<18;i>0;i>>=1){
if(pos+i<=n && bit[pos+i] <k){
k-=bit[pos+i];
pos+=i;
}
}
return pos+1;
}
};


int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n,k;
cin>>n>>k;

Fenwick ft(n);

for(int i=1;i<=n;i++)
ft.update(i,1);

int curr=0;

for(int i=0;i<n;i++){
int remaining =n-i;

curr=(curr+k)%remaining;

int idx=ft.find_kth(curr+1);

cout<<idx<<" ";
ft.update(idx,-1);
}
}
