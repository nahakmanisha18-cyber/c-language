#include<stdio.h>

//1.function :
int fun(){
	int row ,col;
	printf("\nEnter the row : ");
	scanf("%d",&row);
	printf("Enter the colunm : ");
	scanf("%d",&col);
	
	int arr[row][col];
	int k,l;
	int sum = 0;
	float aver;
	
	// user input element :
	printf("\nEnter the Elemet : \n");
	for(k = 0;k < row;k ++){ 
		for(l = 0;l < col;l++){
			printf("Array[%d][%d] =",k,l);
			scanf("%d",&arr[k][l]);
			sum = sum + arr[k][l];
		}
	}	
	// user input print :
	printf("\nArray is :\n");
	for(k = 0;k < row;k++){
		for(l = 0;l < col;l++){
			printf("%d ",arr[k][l]);
		}
		printf("\n");
	}
	printf("\nTotle of element = %d\n",sum);

	
}

//2.function :
int fun1(){
    int num, j, sum1 = 0;

    printf("\nEnter array size: ");
    scanf("%d", &num);

    int arr[num];

    // array input
    printf("Enter %d elements:\n", num);
    for(j = 0; j < num; j++) {
    	printf("Array[%d] =",j);
        scanf("%d", &arr[j]);
    }

    // array print + sum
    printf("Array elements are: ");
    for(j = 0; j < num; j++) {
        printf("%d ", arr[j]);
        sum1 = sum1 + arr[j];
    }

    printf("\nSum of array elements = %d\n", sum1);
}

//3.function :
int fun2(){
    int num2, i, cube;

    printf("\nEnter array size: ");
    scanf("%d", &num2);

    int arr[num2];

    printf("Enter %d elements:\n", num2);
    for(i = 0; i < num2; i++) {
       printf("Array[%d] = ", i);
       scanf("%d", &arr[i]);
}

    printf("Cube of array elements:\n");
    for(i = 0; i < num2; i++) {
    cube = arr[i] * arr[i] * arr[i];
    printf("Cube of %d = %d\n", arr[i], cube);
}

}

int main()
{
	//program : 1
	
    int choice,a,b;
    printf("1.Addtion\n2.Subtraction\n3.Multiplication\n4.division\n\nEnter Your choice :");
    scanf("%d",&choice);
    
    printf("Enter Frist Value :");
    scanf("%d",&a);
    
    printf("Enter Frist Value :");
    scanf("%d",&b);
     switch(choice){
   	case 1:
   		printf("Addition of %d and %d is : %d\n",a,b,a + b);
   		break;
   	case 2:
   		printf("Subtraction of %d and %d is : %d\n",a,b,a - b);
   		break;
   	case 3:
   		printf("Multiplication of %d and %d is : %d\n",a,b,a * b);
   		break;
   	case 4:
   		printf("Division of %d and %d is : %d\n",a,b,a / b);
   		break;
   	default:
   		printf("Invalid Choice\n");
   		break;
   }

    //program:2
    
    fun();
   
    //program:3
    fun1();

     
    //program:4
    fun2();


  //program:5
    int i,j,n = 11;
    for(i = 1;i <= 5;i++){
    	for(j = 1;j <= i;j++){
    		printf("%d ",n);
    		n++;
		}
		printf("\n");
	}







}
/* Output :
program : 1.

1.Addtion
2.Subtraction
3.Multiplication
4.division

Enter Your choice :1
Enter Frist Value :10
Enter Frist Value :20
Addition of 10 and 20 is : 30

program : 2.

Enter the row : 2
Enter the colunm : 2

Enter the Elemet :
Array[0][0] =10
Array[0][1] =20
Array[1][0] =30
Array[1][1] =10

Array is :
10 20
30 10

Totle of element = 70

program : 3.

Enter array size: 2
Enter 2 elements:
Array[0] =10
Array[1] =20
Array elements are: 10 20
Sum of array elements = 30

program : 4.

Enter array size: 4
Enter 4 elements:
Array[0] = 5
Array[1] = 8
Array[2] = 3
Array[3] = 4
Cube of array elements:
Cube of 5 = 125
Cube of 8 = 512
Cube of 3 = 27
Cube of 4 = 64 

program : 5.

11
12 13
14 15 16
17 18 19 20
21 22 23 24 25  */








