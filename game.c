#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf ("*********************************\n");
    printf ("*********  1.start  **********\n");
    printf ("*********  0.exit   **********\n");
    printf ("*********************************\n");
}
void game ()
{
    int guess = 0;
int pse = rand()%100+1;
for (;1;)
{
    printf ("请猜数字\n");
    scanf("%i",&guess);
    if(guess<pse)
    printf("猜小了\n");
    else if(guess>pse)
    printf("猜大了\n");
    else
    {printf ("猜到了\n");
    break;
    }
}
}
int main ()
{
    int imput = 0; 
    srand((unsigned int )time(NULL));
    menu();
    do
    {
    printf ("choose:");
    scanf ("%i",&imput);
      switch(imput)
      {
    case 0:
      printf ("已退出");
      break;
    case 1:
      game ();
      break;
    default:
      printf ("输入错误，请重新输入\n");  
      break;
    } 
    }
    while (imput);
}