import sys

def solution(a,b,c):
    if ((a < b + c )and (b < a + c) and  (c < a + b)):
        return "YES"
    else:
        return "NO"
if __name__ == '__main__':
    test = 1
    if test:
        print(solution(3,4,5) == "YES")
        print(solution(3,5,4) == "YES")
        print(solution(4,5,3) == "YES")
        print(solution(5,1,1) == "NO")
    else:
        a = int(sys.stdin.readline().strip())
        b = int(sys.stdin.readline().strip())
        c = int(sys.stdin.readline().strip())
        solution(a,b,c)
