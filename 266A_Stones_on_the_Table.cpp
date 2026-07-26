/*
 * Problem: Codeforces 266A - Stones on the Table
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 *
 * Approach:
 * Single-pass check. For every stone from index 1 to n-1, if its color 
 * matches the previous stone's color, it must be removed.
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int number_of_stones;
    int removed_stones = 0;
    cin >> number_of_stones;
    vector<char> stones(number_of_stones);

    for(int i = 0; i < number_of_stones; i++){
        cin >> stones[i];
        if(i > 0 && stones[i] == stones[i-1]){
            removed_stones++;
        }
    }
    cout << removed_stones << "\n";
    return 0;
}
