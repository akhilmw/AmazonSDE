#include<iostream>
#include<string>
using namespace std;

string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keyPad(string s,string ans){
    
    if(s.length()==0){
        cout<<ans<<endl;           // base case
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0;i<code.length();i++){
        keyPad(ros,ans+code[i]);
    }
}

int main(){

    string s ="23";
    keyPad(s,"");

    return 0;
}