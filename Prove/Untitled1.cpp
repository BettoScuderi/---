
#include <conio.h>
#include <string>
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>

using namespace std;


int main()
{
    int myArray2D [2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    for (int i=0; i<2; i++)
    {
        cout << "row [" << i << "] : ";

        for (int j=0; j<4; j++){
            cout << myArray2D[i][j] << " ";
        }

        cout << "\n";
    }
    return 0;
}

