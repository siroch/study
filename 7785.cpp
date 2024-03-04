#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
  int N; cin>>N;
  vector <string> ans;
  map <string, int> office;
  string name, enter;
  for(int i=0; i<N; i++){
    cin>>name>>enter;
    if(enter=="enter") office[name]=0;
    else office[name]=1;
  }
  for(auto T:office){
    if(!T.second) ans.push_back(T.first);
  }
  sort(ans.rbegin(), ans.rend());
  for(auto T:ans) cout<<T<<"\n";
  return 0;
}
