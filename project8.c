#include<stdio.h>
#include <string.h>

//function
int fun(){
	int i,j;
	int n ;
	
	printf("\nEnter the n :");
	scanf("%d",&n);
	
	int arr[n][n];
	int (*ptr)[n]; 
	
	printf("Enter the element:\n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	ptr = arr;
	
	for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            int cube = ptr[i][j] * ptr[i][j] * ptr[i][j];
            printf("%d ", cube);
        }
        printf("\n");
    }
	
	
}

int main()
{
	//problem :1
	char chr1[1100];
    char *pr;  

    pr = chr1;  
    printf("Enter the Word: ");
    gets(pr); 
    printf("The Length Of string = %d\n", strlen(pr));  
    
/*
Output:
Enter the Word: nahak manisha
The Length Of string = 13
*/
	
	//problem :2
	
	fun();
	/*
	Output:
Enter the n :3
Enter the element:
arr[0][0]= 19
arr[0][1]= 18
arr[0][2]= 10
arr[1][0]= 20
arr[1][1]= 17
arr[1][2]= 16
arr[2][0]= 15
arr[2][1]= 13
arr[2][2]= 20

6859 5832 1000
8000 4913 4096
3375 2197 8000
*/
	
} 
