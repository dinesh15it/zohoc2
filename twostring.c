/*Given two Strings s1 and s2, remove all the characters from s1 which is present in s2.
Input: s1=”expErIence”, s2=”En”
output: s1=”exprIece”*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    char a;
    scanf("%s",s1);
    scanf("%s",s2);
    int l1,l2;
    l1 = strlen(s1);
    l2 = strlen(s2);
    for(int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
        {
            if(s2[i] == s1[j])
            {
                s1[j] = -1;   
            }
        }
    }
    for(int j=0;j<l1;j++)
    {
        if(s1[j] != -1)
        printf("%c",s1[j]);
    }
}