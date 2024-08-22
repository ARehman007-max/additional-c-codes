#include <iostream>
using namespace std;

// Global variable
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char player = 'X';
int movecount=0;

// Function to print the board
void print_board()
{
// Game Board LAYOUT
system("cls");
    cout<< "\n\n\t\t\t NOUGHT AND CROSSES GAME"<<endl;
    cout<<endl<<endl;

    cout<<"\t (X) For Player No.1  AND (Y) For Player No.2 " <<endl;
    cout<<endl<<endl;
    cout<<"\t\t     |     |    \n";
    cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|____\n";
    cout<<"\t\t     |     |    \n";
    cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|____\n";
    cout<<"\t\t     |     |    \n";
    cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |    \n";
}

// Function to check if a player has won
bool check_win()
{
// Check rows
movecount++;
    for (int i = 0; i < 3; i++)
{
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
{
            return true;
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++)
{
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
{
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
{
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
{
        return true;
    }
    return false;
}

int main() // Main function
{
    print_board();
    while (true)
{
        int move;
        cout << "Player " << player << ", enter a number in your desired box: ";
        cin >> move;
        // Update the board
        int row, col;
        switch (move)
{
            case 1:
row = 0; col = 0;
break;
case 2:
row = 0; col = 1;
break;
              case 3:
row = 0; col = 2;
break;
            case 4:
row = 1; col = 0;
  break;
            case 5:
row = 1; col = 1;
  break;
            case 6:
row = 1; col = 2;
  break;
            case 7:
row = 2; col = 0;
  break;
            case 8:
row = 2; col = 1;
  break;
            case 9:
row = 2; col = 2;
  break;
        }
        if (board[row][col] != 'X' && board[row][col] != 'Y')
{
   
            board[row][col] = player;
        }
else
{         cout << "Invalid move! Give it another SHOT." << endl<<endl;
            continue;
        }
        print_board();
        if (check_win())
{
            cout << "Player " << player << " has WON" << endl;
            break;
        }
        if(movecount==9)
        {cout<<"match draw try again\n";
        exit(1);
		}
        if (player == 'X')
{
            player = 'Y';
        }
else
{
            player = 'X';
        }
}
}