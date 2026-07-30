/*
* Problem: Codeforces 110A Nearly Lucky Number
* Time Complexity: O(log N)
* Space Complexity: O(log N)
* Approach: Checking each digit of the number if it is a lucky number or not and counting the number of the lucky numbers
*/
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int counter=0;
    cin>>s;

    for(char c : s){
        if(c=='4' || c=='7'){
            counter++;
        }
    }

    if(counter==4 || counter==7){
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }
    return 0;
}
