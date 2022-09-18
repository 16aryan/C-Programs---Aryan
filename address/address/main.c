//
//  main.c
//  address
//
//  Created by Aryan on 6/1/21.
//

#include <stdio.h>

int main() {
    int a=10;
    float b=2.5,c=12.36;
    double d=12345.66;
    char ch='A';
    printf("%d is stored in location %u \n",a , &a);
    printf("%f is stored in location %u \n",b , &b);
    printf("%f is stored in location %u \n",c , &c);
    printf("%f is stored in location %u \n",d , &d);
    printf("%c is stored in location %u \n",ch , &ch);
    return 0;
}
