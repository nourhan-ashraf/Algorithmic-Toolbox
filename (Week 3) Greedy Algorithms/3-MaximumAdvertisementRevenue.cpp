#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 10e5+5;
long long a[N];
long long b[N];

int main(){
    INOT
    int n;cin>>n;
    int res=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a, a+n);
    sort(b, b+n);
    for(int i=0;i<n;i++) res += a[i]*b[i];
    cout<<res<<endl;
}