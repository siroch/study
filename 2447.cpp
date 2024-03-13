#include<bits/stdc++.h>
using namespace std;

char mat[6561][6561];
void recur(int y, int x, int n);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
	int N; cin>>N;
	memset(mat,' ',sizeof(mat));
	recur(0,0,N);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++) cout<<mat[i][j];
		cout<<"\n";
	}
	return 0;
}

void recur(int y, int x, int n){
	if(n==1){
		mat[y][x]='*';
		return ;
	}
	int k = n/3;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i!=1 || j!=1) recur(y+(i*k),x+(j*k),k);
		}
	}
}