#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long n;
cin>>n;

vector<pair<long long,long long>> tasks(n);
for(int i=0;i<n;i++)
cin>>tasks[i].first>>tasks[i].second;

sort(tasks.begin(),tasks.end());

long long current=0;
long long reward=0;

for(auto task:tasks){
current+=task.first;
reward+=(task.second-current);
}

cout<<reward<<"\n";

return 0;
}
