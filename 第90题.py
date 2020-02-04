def cut(s: str):
    results = []
    for x in range(len(s)):
        for i in range(len(s) - x):
            results.append(s[i:i + x + 1])
    return results
 
 
print(cut('abc'))
