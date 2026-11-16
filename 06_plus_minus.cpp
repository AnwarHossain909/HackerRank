#include <iomanip>
#include <iostream>
using namespace std;int main(){int n,p=0,z=0,neg=0;cin>>n;for(int i=0;i<n;++i){int x;cin>>x;if(x>0)++p;else if(x<0)++neg;else ++z;}cout<<fixed<<setprecision(6)<<double(p)/n<<'\n'<<double(neg)/n<<'\n'<<double(z)/n<<'\n';}
