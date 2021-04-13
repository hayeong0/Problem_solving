/* BOJ 14503 */

#include <iostream>
#include <algorithm>
using namespace std;

int N, M; // 세로, 가로
int x, y; // 로봇청소기의 위치 (x, y)
int dir;    // d=0 북쪽을, 1인 경우에는 동쪽을, 2인 경우에는 남쪽을, 3인 경우에는 서쪽
int moveX[4] = { -1, 0, 1, 0};
int moveY[4] = { 0, 1, 0, -1};
int map[51][51];
int ans = 1; 
int turn = 0;
bool isClean[51][51];

void clean() {
    if (turn == 4) {
        int side = (dir <= 1) ? dir+2 : dir-2;
        x += moveX[side];
        y += moveY[side];
        
        if (0 <= x && x < N && 0 <= y && y < M && map[x][y] == 0) {
            turn = 0;
            clean();
        }     
        return;
    }
    
    // 현재 위치 clean 1
    isClean[x][y] = true;
    
    // 왼쪽 회전, 좌표
    dir = (dir == 0) ? 3 : dir - 1;
    int nx = x + moveX[dir];
    int ny = y + moveY[dir];
    
    // 왼쪽 청소 안한 공간 탐색
    if (nx >= 0 && nx < N && ny >= 0 && ny < M && isClean[nx][ny] == false) {
        x = nx, y = ny, turn = 0, ans++;
    } else { // 왼쪽 방향이 청소되었을 때
        turn++;
    }
    clean();
}

int main() {
    cin >> N >> M;
    cin >> x >> y >> dir;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            if (map[i][j] == 0) isClean[i][j] = false;
            else isClean[i][j] = true;
        }
    }
    clean();
    cout << ans << "\n";
  
    return 0;
}