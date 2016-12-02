//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/preprocessor-solution/

#include <climits>

#define foreach(v,i)    for(int i=0;i<v.size();i++)
#define io(v)           cin >> v
#define INF             INT_MAX
#define toStr(s)        #s
#define FUNCTION(f,q) void f(int &a,int &b){a=(a)q(b)?a:b;}