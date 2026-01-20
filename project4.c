#include<stdio.h>
int main()
{
//Program :1
	int i ,j;
	for(i = 41;i <= 45; i++){ //row
	         
		for(j = 41;j <= i;j++){  //colomn
			printf("%d ",j);
		}
		printf("\n");
	}
/* output :
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
}  */


 printf("\n");

//Program :2
    int a = 11;
    for(i = 1;i <= 4; i++){  //row
    
		for(j = 1;j <= i;j++){  //colomn
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
/* output :
11
12 13
14 15 16
17 18 19 20
}  */

 printf("\n");

//Program :3
   int k;
    for(i = 5; i >= 1; i--) {

        for(j = 1; j < i; j++) {  // spaces
            printf("  ");
        }

        for(k = i; k <= 5; k++) { // numbers
            printf("%d ", k);
        }
        printf("\n");
    }
/* output :
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
}  */
	
   
    printf("\n");
    
//Program :4

    for(i = 5; i >= 1; i--) {

        for(j = 5; j > i; j--) {    // spaces
            printf("  ");
        }

        for(k = 1; k <= i; k++) {    // numbers
            printf("%d ", k % 2);
        }
        printf("\n");
    }
/*
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1
*/

printf("\n");

//Program :5
    for(i = 5; i >= 1; i--) {

        for(j = 1; j < i; j++) {  // spaces
            printf("  ");
        }

        for(k = i; k <= 5; k++) { // left numbers
            printf("%d ", k);
        }

        for(k = 4; k >= i; k--) { // right numbers
            printf("%d ", k);
        }
        printf("\n");
    }

/* output :
        5
      4 5 4
    3 4 5 4 3
  2 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
}  
*/

 printf("\n");

//Program :6
 int space;

    for(i = 1; i <= 5; i++) {

        for(j = 1; j <= i; j++) { // left numbers 
            printf("%d ", j);
        }

        space = (5 - i) * 4; //spaces
        for(k = 1; k <= space; k++) {
            printf(" ");
        }

        for(j = i; j >= 1; j--) { // right numbers
            printf("%d ", j);
        }
        printf("\n");
    }
/* output :
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1	
*/

printf("\n");
 
//Program :7
     for(i = 1;i <= 5;i++){
     	
     	if(i == 1||i == 3){ 
     		printf(" * * * * *");
		 }else if(i == 2){
		 	printf(" *       *");
		 }else{
		 	printf(" *");
		 }
		 printf("\n");
	 }
/* output :
 * * * * *
 *       *
 * * * * *
 *
 *
 
*/
}
