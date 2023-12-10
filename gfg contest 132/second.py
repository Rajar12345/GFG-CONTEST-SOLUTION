class Solution:
    def count101(self, n):
        # code here
        right=[]
        ans=0
        one=0
        
        while n!=0 :
            if n& 1:
                one+=1
            else:
                right.append(one)
            n >>=1
        for x in right:
            left =one-x
            ans+=left*x
        return ans