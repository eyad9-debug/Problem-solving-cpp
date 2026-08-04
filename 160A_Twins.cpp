/*
* Problem: Codeforces 160A Twins
* Time Complexity: O(N logN)
* Space Complexity: O(N)
* Approach: Sort the coins in ascending order. Greedily take the largest elements 
*           from the back until the taken sum strictly exceeds the remaining sum.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int sum1=0;
    int sum2=0;
    cin>>n;
    vector<int> coins(n);

    for(int i=0; i<n; i++){
        cin>>coins[i];
        sum2+=coins[i];
    }

    sort(coins.begin(), coins.end());

    while(sum1<=sum2){
        sum1+=coins.back();
        sum2-=coins.back();
        coins.pop_back();
    }

    cout<< n-coins.size();
    return 0;
}
