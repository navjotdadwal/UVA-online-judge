//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3999
//simulation
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
    //cin >> tt;
    while(tt--)
    {         
      int n;
      cin>>n;
      string s[n];
      for(int i=0;i<n;i++)
        cin>>s[i];
      int fl=0;
      string ss[16];         
      ss[0]="Happy";
      ss[1]="birthday";
      ss[2]="to";
      ss[3]="you";
      ss[4]="Happy";
      ss[5]="birthday";
      ss[6]="to";
      ss[7]="you";
      ss[8]="Happy";
      ss[9]="birthday";
      ss[10]="to";
      ss[11]="Rujia";
      ss[12]="Happy";
      ss[13]="birthday";
      ss[14]="to";
      ss[15]="you";
      int j=0,i=0;
      while(1)
      {
        cout<<s[i]<<": "<<ss[j]<<"\n";
        if(i==n-1) fl=1;
        if(fl && j==15)
          break;
        i=(i+1)%n,j=(j+1)%16;
      }
    }
    return 0;
}
