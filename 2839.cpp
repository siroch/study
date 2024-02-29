#include<iostream>
using namespace std;

int main(){
  int N; cin>>N;
  if(N%5==0) cout<<N/5;
  else{
    int cnt=0;
    while(N>0){
      cnt++; N-=3;
      if(N%5==0){
        cout<<cnt+N/5;
        break;
      }
      else if(N==1 || N==2){
        cout<<-1;
        break;
      }
      else if(N==0){
        cout<<cnt;
        break;
      }
    }
  }
  return 0;
}