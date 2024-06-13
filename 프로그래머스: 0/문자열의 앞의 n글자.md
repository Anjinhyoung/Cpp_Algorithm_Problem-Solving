![image](https://github.com/Anjinhyoung/Cpp_Algorithm_Problem-Solving/assets/117788976/cf049e79-c604-43d3-8e4e-357d7e889d15)

사실 이 문제를 볼 때 나는 추천 방법과 다르게 풀었다.

```C++
#include <string>

std::string solution(std::string my_string, int n) {
    std::string answer = "";
    
    for(int order = 0; order < n; order++){
        answer+=my_string[order]; 이것도 통과
    }
    
    return answer;
}
```

이런 식으로 풀었었다. 하지만 다양한 풀이 방법을 보면서 새로운 걸 알 게 되었다.

### 문자열도 '배열' 이니까 **vector** 같이 push_back() 이 가능하다. 즉

```C++
#include <string>

std::string solution(std::string my_string, int n) {
    std::string answer = "";
    
    for(int order = 0; order < n; order++){
        answer.push_back(my_string[order]); 
    }
    
    return answer;
}
```
이 코드도 가능하다는 것이다. (진짜 놀랐다...)

### 새로운 함수 substr()

이 함수는 주어진 문자열에서 특정 범위의 부분 문자열을 추출하는 데 사용이 된다.
예를 들어

```C++
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    
    // 인덱스 7부터 시작하는 길이가 5인 부분 문자열을 추출합니다.
    std::string sub = str.substr(7, 5); // 결과: "world"
    
    std::cout << sub << std::endl;

    return 0;
}
```

이런 식으로 사용한다. 그러면 프로그래머스 문제에 대입해보면

```C++
#include <string>

std::string solution(std::string my_string, int n) {
    std::string answer = my_string.substr(0,n);
    return answer;
}
```

## 추가(insert)를 활용하는 방법

```C++
#include <string>



std::string solution(std::string my_string, int n) {
    std::string answer = "";
    
    for(int order = 0; order < n; order++){
        answer.insert(answer.end(), 1, my_string[order]);
    }
    
    return answer;
}

```

이런 식으로 풀면 된다. 고작 문자열 하나 문제인데 많은 걸 알고 가는 기분이다.

