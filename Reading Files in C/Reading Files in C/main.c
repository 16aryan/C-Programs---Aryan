//
//  main.c
//  Reading Files in C
//
//  Created by Aryan on 7/10/21.
//

#include <stdio.h>

int main() {
    FILE*fpointer;
    fpointer=fopen("cheese.txt","r");
    char singleline[150];
    while(!feof(fpointer)){
        fgets(singleline,150,fpointer);
        puts(singleline);
    }
    fclose(fpointer);
    return 0;
}
