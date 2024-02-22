#include<stdio.h>

int main() {
  int N, ans, tmp;
  double B[51];
  double gradient, high;
	scanf("%d",&N);
  for(int i=0; i<N; i++) scanf("%lf", &B[i]);
  ans=0;
	for(int i=0; i<N; i++){
		tmp = 0;
		high = 1000000000;
    int j = i-1;
    while(j>-1){
			gradient = (B[i] - B[j])/((double)i - (double)j);
			if(gradient<high){
				tmp++; high=gradient;
			}
      j--;
    }
		high = -1000000000;
    j = i+1;
    while(j<N){
			gradient = (B[j] - B[i]) / ((double)j - (double)i);
			if(gradient>high){
				tmp++; high=gradient;
			}
      j++;
    }
		if(tmp>ans) ans=tmp;
	}
  printf("%d\n",ans);
  return 0;
}