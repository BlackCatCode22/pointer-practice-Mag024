/*  Miguel Gomez

    Pointers and Arrays Practice

    September 11, 2023
    */
#include <iostream>

using namespace std;

int main()
{
    //int pointerSub;
    int someArray[10] = {3, 6, 9, 12, 15, 18 , 21, 24, 27, 30};


   // int *pLocation3 = &someArray[6];
   // int *pLocation0 = &someArray[0];
/*


    cout << "welcome to Pointers \n\n" << endl;
    cout << "*pLocation6 Adrress " << *pLocation6 << "\n\n";
    cout << "*pLocation0 Adrress " << *pLocation0 << "\n\n";
    cout << "Location0 Adrress " <<  pLocation6 << "\n\n";
    cout <<  "pLocation6 Adrress " << pLocation0 << "\n\n";
    cout << "&someArray[6] Adrress " << &someArray[6] << "\n\n";
    cout << "&someArray[0] Adrress " << &someArray[0] << "\n\n";

    pointerSub = &someArray[0]- & someArray[6];

    cout << "the difference between addresses 0 by 6 is " << pointerSub << endl;
    */


    // for loop with array
    /*

    // problem at this point making *plocation0 - reeclaration
    int *pLocation0 = someArray[0];

    for (int i = 0; i < 10; i++){
        // cout << "\n" << someArray + i << " = " << *(someArray + i) << "\n";
        cout << pLocation0 << " = " << *pLocation0 << endl;
        pLocation0++;
    } */

    // Character Pointers 1127
/*
    char someString[];

    char *psomeString = someString;

    cout << "psomeString = " << psomeString << endl;

    char *pLocation3 = &someString[3];
    char *pLocation0 = &someString[0];

    cout << "pLocation3 = " << pLocation3 << endl;
    cout << "pLocation0 = " << pLocation0 << endl;
    cout << "Difference = " << pLocation3 - pLocation0 << endl;
    */

    // Chars Array Practice 1147 - youtube video at 16 minutes
    char someChars[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

     char *psomeChars = someChars;

    cout << "psomeChars = " << psomeChars << endl;

    char *pLocation3 = &someChars[3];
    char *pLocation0 = &someChars[0];

    cout << "pLocation3 = " << pLocation3 << endl;
    cout << "pLocation0 = " << pLocation0 << endl;
    cout << "Difference = " << pLocation3 - pLocation0 << endl;

    return 0;
}
