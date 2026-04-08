#include<bits/stdc++.h>
using namespace std;

class Robot {
public:
    int w, h;
    int x, y;
    int dir; // 0=East, 1=North, 2=West, 3=South
    int perimeter;

    vector<string> d = {"East", "North", "West", "South"};
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};

    Robot(int width, int height) {
        w = width;
        h = height;
        x = 0;
        y = 0;
        dir = 0;
        perimeter = 2 * (w + h - 2);
    }
    
    void step(int num) {
        if(perimeter == 0) return;

        num %= perimeter;

        // 🔥 Important edge case
        if(num == 0) num = perimeter;

        while(num--) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            // jab tak valid move nahi milta, turn karte raho
            while(nx < 0 || ny < 0 || nx >= w || ny >= h) {
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }

            x = nx;
            y = ny;
        }
    }
    
    vector<int> getPos() {
        return {x, y};
    }
    
    string getDir() {
        return d[dir];
    }
};
int main() {
    Robot robot(6, 3);

    robot.step(2);
    robot.step(2);

    vector<int> pos1 = robot.getPos();
    cout << pos1[0] << " " << pos1[1] << endl;
    cout << robot.getDir() << endl;

    robot.step(2);
    robot.step(1);
    robot.step(4);

    vector<int> pos2 = robot.getPos();
    cout << pos2[0] << " " << pos2[1] << endl;
    cout << robot.getDir() << endl;

    return 0;
}