#include <iostream>
#include<vector>
using namespace std;

void printPermutation(string &str, int index) {
	//base case
	if(index >= str.length() ) {
		cout << str << " ";
		return;
	}

	for(int j = index; j<str.length(); j++) {
		swap(str[index], str[j]);
		//recursion bhaiya
		printPermutation(str, index+1);
		//backtracking
		swap(str[index], str[j]);
	}
	
}


//a function that will handle all the below mentioned possibilities:
//posssiblity hai
	//-> path closed
	//out if bound 
	// check is pos is already visited
bool isSafe(int srcX, int srcY, int newX, int newY, int maze[][4], int row, int col,  vector<vector<bool > > &visited) {
	if(
		(newX >=0 && newX <row) &&
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


void printAllPath(int maze[][4], int row, int col, int srcX, int srcY, string &output, vector<vector<bool > > &visited) {

	//base case
	//destination co-ordinates are [row-1], [col-1]
	if(srcX == row-1 && srcY == col-1) {
		//reached destination
		cout << output << endl;
		return;
	}


	//One case Solution and other, Recurasion will handle it

	//UP
	int newX = srcX-1;
	int newY = srcY;
	if(isSafe(srcX, srcY, newX, newY,maze,row,col,visited )) {
		//mark visited
		visited[newX][newY] = true;
		//call recursion
		output.push_back('U');
		printAllPath(maze, row, col, newX, newY, output , visited );
		//backtracking
		output.pop_back();
		visited[newX][newY] = false;
	}


	//RIGHT
	 newX = srcX;
	 newY = srcY+1;
	if(isSafe(srcX, srcY, newX, newY,maze,row,col,visited )) {
		//mark visited
		visited[newX][newY] = true;
		//call recursion
		output.push_back('R');
		printAllPath(maze, row, col, newX, newY, output , visited );
		//backtracking
		output.pop_back();
		visited[newX][newY] = false;
	}

	//DOWN
	newX = srcX+1;
	 newY = srcY;
	if(isSafe(srcX, srcY, newX, newY,maze,row,col,visited )) {
		//mark visited
		visited[newX][newY] = true;
		//call recursion
		output.push_back('D');
		printAllPath(maze, row, col, newX, newY, output , visited );
		//backtracking
		output.pop_back();
		visited[newX][newY] = false;
	}


	//LEFT
	newX = srcX;
	 newY = srcY-1;
	if(isSafe(srcX, srcY, newX, newY,maze,row,col,visited )) {
		//mark visited
		visited[newX][newY] = true;
		//call recursion
		output.push_back('L');
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
	vector<vector<bool > > visited(row, vector<bool>(col, false));
	
	if(maze[0][0] == 0) {
		//src position is Closed, that means RAT cannot move
		cout << "No Path Exists" << endl;
	}
	else {
		visited[srcX][srcY] = true;
		printAllPath(maze, row, col, srcX, srcY, output, visited);
	}
	
	



	

	// string str = "abc";
	// int index = 0;
	// printPermutation(str, index);




	return 0;
}