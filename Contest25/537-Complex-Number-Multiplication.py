class Solution(object):
    def complexNumberMultiply(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """

        a1 = a.strip('i').split('+');
        a2 = b.strip('i').split('+');

        a1[0] = int(a1[0]);
        a1[1] = int(a1[1]);
        a2[0] = int(a2[0]);
        a2[1] = int(a2[1]);

        r = a1[0] * a2[0] - (a1[1] * a2[1]);

        c = a1[0] * a2[1] + a1[1] * a2[0];


        return str(r)+'+'+str(c)+'i';
