#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 1e5+9;
ll a[100005];

int main()
{
    INOT
    int n;cin>>n;
    int cnt=0;
    while(n>0){
        if(n>=10) n-=10;
        else if(n>=5) n-=5;
        else if(n>=1) n-=1;
        cnt++;
    }
    cout<<cnt<<endl;

}