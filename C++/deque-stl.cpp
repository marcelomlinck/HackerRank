//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/deque-stl

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> subarr;
    int max;
    for(int i=0;i<n;i++){
        for(;!subarr.empty() && arr[i] > subarr.back();) subarr.pop_back();
        subarr.push_back(arr[i]);
        if(i>=k && subarr.front() == arr[i-k]) subarr.pop_front();
        if(i>=k-1){
            if(i<n-1) cout << subarr.front() << ' ';
            else cout << subarr.front() << endl;
        }
    }
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
