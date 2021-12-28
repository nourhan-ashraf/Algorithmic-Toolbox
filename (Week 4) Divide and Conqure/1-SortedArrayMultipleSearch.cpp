#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 10e5+5;
long long k[N];
long long q[N];
vector<int>v;

int main(){
    INOT  

    int n;cin>>n;
    for(int i=0;i<n;i++) cin>>k[i];

    int m;cin>>m;
    for(int i=0;i<m;i++) cin>>q[i];


    for(int j=0;j<m;j++){
        int ans = -1, st=0, en=n-1, mid, val;
        val = q[j];
        while(st<=en){
            mid = (st+en)/2;
            if(k[mid]==val) {
                ans = mid;
                break;
            }
            else if(k[mid]>val) en=mid-1;
            else if(k[mid]<val) st=mid+1;
        }
    v.push_back(ans);
    }

    for(int i:v) cout<<i<<" ";    
}