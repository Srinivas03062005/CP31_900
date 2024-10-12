#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define endl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define yes1 cout<<"Yes"<<endl
#define no1 cout<<"No"<<endl
#define vll vector<long long>
#define mii map<int,int>
#define si set<int>
#define pb push_back
#define ppb pop_back
#define sp " "
#define PI 3.1415926535897932384626433832795
#define eb emplace_back
#define mp make_pair
#define mx(a) *max_element(a.begin(),a.end())
#define mn(a) *min_element(a.begin(),a.end())
#define so(a) sort(a.begin(),a.end())
#define rev(a) reverse(a.begin(),a.end())
#define rso(a) sort(a.rbegin(),a.rend())
#define sumall(a) accumulate(a.begin(),a.end(),0)
//GCD
int gcd (int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
//BINARY EXPONENTIATION
int binaryexponentiation(int base,int n)
{
	int result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=result*base;
			n--;
		}
		else
		{
			base=base*base;
			n=n/2;
		}
	}
	return result;
}
//MODULAR EXPONENTIATION
int modularexponentiation(int base,int n,int primenumber)
{
	int result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%primenumber;
			n--;
		}
		else
		{
			base=(base*base)%primenumber;
			n=n/2;
		}
	}
	return result;
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,count1=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	vi v;
	v.pb(count1);
	/*for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}*/
	cout<<endl;
	for(int i=0;i<n-1;i++)
	{
		if(fabs(a[i]-a[i+1])<=k)
		{
			count1++;
			v.pb(count1);
		}
		else if(fabs(a[i]-a[i+1])>k)
		{
			v.pb(count1);
			count1=0;
		}
	}
	int x=*max_element(v.begin(),v.end())+1;
	cout<<n-x<<endl;
}
	return 0;
}