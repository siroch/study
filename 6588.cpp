#include<bits/stdc++.h>
using namespace std;

int arr[1000001]={1,1,1,0,};

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N,L,R;

  for(int i=2; i*i<1000000; i++){
    if(arr[i]==0){
      for(int j=i*i; j<1000000; j+=i) arr[j]=1;
    }
  }
  while(true){
    cin>>N;
    if(!N) break;
    L=3;
    R=N-3;
    while(L<=R){
      if(!arr[L] && !arr[R]){
        if((L+R) == N) break;
      }
      L+=2;
      R-=2;
    }
    if(L>R) cout<<"Goldbach's conjecture is wrong.";
    else cout<<N<<" = "<<L<<" + "<<R<<'\n';
  }
}