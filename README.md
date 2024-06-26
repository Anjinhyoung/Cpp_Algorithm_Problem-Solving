# 프로그래머스 C++
* 프로그래머스는 보통 **using namespace std;** 와 같이 어떠한 이름 공간을 사용하는데 나는 적어도 이 레포지토리에서는 프로그래머스 문제를 풀 때 이 코드를 지우고 풀 것이다.

# C++ 알고리즘 공부하면서 알게된 점

### std::Vector<> 의 인수 종류들 {초기화 방법 (리스트랑, 데큐도 이 방법들을 사용한다.)}
  1. 빈 vector
     ```C++
     std::vector<T> vec;
     ```
  2. 초기화 리스트
     ```C++
     std::vector<int> vec = {1, 2, 3, 4, 5};
     ```
  3. 크기와 초기값을 지정하는 생성자
     ```C++
     std::vector<int> vec(10, 42); 
     ```

  4. 크기만 지정하는 생성자
     ```C++
     std::vector<int> vec(10); 
     ```

  5. 다른 벡터를 복사하는 생성자
     ```C++
     std::vector<int> vec1 = {1, 2, 3};
     std::vector<int> vec2(vec1); 
     ```
  6. 이동 생성자
     ```C++
     std::vector<int> vec1 = {1, 2, 3};
     std::vector<int> vec2(std::move(vec1)); 
     ```

  7. 범위를 지정하는 생성자
     ```C++
     std::vector<int> vec1 = {1, 2, 3, 4, 5};
     std::vector<int> vec2(vec1.begin(), vec1.end()); 
     ```

### std::merge 사용법 
```C++
OutputIt merge( InputIt1 first1, InputIt1 last1,
                InputIt2 first2, InputIt2 last2,
                OutputIt d_first, Compare comp );
```
  1. first1, last1: 첫 번째 정렬된 범위의 시작과 끝 반복자
  2. first2, last2: 두 번째 정렬된 범위의 시작과 끝 반복자
  3. d_first: 병합된 결과를 저장할 범위의 시작 반복자
  4. comp: 두 요소를 비교하기 위한 사용자 정의 비교 함수
     * 기본 버전은 < 연산자를 사용하고, 사용자 정의 비교 함수 버전은 주어진 비교 함수를 사용한다.

