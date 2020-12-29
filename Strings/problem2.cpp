int length(char str[]){
    
    int n = 0;
    while(str[n]!=0){
        n++;
    }
    return n;
}

void solve(char str[],int index,int n,string &new_str,vector<string> &ans){

    if(index == n){
        ans.push_back(new_str);
        return;                               // base case
    }

    new_str.push_back(str[index]);
    solve(str,index+1,n,new_str,ans);
    new_str.pop_back();

    new_str.push_back(' ');
    new_str.push_back(str[index]);
    solve(str,index+1,n,new_str,ans);
    new_str.pop_back();
    new_str.pop_back();
}


vector<string> spaceString(char str[]){
    
    int n =length(str);
    vector<string> ans;
    string new_str;
    new_str.push_back(str[0]);
    solve(str,1,n,new_str,ans);
    return ans;

}