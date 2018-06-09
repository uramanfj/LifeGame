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


vector<vector<bool> > flower
    {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,1,1,1,1,1,1,0,1,1,0,0,0},
        {0,0,0,1,1,1,1,1,1,0,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,1,1,0,1,1,1,1,1,1,0,0,0},
        {0,0,0,1,1,0,1,1,1,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };

vector<vector<bool> > spaceship =
    {
        //0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //0
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //1
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //2
        { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

 vector<vector<bool> > oscillator =
    {
        //0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //0
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //1
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //2
        { 0,0,0,0,0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0,0,0,0,0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0,0,0,0,0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0,0,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
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
                int neighbor = 0;

                /*当前点的八个邻居*/
                neighbor += calc( i-1, j-1 );
                neighbor += calc( i-1, j );
                neighbor += calc( i-1, j+1 );
                neighbor += calc( i, j-1 );
                neighbor += calc( i, j+1 );
                neighbor += calc( i+1, j-1 );
                neighbor += calc( i+1, j );
                neighbor += calc( i+1, j+1 );

                switch(neighbor)
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
                    printf("■");
                }
                else
                {
//                	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
                    printf("　");
                }
            } // end fo for j

            printf("\n");

        } // end of for i
    }



};// end of CellMar class

int main()
{
    GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "      Welcome to Ceil Life" << endl;
    cout << "Please choose the view" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
    cout << "input 0 is three ceil a line" <<endl;
    cout << "input 1 is static view" <<endl;
    cout << "input 2 I will give you a flower" <<endl;
    cout << "input 3 you can see a space ship" <<endl;
    cout << "input 4 is a oscillator" <<endl;
    int choose;
    vector<vector<bool> > input;
    cin >> choose;
    if(choose == 0)
        input = line;
    else if(choose == 1)
        input = sta;
    else if(choose == 2)
        input = flower;
    else if(choose == 3)
        input = spaceship;
    else if(choose == 4)
        input = oscillator;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_RED |
                            FOREGROUND_GREEN |
                            FOREGROUND_BLUE);
    CellMar solution(input);
    while(1)
    {
        system("cls");
        solution.MyPrint();
        Sleep(100);
        solution.life();
    }
    return 0;
}
