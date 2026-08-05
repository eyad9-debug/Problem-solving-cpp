/*
* Problem: Codeforces 318A Even Odds
* Time Complexity: O(1)
* Space Complexity: O(1)
* Approach: Counting the number of odd numbers and using a mathematical formula to find the position of the number
*/
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin>> n >>k;
    long long odd_counts= (n+1)/2;

    if(k<=odd_counts){
        cout<< (2*k)-1<<"\n";
    }
    else{
        cout<< 2*(k-odd_counts)<<"\n";
    }
    return 0;
}
