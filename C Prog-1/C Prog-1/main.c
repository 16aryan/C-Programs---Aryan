//
//  main.c
//  C Prog-1
//
//  Created by Aryan Goel on 07/05/21.
//

#include <stdio.h>

/* This code takes out the sum of the 10 numbers inputted by the user , if the user continues to add positive numbers the loop will keep proceeding further . If the user inputs a negative number , the loop gets terminated */

int main() {
    int i;
    double number = 0.0;
    double sum = 0.0;
    
    for(i=1 ; i<=10 ; ++i){
        printf("enter number %d: ", i);
        scanf("%lf",&number);
        
        // If the user enters a negative number the loop breaks and if he adds a positive number it continues to the specific number mentioned in the code
        
        if(number<0.0){
            break;
        }
        sum += number; //sum = sum + number
    }
    printf("Sum = %0.2f \n",sum);
    
    
    int z;
    double numbe = 0.0;
    double su = 0.0;
    
    for(z=1 ; z<=10 ; ++z){
        printf("enter number %d: ", z);
        scanf("%lf",&numbe);
        
        // If the user enters a negative number the loop breaks and if he adds a positive number it continues to the specific number mentioned in the code
        
        if(numbe<0.0){
            continue;
        }
        su += numbe; //sum = sum + number
    }
    printf("Sum = %0.2lf \n",su);
    
    return 0;
}
