#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	string S; cin>>S;
  vector <string> v;
  int len = S.length();
  for(int i=0; i<len; i++){
    for(int j=0; j<len-i; j++) v.push_back(S.substr(j,i+1));
  }
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  cout<<v.size()<<"\n";
	return 0;
}