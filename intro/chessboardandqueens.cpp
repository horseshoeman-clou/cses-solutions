#include<bits/stdc++.h>
using namespace std;

vector<string> board(8);

bool usedcol[8];
bool useddiag1[15];
bool useddiag2[15];

int ans=0;

void solve(int r)
{

if(r==8){
ans++;
return;}

for(int c=0;c<8;c++)
{
if(board[r][c]=='*')
continue;

if(usedcol[c]) continue;
if(useddiag1[r-c+7]) continue;
if(useddiag2[r+c]) continue;

usedcol[c]=true;
useddiag1[r-c+7]=true;
useddiag2[r+c]=true;

solve(r+1);

usedcol[c]=false;
useddiag1[r-c+7]=false;
useddiag2[r+c]=false;

}
}

int main()
{
memset(usedcol,false,sizeof(usedcol));
memset(useddiag1,false,sizeof(useddiag1));
memset(useddiag2,false,sizeof(useddiag2));

for(int i=0;i<8;i++)
cin>>board[i];

solve(0);

cout<<ans<<"\n";
return 0;
}
