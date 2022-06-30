class Solution:
    def isValid(self, s: str) -> bool:
        if len(s)%2 != 0:
            return False
        opens = set('([{') 
        matching = set([ ('(',')'), ('[',']'), ('{','}') ]) 
        stack = []
        for bracket in s:
            if bracket in opens:
                stack.append(bracket)
            else:
                if len(stack) == 0:
                    return False
                last_open = stack.pop()
                if (last_open,bracket) not in matching:
                    return False

        return len(stack) == 0