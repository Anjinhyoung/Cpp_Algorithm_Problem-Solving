def solution(num1, num2):
    if num1 <= 0 or num1 > 100 or num2 <= 0 or num2 > 100:
        return False
    
    answer = int(num1 / num2 * 1000)
    
    return answer
    