import sys

def solution():
    pass
if __name__ == '__main__':
    test = 1
    if test:
        print(solution() == None)
    else:
        t1,t2 = [int(i) for i in sys.stdin.readline().strip().split()]
        regim = sys.stdin.readline().strip()
        solution(t1,t2,regim)
