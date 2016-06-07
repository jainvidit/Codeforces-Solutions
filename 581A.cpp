#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	cout<<min(a,b)<<" "<<abs(a-b)/2;
	return 0;
}