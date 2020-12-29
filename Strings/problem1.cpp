int remAnagram(string str1, string str2){

    int freq[26] = {0};

    for(int i=0;str1[i]!= '\0';i++){
        freq[str1[i]-'a']++;
    }

    for(int i=0;str2[i]!= '\0';i++){
        freq[str2[i]-'a']--;
    }

    int result  = 0;

    for(int i=0;i<26;i++){
        if(freq[i]<0)
            result -= freq[i];
        else
            result += freq[i];
    }

    return result;

}