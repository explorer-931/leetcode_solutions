#include<bits/stdc++.h>
#include<string>

class Solution {
public:
    
    int score(int l, string& s){
    
    int count1 = 0;
    int count2  = 0;
        
        
    for(int k = 0;k <= l;k++){
        if(s[k] == '0' && k != s.length()-1)
            count1++;
    }
        
    
    for(int k = l+1;s[k] != '\0';k++){
            if(s[k] == '1')
                count2++;
        }
        
        
        return count1+count2;
        
        
        
        
    }
    
    
    int maxScore(string s) {
        
    int max_score = INT_MIN;
    for(int i=0;s[i] != '\0' ;i++){
        int cur_score = score(i , s);
        cout << cur_score << endl;
        max_score = max(max_score, cur_score);
    }
        
        
        return max_score;
        
    }
};