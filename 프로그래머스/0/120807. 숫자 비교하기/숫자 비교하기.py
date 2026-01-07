def solution(num1, num2):
    
    if num1 < 0 or num1 > 10000 or num2 < 0 or num2 > 10000:
        return false
    
    if num1 != num2:
        return -1
    
    else:
        return 1