# C++ 알고리즘 공부하면서 알게된 점

### std::Vector<T>의 인수 종류들
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
     std::vector<int> vec(10, 42); // 크기 10, 모든 요소는 42로 초기화
     ```

  4. 크기만 지정하는 생성자
     ```C++
     std::vector<int> vec(10); // 크기 10, 모든 요소는 0으로 초기화
     ```

  5. 다른 벡터를 복사하는 생성자
     ```C++
     std::vector<int> vec1 = {1, 2, 3};
     std::vector<int> vec2(vec1); // vec2는 vec1의 복사본
     ```
  6. 이동 생성자
     ```C++
     std::vector<int> vec1 = {1, 2, 3};
     std::vector<int> vec2(std::move(vec1)); // vec2는 vec1의 이동된 버전
     ```

  7. 범위를 지정하는 생성자
     ```C++
     std::vector<int> vec1 = {1, 2, 3, 4, 5};
     std::vector<int> vec2(vec1.begin(), vec1.end()); // vec2는 vec1의 복사본
     ```



