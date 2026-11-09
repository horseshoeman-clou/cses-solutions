#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

vector<string> s(n);
for(int i=0;i<n;i++) cin>>s[i];

vector<vector<int>> dist(n,vector<int>(m,-1)), par(n, vector<int>(m,-1));
queue<pair<int,int>> q;
vector<int> dr = { 1, 0, -1, 0}, dc = {0, 1, 0, -1};

int ar,ac,br,bc;

for(int i=0;i<n;i++){
for(int j=0;j<m;j++){

if(s[i][j] == 'B'){
br = i; bc = j;
}

if(s[i][j] == 'A'){

ar = i; ac = j;
}
}
}

dist[ar][ac] = 0;
q.push({ar,ac});

while(!q.empty()){

pair<int,int> top = q.front();
q.pop();
int a = top.first;
int b = top.second;

for(int k=0;k<4;k++){
int nr = dr[k] + a;
int nc = dc[k] + b;

if(nr != -1 && nc != -1 && nr != n && nc != m && s[nr][nc] != '#' && dist[nr][nc] == -1 ){
dist[nr][nc] = dist[a][b]+1;
par[nr][nc] = k;
q.push({nr,nc});
}
}
}



if(dist[br][bc] == -1 ){
cout<<"NO\n";
return 0;
}

cout<<"YES\n";
cout<<dist[br][bc]<<'\n';

string ans="";

int r=br,c=bc;
while(r!=ar || c!=ac){
int dir=par[r][c];

switch(dir){
case 0: ans+='D'; break;
case 1: ans+='R'; break;
case 2: ans+='U'; break;
case 3: ans+='L'; break;
}
r-=dr[dir];c-=dc[dir];
}

reverse(ans.begin(), ans.end());
cout<<ans<<'\n';
}

