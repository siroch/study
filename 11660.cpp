#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, num; cin>>N>>M;
  int sum[1025][1025];
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin>>num;
			sum[i+1][j+1] = sum[i][j+1] + sum[i+1][j] - sum[i][j] + num;
		}
	}
	for(int i=0; i<M; i++){
		int x1, y1, x2, y2;
		cin>>y1>>x1>>y2>>x2;
		cout<<sum[y2][x2] - sum[y1-1][x2] - sum[y2][x1-1] + sum[y1-1][x1-1]<<"\n";
	}
	return 0;
}