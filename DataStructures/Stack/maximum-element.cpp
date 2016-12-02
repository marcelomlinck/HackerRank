//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/maximum-element

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_element(vector<int> stack){
    int res = 0;
    for(int i=0; i<stack.size()-1;i++){
        if(stack[i]>res)
            res = stack[i];
    }
    return res;
}


int main() {
    vector<int> stack;
    int op, val, n, max;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> op;
        switch(op){
            case 1:
                cin >> val;
                stack.push_back(val);
                if(val > max)
                    max = val;
                break;
            case 2:
                if(!stack.empty() && stack.back() == max){
                    max = max_element(stack);
                }
                stack.pop_back();
                break;
            case 3:
                cout << max << endl;
                break;
        }
    }
    return 0;
}
