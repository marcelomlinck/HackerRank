#Author: Marcelo Linck
#https://www.hackerrank.com/contests/projecteuler/challenges/euler006

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int t, i;
    long int sqrsum, sumsqr;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        sqrsum = 0;
        sumsqr = 0;
        for(i=1;i<=n;i++){
            sumsqr+=i*i;
            sqrsum+=i;
        }
        cout << abs(sqrsum*sqrsum-sumsqr) << endl;
    }
    return 0;
}
