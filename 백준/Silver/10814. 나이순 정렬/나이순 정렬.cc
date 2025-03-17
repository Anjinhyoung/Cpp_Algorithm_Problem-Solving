#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    // stable sort라는 함수가 알고리즘 헤더 파일에 있다.
    // 순서를 지키는 거
    int num;
    std::cin >> num;

    std::vector<std::pair<int, std::string>> vec;

    for (int i = 0; i < num; i++) 
    {
        int a;
        std::string str;
        std::cin >> a >> str;
        vec.push_back({ a, str });
    }

    std::stable_sort(vec.begin(), vec.end(), [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b)
        { return a.first < b.first; });

    // a.first < b.first => 오름차순
    // a.first > b.fisrt => 내림차순

    for (int i = 0; i < vec.size(); i++) 
    {
        std::cout << vec[i].first << " " << vec[i].second << "\n";
    }
}