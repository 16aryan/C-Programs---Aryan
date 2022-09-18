//
//  main.c
//  GCD of two numbers
//
//  Created by Aryan on 6/6/21.
//

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d \n\n\n", n1, n2, gcd);

    return 0;
}
