#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_SIZE 1000
int sorted_list[MAX_SIZE];

void merge(int arr[], int left, int right);
void merge_sort(int arr[], int left, int right);

int main(){
  int N; cin>>N;
  int ans[N];
  for(int i=0; i<N; i++) cin>>ans[i];

  merge_sort(ans,0,N-1);

  for(int i=0; i<N; i++) cout<<ans[i]<<" ";
  return 0;
}

void merge(int arr[], int left, int right){
  int Mid = (left+right)/2;
  int L1=left, M=Mid+1, L2=left;
  while(L1<=Mid && M<=right){
    if(arr[L1]<=arr[M]) sorted_list[L2++]=arr[L1++];
    else sorted_list[L2++]=arr[M++];
  }
  while(L1<=Mid) sorted_list[L2++]=arr[L1++];
  while(M<=right) sorted_list[L2++]=arr[M++];
  for(int i=left; i<=right; i++) arr[i]=sorted_list[i];
}

void merge_sort(int arr[], int left, int right){
  if(left<right){
    int Mid = (left+right)/2;
    merge_sort(arr,left,Mid);
    merge_sort(arr,Mid+1,right);
    merge(arr,left,right);
  }
}