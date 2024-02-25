#include<iostream>
#include<string>
using namespace std;

int main(){
  string A; cin>>A;
  int len=A.length();
  int count=0;
  while(len>0){
    if(A[len-1]=='='){
      if(len>2 && A[len-2]=='z' && A[len-3]=='d'){
        len -= 3;
        count++;
      }
      else{
        len -= 2;
        count++;
      }
      continue;
    }
    else if(A[len-1]=='-'){
      len -= 2;
      count++;
      continue;
    }
    else if(len>1 && A[len-1]=='j' && (A[len-2]=='l' || A[len-2]=='n')){
      len -= 2;
      count++;
      continue;
    }
    len--; count++;
  }
  cout<<count;
  return 0;
}