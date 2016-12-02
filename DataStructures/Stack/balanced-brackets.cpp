//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/balanced-brackets

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
    int t;
    bool no;
    vector<char> vec;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        no = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                vec.push_back(s[i]);
            else { 
                if(!vec.empty()){ 
                       if((vec.back() == '(' && s[i] == ')') ||
                        (vec.back() == '[' && s[i] == ']') ||
                        (vec.back() == '{' && s[i] == '}'))
                            vec.pop_back();
                        else {
                            no = 1;
                            break;
                        }
                }
                else {
                    no = 1;
                    break;
                }
            }
        }
        if(!no && vec.empty())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        vec.clear();
    }
    return 0;
}
