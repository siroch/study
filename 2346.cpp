#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  int N; cin>>N;
  deque<pair<int,int>> dq;
	int num;
	for(int i=0; i<N; i++){
		cin>>num; dq.push_back(make_pair(num,i+1));
	}
	while(!dq.empty()){
		int tmp=dq.front().first;
		cout<<dq.front().second<<" ";
		dq.pop_front();
		if(dq.empty()) break;
		if(tmp>0){
			for(int i=0; i<tmp-1; i++){
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else{
			for(int i=0; i<(-1)*tmp; i++){
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}