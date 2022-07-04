/*
* @file practic_1.c
* @author Салій Дмитро 515а
* @date 02 липня 2022
* @brief    Розробити програму, що визначає мінімальну кількість ходів, за
*           які король, що знаходиться на клітині шахової дошки з координатами kX, kY,
*           може переміститися в клітину dX, dY.
*/
//Підключення бібліотек
#include <stdio.h>
#include <locale.h>
#include "chessboard.h"

//Підключення функції
/**
* Підраховує кількість кроків від початоквої позиції до плановоного. Роз'яснює як туди добратися
*
* @param start1, start2, finish1, finish2 - вхідні значення
* @param step - кількість кроків
*/
void chessboard(int start1, int start2, int finish1, int finish2);
//Початок програми
int main(){
    //Підключення української мови та оголошення змінних
    setlocale(LC_ALL, "ua");
    char symvol1, symvol2;
    int  start_line, start_column, finish_line, finish_column;
    //Запрошення на ввід данних для початкової клітинки
    printf("Введіть початкову клiтину(наприклад: 1A): ");
    //Ввід данних
    scanf("%d%c", &start_line, &symvol1);
    //Вибір стовпца залежно від введеної літери
    switch(symvol1) {
        case 'A': start_column = 1; break;
        case 'B': start_column = 2; break;
        case 'C': start_column = 3; break;
        case 'D': start_column = 4; break;
        case 'E': start_column = 5; break;
        case 'F': start_column = 6; break;
        case 'G': start_column = 7; break;
        case 'H': start_column = 8; break;
        default: return printf("Нема такого символу на досці");
    }
    //Запрошення на ввід данних для призначеної клітинки
    printf("Введіть клітину призначення: ");
    //Ввід данних
    scanf("%d%c", &finish_line, &symvol2);
    //Вибір стовпца залежно від введеної літери  
    switch(symvol2) {
        case 'A': finish_column = 1; break;
        case 'B': finish_column = 2; break;
        case 'C': finish_column = 3; break;
        case 'D': finish_column = 4; break;
        case 'E': finish_column = 5; break;
        case 'F': finish_column = 6; break;
        case 'G': finish_column = 7; break;
        case 'H': finish_column = 8; break;
        default: return printf("Нема такого символу на досці");
    }
    //Виклик функції
    chessboard(start_line, start_column, finish_line, finish_column);
    //Завершення програми
    return 0;
}
