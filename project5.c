#include<stdio.h>
int main()
{
	//program : 1
	int n, i;
    printf("Enter the Array size: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
      printf("Array[%d] = ", i);
      scanf("%d", &arr[i]);
    }
     printf("\nNegative elements in array = ");	

    for(i = 0; i < n; i++) {
       if(arr[i] < 0) {     
          printf("%d ", arr[i]);
       }
   }
/* output :
Enter the Array size: 5
Array[0] = -1
Array[1] = 0
Array[2] = 2
Array[3] = -3
Array[4] = -4

Negative elements in array = -1 -3 -4
*/

   //program : 2
   
    int row, col;
    int k, l;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);
    
    int arr[row][col];

    printf("Enter the elements:\n");
    for(k = 0; k < row; k++) {
        for(l = 0; l < col; l++) {
            printf("arr[%d][%d] = ", k, l);
            scanf("%d", &arr[k][l]);
        }
    }

    int largest = arr[0][0];

    for(k = 0; k < row; k++) {
        for(l = 0; l < col; l++) {
            if(arr[k][l] > largest) {
                largest = arr[k][l];
            }
        }
    }

    printf("\nLargest number is = %d\n", largest);

/* output :
Enter number of rows: 3
Enter number of columns: 3
Enter the elements:
arr[0][0] = 10
arr[0][1] = 20
arr[0][2] = 30
arr[1][0] = 40
arr[1][1] = 50
arr[1][2] = 60
arr[2][0] = 70
arr[2][1] = 80
arr[2][2] = 90

Largest number is = 90 */
   
   
   //program :3
    printf("\nEnter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);
    
   
   printf("Enter the elements:\n");
    for(k = 0; k < row; k++) {
        for(l = 0; l < col; l++) {
            printf("arr[%d][%d] = ", k, l);
            scanf("%d", &arr[k][l]);
        }
    }
     printf("\nMatrix is:\n");
    for(k = 0; k < row; k++) {
        for(l = 0; l < col; l++) {
            printf("%d ", arr[k][l]);
        }
        printf("\n");
    }
/*  output :
Enter number of rows: 3
Enter number of columns: 3
Enter the elements:
arr[0][0] = 10
arr[0][1] = 50
arr[0][2] = 60
arr[1][0] = 80
arr[1][1] = 70
arr[1][2] = 55
arr[2][0] = 32
arr[2][1] = 12
arr[2][2] = 40

Matrix is:
10 50 80
80 70 32
32 12 40
*/


   //program :4
   int r,c, sum = 0;
   
   printf("\nEnter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);
    
   
   printf("Enter the elements:\n");
    for(k = 0; k < row; k++) {
        for(l = 0; l < col; l++) {
            printf("arr[%d][%d] = ", k, l);
            scanf("%d", &arr[k][l]);
        }
    }
     // row 
    printf("\nEnter row number (0 to %d): ", row - 1);
    scanf("%d", &r);
  /* sum of row */
    for(l = 0; l < col; l++) {
       sum = sum + arr[r][l];
    }       
    printf("Elements of row %d = %d\n", r, col);
    printf("The sum of row %d = %d\n", r, sum);

   //col
    printf("\nEnter column number(0 to %d): ", col - 1);
    scanf("%d", &c);
    /* sum of column */
    for(k = 0; k < row; k++) {
    sum = sum + arr[k][c];
    }
    printf("Elements of column %d = %d\n", c, row);
    printf("The sum of column %d = %d", c, sum);
   
/*  output :
Enter number of rows: 3
Enter number of columns: 3
Enter the elements:
arr[0][0] = 10
arr[0][1] = 20
arr[0][2] = 30
arr[1][0] = 40
arr[1][1] = 50
arr[1][2] = 60
arr[2][0] =
70
arr[2][1] = 50
arr[2][2] = 55

Enter row number (0 to 2): 1
Elements of row 1 = 3
The sum of row 1 = 160

Enter column number(0 to 2): 2
Elements of column 2 = 3
The sum of column 2 = 335
*/
   
   
   
   
}
