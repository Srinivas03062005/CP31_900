#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define endl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vll vector<long long>
#define mii map<int,int>
#define si set<int>
#define pb push_back
#define ppb pop_back
#define PI 3.1415926535897932384626433832795
#define eb emplace_back
#define mp make_pair
#define mx(a) *max_element(a.begin(),a.end())
#define mn(a) *min_element(a.begin(),a.end())
#define so(a) sort(a.begin(),a.end())
#define rev(a) reverse(a.begin(),a.end())
#define rso(a) sort(a.rbegin(),a.rend())
#define sumall(a) accumulate(a.begin(),a.end(),0)
#define lb(a,v) lower_bound(a.begin(),a.end(),v)-a.begin()
#define ub(a,v) upper_bound(a.begin(),a.end(),v)-a.begin()
#define bs(a,v) binary_search(a.begin(),a.end(),v)
#define ll long long

//for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
//for(map<int,int>::iterator it=mp.rbegin();it!=mp.rend();it++)
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd (ll a, ll b) {if (b==0){return a;} else {return gcd(b,a%b);}}
ll biryexpo(ll bse,ll n){ll res=1;while(n){if(n%2==1){res=res*bse;n--;}else{bse=bse*bse;n=n/2;}}return res;}
ll mdlrexpo(ll bse,ll n,ll prmenbr){ll res=1;while(n){if(n%2==1){res=(res*bse)%prmenbr;n--;}else{bse=(bse*bse)%prmenbr;n=n/2;}}return res;}
ll maxSubarraySum(ll arr[], ll n) {/*KADANES ALG*/ ll maxi=LONG_MIN,sum=0;for(int i=0;i<n;i++) {sum+=arr[i];if(sum>maxi) {maxi=sum;}if (sum<0) {sum=0;}}/*sum of the empty subarray if(maxi<0) maxi=0;return maxi;*/}
ll prime(ll n){if(n==1){return 0;}for(int i=2;i*i<=n;i++){if(n%i==0){return 0;}}return 1;}
ll ceil(ll A,ll B){if(A%B==0)return A/B;else return (A/B)+1;}
/*---------------------------------------------------------------------------------------------------------------------------*/
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,sum2=0,sum1=0;
    double x;
    cin>>n>>x;
    int a[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	sum1=sum1+a[i];
    	sum2=sum2+ceil(a[i]/x);
	}
	cout<<ceil(sum1,x)<<" "<<sum2<<endl;
    }
	return 0;
}