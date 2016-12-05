//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/cpp-maps

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> list;
    map<string,int>::iterator it;
    int type, y, q;
    string x;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> type;
        switch(type){
            case 1:
                cin >> x >> y;
                it = list.find(x);
                if(it != list.end())
                    list[x]=list[x]+y;
                else
                    list.insert(make_pair(x,y));
                break;
            case 2:
                cin >> x;
                it = list.find(x);
                if(it != list.end())
                    list.erase(it);
                break;
            case 3:
                cin >> x;
                it = list.find(x);
                if(it != list.end())
                    cout << list[x] << endl;
                else 
                    cout << '0' << endl;
                break;
        }
    }
    return 0;
}
