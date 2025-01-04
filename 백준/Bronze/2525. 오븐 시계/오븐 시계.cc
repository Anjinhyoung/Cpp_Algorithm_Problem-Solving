#include <iostream>

int main() {
    int hour, min, time;
    std::cin >> hour >> min >> time;

    if (time / 60 == 0) 
    {
        // 아무것도 없습니다.
    }
    else 
    {
        hour += time / 60;
        if (hour >= 24) {
            hour -= 24;
        }
    }

    if (min + (time % 60) >= 60)
    {
        hour++;
        if (hour == 24) {
            hour = 0;
        }
        min = (min + (time % 60)) - 60;
    }
    else
    {
        min += (time % 60);
    }

    std::cout << hour << ' ' << min << std::endl;
    return 0;
}