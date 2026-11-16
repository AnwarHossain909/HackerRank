#include <algorithm>
#include <iostream>
using namespace std;int main(){int n,mx=-1,count=0;cin>>n;while(n--){int x;cin>>x;if(x>mx)mx=x,count=1;else if(x==mx)++count;}cout<<count<<'\n';}
