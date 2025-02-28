//
// Created by Aqib Javed on 05/03/2025.
//
#include "iostream"
using namespace std;

// Time complexity O(n*m) and space O(n*m)
class MazeRunner1 {
    private:
      vector<int> moves;
      vector<vector<int> > maze;
      vector<int> destination;
    public:
    bool hasPath(vector<vector<int> >& maze, vector<int>& start, vector<int>& destination) {
        this->maze = maze;
        vector<vector<bool> > visited(maze.size(), vector<bool>(maze[0].size()));
        this->destination = destination;
        moves.push_back(-1);
        moves.push_back(0);
        moves.push_back(1);
        moves.push_back(0);
        moves.push_back(-1);
        return hasPathRecur(start[0], start[1], visited);
    }

    bool hasPathRecur(int x, int y, vector<vector<bool> >& visited) {
      if(visited[x][y]) {
        return false;
      }

      if(x == destination[0] && y == destination[1]) {
        return true;
      }

      visited[x][y] = true;
      for(int m = 0; m < moves.size() - 1; m++) {
        int newX = x;
        int newY = y;
        while(newX >= 0 && newX < maze.size()
                 && newY >= 0 && newY < maze[newX].size()
                      && maze[newX][newY] == 0){
           newX += moves[m];
           newY += moves[m + 1];
         }

         // going to previous step
         if(hasPathRecur(newX - moves[m], newY - moves[m + 1], visited)) {
           return true;
         }
      }

      return false;
    }
};