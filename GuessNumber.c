//Guess_Number_Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
   int number,guess,count=1;
   srand(time(0));
   number = rand()%100+1;
   do{
      printf("Guess the number between 1 to 100\n");
      scanf("%d",&guess);
      if(guess > number){
	 printf("Enter Lower number...\n");
      }else if(guess < number){
	 printf("Enter Higher number...\n");
      }else{
	 printf("Congratulations you guess it in %d attempts\n",&count);
      }
      count++;
   }while(guess != number);
   return 0;
}
