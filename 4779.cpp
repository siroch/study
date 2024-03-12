#include<bits/stdc++.h>
using namespace std;

void a(int N);

int main(){
	int N;
	while(cin>>N){
		a(N);
		cout<<"\n";
	}
	return 0;
}

void a(int N) {
	int size=pow(3, N-1);
	if(N==0){
		cout<<"-";
		return;
	}
	a(N-1);
	for(int i=0; i<size; i++){
		cout<<" ";
	}
	a(N-1);
}