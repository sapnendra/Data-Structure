#include <iostream>
#include<vector>
using namespace std;
//a function that will handle all the below mentioned possibilities:
//posssiblity hai
//-> path closed
//out if bound 
// check is pos is already visited
bool isSafe(int srcX, int srcY, int newX, int newY, int maze[][4], int row, int col,  vector<vector<bool > > &visited) {
	if(
		(newX >=0 && newX < row) &&
		(newY >=0 && newY < col) &&
		maze[newX][newY] == 1 &&
		visited[newX][newY] == false
		) {
		return true;
		}
	else {
		return false;
	}
}

void printAllPath(int maze[][4], int row, int col, int srcX, int srcY, string &output, vector<vector<bool>> &visited) {

	//base case
	//destination coordinates are [row-1], [col-1]
	if(srcX == row-1 && srcY == col-1) {
		//reached destination
		cout << output << endl;
		return;
	}

	// One case solution for all directions and other, Recursion will handle
	//UP
	int newX = srcX-1;
	int newY = srcY;
	if(isSafe(srcX, srcY, newX, newY, maze, row, col,  visited)) {
		//mark visited
		visited[newX][newY] = true;
		output.push_back('U');
        //call recursion
		printAllPath(maze, row, col, newX, newY, output , visited);
		//backtracking
		output.pop_back();
        //mark unvisited
		visited[newX][newY] = false;
	}

	//RIGHT
	newX = srcX;
	newY = srcY+1;
	if(isSafe(srcX, srcY, newX, newY, maze, row, col, visited)) {
		//mark visited
		visited[newX][newY] = true;
        output.push_back('R');
		//call recursion
		printAllPath(maze, row, col, newX, newY, output , visited);
		//backtracking
		output.pop_back();
        //mark unvisited
		visited[newX][newY] = false;
	}

	//DOWN
	newX = srcX+1;
	 newY = srcY;
	if(isSafe(srcX, srcY, newX, newY,maze,row,col,visited )) {
		//mark visited
		visited[newX][newY] = true;
		output.push_back('D');
        //call recursion
		printAllPath(maze, row, col, newX, newY, output , visited );
		//backtracking
		output.pop_back();
        //mark unvisited
		visited[newX][newY] = false;
	}

	//LEFT
	newX = srcX;
	newY = srcY-1;
	if(isSafe(srcX, srcY, newX, newY,maze,row,col,visited )) {
		//mark visited
		visited[newX][newY] = true;
		output.push_back('L');
        //call recursion
		printAllPath(maze, row, col, newX, newY, output , visited );
		//backtracking
		output.pop_back();
		visited[newX][newY] = false;
	}
	
}

int main() {

	int maze[4][4] = {
	{1,0,0,0},
	{1,1,0,0},
	{1,1,1,0},
	{1,1,1,1}
	};
	int row = 4;
	int col = 4;

	int srcX = 0;
	int srcY = 0;
	string output = "";

	//craete visited 2D ARRAY
	vector<vector<bool>> visited(row, vector<bool>(col, false));

	if(maze[0][0] == 0) {
		//src position is Closed, that means RAT cannot move
		cout << "No Path Exists" << endl;
	}
	else {
		visited[srcX][srcY] = true;
		printAllPath(maze, row, col, srcX, srcY, output, visited);
	}
	return 0;
}