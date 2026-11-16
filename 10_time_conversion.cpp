#include <iomanip>
#include <iostream>
#include <string>
using namespace std;int main(){string s;cin>>s;int h=stoi(s.substr(0,2));bool pm=s.substr(8)=="PM";if(pm&&h!=12)h+=12;if(!pm&&h==12)h=0;cout<<setw(2)<<setfill('0')<<h<<s.substr(2,6)<<'\n';}
