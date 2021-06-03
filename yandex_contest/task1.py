import sys

def solution(t1,t2,regim):
    if regim == 'freeze':
        if t2 < t1:
            return t2
        return t1
    if regim == 'heat':
        if t2 > t1:
            return t2
        return t1
    if regim == 'auto':
        return t2
    if regim == 'fan':
        return t1
if __name__ == '__main__':
    test = 1
    if test:
        print(solution(10,20,"heat") == 20)
        print(solution(10,20,"freeze") == 10)
        print(solution(10,0,"freeze") == 0)
    else:
        t1,t2 = [int(i) for i in sys.stdin.readline().strip().split()]
        regim = sys.stdin.readline().strip()
        solution(t1,t2,regim)
