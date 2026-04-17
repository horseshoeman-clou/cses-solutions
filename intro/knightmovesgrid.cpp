#include<bits/stdc++.h>
using namespace std;

const int N=1000;

int grid[N][N];

int dx[8]={1,1,-1,-1,-2,2,-2,2};
int dy[8]={-2,2,-2,2,1,1,-1,-1};

void solve(){
int n;
cin>>n;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
grid[i][j]=0;
}
}

queue<pair<int,int>> q;

q.push({0,0});
grid[0][0]=1;

while(!q.empty()){
auto [x,y]=q.front();
q.pop();

for(int i=0;i<8;i++){
int nx=x+dx[i];
int ny=y+dy[i];

if(nx<0 || ny<0 || nx>=n || ny>=n) continue;
if(grid[nx][ny]!=0)continue;

grid[nx][ny]=grid[x][y]+1;
q.push({nx,ny});
}
}

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cout<<grid[i][j]-1<<" ";
}
cout<<"\n";
}
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
solve();
return 0;
}
