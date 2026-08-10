#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<vector<char>> grid(n, vector<char> (n));
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cin>>grid[i][j];
}
}

vector<pair<int, int>> curr;

curr.push_back({0,0});
string ans;
ans+=grid[0][0];


for(int d=1;d<=2*(n-1);d++){

char best = 'Z' + 1;

for(auto [i,j] : curr){

if(j+1<n)
best = min(best, grid[i][j+1]);
if(i+1<n)
best = min(best, grid[i+1][j]);
}

ans += best;

vector<pair<int,int>> next;

for(auto [i,j] : curr){

if(j+1<n && grid[i][j+1] == best)
next.push_back({i,j+1});

if(i+1<n && grid[i+1][j] == best)
next.push_back({i+1,j});
}

sort(next.begin(), next.end());
next.erase(unique(next.begin(), next.end()), next.end());
curr = next;
}

cout<<ans<<'\n';
}

