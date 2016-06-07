#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	int t,i,n,max_inc = 0,cur_inc = 0,prev = -1;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>t;
		if(t>=prev)
			cur_inc++;
		else{
			max_inc = max(cur_inc,max_inc);
			cur_inc = 1;
		}
		prev = t;
	}
	max_inc = max(cur_inc,max_inc);
	cout<<max_inc;
	return 0;
}