/*
* Problem: Codeforces 208A Dubstep
* Time Complexity: O(N)
* Space Complexity: O(1)
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    //1. Replace "WUB" with spaces
    for(int i=0; i+2<s.size(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }

    //2. Remove the consecutive spaces safely
    for(int i=0; i<s.size(); i++){
        if(s[i]==' ' && s[i+1]==' '){
            s.erase(i,1);
            i--; // Recheck the current index since characters shifted left
        }
    }

    //3. Clean up leading & trailing spaces once
    if(!s.empty() && s.front()==' ') s.erase(0,1);
    if(!s.empty() && s.back()==' ') s.erase(s.size()-1,1);
    
    cout<<s;
    return 0;
}
