#include<bits/stdc++.h>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board) {
    // row check
    for(int i = 0 ; i < 9; ++i){
        unordered_set<char>st;
        for(int j=0;j<9;++j){
            if(board[i][j]=='.') continue;
            if(st.count(board[i][j])) return false;
            st.insert(board[i][j]);
        }
    }
    // column check
    for(int j = 0 ; j < 9; ++j){
        unordered_set<char>st;
        for(int i=0;i<9;++i){
            if(board[i][j]=='.') continue;
            if(st.count(board[i][j])) return false;
            st.insert(board[i][j]);
        }
    }
    // check 3*3
    for(int boxRow=0;boxRow<3;boxRow++){
        for(int boxCol=0;boxCol<3;boxCol++){
            unordered_set<char>st;
            for(int i = 0 ; i < 3; ++i){
                for(int j=0;j<3;++j){
                    char val = board[boxRow*3+i][boxCol*3+j];
                    if(val=='.') continue;
                    if(st.count(val)) return false;
                    st.insert(val);
                }
            }
        }
    }
    return true;
}
int main(){
    vector<vector<char>>sudoku={
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}

    };
    
    cout<<isValidSudoku(sudoku);
    
    return 0;
}