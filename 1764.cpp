#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int N,M; cin>>N>>M;
	vector<string> v;
	vector<string> s;

	v.resize(N+M);
	for(int i=0; i<N; i++) cin>>v[i];
	sort(v.begin(),v.end());
	string a;
	for(int i=0; i<M; i++){
		cin>>a;
		if(binary_search(v.begin(), v.end(), a)) s.push_back(a);
	}
	sort(s.begin(),s.end());
	cout<<s.size()<<"\n";
	for(int i=0; i<s.size(); i++) cout<<s[i].c_str()<<"\n";
	return 0;
}