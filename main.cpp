
#include <conio.h>
#include <string>
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <ctime>
#include <unistd.h>

using namespace std;

/*void Livelli(){

    string pg = "#";



}*/


void StmpMappa (int width, int height, string Arr[][42]){
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cout << Arr[i][j];
        }
    }

}

void GenerateMappa (int width, int height, string Arr[][42]){

    static const char platform[] = "-" "--" "---";
    int len = 3;


    string tmp_s;

    //int cas;


    for (int i = 0; i < len; ++i){
            len = rand()%4;

            tmp_s += platform[rand() % 4];


        /*cas = rand()%3;
        cout << cas << endl;
        if ( cas == 0){
            //tmp_s += platform[rand() % (sizeof(platform) - 1)];
            cout << "-" << endl;
            cout << cas << endl;
        }else if (cas == 1) {
            cout << "--" << endl;
            cout << cas << endl;
        }else if (cas == 2){
            cout << "---" << endl;
            cout << cas << endl;
        }*/
    }


        cout << tmp_s << endl;

}

void movimento(int width, int height, string mappa[][42], int xPG, int yPG, string PG){
            char ctrl;
            ctrl = getch();

            if(ctrl == 119){
                mappa[xPG][yPG] = ' ';
                xPG--;
                mappa[xPG][yPG] = PG;
                system("CLS");
                StmpMappa (width, height, mappa);
                GenerateMappa(width, height, mappa);
            }

            if(ctrl == 83){
                mappa[xPG][yPG] = ' ';
                xPG++;
                mappa[xPG][yPG] = PG;
                system("CLS");
                StmpMappa (width, height, mappa);
                GenerateMappa(width, height, mappa);
            }

            if(ctrl == 68){
                mappa[xPG][yPG] = ' ';
                yPG++;
                mappa[xPG][yPG] = PG;
                system("CLS");
                StmpMappa (width, height, mappa);
                GenerateMappa(width, height, mappa);
            }

            if(ctrl == 65){
                mappa[xPG][yPG] = ' ';
                yPG--;
                mappa[xPG][yPG] = PG;
                system("CLS");
                StmpMappa (width, height, mappa);
                GenerateMappa(width, height, mappa);
            }
        };


int main(){
/*
    cout << "                   \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n";
    cout << "                    \xBA      1.MELEE      \xBA\n";
    cout << "                    \xBA      2.PRIEST     \xBA\n";
    cout << "                    \xBA      3.CASTER     \xBA\n";
    cout << "                    \xBA      4.HYBRID     \xBA\n";
    cout << "                    \xBA      4.HYBRID     \xBA\n";
    cout << "                    \xBA      4.HYBRID     \xBA\n";
    cout << "                    \xBA      4.HYBRID     \xBA\n";
    cout << "                    \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n";
    cout << "\n\n\ ";
    */
    string pg = "#";

    string mappa[][42] = {{"\xC9","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD"," ","\n"}, //\xBB
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},  //\xBA
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},
                                            {"\xBA"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","\n"},
                                            {"\xC8","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD","\xCD"," ","\n"} }; //\xBC




    while(true){

            int controllo;
            int x = 42;
            int y = 10;
            cout << "premi 1 per giocare" << endl;
            cout << "premi 0 per uscire" << endl;
            cin >> controllo;
            int xPG = 8;
            int yPG = 1;

            if (controllo == 0)
                break;
            else{

                  Beep(523,300);  // 523 hertz (C5) for 500 milliseconds
                  Beep(587,300);
                  Beep(659,300);
                  Beep(698,300);
                  Beep(784,300);
                  system("CLS");
                int width = x, height = y;
                mappa[xPG][yPG] = pg;
                StmpMappa (width, height, mappa);


                while(true){

                    movimento(width, height, mappa, xPG, yPG, pg);
                    char ctrl;
                    ctrl = getch();


                }


            }
    }

return 0;
}




