#include<bits/stdc++.h>
using namespace std;

void hanoi(int x, int y, int z, int n);
void hanoi_count(int n);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N; cin>>N;
  hanoi_count(N);
  hanoi(1, 2, 3, N);
  return 0;
}

void hanoi(int x, int y, int z, int n){
  if(n==1) cout<<x<<" "<<z<<"\n";
  else{
    hanoi(x, z, y, n-1);
    cout<<x<<" "<<z<<"\n";
    hanoi(y, x, z, n-1);
  }
}

void hanoi_count(int n){
  int num=1;
  while(--n) num=num*2+1;
  cout<<num<<"\n";
}