class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        lookup={"(":")", "{":"}", "[":"]"}
        for bracket in s:
            if bracket in lookup: 
                stack.append(bracket)
            elif len(stack)==0 or lookup[stack.pop()]!=bracket:
                return False
        return len(stack)==0
