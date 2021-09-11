// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3093
// check if input is sorted asc/descending
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#define trace1(x) cerr<<#x<<x<<endl
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
#define all(x) (x).begin(),(x).end()
#define int long long int
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define F first
#define S second
#define inf 1e18
#define vi vector<int>
#define Point complex<int>
#define X real()
#define Y imag()
#define pii pair<int,int>
#define num0Beg(x) __builtin_clz(x) // no. of zero in beginning of bit representation
#define num0end(x) __builtin_ctz(x) // no. of zero in the end
#define numOf1(x) __builtin_popcount(x) // no. of ones in bit rep.
#define parity(x) __builtin_parity(x) // parity of 1
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 

int32_t main()
{
    FAST
    int tt=1;
    cin >> tt;
    cout<<"Lumberjacks:\n";
    string st;
    getline(cin,st);
    while(tt--)
    {         
      getline(cin,st);
      stringstream s(st);
      string wd;
      vector<int> v;
      while(s>>wd)
      {
        int x=stoi(wd);
        v.pb(x); 
      }  
      vector<int> r=v;
      reverse(r.begin(),r.end());    
      if(is_sorted(v.begin(),v.end()) || is_sorted(r.begin(),r.end()))
        cout<<"Ordered\n";
      else 
        cout<<"Unordered\n"; 
    }
    return 0;
}
