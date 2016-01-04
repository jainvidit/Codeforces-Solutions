#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){

	int s[4]={0},n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		s[t-1]++;
	}

	t = s[3];
	t += s[2];
	s[0] = max(0,s[0]-s[2]);	
	t += s[1]/2;
	s[1] %= 2;
	t += s[1];
	s[0] = max(0,s[0]-(2*s[1]));
	t += ceil(s[0]/4.0);
	cout<< t;
	return 0;

}
