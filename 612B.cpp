#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int> > v;
	for(int i=0;i<n;i++){
		int f;
		cin >> f;
		v.push_back(make_pair(f,i+1));
	}
	sort(v.begin(), v.end());
	
	long long ans =0;
	int prev  = v[0].second;
	for(int i=1;i<n;i++){
		ans += abs(prev - v[i].second);
		//cout << abs(prev - v[i].second) << " " << ans <<"\n" ;
		prev = v[i].second;
	}
	cout<<ans;
    return 0;

}