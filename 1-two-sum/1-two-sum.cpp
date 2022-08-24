class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<pair<int, int>>v;
        
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i], i});
        }
        
        sort(v.begin(), v.end());
        
        vector<int>ans;
        
        int start = 0, end=nums.size()-1;
        
        while(start<end){
            if(v[start].first + v[end].first==target){
                ans.push_back(v[start].second);
                ans.push_back(v[end].second);
                break;
                
            }
            else if(v[start].first + v[end].first<target){
                start++;
            }else{
                end--;
            }
        }
        return ans;
    }
	
    
};