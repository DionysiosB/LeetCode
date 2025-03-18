class Solution(object):

    def __init__(self, radius, x_center, y_center):
        """
        :type radius: float
        :type x_center: float
        :type y_center: float
        """
        self.x = x_center;
        self.y = y_center;
        self.r = radius;


    def randPoint(self):
        """
        :rtype: List[float]
        """
        import numpy as np

        dist = self.r * np.sqrt(np.random.rand())
        phi  = 2 * np.pi * np.random.rand()
        return [self.x + dist * np.cos(phi), self.y + dist * np.sin(phi)]



# Your Solution object will be instantiated and called as such:
# obj = Solution(radius, x_center, y_center)
# param_1 = obj.randPoint()
