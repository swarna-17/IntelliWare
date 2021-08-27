/*****************************************************************************
Given a bit stream of length N consisting of 0s and 1s, insert 0 after 1 has appeared K times consecutively. 
Input Format: 
The first line contains N and K separated by a space. 
The second line contains the bit stream with 1s and 0s with each value separated by a space. 
Output Format: 
The first line the bit stream with the 0 inserted after 1s have appeared K times with each value separated by a space. 
Boundary Conditions: 
1 <= K <= 1000 
2 <= N <=1000 
Example Input/Output 1: 
Input: 
12 2 1 0 1 1 0 1 1 0 1 1 1 1 
Output: 
1 0 1 1 0 0 1 1 0 0 1 1 0 1 1 0
*********************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,k,i,j,temp=0;
scanf("%d%d",&n,&k);
int arr[n];
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(i=0;i<n;i++){
    if(arr[i]==1){
        temp+=1;
        printf("%d ",arr[i]);
    }
    else{
        temp=0;
        printf("%d ",arr[i]);
    }
    if(temp==k){
        temp=0;
        printf("0 ");
    }
    
}
}