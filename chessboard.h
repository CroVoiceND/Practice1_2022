//Оголошення бібліотек
#include <stdio.h>
#include <locale.h>

#define N 8
//Початок функції
void chessboard(int start1, int start2, int finish1, int finish2){
    //Підключення української мови
    setlocale(LC_ALL, "ua");
    //Оголошення змінних
    int board[N+1][N+1] = { 0, }, step = 0; 
    board[start1][start2] = 1;
    //Розрахунок проводиться, доки в масиві елемент призначеної клітинки не дорівнює 1
    while(board[finish1][finish2] != 1){
    //Якщо рядок початкової позиції знаходиться вище, ніж рядок призначеної 
    if(start1 < finish1){
        //Якщо стовпець початкової позиції знаходиться лівіше, ніж стовпець призначеної 
        if(start2 < finish2){
            //Розрахунок проводиться, доки рядки та стовпці не співпадають  
            while(start1 != finish1 && start2 != finish2){
                start1++;
                start2++;
                step++;
                board[start1][start2] = 1;
                printf("\nвниз праворуч");
            }
            //Якщо рядки співпадають
            if(start1 == finish1){
                while(start2 != finish2){
                start2++;
                step++;
                board[start1][start2] = 1;
                printf("\nправоруч");
                }
            }
            //Якщо стовпці співпадають
            else if(start2 == finish2){
                while(start1 != finish1){
                start1++;
                step++;
                board[start1][start2] = 1;
                printf("\nвниз");
                }
            }
        }
        //Якщо стовпці співпадають
        if(start2 == finish2){
            //Розрахунок проводиться, доки рядки не співпадають
            while(start1 != finish1){
                start1++;
                step++;
                board[start1][start2] = 1;
                printf("\nвниз");
            }
        }
        //Якщо стовпець початкової позиції правіше, ніж стовпець призначеної
        if(start2 > finish2){
            //Розрахунок проводиться, доки рядки та стовпці не співпадають 
            while(start1 != finish1 && start2 != finish2){
                start1++;
                start2--;
                step++;
                board[start1][start2] = 1;
                printf("\nвниз ліворуч");
            }
            //Якщо рядки співпадають
            if(start1 == finish1){
                while(start2 != finish2){
                start2--;
                step++;
                board[start1][start2] = 1;
                printf("\nліворуч");
                }
            }
            //Якщо стовпці співпадають
            else if(start2 == finish2){
                while(start1 != finish1){
                start1++;
                step++;
                board[start1][start2] = 1;
                printf("\nвниз");
                }
            }
        }
    }
    //Якщо рядки співпадають
    else if(start1 == finish1){
        //Якщо стовпець початкової позиції знаходиться лівіше, ніж стовпець призначеної 
        if(start2 < finish2){
            //Розрахунок проводиться, доки стовпці не співпадають
            while(start2 != finish2){
                start2++;
                step++;
                board[start1][start2] = 1;
                printf("\nправоруч");
            }
        }
        //Якщо стовпець початкової позиції знаходиться правіше, ніж стовпець призначеної 
        if(start2 > finish2){
            //Розрахунок проводиться, доки стовпці не співпадають
            while(start2 != finish2){
                start2--;
                step++;
                board[start1][start2] = 1;
                printf("\nліворуч");
            }
        }
    }
    //Якщо рядок початкової позиції знаходиться нижче, ніж рядок призначеної 
    else if(start1 > finish1){
        //Якщо стовпець початкової позиції знаходиться лівіше, ніж стовпець призначеної 
        if(start2 < finish2){
            //Розрахунок проводиться, доки рядки та стовпці не співпадають  
            while(start1 != finish1 && start2 != finish2){
                start1--;
                start2++;
                step++;
                board[start1][start2] = 1;
                printf("\nвгору праворуч");
            }
            //Якщо рядки співпадають
            if(start1 == finish1){
                while(start2 != finish2){
                start2++;
                step++;
                board[start1][start2] = 1;
                printf("\nправоруч");
                }
            }
            //Якщо стовпці співпадають
            else if(start2 == finish2){
                while(start1 != finish1){
                start1--;
                step++;
                board[start1][start2] = 1;
                printf("\nвгору");
                }
            }
        }
        //Якщо стовпці співпадають
        if(start2 == finish2){
            //Розрахунок проводиться, доки рядки не співпадають
            while(start1 != finish1){
                start1--;
                step++;
                board[start1][start2] = 1;
                printf("\nвгору");
            }
        }
        //Якщо стовпець початкової позиції знаходиться правіше, ніж стовпець призначеної 
        if(start2 > finish2){
            //Розрахунок проводиться, доки рядки та стовпці не співпадають  
            while(start1 != finish1 && start2 != finish2){
                start1--;
                start2--;
                step++;
                board[start1][start2] = 1;
                printf("\nвгору ліворуч");
            }
            //Якщо рядки співпадають
            if(start1 == finish1){
                //Розрахунок проводиться, доки стовпці не співпадають
                while(start2 != finish2){
                start2--;
                step++;
                board[start1][start2] = 1;
                printf("\nліворуч");
                }
            }
            //Якщо стовпці співпадають
            else if(start2 == finish2){
                //Розрахунок проводиться, доки рядки не співпадають
                while(start1 != finish1){
                start1--;
                step++;
                board[start1][start2] = 1;
                printf("\nвгору");
                }
            }
        }
    }
    }
    //Виводиться масив, який демонструє, яким чином передвигався король до призначеної клітинки(це була моя ініціатива для перевірки програми, тому код заштрихований)
    /*for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            printf("%2d", board[i][j]);
        }
        printf("\n");
    }*/
    //Виводиться найменша кількість кроків для досягнення призначеної клітинки
    printf("\nРeзультат: %d ходи", step);
}
