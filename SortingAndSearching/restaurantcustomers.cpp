#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<pair<long long,int>>events;

for(int i=0;i<n;i++){
long long a,b;
cin>>a>>b;

events.push_back({a,+1});
events.push_back({b,-1});
}

sort(events.begin(),events.end());

long long current=0;
long long maximum=0;

for(auto &e:events){
current+=e.second;
maximum=max(maximum,current);
}
cout<<maximum<<"\n";
return 0;
}
