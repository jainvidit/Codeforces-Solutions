#include<iostream>
#include<string>
using namespace std;

int main() {
    string a, b;
    cin>>a>>b;
    int l_a = a.length(), l_b = b.length(), temp;
    long long sum = 0;
    int **t = new int *[l_b];
    for(int i=0; i<l_b; i++) {
        t[i] = new int [2];
        t[i][0] = t[i][1] = 0;
    }
    t[0][b[0] - '0']++;
    for(int i=1; i<l_b; i++) {
        t[i][0] = t[i-1][0];
        t[i][1] = t[i-1][1];
        t[i][b[i]-'0']++;
    }
    for(int i=0; i<l_a; i++) {
        temp = (a[i] - '0')^1;
        if(i>0)
            sum = sum + (t[l_b - l_a + i][temp]-t[i-1][temp]);
        else sum = sum + t[l_b - l_a + i][temp];
    }
    cout<<sum;
    return 0;
}