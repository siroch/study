#include<iostream>
using namespace std;

int main(){
  int Tc, k, n, temp; cin>>Tc;
  int build[Tc][2];
  int human[15][14];
  for(int i=0; i<14; i++) human[0][i] = i+1;
  for(int i=1; i<15; i++){
    for(int j=0; j<14; j++){
      temp = 0;
      int k = j;
      while(k > -1){
        temp += human[i-1][k];
        k--;
      }
      human[i][j] = temp;
    }
  }
  for(int i=0; i<Tc; i++) {
    cin>>k>>n;
    build[i][0] = k; build[i][1] = n;
  }
  for(int i=0; i<Tc; i++) cout<<human[build[i][0]][build[i][1]-1]<<endl;
  return 0;
}