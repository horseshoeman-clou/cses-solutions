#include<bits/stdc++.h>
using namespace std;

const int N=7;

string pathPattern;
bool visited[N][N];
int totalPaths=0;

int dr[4]={-1,1,0,0};
int dc[4]={0,0,-1,1};
char dirChar[4]={'U','D','L','R'};

bool inside(int r, int c){
return r>=0 && r<N && c>=0 && c<N;
}

void dfs(int r, int c , int step){

if(r==6 &&c==0){
if(step==48)
totalPaths++;
return ;
}

if(step==48)
return;

visited[r][c]=true;

if((r==0 || visited[r-1][c] )&& (r==0 || visited[r+1][c]) && c>0 && c<6 && !visited[r][c-1] && !visited[r][c+1]){
visited[r][c]=false;
return;
}

if((c==0 || visited[r][c-1]) && (c==0 || visited[r][c+1]) && r>0 && r<6 && !visited[r-1][c] && !visited[r+1][c]){
visited[r][c]=false;
return;
}

char current=pathPattern[step];

for(int d=0;d<4;d++){

if(current != '?' && current !=dirChar[d])
continue;

int nr=r+dr[d];
int nc=c+dc[d];

if(!inside(nr,nc))
continue;

if(visited[nr][nc])
continue;

dfs(nr,nc,step+1);
}
visited[r][c]=false;
}


int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

cin>>pathPattern;
dfs(0,0,0);
cout<<totalPaths<<"\n";
return 0;
}
