#include<bits/stdc++.h>
class Solution {
public:
     
    bool only_one_element(vector<int> v){
        
        int count = 0;
        for(int i=0;i<v.size();i++){
            if(v[i] == 1)
                count++ ;
        }
        
        if(count  == 1)
            return true;
        
        return false;
        
        
    }
    
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int count = 0;
        
        while(tickets[k] != 0){
            
        
          
            
        for(int i=0;i<tickets.size();i++){
            if(tickets[i] > 0){
            tickets[i] -= 1;
            count++;
            }
            
            if(tickets[k] == 0)
                return count;
        }
            
        
            
        }
        
        cout  << count << endl;
        
        if(tickets[k] == 0)
            return count;
        
        else{
            cout << "ASSHOLE" << endl;
            return count + tickets[k];
        }
        
    }
};