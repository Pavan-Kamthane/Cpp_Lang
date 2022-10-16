#include <iostream>
#include <string>
using namespace std;

void Magnify_string(char str[50]){
    string arr[5] = {"","","","",""};
    for(int i=0;i<50;i++){
        arr[0]+="  ";
        arr[1]+="  ";
        arr[2]+="  ";
        arr[3]+="  ";
        arr[4]+="  ";
        if(str[i]){
        if(toupper(str[i])=='A'){
            arr[0]+=" ***  ";
            arr[1]+="*    *";
            arr[2]+="******";
            arr[3]+="*    *";
            arr[4]+="*    *";
            }
        else if(toupper(str[i])=='B'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="**** ";
            arr[3]+="*   *";
            arr[4]+="**** ";
            }
        else if(toupper(str[i])=='C'){
            arr[0]+=" ****";
            arr[1]+="*    ";
            arr[2]+="*    ";
            arr[3]+="*    ";
            arr[4]+=" ****";
            }
        else if (toupper(str[i])=='D'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+="*   *";
            arr[4]+="**** ";
            }
        else if(toupper(str[i])=='E'){
            arr[0]+="*****";
            arr[1]+="*    ";
            arr[2]+="**** ";
            arr[3]+="*    ";
            arr[4]+="*****";
            }
        else if(toupper(str[i])=='F'){
            arr[0]+="*****";
            arr[1]+="*    ";
            arr[2]+="**** ";
            arr[3]+="*    ";
            arr[4]+="*    ";
            }
        else if(toupper(str[i])=='G'){
            arr[0]+=" ****";
            arr[1]+="*    ";
            arr[2]+="* ***";
            arr[3]+="*   *";
            arr[4]+=" ****";
            }
        else if(toupper(str[i])=='H'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="*****";
            arr[3]+="*   *";
            arr[4]+="*   *";
            }
        else if(toupper(str[i])=='I'){
            arr[0]+="*****";
            arr[1]+="  *  ";
            arr[2]+="  *  ";
            arr[3]+="  *  ";
            arr[4]+="*****";
        }
        else if(toupper(str[i])=='J'){
            arr[0]+="*****";
            arr[1]+="    *";
            arr[2]+="    *";
            arr[3]+="    *";
            arr[4]+="**** ";
        }
        else if(toupper(str[i])=='K'){
            arr[0]+="*   *";
            arr[1]+="*  * ";
            arr[2]+="**   ";
            arr[3]+="*  * ";
            arr[4]+="*   *";
        }
        else if(toupper(str[i])=='L'){
            arr[0]+="*    ";
            arr[1]+="*    ";
            arr[2]+="*    ";
            arr[3]+="*    ";
            arr[4]+="*****";
        }
        else if(toupper(str[i])=='M'){
            arr[0]+="*   *";
            arr[1]+="** **";
            arr[2]+="* * *";
            arr[3]+="*   *";
            arr[4]+="*   *";
        }
        else if(toupper(str[i])=='N'){
            arr[0]+="*   *";
            arr[1]+="**  *";
            arr[2]+="* * *";
            arr[3]+="*  **";
            arr[4]+="*   *";
        }
        else if(toupper(str[i])=='O'){
            arr[0]+=" *** ";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+="*   *";
            arr[4]+=" *** ";
        }
        else if(toupper(str[i])=='P'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="**** ";
            arr[3]+="*    ";
            arr[4]+="*    ";
        }
        else if(toupper(str[i])=='Q'){
            arr[0]+=" **  ";
            arr[1]+="*  * ";
            arr[2]+="** * ";
            arr[3]+="* ** ";
            arr[4]+=" ****";
        }
        else if(toupper(str[i])=='R'){
            arr[0]+="**** ";
            arr[1]+="*   *";
            arr[2]+="**** ";
            arr[3]+="*  * ";
            arr[4]+="*   *";
        }
        else if(toupper(str[i])=='S'){
            arr[0]+="*****";
            arr[1]+="*    ";
            arr[2]+="*****";
            arr[3]+="    *";
            arr[4]+="*****";
        }
        else if(toupper(str[i])=='T'){
            arr[0]+="*****";
            arr[1]+="  *  ";
            arr[2]+="  *  ";
            arr[3]+="  *  ";
            arr[4]+="  *  ";
        }
        else if(toupper(str[i])=='U'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+="*   *";
            arr[4]+=" *** ";
        }
        else if(toupper(str[i])=='V'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="*   *";
            arr[3]+=" * * ";
            arr[4]+="  *  ";
        }
        else if(toupper(str[i])=='W'){
            arr[0]+="*   *";
            arr[1]+="*   *";
            arr[2]+="* * *";
            arr[3]+="** **";
            arr[4]+="*   *";
        }
        else if(toupper(str[i])=='X'){
            arr[0]+="*   *";
            arr[1]+=" * * ";
            arr[2]+="  *  ";
            arr[3]+=" * * ";
            arr[4]+="*   *";
        }
        else if(toupper(str[i])=='Y'){
            arr[0]+="*   *";
            arr[1]+=" * * ";
            arr[2]+="  *  ";
            arr[3]+=" *   ";
            arr[4]+="*    ";
        }
        else if(toupper(str[i])=='Z'){
            arr[0]+="*****";
            arr[1]+="   * ";
            arr[2]+="  *  ";
            arr[3]+="*    ";
            arr[4]+="*****";
        }
        }else{
            break;
        }
    }
    
    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << arr[3]<< endl << arr[4]<< endl << arr[5]<< endl;
}
int main(){
    cout << "-->";
    char str[50];
    cin.getline(str,50);
    Magnify_string(str);
}