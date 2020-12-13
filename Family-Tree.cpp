#include <iostream>
#include <string>
#include <conio.h>
//#include <iomanip>

using namespace std;

string angkel[]={"Jinyoung", "Sandara", "Hanbin", "Junhoe", "Jennie", "Rose", "Jihoon", "Junkyu", "Yeri", "Yedam"};
char status;
int pil, in;
string nama;

int main()
{
    home :

    cout<<"|====================================================|\n";
    cout<<"|====================================================|\n";
    cout<<"|         PROGRAM SILSILAH KELUARGA KWON             |\n";
    cout<<"| --   NADYA ARASSY PRIMAWAN  TI20D2  312010110   -- |\n";
    cout<<"|----------------------------------------------------|\n";
    cout<<"|                 Keterangan Program                 |\n";
    cout<<"|        KETERANGAN                       KODE       |\n";
    cout<<"|----------------------------------------------------|\n";
    cout<<"| JINYOUNG                  |               1        |\n";
    cout<<"| SANDARA                   |               2        |\n";
    cout<<"| HANBIN                    |               3        |\n";
    cout<<"| JUNHOE                    |               4        |\n";
    cout<<"| JENNIE                    |               5        |\n";
    cout<<"| ROSE                      |               6        |\n";
    cout<<"| JIHOON                    |               7        |\n";
    cout<<"| JUNKYU                    |               8        |\n";
    cout<<"| YERI                      |               9        |\n";
    cout<<"| YEDAM                     |               10       |\n";
    cout<<"|====================================================|\n";

        cout << "==============================================================" << endl
             << "| Masukkan anggota keluarga yang ingin diketahui informasinya |" << endl
             << "|        (Harap masukkan sesuai kode yang tertera!)           |" << endl
             << "==============================================================" << endl;
        cout << "Masukkan kode >> ";
        cin >> in;
        pil = in - 1;

        switch (pil)
        {
            case 0:
                nama = "Jinyoung";
                cout << nama << " merupakan : " << endl
                    << "1. Suami dari " << angkel[1] << endl
                    << "2. Ayah dari " << angkel[2] << " dan " << angkel[3] << endl
                    << "3. Ayah mertua dari " << angkel[4] << " dan " << angkel[5] << endl
                    << "4. Kakek dari " << angkel[6] << ", dan " << angkel[7] << endl
                    << "5. Kakek buyut dari " << angkel[9] << endl;
                break;
            case 1:
                nama = "Sandara";
                cout << nama << " merupakan : " << endl
                    << "1. Istri dari " << angkel[0] << endl
                    << "2. Ibu dari " << angkel[2] << " dan " << angkel[3] << endl
                    << "3. Ibu mertua dari " << angkel[4] << " dan " << angkel[5] << endl
                    << "4. Nenek dari " << angkel[6] << ", dan " << angkel[7] << endl
                    << "5. Nenek buyut dari " << angkel[9] << endl;
                break;
            case 2:
                nama = "Hanbin";
                cout << nama << " merupakan : " << endl
                    << "1. Anak dari " << angkel[0] << " dan " << angkel[1] << endl
                    << "2. Suami dari " << angkel[4] << endl
                    << "3. Kakak dari " << angkel[3] << endl
                    << "4. Ayah dari " << angkel[6] << endl
                    << "5. Kakek dari " << angkel[9] << endl
                    << "6. Pakdhe dari " << angkel[7] << endl;
                break;
            case 3:
                nama = "Junhoe";
                cout << nama << " merupakan : " << endl
                    << "1. Anak dari " << angkel[0] << " dan " << angkel[1] << endl
                    << "2. Suami dari " << angkel[5] << endl
                    << "3. Adik dari " << angkel[2] << endl
                    << "4. Ayah dari " << angkel[7] << endl
                    << "5. Kakek dari " << angkel[9] << endl
                    << "6. Paman dari " << angkel[6] << endl;
                break;
            case 4:
                nama = "Jennie";
                cout << nama << " merupakan : " << endl
                    << "1. Menantu dari " << angkel[0] << " dan " << angkel[1] << endl
                    << "2. Istri dari " << angkel[2] << endl
                    << "3. Ibu dari " << angkel[6] << endl
                    << "4. Kakak ipar dari " << angkel[3] << " dan " << angkel[5] << endl
                    << "5. Nenek dari " << angkel[9] << endl
                    << "6. Budhe dari " << angkel[7] << endl;    
                break;
            case 5:
                nama = "Rose";
                cout << nama << " merupakan : " << endl
                    << "1. Menantu dari " << angkel[0] << " dan " << angkel[1] << endl
                    << "2. Istri dari " << angkel[3] << endl
                    << "3. Ibu dari " << angkel[7] << endl
                    << "4. Adik ipar dari " << angkel[3] << " dan " << angkel[4] << endl
                    << "5. Nenek dari " << angkel[9] << endl
                    << "6. Bibi dari " << angkel[6] << endl;    
                break;
            case 6:
                nama = "Jihoon";
                cout << nama << " merupakan : " << endl
                    << "1. Cucu dari " << angkel[0] << " dan " << angkel[1] << endl
                    << "2. Anak dari " << angkel[2] << " dan " << angkel[4] << endl
                    << "3. Suami dari " << angkel[8] << endl
                    << "4. Kakak sepupu dari " << angkel[7] << endl
                    << "5. Ayah dari " << angkel[9] << endl    
                    << "6. Keponakan dari " << angkel[3] << " dan " << angkel[5] << endl;
                break;
            case 7:
                nama = "Junkyu";
                cout << nama << " merupakan : " << endl
                    << "1. Cucu dari " << angkel[0] << " dan " << angkel[1] << endl
                    << "2. Anak dari " << angkel[3] << " dan " << angkel[5] << endl
                    << "3. Adik sepupu dari " << angkel[6] << endl
                    << "4. Keponakan dari " << angkel[2] << " dan " << angkel[4] << endl
                    << "5. Paman dari " << angkel[9] << endl;
                break;
            case 8:
                nama = "Yeri";
                cout << nama << " merupakan : " << endl
                    << "1. Menantu dari " << angkel[2] << " dan " << angkel[4] << endl
                    << "2. Istri dari " << angkel[6] << endl
                    << "3. Ibu dari " << angkel[9] << endl
                    << "4. Kakak ipar dari " << angkel[7] << endl
                    << "5. Keponakan dari " << angkel[3] << " dan " << angkel[5] << endl;
                break;
            case 9:
                nama = "Yedam";
                cout << nama << " merupakan : " << endl
                    << "1. Anak dari " << angkel[6] << " dan " << angkel[8] << endl
                    << "2. Cucu dari " << angkel[2] << " dan " << angkel[4] << " serta " << angkel[3] << " dan " << angkel[5] << endl
                    << "3. Keponakan dari " << angkel[7] << endl
                    << "4. Cicit dari " << angkel[0] << " dan " << angkel[1] << endl;
                break;
            default:
                cout << "Kode tidak tersedia";
                break;
        }
        cout << endl
            << "------------------------------------------------------" << endl
            << "|  Ingin mengetahui anggota keluarga yang lain? [Y/N] |" << endl
            << "------------------------------------------------------" << endl;
        cout << ">> ";
        cin >> status;

    if (status=='N' || status=='n')
    {
        cout << "--------------------------------------------" << endl
            << "|             Program Selesai              |" << endl
            << "|               Annyeong !!                |" << endl
             << "--------------------------------------------" << endl;
        return 0;
    }
    else if (status=='Y' || status=='y')
    {
        goto home;
    }
    
}


