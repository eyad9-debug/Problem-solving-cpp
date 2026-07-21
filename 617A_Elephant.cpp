/*
 * Problem: Codeforces 617A - Elephant
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    if (x % 5 == 0) {
        cout << x / 5 << "\n";
    } else {
        cout << x / 5 + 1 << "\n";
    }

    return 0;
}
