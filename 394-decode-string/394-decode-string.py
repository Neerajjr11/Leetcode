class Solution:
    def decodeString(self, s: str) -> str:
        st = []
        for c in s:
            if c ==']':
                si=''
                while st[-1] != '[':
                    si =st.pop() + si
                st.pop()
                k = ''
                while st and st[-1].isdigit():
                    k = st.pop() +k
                k = int(k)
                st.append(si*k)
            else:
                st.append(c)
        return ''.join(st)
                