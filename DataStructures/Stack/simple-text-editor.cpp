//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/simple-text-editor
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q, i, op, j, nchar;
    vector<string> stack;
    string S = "", str = "";
    cin >> q;
    for(i=0;i<q;i++){
        cin >> op;
        switch(op){
            case 1:   //append(W) to S
                cin >> str;
                stack.push_back(S);
                S.append(str);
                break;
            case 2:   //delete(k) delete k characters from S
                cin >> nchar;
                stack.push_back(S);
                for(j=0; j<nchar;j++)
                    S.pop_back();
                break;
            case 3:   //print(k) print kth character of S
                cin >> nchar;
                cout << S[nchar-1] << endl;
                break;
            case 4:   //undo() undo last operation of type 1 or 2
                S = stack.back();
                stack.pop_back();
                break;
        }
    }
    return 0;
}
