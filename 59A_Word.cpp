/*
* problem: Codeforces 59A Word
* Time Complexity: O(N)
* Space Complexity: O(1)
* Approach: Using manual ASCII manipulation
*/
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int upper_count=0;
    int lower_count=0;
    cin>> s;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper_count++;
        }
        else{
            lower_count++;
        }
    }
    for(int i=0; i<s.size(); i++){
        if((upper_count>lower_count) && (s[i]>='a' && s[i]<='z')){
            s[i]=(char)(s[i]-32);
        }
        else if((lower_count>=upper_count) && (s[i]>='A' && s[i]<='Z')){
            s[i]=(char)(s[i]+32);
        }
    }

    cout<< s <<"\n";
    return 0;
}
