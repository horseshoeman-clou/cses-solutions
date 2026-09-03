#include<bits/stdc++.h>
using namespace std;

struct Projects{
long long start;
long long end;
long long reward;
};

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>>n;

vector<Projects> projects(n+1);

for(int i=1;i<=n;i++){
cin>>projects[i].start>>projects[i].end>>projects[i].reward;
}

sort(projects.begin(), projects.end(), [](const Projects& a, const Projects& b){
return a.end<b.end;
});

vector<long long> dp(n+1);
dp[0]=0;

for(int i=1;i<=n;i++){

auto it = lower_bound(projects.begin()+1, projects.end(), projects[i].start, [](const Projects& p, int val){
return p.end< val;
});

int j = (it - projects.begin());

if(j == 0){
dp[i] = dp[i-1];
continue;
}

j--;

dp[i] =max(dp[i-1],dp[j]+projects[i].reward);


}

cout<<dp[n]<<'\n';

}
