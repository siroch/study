#include<iostream>
using namespace std;

int main(){
  int x,y;
  while(true){
    cin>>x>>y;
    if(x==0 && y==0) break;
    if(x>y){
      if(x%y==0) cout<<"multiple"<<endl;
      else cout<<"neither"<<endl;
    }
    else{
      if(y%x==0) cout<<"factor"<<endl;
      else cout<<"neither"<<endl;
    }
  }
  return 0;
}