#include<iostream>
#include<string>
using namespace std;

void subStrASCII(string s,string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;                            // base case
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    

    subStrASCII(ros,ans);
    subStrASCII(ros,ans+ch);
    subStrASCII(ros,ans+to_string(code));
}

int main(){
    string s = "ABC";
    subStrASCII(s,"");

    return 0;
}