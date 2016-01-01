#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

	int n,p,q,flag=0,i;

	cin >> n >> p >> q;

	for( i = 0; i <= n; i += p){
		if( ( n-i ) % q == 0 ) {
			flag = 1;
			break;
		}
	}
	if(flag){
		string s;
		cin >> s;

		cout << i/p + (n-i)/q << "\n" ;
		for(int x = 0; x<i; x++){
			cout << s[x];
			if((x+1)%p == 0)
				cout<<endl;
		}
		for(int x = i; x<n ; x++){
			cout << s[x];
			if((x-i+1)%q == 0){
				//cout << x << " " << i << " " <<q;
				cout<<endl;
			}
		}
	}
	else
		cout<<-1;
    return 0;
}