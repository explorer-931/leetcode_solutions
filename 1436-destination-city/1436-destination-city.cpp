#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        string ans = "";

        if(paths.size() == 1){
        ans += paths[0][1];
        return ans;
        }
    
        
        bool a  = false;
         
        vector<pair<string , bool >> citya;
        vector <pair<string,bool>> cityb;
        
        for(int i=0;i<paths.size();i++){
            vector<string> v = paths[i];
            
            citya.push_back(make_pair(v[0] , true));
            cityb.push_back(make_pair(v[1] , true));
            
            
            
        }
       
       for(int i=0;i<cityb.size();i++){

           for(int j=0;j<citya.size();j++){
               
           if(cityb[i].first == citya[j].first){
               cityb[i].first = "asshole";
               citya[j].first = "asshole";
           }               
               
           }
       }
        
        for(int i=0;i<cityb.size();i++){
            if(cityb[i].first != "asshole")
                ans += cityb[i].first;
        }
        
        return ans;
        
    }
        
        
};