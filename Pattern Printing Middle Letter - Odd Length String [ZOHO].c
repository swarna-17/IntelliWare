/******************************************************************
An odd length string S is passed as the input. The program must print the pattern as described below. 
Let L be the length of the string and M denote the middle position of the string S. The characters in the string are a(1),...., a(M), .... a(L). - The first line will contain the middle letter a(M), .... a(L). 
- The first line will contain the middle letter a(M) of S in the extreme right. - Then in each subsequent line, the letters after the middle letter from a(M+1) to a(L) is appended to the line output.
– After the end of the string a(L) is reached, in each subsequent line, the letters from the beginning to the middle letter, a(1) to a(M-1) are appended to the line output.

Note: Asterisk * will be used to pad in the front so that each line has L characters

Input Format:
The first line will contain S.

Output Format:
L lines as output where L is the length of the string S.

Boundary Conditions:
3 <= L <= 1001

Example Input/Output 1:
Input:
CRY

Output:
**R
*RY
RYC

Example Input/Output 2:
Input:
PROGRAM

Output:
******G
*****GR
****GRA
***GRAM
**GRAMP
*GRAMPR
GRAMPRO
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char a[10000];
scanf("%s",a);
int i=0,k=strlen(a)/2,j=strlen(a);
int s=j-1,t=k,r=0;
for(;i<j;i++){
    for(int index=i;index<s;index++)
        printf("*");
    for(int p=t;p<=k;p++)
        printf("%c",a[p]);
    if(k==j-1){
        for(int p=0;p<=r-1;p++)
            printf("%c",a[p]);
        k=j-2;
        if(r!=k)
            r++;
    }
    k++;
    printf("\n");
    
}
}