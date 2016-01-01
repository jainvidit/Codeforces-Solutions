#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main(){

	std::vector<pair<int,int> > pass;

	int n,s,ans;
	cin >> n >>s;
	ans = s;
	while(n--){
		int f,t;
		cin>>f>>t;
		ans = max(ans, f+t);
	}
   cout<< ans;
	
	return 0;
}