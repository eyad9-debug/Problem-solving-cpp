/*
* Problem: Codeforces 337A-Puzzles
* Time Complexity: O(m log m)
* Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>> n >> m;
    vector<int> puzzles(m);
    for(int i=0; i<m; i++){
        cin>> puzzles[i];
    }
    
    /* 1. Sort the numbers that represents the pieces of the puzzles, so we can be sure that the difference between the 
        pieces of the puzzles is as minimum as possiple.
    */
    sort(puzzles.begin(), puzzles.end());

    /* 2. Calculate the difference between the largest and the smallest number of the pieces of the first subarray
        and set it as the minimum difference between the largest and the smallest number of the pieces of the puzzles will be taken*/
    int min_diff = (puzzles[n-1]-puzzles[0]);

    /* 3. Keep tracking the difference between the largest and the smallest number of the pieces of the other subarrays to 
        know the the minimum difference between the largest and the smallest number of the pieces of the puzzles we will take */
    for(int i=1; i<=m-n; i++){
        if((puzzles[n-1+i]-puzzles[i])<=min_diff){
            min_diff = (puzzles[n-1+i]-puzzles[i]);
        }
    }

    cout<< min_diff<<"\n";
    return 0;
}
