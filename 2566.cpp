#include<iostream>
using namespace std;

int main(){
  int ans[9][9];
  int max_x, max_y, max_input=0;
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++) {
      cin>>ans[i][j];
      if(ans[i][j]>=max_input){
        max_input = ans[i][j];
        max_x = j+1; max_y = i+1;
      }
    }
  }
  cout<<max_input<<"\n"<<max_y<<" "<<max_x;
  return 0;
}