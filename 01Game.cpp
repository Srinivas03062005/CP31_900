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
	int count=0;
	string s;
	cin>>s;
	string s1=s;
	for(int i=0;i<s.size()-1;i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			if(s[i]!=s[j] && (s[i]=='1' || s[i]=='0') && (s[j]=='1' || s[j]=='0'))
	     	{
			  s[i]='.';
			  s[j]='.';
			  i=-1;
			  j=0;
		    }
		}
	}
	//cout<<s<<endl;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='.')
		{
			count++;
		}
	}
	int k=count/2;
	if(s1==s)
	{
		cout<<"NET"<<endl;
	}
	else if(k%2==0)
	{
		cout<<"NET"<<endl;
	}
	else if(k%2==1)
	{
		cout<<"DA"<<endl;
	}
    }
	return 0;
}