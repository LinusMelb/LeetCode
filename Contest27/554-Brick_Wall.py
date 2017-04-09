class Solution(object):
    def leastBricks(self, wall):
        """
        :type wall: List[List[int]]
        :rtype: int
        """
        
        '''
        Only need to calculate all crevices within each row,
        and find the same distance that appears the most times.
        '''
        dic = {}
        maxm = 0
        for i in range(len(wall)):
            a = 0
            for j in range(len(wall[i])-1):
                a = a + wall[i][j]
                if(a not in dic):
                    dic[a] = 1    
                else:
                    dic[a] += 1
                    
                maxm = max(dic[a], maxm)
            
            
        return len(wall) - maxm

# [[1,2,2,1],[3,1,2],[1,3,2],[2,4],[3,1,2],[1,3,1,1]]
# [[100000], [100000], [100000]]
