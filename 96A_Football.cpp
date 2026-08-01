/*
* Problem: Codeforces 96A Football
* Time Complexity: O(N)
* Space Complexity: O(1)
* Approach: I solved this problem in a single O(N) pass with O(1) space by maintaining a running streak counter that increments on matching characters and resets on a change.
*/
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int counter=1;
    cin>>s;
    char c= s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i]==c){
            counter++;
        }
        else{
            c=s[i];
            counter=1;
        }
        
        if(counter>=7){
            cout<<"YES"<<"\n";
            return 0;
        }
    }
    cout<<"NO"<<"\n";
    return 0;
}
