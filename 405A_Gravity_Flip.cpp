/*
* Problem: Codeforces 405A Gravity Flip
* Time Complexity: O(N log N)
* Space Complexity: O(1)
* Approach: Using std::sort to sort the columns
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> cubes(n);
    for(int i=0; i<n; i++){
        cin>> cubes[i];
    }

    sort(cubes.begin() , cubes.end());
    
    for(int i=0; i<n; i++){
        cout<< cubes[i] << " ";
    }
    return 0;
}
