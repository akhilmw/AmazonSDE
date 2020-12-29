#include<iostream>
using namespace std;

void subStr(string s,string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;               // base case
    }


    char ch = s[0];
    string ros = s.substr(1);

    subStr(ros,ans);
    subStr(ros,ans+ch);
}

int main(){
    string s ="ABC";
    string ans ="";
    subStr(s,ans);

    return 0;
}