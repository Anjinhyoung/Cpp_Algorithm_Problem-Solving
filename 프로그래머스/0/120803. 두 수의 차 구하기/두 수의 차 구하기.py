def solution(num1, num2):
    if num1 < -50000 or num1 > 50000 or num2 < -50000 or num2 > 50000:
        return 0
    else:
        return num1 - num2