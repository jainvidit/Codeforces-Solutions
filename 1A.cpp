#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,m,a;
	long long ans;

	cin>>n>>m>>a;

	ans = ceil(n*1.0/a)*ceil(m*1.0/a);

	cout<<ans;
}