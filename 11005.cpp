#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  int N,B; cin>>N>>B;
  string S;
  while(N != 0){
    int tmp = N%B;
    if(tmp>9) S += (tmp-10+'A');
    else S += ('0'+tmp);
    N /= B;
  }
  reverse(S.begin(),S.end());
  cout<<S;
  return 0;
}