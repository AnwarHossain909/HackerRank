#include <algorithm>
#include <iostream>
using namespace std;int main(){long long sum=0,x,mn=1e18,mx=-1e18;for(int i=0;i<5;++i){cin>>x;sum+=x;mn=min(mn,x);mx=max(mx,x);}cout<<sum-mx<<' '<<sum-mn<<'\n';}
