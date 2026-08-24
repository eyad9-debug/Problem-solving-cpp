/*
* Problem: Codeforces 1475A - Odd Divisor
* Time Complexity: O(t)
* Space Complexity: O(1)
*/
#include <iostream>
#include <cmath>
using namespace std;
// This function checks if the number is a power of 2 or not
bool isPowerOf2(long long n){
    /* First: n>0. This asks: Is n greater than zero? 
      Then: (n & (n-1))==0. This asks: Is n & n-1 equal to zero?
      '&' is the bitwise AND that compares the binary bits. Because the power of 2 contains only one 1 bit
      and when you subtract 1 from the power of 2 each 0 bit will be 1 and vice versa (for e.g. 8-> 1000, 7-> 0111),
      the comparison between each two bits by '&' will produce 0,
      so the result of the whole comparison between n and n-1 will be zero if the n is a power of 2.
      I put n>0 because if we check this (n & (n-1)) for zero it can produce zero, making this expression (n & (n-1))==0
      appear true even though 0 is not a power of 2.
    */
    return n>0 && (n & (n-1))==0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>> n;
        /* This condition check: If the number is a power of 2, then the output will be "no". Because the powers of 2 
          do not have an odd divisor.
        */
        if(isPowerOf2(n)){
            cout<<"NO"<<"\n";
        }
        /* Else (means that the number is not a power of 2), then the output will be "yes". Because the numbers that are not 
          powers of 2 have an odd divisor.
        */
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
