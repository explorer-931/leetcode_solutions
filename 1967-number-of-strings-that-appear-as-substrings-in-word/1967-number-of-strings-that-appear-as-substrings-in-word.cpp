#include<bits/stdc++.h>
#include<cstring>

class Solution {
public:
    
    bool is_substring(string word , string s){
        
        
        
        
        for(int i=0;word[i] != '\0';i++){
            int j=0;
            for(;s[j] != '\0';j++){
                if(word[i+j] != s[j])
                    break;
            }
            
            if(j == s.length()){
        
                return true;
            }
        }
        
        
        return false;
        
        
        
    }
    int numOfStrings(vector<string>& patterns, string word) {
        
        int ans  = 0;
        
        for(int k=0; k < patterns.size();k++){
            if(is_substring(word , patterns[k]))
                ans++;
        }
        
        return ans;   
        
    }
};