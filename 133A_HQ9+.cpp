/*
* Problem: Codeforces 133A HQ9+
* Time Complexity: O(N)
* Space Complexity: O(1)
* Approach: Linear Search with early detection / character matching
*/
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p;
    int counter=0;
    cin>>p;

    for(int i=0; i<p.size(); i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            counter++;
        }
    }
    if(counter>0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
