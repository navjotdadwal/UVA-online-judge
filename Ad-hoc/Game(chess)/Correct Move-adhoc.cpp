//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=191
//(check the validity of chess moves
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
      int k,q,m;
      while(cin>>k>>q>>m)
      {
        if(k==q)
          cout<<"Illegal state\n";
        else 
        {
          int M[8][8];
          map<int,pii> mp;
          for(int i=0;i<8;i++)
          {
            for(int j=0;j<8;j++)
            {
              int x=i*8+j;
              M[i][j]=x;  
              mp[x]={i,j};
            }
          }
          int fl=0;
          if((q==m) ||  (mp[q].F!=mp[m].F && mp[q].S!=mp[m].S) || (mp[q].F==mp[k].F && mp[q].F==mp[m].F && ((mp[q].S>=mp[k].S && mp[m].S<=mp[k].S) || (mp[q].S<=mp[k].S && mp[m].S>=mp[k].S))) || (mp[q].S==mp[k].S && mp[q].S==mp[m].S && ((mp[q].F>=mp[k].F && mp[m].F<=mp[k].F) || (mp[q].F<=mp[k].F && mp[m].F>=mp[k].F))))
              cout<<"Illegal move\n";
          else 
          {
            if(abs(mp[k].F-mp[m].F)+abs(mp[k].S-mp[m].S)<=1)
              cout<<"Move not allowed\n"; 
            else 
            {
              if((mp[k].F+1==mp[m].F || mp[k].S==mp[m].S ||  mp[k].F==7) && (mp[k].F==mp[m].F || mp[k].S-1==mp[m].S || mp[k].S==0) && (mp[k].F-1==mp[m].F || mp[k].S==mp[m].S || mp[k].F==0) && (mp[k].F==mp[m].F || mp[k].S+1==mp[m].S || mp[k].S==7))  
                 cout<<"Stop\n";
              else 
                 cout<<"Continue\n";
            }  
          }  
        }  
      }       
    }
    return 0;
}
