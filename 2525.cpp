#include<iostream>
using namespace std;

int main(){
  int A,B,C; cin>>A>>B>>C;
  if(C>59){
    int T = C/60; int M = C%60; int temp = B;
    B = B+M>59 ? B+M-60 : B+M;
    A = temp+M>59 ? (A+T+1)%24 : (A+T)%24;
  }
  else{
    A = B+C>59 ? (A+1)%24 : A%24;
    B = B+C>59 ? B+C-60 : B+C;
  }
  cout<<A<<" "<<B;
  return 0;
}