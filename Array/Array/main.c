//
//  main.c
//  Array
//
//  Created by Aryan on 7/9/21.
//

#include <stdio.h>

int main() {
    int i;
    int samplearray[5]={3,4,6,21,32};
    
    printf("Element \t Address \t Value");
    
    for(i=0;i<5;i++){
        printf("samplearray[%d] \t %p \t %d \n", i , &samplearray[i] , samplearray[i]);
    }
    //array names are pointers
    printf("\n samplearray \t \t %p \n",samplearray);
    //defrence it
    printf("\n *(samplearray+2) \t\t %d \n", *samplearray+2);
    return 0;
}
