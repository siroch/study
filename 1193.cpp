#include<iostream>
using namespace std;

int main(){
  int N; cin>>N;
  int ans[N][2];
  int tmp = 1;
  while(N>tmp){
    N -= tmp;
    tmp++;
  }
  if(tmp%2 == 1) cout<<tmp+1-N<<"/"<<N;
  else cout<<N<<"/"<<tmp+1-N;
  return 0;
}