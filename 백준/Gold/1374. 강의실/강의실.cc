#include <iostream>
#include <queue>
#include <algorithm>
int main() {

    int num;
    std::cin >> num;

    std::deque<std::pair<int, int>> lecture;


    // 강의실(최소 힙)
    std::priority_queue<int, std::vector<int>, std::greater<int>> room;

    for (int i = 0; i < num; i++)
    {
        int num2, num3, num4;
        std::cin >> num2 >> num3 >> num4;
        lecture.push_back({ num3, num4 });
    }
    // 큐랑 스택은 sort가 불가능

    std::sort(lecture.begin(), lecture.end());

    for (int i = 0; i < num; i++)
    {
        // 첫 강의 일 경우
        if (room.empty())
        {
            room.push(lecture.front().second);
            lecture.pop_front();
        }
        // 두 번째 강의 부터
        else
        {
            // 최소 힙에서 가장 빨리 끝나는 시간보다 강의 시작 시간이 더 빠를경우
            if (lecture.front().first < room.top())
            {
                room.push(lecture.front().second);
                lecture.pop_front();
            }
            // 강의가 끝났을 때
            else
            {
                room.pop();

                room.push(lecture.front().second);
                lecture.pop_front();
            }
        }
    }
    std::cout << room.size();
}

