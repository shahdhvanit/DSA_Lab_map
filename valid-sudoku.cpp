class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            for(int i=0;i<9;i++){
                map<int,int> mp;
                for(int j=0;j<9;j++){
                    if(board[i][j]!='.' && mp[board[i][j]]){
                        return false;
                    }
                    mp[board[i][j]]++;
                }
            }
            for(int j=0;j<9;j++){
                map<int,int> mp;
                for(int i=0;i<9;i++){
                    if(board[i][j]!='.' && mp[board[i][j]]){
                        return false;
                    }
                    mp[board[i][j]]++;
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    map<int,int> mp;
                    for(int x=0;x<3;x++){
                        for(int y=0;y<3;y++){
                            if(board[3*i+x][3*j+y]!='.' && mp[board[3*i+x][3*j+y]]){
                                return false;
                            }
                            mp[board[3*i+x][3*j+y]]++;
                        }
                    }
                }
            }
            return true;
        }
    };