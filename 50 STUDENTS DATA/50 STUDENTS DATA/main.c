//
//  main.c
//  50 STUDENTS DATA
//
//  Created by Aryan on 6/6/21.
//

#include <stdio.h>
int main()
{
    struct stu
    {
        char name[30];
        int marks;
    };
    struct stu s[51];
    struct stu temp;
    for (int i = 1; i < 51; i++)
    {
        printf("name: \n");
        fgets(s[i].name, 30, stdin);

        printf("marks: \n");
        scanf("%d", &s[i].marks);
        char dump;
        scanf("%c", &dump);
    }

    for (int i = 1; i < 51; i++)
    {
        int maxele = s[i].marks;
        temp = s[i];
        int index = i;
        for (int j = i + 1; j < 51; j++)
        {
            if (s[j].marks > maxele)
            {
                index = j;
            }
        }
        s[i] = s[index];
        s[index] = temp;
    }
    for (int i = 1; i < 51; i++)
    {
        printf("%d \n name : %s", i, s[i].name);
        printf(" ");
        printf("marks : %d", s[i].marks);
        printf("\n");
    }
    return 0;
}
