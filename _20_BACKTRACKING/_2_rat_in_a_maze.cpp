#include <iostream>
using namespace std;
#define N 4

void printSolution(int sol[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf(" %d ", sol[i][j]);
		printf("\n");
	}
}

bool isSafe(int maze[N][N], int i, int j)
{
	return (i < N && j < N && maze[i][j] == 1);
}

bool solveMazeRec(int maze[N][N], int i, int j, int sol[N][N])
{
	if (i == N - 1 && j == N - 1 && maze[i][j] == 1)
	{
		sol[i][j] = 1;
		return true;
	}
	if (isSafe(maze, i, j))
	{
		sol[i][j] = 1;
		if (solveMazeRec(maze, i + 1, j, sol))
			return true;
		if (solveMazeRec(maze, i, j + 1, sol))
			return true;
		sol[i][j] = 0;
	}
	return false;
}

bool solveMaze(int maze[N][N])
{
	int sol[N][N] = {{0, 0, 0, 0},
					 {0, 0, 0, 0},
					 {0, 0, 0, 0},
					 {0, 0, 0, 0}};

	if (solveMazeRec(maze, 0, 0, sol) == false)
	{
		printf("Solution doesn't exist");
		return false;
	}

	printSolution(sol);
	return true;
}

int main()
{
	int maze[N][N] = {{1, 0, 0, 0},
					  {1, 1, 0, 1},
					  {0, 1, 0, 0},
					  {1, 1, 1, 1}};

	solveMaze(maze);
	return 0;
}