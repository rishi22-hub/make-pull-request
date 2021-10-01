#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(i,l,n)for(int i=l;i<n;i++)
#define dloop(i,l,n)for(int i=l;i>=n;i--)
#define read(x) cin>>x
#define print(x) cout<<x
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
if(a.second>b.second)return true;
return a.first>b.first;
}
ll modufact(ll n){
  ll ans=1;
  while(n>1){
    ans*=n;ans%=1000000007;
    n--;
  }
  return ans;
}
void solve(){
  ll n;
  cin>>n;
 cout<<modufact(n)<<'\n';
  



}
int main(int argc, char const *argv[])
{   ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
  #endif
    ll t=1;
cin>>t;
//cout<<t<<" ";
while(t--){
  solve();
}
  return 0;
}