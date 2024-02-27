#include<iostream>
using namespace std;

int main(){
  int N,tmp; cin>>N;
  if(N==1) return 0;
  while(true){
    for(int i=2; i<=N; i++){
      if(N%i == 0){
        cout<<i<<endl;
        tmp=i;
        break;
      }
    }
    if(tmp==N) break;
    else N /= tmp;
  }
  return 0;
}