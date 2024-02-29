#include<iostream>
#include<string>
using namespace std;

int main(){
  int N,M; cin>>N>>M;
  int w_max=64,b_max=64;
  int w_c, b_c;
  char ans[N][M];
  char WC[8][8] = {{'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'}};
  char BC[8][8] = {{'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'},
                    {'B','W','B','W','B','W','B','W'},
                    {'W','B','W','B','W','B','W','B'}};
  for(int i=0; i<N*M; i++) cin>>ans[i/M][i%M];
  for(int i=0; i<N-7; i++){
    for(int j=0; j<M-7; j++){
      w_c=0; b_c=0;
      for(int a=i; a<i+8; a++){
        for(int b=j; b<j+8; b++){
          if(ans[a][b]!=WC[a-i][b-j]) w_c++;
          if(ans[a][b]!=BC[a-i][b-j]) b_c++;
        }
      }
      w_max = w_max>w_c ? w_c : w_max;
      b_max = b_max>b_c ? b_c : b_max;
    }
  }
  cout<<(w_max>b_max ? b_max : w_max)<<endl;
  return 0;
}