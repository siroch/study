#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 500000
int sorted_list[MAX_SIZE];
int cnt=0;
int res;

void merge(int arr[], int left, int right, int K);
void merge_sort(int arr[], int left, int right, int K);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N,K; cin>>N>>K;
  int ans[N];
  for(int i=0; i<N; i++) cin>>ans[i];
  merge_sort(ans,0,N-1,K);
  cout<<(cnt<K?-1:res);
  return 0;
}

void merge(int arr[], int left, int right, int K){
  int Mid = (left+right)/2;
  int L1=left, M=Mid+1, L2=left;
  while(L1<=Mid && M<=right){
    if(arr[L1]<=arr[M]) sorted_list[L2++]=arr[L1++];
    else sorted_list[L2++]=arr[M++];
  }
  while(L1<=Mid) sorted_list[L2++]=arr[L1++];
  while(M<=right) sorted_list[L2++]=arr[M++];
  for(int i=left; i<=right; i++){
    arr[i]=sorted_list[i];
    cnt++;
    if(cnt==K) res=arr[i];
  }
}

void merge_sort(int arr[], int left, int right, int K){
  if(left<right){
    int Mid = (left+right)/2;
    merge_sort(arr,left,Mid, K);
    merge_sort(arr,Mid+1,right, K);
    merge(arr,left,right, K);
  }
}