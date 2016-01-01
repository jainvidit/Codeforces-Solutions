#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int b[1000002]={0};
    int left[1000002]={0};
    int bc[1000002]={0};
    int n,mx = -1,ml = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	int x,y;
    	cin>>x>>y;
    	mx = max(mx,x);
    	b[x] = y;
    	bc[x] = 1;
    }

    left[0] = 0;
  // cout<<"re";
    for (int i = 1; i <= mx; ++i)
    {
    	if(bc[i])
    		left[i] = left[max(0,i-b[i]-1)]+1;
    	else
    		left[i] = left[max(0,i-b[i]-1)];
    	if(left[ml]<=left[i])
    		ml = i;
    }
    int ans = 0;
    for (int i = mx+1;i>=0;i--)
    {
    	if(i>ml){
    		if(bc[i])
    			ans++;
    	}
		else
			ml = ml- b[i] -1;
    }

    cout<<ans;
    return 0;
}