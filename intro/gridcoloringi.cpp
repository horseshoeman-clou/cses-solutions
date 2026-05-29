#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;
cin>>n>>m;

vector<string> grid(n);
for(int i=0;i<n;i++){
cin>>grid[i];
}

vector<string> ans(n,string(m,'?'));
string colors="ABCD";

for(int i=0;i<n;i++){
for(int j=0;j<m;j++){

for(char c: colors){
if(c==grid[i][j])
continue;

if(i>0 && ans[i-1][j]==c) continue;

if(j>0 && ans[i][j-1]==c) continue;

ans[i][j]=c;
break;
} 
}
}

for(auto &row: ans){
cout<<row<<"\n";
}
}
