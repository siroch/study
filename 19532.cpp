#include<iostream>
using namespace std;

int main(){
  int a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
  int ans_x,ans_y;
  for(int i=-999; i<1000; i++){
    for(int j=-999; j<1000; j++){
      if((a*i+b*j==c) && (d*i+e*j==f)){
        ans_x=i; ans_y=j;
      }
    }
  }
  cout<<ans_x<<" "<<ans_y<<endl;
  return 0;
}