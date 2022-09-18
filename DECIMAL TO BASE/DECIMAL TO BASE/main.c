//
//  main.c
//  DECIMAL TO BASE
//
//  Created by Aryan on 6/6/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int x, y, c; //Sets up variables to be used in program

  printf("Please enter two integers: "); //Asks for user input
  scanf("%d", &x);
  scanf("%d", &y); //stores input

  printf("%d\n", x);
  printf("%d\n", y);
  printf(" \n");

  if(y < 2 || y > 16){
    printf("You have entered incorrect information.\n");
           return 0;
  } //bug checks

  else if(y > 1 && y < 17){

    while(x != 0){
       c = (x%y);
       x = (x/y); // Loops numbers until a 0 value is reached, can be used with
                  // any Base

     if( c == 10){
        c = printf("A");
    }else if( c == 11){
        c = printf("B");
    }else if( c == 12){
        c = printf("C");
    }else if( c == 13){
        c = printf("D");
    }else if( c == 14){
        c = printf("E");
    }else if( c == 15){
        c = printf("F");
    }else{
        printf("%d", c);
    }
     // Returns for each remainer option
    }
    printf("\n");
  }
}

