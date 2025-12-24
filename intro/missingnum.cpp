#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

long long int n;
cin>>n;

long long int sum;

sum=n*(n+1)/2;

long long int alt;
 
 for ( int i=0;i<n-1;i++)
 {
 cin>> alt;
 sum-=alt;
 }
 
 cout<<sum;
 
 return 0;
 }
 
 
