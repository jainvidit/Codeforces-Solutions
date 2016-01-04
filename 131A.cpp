#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

char toggleCase(char c){
	int dif = 'a' - 'A';
	if(c<='Z')
		c += dif;
	else
		c -= dif;
	return c;
}

int main(){
	string s;
	cin>>s;
	int n=0,toggle = 1 ;
	for(int i = 1; i < s.length() ; i++){
		if(s[i]>='a'){
			toggle = 0;
			break;
		}
	}
	if(toggle){
		for(int i = 0; i < s.length() ; i++)
			s[i] = toggleCase(s[i]);
	}
	cout<<s;
	return 0;
}