﻿#include "HeaderOfFunctions.h"

int main()
{
   
    int size;
    void (*ptr)(int*, int);
    int menu_button;
 


    while (true) {

        cout << "1 - Booble, 2 - Shell, 3 - Shuttle  0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
           cout << "\t\t\t\tInput size: "; cin >> size;
            int* array_Booble = new int[size];
            cout << "Booble sort:";
            sort(array_Booble, size, BOBOLE);
            delete[] array_Booble;
        }
        if (menu_button == 2) {
            system("cls");
            cout << "Input size: "; cin >> size;
            int* array_Shell = new int[size];
            cout << "\t\t\t\tShell sort";
            sort(array_Shell, size, Shell);
            delete[] array_Shell;
        }
        if (menu_button == 3) {
            system("cls");
            cout << "Input size: "; cin >> size;
            int* array_Shuttle = new int[size];
            cout << "\t\t\t\tShuttle sort";
            sort(array_Shuttle, size, Shuttle);
            delete[] array_Shuttle;
        }
        if (menu_button == 0) {
            system("cls");
            exit(NULL);
        }

    }


}

