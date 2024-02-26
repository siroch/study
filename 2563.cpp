#include<iostream>
using namespace std;

int main(){
  int ans[101][101] = {0, };
  int N; cin>>N;
  int x,y;
  for(int i=0; i<N; i++){
    cin>>x>>y;
    for(int j=x; j<x+10; j++){
      for(int k=y; k<y+10; k++) ans[k][j]=1;
    }
  }
  int count=0;
  for(int i=1; i<101; i++){
    for(int j=1; j<101; j++){
      if(ans[i][j]==1) count++;
    }
  }
  cout<<count;
  return 0;
}