#include <iostream>
#include <queue>
#include <tuple>

int row, col, height; 
int map[101][101][101]; // 층, 행, 열
bool visited[101][101][101]; // 층, 행, 열
std::queue<std::tuple<int, int, int, int>> que; // 층, 행, 열, 카운트
int cnt = 0;
int cnt3 = cnt;

void bfs() 
{
    while (!que.empty())
     {
        int height2 = std::get<0>(que.front());
        int row2 = std::get<1>(que.front());
        int col2 = std::get<2>(que.front());
        int cnt2 = std::get<3>(que.front());

        que.pop();

        int heights[6] = { 0,0,0,0,1,-1 };
        int rows[6] =    { 0,1,0,-1,0,0 };
        int cols[6] = { 1,0,-1,0,0,0 };

        for (int i = 0; i < 6; i++) 
        {
            int nh = height2 + heights[i];
            int nr = row2 + rows[i];
            int nc = col2 + cols[i];

            if (nh <1 || nh > height || nr < 1 || nr > row || nc < 1 || nc > col || visited[nh][nr][nc]) continue;

            if (visited[nh][nr][nc] == false && map[nh][nr][nc] == 0) 
            {
                visited[nh][nr][nc] = true;
                map[nh][nr][nc] = 1;
                que.push({ nh,nr,nc,cnt2 + 1 });
                cnt3 = cnt2 + 1;
            }
        }
     }
}

void cout();

int main() {
    
    std::cin >> col >> row >> height;

    int num;

    for (int a = 1; a <= height; a++) 
    {
        for (int b = 1; b <= row; b++) 
        {
            for (int c = 1; c <= col; c++) 
            {
                std::cin >> num;
                if (num == 1)
                {
                    visited[a][b][c] = true;
                    map[a][b][c] = 1;
                    que.push({ a,b,c,cnt });
                }
                else if (num == -1) map[a][b][c] = -1;
            }
        }
    }




    bfs(); cout();
}

void cout() 
{
    for (int a = 1; a <= height; a++)
    {
        for (int b = 1; b <= row; b++)
        {
            for (int c = 1; c <= col; c++)
            {
                if (map[a][b][c] == 0) 
                {
                    std::cout << -1;
                    return;
                }
            }
        }
    }

    std::cout << cnt3;
}