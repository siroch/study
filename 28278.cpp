#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,num; cin>>n;
	stack<int> stack;
	for(int i=0; i<n; i++){
		cin>>m;
		if(m==1){
			cin>>num;
			stack.push(num);
    }
		else if(m==2){
			if(!stack.empty()){
				cout<<stack.top()<<"\n";
				stack.pop();
			}
			else cout<<"-1\n";
		}
		else if(m==3) cout<<stack.size()<<"\n";
		else if(m==4){
			if(stack.empty()) cout<<"1\n";
			else cout<<"0\n";
		}
		else if(m==5){
			if(!stack.empty()) cout<<stack.top()<<"\n";
			else cout<<"-1\n";
		}
	}
	return 0;
}