#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num,guess_num,trials=1,limits,ch,res_game,guess_left;
    srand(time(0));
    num = rand()%100 + 1;
    printf("For instructions Press 1 ,To play the game Press 2 :");
    scanf("%d",&ch);
    if (ch == 1)
    {
        printf("The instructions are simple \n");
        printf("A random number is generated by computer  \n");
        printf("You have to find it in the number of trials you have entered \n");
        printf("If you enter the correct number before the trials run out,you win  \n");

    }
    
    if (ch == 2){
        printf("How many trials do you need :");
        scanf("%d",&limits);
        guess_left = limits;
        do
        {
            printf("Enter your guess(1-100) : \n");
            scanf("%d",&guess_num);
            printf("You have %d trials left! \n",guess_left-1);
            guess_left -= 1;
            if (guess_left == 0)
            {
                printf("You have lost!!! \n");
                printf("The number  is %d \n",num);
                break;
            }
            
            if (guess_num < num)
            {
                printf("Enter a higher number \n");
                trials += 1;
                
            }
            if (guess_num > num)
            {
                printf("Enter a lower number \n");
                trials += 1;
            }
            if (guess_num == num)
            {
                printf("Wow,you have found the number, the number is %d \n",num);
                printf("You did this in %d trys \n",trials);
                break;
            } 
            
        } while (trials < limits+1);
            

    }
    printf("TIP:To make the game harder decrease the trials \n");
    printf("Coded by Ganesh");
    return 0;
}
