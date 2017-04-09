class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        
        l = s.split()
        st = ""
        for i in l:
            st = st + i[-1::-1] + ' '
        
        return st.strip()
        
