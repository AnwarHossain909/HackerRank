#include <cstdlib>
#include <iostream>
using namespace std;int main(){int n,a=0,b=0,x;cin>>n;for(int i=0;i<n;++i)for(int j=0;j<n;++j){cin>>x;if(i==j)a+=x;if(i+j==n-1)b+=x;}cout<<abs(a-b)<<'\n';}
