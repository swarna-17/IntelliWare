/***********************************************************************************************************************************************
The program must accept two integers X and Y as the input.The program must print the number of carries generated when adding X and Y as the output
Boundary Conditions:
    1<=X,Y<=10^8
Input Format:
    The first line contains X
    The second line contains Y
Output Format:
    The first line contains an integer representing the number of carries generated when adding X and Y.
Example Input/Output 1:
Input:
    451
    349
Output:
    2 
Explanation:
    Here X=451 and Y=349
    The unit digits 1 and 9 are added.The carry is 1.
    Then 1 + the digits in tenth position 1+5+4=10 and hence the carry is 1.
    Then 1 + the digits in hundredth position 1+4+3=8 and hence no carry.
    Total number of carries is 2,which is printed as teh output.
Example Input/Output 1:
Input:
    99
    7
Output:
    2
**********************************************************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,carry=0,count=0;
scanf("%ld%ld",&x,&y);
while(x>0||y>0){
    carry=x%10+y%10+carry;
    if(carry>=10){
        carry=1;
        count++;
    }
    else 
        carry=0;
    x/=10;
    y/=10;
}
printf("%d",count);
}
