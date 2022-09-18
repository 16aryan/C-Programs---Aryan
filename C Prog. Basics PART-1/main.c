//
//  main.c
//  print text
//
//  Created by ARYAN GOEL on 04/04/21.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    printf("this is c programming\n");
    
    // \n brings the text to a new line
    
    printf("this is so cool\n");
    printf("this is c programming\t");
    // \t here is the tab and it spaces up two sentences
    printf("this is so cool");
    printf("this is c programming\a");
    
    // \a makes sound it is basically like an alert
    
    printf("this is so cool\n");
    /* this is just a sample comment */
    
    /*now we are going to learn about conversion characters*/
    printf(" %s is the best %s ever\n","c programming", "programming language");
    /* %s is used for words */
    
    printf("I ate %d springrolls\n",3);
    /* here %d is used for numbers */
    
    printf("The value of pie is %f\n",3.141592653589793238);
    /* here the value of pie is a decimal number so here %f is used , it denotes float . Since the value of pie is float %f is used
     here */
    
    printf("The value of pie is %.2f\n",3.141592653589793238);
    printf("The value of pie is %.5f\n",3.141592653589793238);
    /* here the %.nf is used to give command to the computer to print the number upto the particular decimal places . Here the n denotes the no. of decimals upto which the computer is allowed to print */
    
    /* SO LETS TALK ABOUT VARIABLES */
    
    int age;
    age = 19;
    printf("Aryan is %d years old\n",age);
    
    int ages;
    ages = 4900-4881;
    printf("Aryan is %d years old\n",ages);
    
    int agez;
    int currentyear;
    int birthyear;
    
    currentyear = 2021;
    birthyear = 2002;
    agez = currentyear - birthyear;
    printf("Aryan is %d years old\n",agez);
    
    /* REMINDER
     %s - Word or a Sentence
     %d - Real Number or any number without decimal values
     %f - Numbers with decimal values */
    
    
    /* Now Let us talk about string terminator */
    char name[10] = "Aryan Goel";
    printf("My name is %s\n",name);
    
    /* here the char name 10 is the number of characters in the name , I inputted here. So here my name is of 10 characters including the space between the first name and last name */
    
    /* Now let us talk about ARRAYS */
    
    char namez[10] = "Aryan Goel";
    printf("My name is %s\n",namez);
    namez[1] = 'z';
    printf("My name is %s\n",namez);
    
    char food[] ="italian thin crust pizza";
    printf("The best food is %s\n",food);

    strcpy(food,"white cheesy pasta");
    printf("the best food is %s\n",food);
    /* the position of the 'r' in the name Aryan is '1' ....."*/
    
    int weight = 5;
    printf("Jimmy bought %d kilogram potato's\n", weight+1);
    /* Similarly you can use
     '+' for addition
     '-' for subtraction
     '*' for multiplication
     "/" for division
     "%" is the modulus sign and it is the remainder you get when you divide the weight with a particular number
     */
    
    /* Let us see an example for the modulus function '%'  */
    
    int water = 95;
    printf("Amount of water left in the jar is %d litre's \n", water % 3);
    
    int x = 25;
    int y =5;
    printf("%d \n",x/y);
    
    float z = 25.0;
    float o = 5.0;
    printf("%f \n",z/o);
    printf("%.3f \n",z/o);
    /* float gives the float result and int gives the integer result */
    
    int a = 4 + (2 * 4);
    printf("the result is %d\n",a);
    int b = 4 + 2 * 4;
    printf("the result is %d\n",b);
    int c = (4 + 2) * 4;
    printf("the result is %d\n",c);
    
    /* By default the computer program uses bodmas but with the brackets or the paranthesis you can specify the two values to get computed first */
    
    /* let's compute the average age !! */
    int e ;
    int f;
    int g;
    
    e = f = g = 100;
    printf("%d %d %d\n", e , f , g);
    
    float age1 , age2 , age3 , average;
    age1 = age2 = 10.0 ;
    printf("Enter your age\n");
    scanf("%f" , &age3);
    
    average = (age1 + age2 + age3) / 3;
    printf("\n The Average age of the group is %f\n", average);
    
    /* pageviews */
    
    int pageviews = 0;
    
    pageviews = pageviews + 1;
    printf("page views %d\n",pageviews);
    pageviews = pageviews + 1;
    printf("page views %d\n",pageviews);
    pageviews = pageviews + 1;
    printf("page views %d\n",pageviews);
    
    /* simple interest program below */
    
    float balance = 1000.00;
    balance *= 1.1;
    /* the above statement is working like this ( balance = balance * 1.1 )*/
    
    printf("Balance: %f\n",balance);
    
    balance *= 1.1;
    /* the above statement is working like this ( balance = balance * 1.1 )*/
    
    printf("Balance: %f\n",balance);
    
    balance *= 1.1;
    /* the above statement is working like this ( balance = balance * 1.1 )*/
    
    printf("Balance: %f\n",balance);
    
    /* Lets write a program on average money made by Josh the the pumpkin seller in 7 days */
    
    float averagemoneymade;
    int priceofpumpkin = 10;
    int sales = 61;
    int daysworked = 7;
    
    averagemoneymade = ((float) priceofpumpkin * (float) sales / (float) daysworked );
    printf("Josh made $%0.4f in Seven days\n\n",averagemoneymade);
    
    /* Now let us learn how to use the 'if' statements */
    
    if(4<10){
        printf("Easy peasy !!\n");
    }
    
    if(10<90){
        printf("Easy peasy !!\n");
    }
    if(10==10){
        printf("Easy peasy !!\n");
    }
    if(/* DISABLES CODE */ (10)!=10){
        printf("Easy peasy !!\n");
    }
    int Age;
    char Gender;
    
    printf(" What is your gender ? (M/F) \n");
    scanf("%s",&Gender);
    
            if(Gender =='M'){
                printf("Dude ,");
            }
            if(Gender =='F'){
                printf("Girl ,");
            }
    printf(" how old are you ? \n");
    scanf("%d",&Age);
    
            if (Age < 18){
                printf("Nothing to see here!\n");
            }
            if (Age >= 18){
                printf("You are eligible to enter the website\n");
            }
    /* below is the same code but with the else used here instead of the one if condition */
    int AgeS;
    char GenderS;
    
    printf(" What is your gender ? (M/F) \n");
    scanf("%s",&GenderS);
    
            if(GenderS =='M'){
                printf("Dude ,");
            }
            if(GenderS =='F'){
                printf("Girl ,");
            }
    printf(" how old are you ? \n");
    scanf("%d",&AgeS);
    
            if (AgeS < 18){
                printf("Nothing to see here!\n");
            }else{
                printf("Nothing to see here\n");
            }
            
    int hoursstudied = 12;
    int Agradescored = 3;
    
    if((void)((hoursstudied>=10)),(Agradescored>=2)){
        printf("You are a good student\n");
    }else{
        printf("You have to work hard\n");
    }
    
    char answer;
    
    printf("Do you like croissant ? (Y/N)");
    scanf("%s",&answer);
    
    if((void)((answer=='Y')) , (answer=='N')){
        printf("Good job you didn't mess anything up!\n");
    }else{
        printf("Keyboard much?\n");
    
    
    }

    return 0;
}
