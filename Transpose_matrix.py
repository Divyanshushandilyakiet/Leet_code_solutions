class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        mat=[]
        m=len(matrix)
        n=len(matrix[0])
        for i in range(n):
            temp=[]
            for j in range(m):
                temp.append(matrix[j][i])
            mat.append(temp)
        return mat
