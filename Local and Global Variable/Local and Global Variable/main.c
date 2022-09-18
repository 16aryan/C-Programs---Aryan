//
//  main.c
//  Local and Global Variable
//
//  Created by Aryan on 7/10/21.
//

#include <stdio.h>
#include <stdlib.h>

void printsomething();
int cookies=23;
int main() {
    printf("I have %d cookies\n",cookies);
    printsomething();
    return 0;
}
void printsomething(){
    printf("I have %d cookies\n" , cookies);
    return;
}
