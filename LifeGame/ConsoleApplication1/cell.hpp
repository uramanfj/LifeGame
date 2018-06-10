#include<vector>
#include<iostream>
using namespace std;
class CellMar
{
private:
	int col, row;
	vector<vector<int> > mar;
	vector<vector<int> > nextmar;

public:
	CellMar(vector<vector<int> > &input);
	int calc(int x, int y);
	int statusOfnei(int x, int y);
	void life();
	void MyPrint();
};

CellMar::CellMar(vector<vector<int> > &input)
{

	mar = input;
	nextmar = mar;
	col = mar[0].size();
	row = mar.size();
}

int CellMar::calc(int x,int y)
{
	if (mar[x][y])
		return 1;
	return 0;
}

int CellMar::statusOfnei(int x, int y)
{
	int sum = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			sum += calc(i, j);
		}
	}
	sum -= calc(x, y);
	return sum;
}

void CellMar::life()
{
	for (int i = 1; i < row -1; i++)
	{
		for (int j = 1; j < col - 1; j++)
		{
			int sum = 0;
			sum = statusOfnei(i, j);
			switch (sum)
			{
			case 2:
				nextmar[i][j] = mar[i][j];
				break;
			case 3:
				nextmar[i][j] = true;
				break;
			default:
				nextmar[i][j] = false;
			}
		}
	}
	mar = nextmar;
}

void CellMar::MyPrint()
{
	for (int i = 1; i < row - 1; i++)
	{
		for (int j = 1; j < col - 1; j++)
		{
			if (mar[i][j])
				printf("¡ö");
			else
				printf("¡¡");
		}
		printf("\n");
	}
}