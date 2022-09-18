//
//  main.c
//  Arrays
//
//  Created by Aryan on 5/21/21.
//

#include <stdio.h>
#define n 10 // size of an array is 10

int main() {
    int s[5] = {89.76,98,91,99};
    printf(" \n----Student Marks Details----");
    int x ;
    for (x=0;x<5;x++){
        printf("\n s%d=%d",x+1 , s[x]);
    }
    int i;
    int arr[5];
    for (i=0;i<=4;i++){
        printf("\n Enter the value of %d ", i);
        scanf("%d",&arr[i]);
    }
    int a[n];  //declaration of array a
    int j;
    
    //initialization of array
    for(j=0; j<n; j++)
    {
        printf("\n enter element %d :",j);
        scanf("%d",&a[j]);
    }

    //print array
    printf("\n Your array elements are :");
    for(j=0; j<n; j++)
    {
        printf("\t%d",a[j]);
    }

    return 0;
}
