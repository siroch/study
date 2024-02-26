#include<iostream>
using namespace std;

int main(){
  int N; cin>>N;
  int cnt=0, tmp=1;
  while(true){
    if(N<=tmp) break;
    cnt++;
    tmp += cnt*6;
  }
  cout<<cnt+1;
  return 0;
}//1 7 19 37 61