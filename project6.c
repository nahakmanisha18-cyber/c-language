#include<stdio.h>
int main()
{
	//Problem : 1
	char name[100];
    char rev[100];
    int i, j = 0, len = 0;
    printf("Enter string: ");
    scanf("%s", name);

    while (name[len] != '\0') {   //lenth
        len++;
    }
    
    for (i = len - 1; i >= 0; i--) {  // reverse
        rev[j] = name[i];
        j++;
    }
    rev[j] = '\0';
    printf("Reverse = %s\n", rev);
    i = 0;
    while (name[i] != '\0') { // compare
        if (name[i] != rev[i]) {
            printf("This given string is not a Palindrome");
            return 0;
        }
        i++;
    }
    printf("This given string is a Palindrome");

    
/* Output :
Enter string: ma'am
revers = ma'am
This name is Palindrome  */


  //Ptoblem : 2
    char str[100];
    int k, l, count;
    printf("\nEnter string: ");
    scanf("%s", str);

    for (k = 0; str[k] != '\0'; k++) {
        count = 1;
        
        if (str[k] == '0') 
            continue;
            
        for (l = k + 1; str[l] != '\0'; l++) {
            if (str[k] == str[l]) {
                count++;
                str[l] = '0';   // counted
            }
        }
        printf("%c = %d\n", str[k], count);
    }
  
/* output : 
Enter string: programe
p = 1
r = 2
o = 1
g = 1
a = 1
m = 1
e = 1   */
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}


