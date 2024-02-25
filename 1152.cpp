#include<iostream>
#include<string>
using namespace std;

int main(){
  string S; getline(cin, S);
  int cnt=1;
  if(S.length()==1 && (int)S[0]==32){
    cout<<0<<endl;
    return 0;
  }
  for(int i=0; i<S.length(); i++){
    if((int)S[i]==32 && i!=0 && i!=S.length()-1) cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}