#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

class Cell
{
public:
    bool state;

    Cell()
    {
        state = false;
    }

};

class CellMar
{
private:
    Cell mar[6][6];
    Cell nextmar[6][6];

public:

    int calc(int x, int y)
    {
        if (mar[x][y].state)
        {
            return 1;
        }

        return 0;
    }

    void life()
    {
        for(int i = 1; i < 5; i++)
        {
            for ( int j = 1; j < 5; j++ )
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
                        nextmar[i][j].state = true;
                        break;
                    default:
                        nextmar[i][j].state = false;
                } // end of switch
            } // end fo for j
        } // end of for i

        for(int i = 1; i < 5; i++)
        {
            for ( int j = 1; j < 5; j++ )
            {
                mar[i][j] = nextmar[i][j];
            }
        }
    }  // end of life func

    void MyPrint()
    {
        for(int i = 1; i < 5; i++)
        {
            for ( int j = 1; j < 5; j++ )
            {
                if ( mar[i][j].state )
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

    CellMar()
    {
    }

    CellMar( bool input[6][6] )
    {
        for(int i = 0; i < 6; i++)
        {
            for ( int j = 0; j < 6; j++ )
            {
                mar[i][j].state = input[i][j];
            } // end fo for j
        } // end of for i
    }

};// end of CellMar class

int main()
{
    bool input[6][6] =
    {
        { false, false, false, false, false, false },
        { false, false, false, false, false, false },
        { false, false, true,  true,  false, false },
        { false, false, true,  true,  false, false },
        { false, false, false, false, false, false },
        { false, false, false, false, false, false }
    };

    CellMar solution(input);

    for ( int i = 0; i < 10; i++ )
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;
        solution.MyPrint();
        solution.life();
    }

    return 0;
}
