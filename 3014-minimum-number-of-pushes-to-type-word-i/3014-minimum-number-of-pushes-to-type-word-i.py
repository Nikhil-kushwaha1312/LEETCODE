class Solution:
    def minimumPushes(self, word: str) -> int:
        n=len(word)
        if n<=8:
            return n
        elif 8<n<=16:
            return 8+(n-8)*2
        elif 16<n<=24:
            return 8*1+8*2+(n-16)*3
        elif 24<n<=26:
            return 8*1+8*2+8*3+(n-24)*4