#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int i=0;
	cin>>s;
	while(i<s.length()){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] =='9'){
			cout<<"YES";
			return 0;
		}
		i++;
	}
	cout<<"NO";
	return 0;
}