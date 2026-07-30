class Solution:
    def maxProduct(self, n: int) -> int:
        a=-1
        b=-1
        while n>0:
            d=n%10
            n=n//10
            if d>a:
                b=a
                a=d
            elif d>b:
                b=d
        return a*b