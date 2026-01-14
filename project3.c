#include<stdio.h>
int main()
{
	
//Problme : 1
//Do while loop:

   char i = 'A' ;
	do
	{
		if(i == 'A' || i == 'R' || i == 'Z'){
			i++;
			continue;
		}
		printf("%c ",i);
		i++;
	}
	while(i<='Z');
	


//Problme : 2
  int num, count = 0;
  
  printf("Enter tha any number: ");
  scanf("%d",&num);
  
  if(num == 0){
     count = 1;  
  }
  else{
  	while(num != 0)
  	{
  		count++;
  		num = num / 10;
	  }
  }
  printf("Totle digit = %d",count);
 
 
//Problme : 3	
   int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;   // last digit

    while(num >= 10) {
        num = num / 10;
    }

    first = num;   // first digit

    printf("Addition of first and last digit = %d", first + last);
	
} 
//output :

//Problme : 1
//B C D E F G H I J K L M N O P Q S T U V W X Y

//Problme : 2 
//Enter a number: 123654
//Total digits = 6

//Problme : 2 
//Enter a number: 5524
//Addition of first and last digit = 9
