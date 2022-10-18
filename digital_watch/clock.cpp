#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
    while (true)
    {
        system("cls");
       	//getting local time
        time_t t = time(NULL);
       	//printing time
        cout << "\n\nProgrammopedia Clock Local time\n";
        cout << "_______________________________\n\n";
        cout << "    " << ctime(&t) << endl;
        cout << "_______________________________\n\n";
        Sleep(1000);
    }
    return 0;
}
