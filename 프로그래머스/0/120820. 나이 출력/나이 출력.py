def solution(age):
    if age <= 0 or age > 120:
        return False
    return 2022 - (age - 1)