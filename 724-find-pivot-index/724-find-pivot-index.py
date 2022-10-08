class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        left_sum  = 0
        a = False
        right_sum = 0
        for i in nums :
            right_sum += i
            
        print(right_sum , end = " ")
        print(left_sum)
    
        

        i = 0
        while i < len(nums) :
              
              right_sum-= nums[i]
              
              if (left_sum  == right_sum) :
                    a = True
                    return  i
              left_sum += nums[i]
              
              
              print(left_sum , end = " ")
              print(right_sum )
              i += 1
        
        if a == False :
            return  -1