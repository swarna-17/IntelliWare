/********************************************************************
Smaller Matrix Search [ZOHO] 


A bigger NxN matrix is passed as the input. Also a smaller MxM matrix is passed as input. The program must print TRUE if the smaller matrix can be found in the bigger matrix. Else the program must print FALSE.

Input Format:
First line will contain the value of N.
Second line will contain the value of M.
Next N lines will contain the values in the N*N matrix with each value separated by one or more space.
Next M lines will contain the values in the M*M matrix with each value separated by one or more space.

Output Format:
First line will contain the string value TRUE or FALSE

Boundary Conditions:
3 <= N <= 20
2 <= M <= N

Example Input/Output 1:
Input:
3
2
4 5 9
1 3 5
8 2 4
3 5
2 4

Output:
TRUE

Example Input/Output 2:
Input:
3
2
4 5 9
1 3 5
8 2 4
4 5
1 4

Output:
FALSE
*****************************************************************/
 #include<stdio.h>
 #include<stdlib.h>
int main()
{
    int n,m,matrix1[100][100],matrix2[100][100],i,j,p=0,q=0,c=1,check=0,k,l,o;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        scanf("%d",&matrx1[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            scanf("%d",&matrix2[i][j]);
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        p=i,q=j,o=j,count=0,k,l;
        if(matrix1[p][q]==matrix2[k][l]){//to check matrix2 is present in matrix1
            for(k=0;k<m;k++){
              q=o;
                for(l=0;l<m;l++){
                    if(matrix1[p][q]==matrix2[k][l]){
                      count++;
                      q++;
                    }
                    else
                        break;
                }
                p++;
            }
        }
        if(count==m*m){
        printf("TRUE");
        check=1;
        }
      }
    }
    if(check==0)
    printf("FALSE");   
}    
