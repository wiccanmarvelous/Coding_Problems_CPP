class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False

        s1_ = [0] * 26
        s2_ = [0] * 26

        for i in range(len(s1)):
            s1_[ord(s1[i]) - 97] += 1
            s2_[ord(s2[i]) - 97] += 1

        for i in range(len(s2) - len(s1)):
            if s1_ == s2_:
                return True
            s2_[ord(s2[i]) - 97] -= 1
            s2_[ord(s2[i + len(s1)]) - 97] += 1

        if s1_ == s2_:
            return True
        return False