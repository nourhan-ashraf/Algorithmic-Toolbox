#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 1e5+9;
ll a[100005];

ll gcd(ll a, ll b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main()
{
    INOT
    //LCM(a,b) = (a*b)/GCD(a,b)
    ll a,b;cin>>a>>b;
    ll lcm = (a*b)/gcd(a,b);
    cout<<lcm<<endl;
}
