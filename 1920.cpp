#include<bits/stdc++.h>
using namespace std;
int A[100000], B[100000];

int find(int n, int start, int end);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N, M; cin>>N;
  for(int i=0; i<N; i++) cin>>A[i];
  sort(A, A+N);
  cin>>M;
  for(int i=0; i<M; i++){
    cin>>B[i];
    cout<<find(B[i], 0, N-1)<<"\n";
  }
  return 0;
}

int find(int n, int start, int end){
  if(end<start) return 0;
  int m = (start+end)/2;
  if(n==A[m]) return 1;
  else if(n<A[m]) return find(n, start, m-1);
  else return find(n, m+1, end);
}