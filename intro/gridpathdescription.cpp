#include<bits/stdc++.h>
using namespace std;

string s;
int result =0;
bool visited[7][7];

bool isVisited(int x, int y){
if(x<0 || y<0 ||x>=7 || y>=7) return true;
return visited[x][y];
}

void dfs(int x,int y, int step){
if(x==6 && y==0){
if (step==48) result++;
return;
}

if(step==48) return;

visited[x][y]=true;

if ((isVisited(x+1,y) && isVisited(x-1,y) && !isVisited(x,y+1) && !isVisited(x,y-1)) ||(!isVisited(x+1,y) && !isVisited(x-1,y) && isVisited(x,y+1) && isVisited(x,y-1))
){
visited[x][y]=false;
return;
}

if(s[step]=='U'){
if(!isVisited(x-1,y))
dfs(x-1,y,step+1);
}
else if(s[step]=='D'){
if(!isVisited(x+1,y))
dfs(x+1,y,step+1);
}
else if(s[step]=='L'){
if(!isVisited(x,y-1))
dfs(x,y-1,step+1);
}
else if(s[step]=='R'){
if(!isVisited(x,y+1))
dfs(x,y+1,step+1);
}
else{
if(!isVisited(x+1,y))
dfs(x+1,y,step+1);
if(!isVisited(x-1,y))
dfs(x-1,y,step+1);
if(!isVisited(x,y+1))
dfs(x,y+1,step+1);
if(!isVisited(x,y-1))
dfs(x,y-1,step+1);
}

visited[x][y]=false;
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cin>>s;
dfs(0,0,0);
cout<<result<<"\n";
return 0;
}
