#include<stdio.h>
int main()
{
  // PROBLEM 1: Grade calculation =>
   int marks ;
   printf("Enter your marks: ");
   scanf("%d",&marks);
   printf("Marks = %d\n",marks);
  
//   ternary opretor

          (marks > 100)
		    ? printf("Invalid marks ?\n")
            :(marks>85)? printf("Your Grade is A\n") 
		    : (marks>=70)? printf("Your Grade is B\n")
		    :(marks>=50)? printf("Your Grade is C\n")
		    :(marks>=35)? printf("Your Grade is D\n")
		    :printf("Your Grade is F\n");
	
   //	PROBLEM 2 :Additional Comment => 
   int scores;
 
    printf("\nEnter scores (out of 100): ");
    scanf("%d", &scores);
    printf("Scores = %d\n",scores);

    if (scores > 100) {
        printf("Invalid scores ?\n");
    } 
	else {
        if(scores>85){
        	printf("Your Grade is A. Excellent Work!\n");
		}
		else if(scores>=70){
			printf("Your Grade is B. Well Dwon\n");
		}
		else if(scores>=50){
			printf("Your Grade is C. Good Job\n"); 
		}
		else if(scores>=35){
			printf("Your Grade is D. You Passed\n");
		}
		else{
			printf("Your Grade is F. Sorry, You Failed\n");
		}
    }
  
  //	PROBLEM 3 :Eligibility Check => 
  
  	int score;
 
    printf("\nEnter score (out of 100): ");
    scanf("%d", &score);
    printf("Score = %d\n",score);

    if (score > 100) {
        printf("Invalid score ?\n");
    } 
	else {
        if(score>85){
        	printf("Your Grade is A. Excellent Work! You are Eligibility for the next leve\n");
		}
		else if(score>=70){
			printf("Your Grade is B. Well Dwon You are Eligibility for the next leve\n");
		}
		else if(score>=50){
			printf("Your Grade is C. Good Job You are Eligibility for the next leve\n"); 
		}
		else if(score>=35){
			printf("Your Grade is D. You Passed  You are Eligibility for the next leve\n");
		}
		else{
			printf("Your Grade is F. Sorry, You Failed Please try again next time \n");
		}
    }
}
//OUTPUT :

// SOLUTION 1:
//Enter your marks: 101
//Marks = 101
//Invalid marks ?

// SOLUTION 2:
//Enter scores (out of 100): 80
//Scores = 80
//Your Grade is B. Well Dwon

// SOLUTION 3:
//Enter score (out of 100): 90
//Score = 90
//Your Grade is A. Excellent Work! You are Eligibility for the next leve

