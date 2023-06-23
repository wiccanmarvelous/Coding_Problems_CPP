class Solution:
    def romanToInt(self, s: str) -> int:
        s=s.replace("IV","IIII")
        s=s.replace("IX","VIIII")
        s=s.replace("XL","XXXX")
        s=s.replace("XC","LXXXX")
        s=s.replace("CD","CCCC")
        s=s.replace("CM","DCCCC")
        sum=0
        for i in range(len(s)):
            if s[i]=='I':
                sum+=1
            elif s[i]=='V':
                sum+=5
            elif s[i]=='X':
                sum+=10
            elif s[i]=='L':
                sum+=50
            elif s[i]=='C':
                sum+=100
            elif s[i]=='D':
                sum+=500
            elif s[i]=='M':
                sum+=1000
        return sum