#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(int i, int j, int n)
    {
        return i >= 0 && j >= 0 && i < n && j < n;
    }

    vector<pair<int, int>> dir = {
        {0, 1},
        {0, -1},
        {1, 0},
        {-1, 0}
    };

    int solvePuzzle(vector<vector<int>> &puzzle,vector<vector<int>> &goal)
    {
        int n = puzzle.size();

        queue<
            
            pair<vector<vector<int>>, 
            pair<pair<int, int>,int>>
            
        > q;

        set<vector<vector<int>>> visited;

        int X, Y;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (puzzle[i][j] == 0)
                {
                    X = i;
                    Y = j;
                }
            }
        }
        int step = 0;
        q.push({puzzle, {{X, Y},step}});
        visited.insert(puzzle);
        

        while (!q.empty())
        {
            auto current = q.front();
            q.pop();

            vector<vector<int>> board = current.first;

            X = current.second.first.first;
            Y = current.second.first.second;
            step = current.second.second;

            if (board == goal)
            {
                puzzle = board;
                return step;
            }

            for (auto t : dir)
            {
                int NX = X + t.first;
                int NY = Y + t.second;

                if (!isValid(NX, NY, n))
                    continue;

                vector<vector<int>> newBoard = board;

                swap(newBoard[X][Y], newBoard[NX][NY]);

                if (visited.count(newBoard))
                    continue;

                visited.insert(newBoard);

                q.push({newBoard, {{NX, NY},step+1}});
            }
        }
        return step;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> puzzle(n, vector<int>(n));
    vector<vector<int>> goal(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> puzzle[i][j];
        }
    }
    cout<<endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> goal[i][j];
        }
    }

    Solution obj;
   cout<<"Step = " << obj.solvePuzzle(puzzle, goal);
   cout<<endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << puzzle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}