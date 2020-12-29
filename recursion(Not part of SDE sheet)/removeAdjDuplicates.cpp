#include<iostream>
#include<string>
using namespace std;

string remove(string s){

    if(s.length()==0){
        return "";            // base case
    }

    char ch = s[0];
    string ans = remove(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    else
    {
        return ch+ans;
    }
    
}

int main(){

    string s = "aaabbbbcccdddeeeee";
    cout<<remove(s);

    return 0;
}