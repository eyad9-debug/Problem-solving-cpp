/*
* Problem: Codeforces 977A Wrong Subtraction
* Time Complexity: O(K)
* Space Complexity: O(1)
* Approach: Using the algorithm mentioned in the problem
*/
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>> n >>k;

    for(int i=0; i<k; i++){
        if(n%10==0){
            n/=10;
        }
        else{
            n--;
        }
    }
    cout << n << "\n";
    return 0;
}
