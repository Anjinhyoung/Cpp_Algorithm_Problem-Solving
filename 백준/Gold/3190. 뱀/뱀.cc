#include <iostream>
#include <map>
#include <list>

// 보드판
bool board[101][101] = { false, };
// 사과판
bool apples[101][101] = { false, };

int main() {
    // 보드의 크기(하지만 난 넉넉하게 그냥 101, 101로 잡았지)
    int num; std::cin >> num;

    // 사과의 개수
    int num2; std::cin >> num2;

    // 사과의 위치
    for (int i = 0; i < num2; i++) 
    {
        int x, y;
        std::cin >> x >> y;
        apples[x][y] = true;
    }

    // 뱀의 방향 변환 횟수
    int num3; std::cin >> num3;

    // 뱀의 방향 정보를 담고 있는 map
    std::map<int, char> dir_inform;

    // 방향 정보 입력
    for (int i = 0; i < num3; i++)
    {
        int x; char y;
        std::cin >> x >> y;
        dir_inform[x] = y;
    }

    // 방향을 바꿀 때 
    int row[4] = {0,1,0,-1};
    int col[4] = { 1,0,-1,0 };

    // 초기 방향(오른쪽으로 가기(열을 한 칸 이동)
    int dir = 0;
    // 시간
    int time = 0;

    // 뱀
    std::list<std::pair<int, int>> snake;
    snake.push_back({ 1,1 });

    //뱀 위치에 맞춰 보드에 표시하기
    board[snake.front().first][snake.front().second] = true;

    while (true) 
    {
        // 항상 시간은 증가시키고
        time++;

        // 다음에 이동할 거
        int n_row = snake.front().first + row[dir];
        int n_col = snake.front().second + col[dir];

        // 보드의 범위를 벗어나거나 뱀의 다음 위치가 뱀의 몸과 맞닿을 때 멈추기
        if (n_row <= 0 || n_col <= 0 || n_row > num || n_col > num || board[n_row][n_col]) break;

        // 일단 이동 먼저
        snake.push_front({ n_row,n_col });
        
        // 보드도 true로 바꿔주고
        board[n_row][n_col] = true;

        // 만약에 다음에 이동한 거리가 사과가 있으면 사과를 먹기
        if (apples[n_row][n_col]) apples[n_row][n_col] = false;

        // 없다면 뱀의 꼬리, 보드의 true 부분 지우기
        else 
        {
            board[snake.back().first][snake.back().second] = false;
            snake.pop_back();
        }

        // 시간에 맞춰서 방향 바꾸기
        if (dir_inform.find(time) != dir_inform.end()) 
        {
            if (dir_inform[time] == 'D') dir = (dir + 1) % 4; // 시계 방향
            else dir = (dir + 3) % 4; // 반시계
        }
    }

    std::cout << time;
}