class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        d = {}
        for i in nums :
            if (i in d )== False :
                d[i] = 1
            
            else :
                k = d[i]
                k += 1
                d[i] = k
                
        min_req = (len(nums)+1)//2
        print(min_req)
        for j in d :
            print(j , end = " ")
            print(d[j])
        for i in d :
            if d[i] >= min_req :
                return i