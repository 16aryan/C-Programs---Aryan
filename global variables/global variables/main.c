//
//  main.c
//  global variables
//
//  Created by Aryan on 6/10/21.
//

#include <stdio.h>

void main(){
    int a = 10 , b = 20;
    {
        int a = 25 , c = 18;
    printf("%d%d%d",a,b,c);
        {
            int b = 25 , d = 30;
            printf("%d%d%d%d",a,b,c,d);
            }
        printf("%d%d%d%d",a,b,c,d);
        
    }
    printf("%d%d%d%d",a,b,c,d);
}

