#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  int N; cin>>N;
  for(int i=0; i<2*N-1; i++){
    for(int j=abs(N-i-1); j>0; j--) cout<<" ";
    if(i<N){
      for(int j=2*i; j>-1; j--) cout<<"*";
    }
    else{
      for(int j=N*4-3-2*i; j>0; j--) cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}