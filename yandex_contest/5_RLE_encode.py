# На вход подается строка вида AABBCCDD, если символ встречается 1 раз 
# он остается без изменений, если символ повторяется несколько раз, к нему добавляется количетсво повторений
import sys

def solution(string):



if __name__ == '__main__':
    test = 1
    if test:
        print(solution("AABBCCDD") == "A2B2C2D2")
    else:
        t1,t2 = [int(i) for i in sys.stdin.readline().strip().split()]
        regim = sys.stdin.readline().strip()
        solution(t1,t2,regim)
