#include <iostream>
#define MAX 50
using namespace std;

int w, h, cnt;
int map[MAX][MAX];
bool visit[MAX][MAX];
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

void DFS(int y, int x) {
    if (visit[y][x]) return;
    visit[y][x] = true;

    for (int k = 0; k < 8; k++) {
        int nextY = y + dy[k];
        int nextX = x + dx[k];

        if ( nextY < h && nextY >= 0 && nextX >= 0 && nextX < w && !visit[nextY][nextX] && map[nextY][nextX] == 1) DFS(nextY, nextX);
    }
}

int main() {
    while(1) {
        cnt = 0;
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                map[i][j] = 0;
                visit[i][j] = false;
            }
        }
        cin >> w >> h;
        if (w == 0 && h == 0) break;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                scanf("%d", &map[i][j]);
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (!visit[i][j] && map[i][j] == 1) {
                    DFS(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}