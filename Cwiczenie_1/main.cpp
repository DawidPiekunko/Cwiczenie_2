#include <iostream>
#include <windows.h>

using namespace std;


void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
void choinka(int x)
{
     for(int i=0;i<(x/2)+1;i++)
    {

        for(int j=0; j<x ;j++)
        {
            gotoxy(j+40,i);

            if(j+i<x/2||j-i>x/2)
                cout<<" ";
            else
                cout<<"x";
        }
        if(i==(x/2)-1)
            break;
        cout<<endl;
    }
}

int main()
{
    int x;


    cout<<"Podaj ilosc wierszy?"<<endl;
    cin>>x;
    x=x*2;
    choinka(x);

    return 0;
}





