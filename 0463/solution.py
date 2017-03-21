class Solution(object):
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        def neighbors(i, j):
            neighbors = []
            if i > 0:
                neighbors.append(grid[i-1][j])
            if i < len(grid) - 1:
                neighbors.append(grid[i+1][j])
            if j > 0:
                neighbors.append(grid[i][j-1])
            if j < len(grid[0]) - 1:
                neighbors.append(grid[i][j+1])
            return neighbors
        perimeter = 0
        for i, row in enumerate(grid):
            for j, val in enumerate(row):
                if val:
                    perimeter += 4 - sum(filter(lambda x: x, neighbors(i,j)))
        return perimeter
