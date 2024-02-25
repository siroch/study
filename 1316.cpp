#include<iostream>
#include<string>
using namespace std;

int main(){
  int N; cin>>N;
  int count=0;
  string S;
  for(int i=0; i<N; i++){
    cin>>S;
    int ans[26] = {0,};
    int tmp=-1;
    for(int j=0; j<S.length(); j++){
      if(ans[(int)S[j]-97] == 0) ans[(int)S[j]-97] = 1;
      else{
        if((int)S[j]-97!=tmp) break;
      }
      tmp = (int)S[j]-97;
      if(j==S.length()-1) count++;
    }
  }
  cout<<count;
  return 0;
}