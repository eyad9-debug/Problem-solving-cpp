/*
* Problem: Codeforces 580A Kefa and First Steps
* Time Complexity: O(N)
* Space Complexity: O(1)
* Approach: Keep tracking the non-decreasing subsegment by incrementing a counter and when the next element is less than the previous 
*           check if that value of the counter is greater than or equal to the maximum length. If the condition is satisfied,
*           that value will be the maximum length. After that reset the counter. At the end output the maximum length.
*/        
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int length=0;
    int max_length=0;
    cin>>n;
    vector<int> numbers(n);
  
    for(int i=0; i<n; i++){
        cin>>numbers[i];
    }
  
    for(int i=0; i<n; i++){
        if(i!=n-1 && numbers[i]<=numbers[i+1]){
            length++;
        }
        else{
            length++;
            if(length>=max_length){
                max_length=length;
            }
            length=0;
        }
    }
  
    cout<<max_length<<"\n";
    return 0;
}
