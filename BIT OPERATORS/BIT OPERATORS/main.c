//
//  main.c
//  BIT OPERATORS
//
//  Created by Aryan on 6/12/21.
//

#include <stdlib.h>
#include <stdio.h>
int main(){
int x=1 , y=2 ;
    printf("%d %d %d\n\n",x&y,x&&y,x&&&y); //Bitwise Operator
    int z=0;
    printf("%d\n\n",~z); //Not operator (Logical Operator) (~)
    printf("%u\n\n",~z);
    char var=3;
    printf("%d\n\n",var>>1);
    int a=4 , b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After XOR a=%d , b=%d \n\n\n", a , b);
    return 0;
}
    
