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
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
signed main()
{
	int t;
	cin>>t;
	while(t--)
    {
    string s,t;
    cin>>s>>t;
    map<int,int> mp;
    for(int i=0;i<t.size();i++)
    {
    	mp[t[i]]++;
	}
	int a[t.size()];
	int count=0;
	for(int i=0;i<t.size();i++)
	{
		for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
		{
			if(t[i]==(*it).first)
			{
				a[i]=(*it).second--;
			}
		}
	}
	/*for(int i=0;i<t.size();i++)
	{
		cout<<a[i]<<" ";
	}*/
	
	int k=0;
	for(int i=0;i<t.size();i++)
	{
		count=0;
		for(int j=s.size()-1;j>=k;j--)
		{
			if(t[i]==s[j])
			{
				count++;
				if(count==a[i])
		     	{
				  s[j]='.';
				  k=j+1;
				  break;
			    }
			}
		}
	}
	int count1=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='.')
		{
			count1++;
		}
	}
	if(count1==t.size())
	{
		yes;
	}
	else
	{
		no;
	}
    }
	return 0;
}