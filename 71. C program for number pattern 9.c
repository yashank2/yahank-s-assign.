#include <stdio.h> 
int main() 
{ int rows, cols, i, j; 
 printf("Enter number of rows: "); 
 scanf("%d", &rows); 
printf("Enter number of columns: "); 
scanf("%d", &cols); 
 for(i=1; i<=rows; i++) 
 { 
 for(j=i; j<=cols; j++) 
 { 
 printf("%d", j); 
 } 
 for(j=i-1; j>=1; j--) 
 { 
 printf("%d", j); 
 } 
 printf("\n"); 
 } 
 return 0; 
}