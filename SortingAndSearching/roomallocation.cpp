#include<bits/stdc++.h>
using namespace std;

struct Customer{
int a,d,idx;
};

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<Customer> v(n);

for(int i=0;i<n;i++){
cin>>v[i].a>>v[i].d;
v[i].idx=i;
}

sort(v.begin(),v.end(),[](Customer x, Customer y){
return x.a<y.a;
});

priority_queue<
pair<int,int>,
vector<pair<int,int>>,
greater<pair<int,int>>
> pq;

vector<int> ans(n);

int rooms=0;

for(auto x:v){

if(!pq.empty() &&
pq.top().first<x.a){

auto top=pq.top();
pq.pop();

int room_number=top.second;

ans[x.idx]=room_number;

pq.push({x.d,room_number});
}

else{

rooms++;

ans[x.idx]=rooms;

pq.push({x.d,rooms});
}
}

cout<<rooms<<"\n";

for(int x:ans)
cout<<x<<" ";
}

