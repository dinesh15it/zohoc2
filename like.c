//input:ilike
//output:i like
//input:ilikesamsung
//output:i like sam sung
#include<stdio.h>
#include<string.h>
int main()
{
    char s[][10]={"i","like","sam","sung","samsung", "mobile", "ice","cream", "icecream", "man", "go", "mango"};
    char c[100];
    char *p;
    int i,j,l,lc,lcc;
    scanf("%s",c);
    lc = strlen(c);
    for(i=0;i<12;i++)
    {
        l = strlen(s[i]);
        for(j=0;j<l;j++)
        {
            if(c[j] != s[i][j])
            {
                break;
            }
        }
        if(j == l)
        {
            printf("%s ",s[i]);
            p = c+l;
            lcc = lc-l;
             for(int k = 0 ;k<lcc;k++)
                c[k] = p[k];
            for(int k=lcc ; k<lc ; k++)
                c[k] = 0;
        }
    }
   
}