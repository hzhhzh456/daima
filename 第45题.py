x = [
    [1,1,1],
    [2,2,2],
    [3,3,3]]
y = [
    [1,1,1],
    [2,2,2],
    [1,1,1]]
def addMatrix(x,y):
    addResult=0
    newMatrix=[]
 
    for i in range(len(x)):
        newLine = []
        for j in range(len(x[i])):
            addResult=x[i][j]+y[i][j]
            newLine.append(addResult)
            addResult=0
        newMatrix.append(newLine)
    return newMatrix
print(addMatrix(x,y))
