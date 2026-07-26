/*
 * Problem: Codeforces 546A - Soldier and Bananas
 * Solution Approach: Simulation / Loop iteration
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,n,w;
    int number_of_dollars=0;
    cin>> k >> n >> w;

    for(int i=1; i<=w; i++){
        number_of_dollars+=(i*k);
    }
    
    if(number_of_dollars>n){
        cout<< number_of_dollars-n << "\n";
    }
    else{
        cout<<0 <<"\n";
    }
    return 0;
}
