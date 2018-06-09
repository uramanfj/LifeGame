#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

vector<vector<bool> > line =
    {
        { false, false, false, false, false },
        { false, false, false, false, false },
        { false, true,  true,  true,  false },
        { false, false, false, false, false },
        { false, false, false, false, false }
    };
  
vector<vector<bool> > sta
    {
        { false, false, false, false, false ,false, false,false,false,false},
        { false, false, false, false, true ,true, false,false,false,false},
        { false, false, false, false, true ,true, false,false,false,false},
        { false, false, false, false, false ,false, false,false,false,false},
        { false, false, true, false, false ,false, false,true,false,false},
        { false, true, false, true, false ,false, true,false,true,false},
        { false, true, false, true, false ,false, true,false,true,false},
        { false, false, true, false, false ,false, false,true,false,false},
        { false, false, false, false, false ,false, false,false,false,false},
        { false, false, false, false, true ,true, false,false,false,false},
        { false, false, false, false, true ,true, false,false,false,false},
        { false, false, false, false, false ,false, false,false,false,false},
    };
    
class CellMar
{
private:
    int col, row;
    vector<vector<bool> > mar;
    vector<vector<bool> > nextmar;

public:

    CellMar()
    {
        col = 6;
        row = 6;

        mar.resize(row);
        for (auto elem : mar)
        {
            elem.resize(col);
        }

        nextmar.resize(row);
        for (auto elem : nextmar)
        {
            elem.resize(col);
        }
    }

    CellMar( vector<vector<bool> > &input )
    {

        mar = input;
        nextmar = mar;
        col = mar[0].size();
        row = mar.size();
    }
	
    int calc(int x, int y)
    {
        if (mar[x][y])
        {
            return 1;
        }

        return 0;
    }

    void life()
    {
        for(int i = 1; i < row-1; i++)
        {
            for ( int j = 1; j < col-1; j++ )
            {
                int sum = 0;

                sum += calc( i-1, j-1 );
                sum += calc( i-1, j );
                sum += calc( i-1, j+1 );
                sum += calc( i, j-1 );
                sum += calc( i, j+1 );
                sum += calc( i+1, j-1 );
                sum += calc( i+1, j );
                sum += calc( i+1, j+1 );

                switch(sum)
                {
                    case 2:
                        nextmar[i][j] = mar[i][j];
                        break;
                    case 3:
                        nextmar[i][j] = true;
                        break;
                    default:
                        nextmar[i][j] = false;
                } // end of switch
            } // end fo for j
        } // end of for i

        mar = nextmar;

    }  // end of life func

    void MyPrint()
    {
        for(int i = 1; i < row-1; i++)
        {
            for ( int j = 1; j < col-1; j++ )
            {
                if ( mar[i][j] )
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            } // end fo for j

            printf("\n");

        } // end of for i
    }



};// end of CellMar class
  
int main()
{
	int choose;
	vector<vector<bool> > input;
	cin >> choose;
	if(choose == 0)
    	input = line; 
    else 
    	input = sta; 
    
    CellMar solution(input);

    for ( int i = 0; i < 10; i++ )
    {
        Sleep(1000);
        system("cls"); 
        solution.MyPrint();
        solution.life();
    }

    return 0;
}
