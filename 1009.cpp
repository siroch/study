#include<stdio.h>
#include<math.h>

int main(){
	int T; 
	scanf("%d", &T); 
	for(int i=0; i<T; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int result = a;
		for(int j = 1; j < b; j++){
			result = result * a%10;
		}
		if (result%10== 0) 
			printf("%d\n", 10);
		else
			printf("%d\n", result%10);
	}
  return 0;
}