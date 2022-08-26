#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    
    bool anagrams(string a , string b){
        
        unordered_map<int,int> mp;
        
        for(int i=0;a[i] != '\0' ;i++)
            mp[a[i]]++;
        
        
        for(int i=0;b[i] != '\0' ; i++)
            mp[b[i]]--;
        
        
        for(auto j : mp){
            if(j.second != 0)
                return false;
        }
        
        return true;
        
        
    }
    
    vector<string> removeAnagrams(vector<string>& words) {
        
        
        vector<string> s;
        bool  a  = false;
        int i=1;
        while(i < words.size()){
            
            if(anagrams(words[i] , words[i-1])){
                a = true;
                int j = i;
                while(j < words.size()-1){
                    words[j] = words[j+1];
                    j++;
                }
                words.pop_back();
            }
            
            if(a == false)
            i++;
            
            a= false;
            
        }
        
        for(auto k : words)
            s.push_back(k);
        
        
        return s;
        
    }
};