#include<iostream>
using namespace std;

int main(){
  int X,N,a,b; cin>>X>>N;
  for(int i=0; i<N; i++){
    cin>>a>>b;
    X -= a*b;
  }
  cout<< (X==0 ? "Yes" : "No");
  return 0;
}