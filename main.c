#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

/*==================FUNCTION=DECLARIATIONS=======*/ 
void getUserInput(char * inputArg); 


/*==================GLOBAL=VAL==================*/ 
#define MAX_INPUT_SIZE 256

/*==================MAIN=======================*/ 
int main(){
	/*==========variables===========*/ 
	char * userInput; 


	userInput = (char *) malloc(MAX_INPUT_SIZE); 
	while(1){
		getUserInput(userInput); 
	}
		
	return 0; 
}

/*==================FUNCTIONS==================*/ 
void getUserInput(char * inputArg){
	printf("$ "); 
	scanf("%s", inputArg); 
	//printf("%s", input);
}

/*
* recreating this once again and no more recreations! 
* on Tuesday Feb 6, 2018  
*/ 
