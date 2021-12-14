#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 1e6+2;

ll lastFib(ll n){
    ll first=0, sec=1, sum;
    for(int i=2;i<=n;i++){
        sum = (first + sec)%10;
        first = sec;
        sec = sum;
    }
    return sec;
}
int main()
{
    INOT
    ll n; cin>>n;
    cout<<lastFib(n)<<endl;
}
