#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

vector<string> w(n);
for(int i=0;i<n;i++){
cin>>w[i];
}

vector<vector<bool>> visited(n,vector<bool>(m,false));

int dr[] = { -1, 0, 1, 0};
int dc[] = { 0, 1, 0, -1};
int count = 0;

queue<pair<int,int>> q;

for(int i=0;i<n;i++){
for(int j=0;j<m;j++){

if(w[i][j] == '.' && visited[i][j] == false){

visited[i][j] = true;
q.push({i,j});
count++;

while(!q.empty()){

pair<int,int> top = q.front();
int a = top.first;
int b = top.second;
q.pop();

for(int k=0;k<4;k++){

int nr = a + dr[k];
int nc = b + dc[k];

if(nr!=-1 && nr!=n && nc!=-1 && nc!=m && w[nr][nc] == '.' && !visited[nr][nc]){
visited[nr][nc] = true;
q.push({nr,nc});
}
}
}
}
}
}

cout<<count<<'\n';
}
