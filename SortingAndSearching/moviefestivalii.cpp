#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,k;
cin>>n>>k;

vector<pair<long long,long long>> movies(n);

for(int i=0;i<n;i++)
cin>>movies[i].second>>movies[i].first;

sort(movies.begin(),movies.end());

multiset<long long> viewers;

for(int i=0;i<k;i++){
viewers.insert(0);
}

long long answer=0;

for(auto [end,start]:movies){

auto it=viewers.upper_bound(start);

if (it==viewers.begin()){
continue;
}

--it;

viewers.erase(it);
viewers.insert(end);

answer++;
}

cout<<answer<<'\n';

}
