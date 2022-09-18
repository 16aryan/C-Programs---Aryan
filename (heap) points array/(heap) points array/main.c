//
//  main.c
//  (heap) points array
//
//  Created by Aryan on 7/10/21.
//

#include <stdio.h>

int main() {
    int(i,howMany,total);
    float average;
    int*pointsArray;
    printf("How many numbers to be averaged?\n");
    scanf("%d",&howMany);
    pointsArray = ((int*)malloc(howMany*sizeof(int));
    printf("Enter the numbers");
    for(i=0,i<5,i++){
        scanf("%d",&pointsArray[i]);
        total+=pointsArray[i];
    }
    average = (float)total / (float)howMany ;
    printf("Average is %f average");
    return 0;
}
