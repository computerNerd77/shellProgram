#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 

/*==================FUNCTION=DECLARIATIONS=======*/ 
void getUserInput(char * inputArg); 
char * trimwhitespace(char *str); 

/*==================GLOBAL=VAL==================*/ 
#define MAX_INPUT_SIZE 256

/*==================MAIN=======================*/ 
int main(){
	/*==========variables===========*/ 
	char * userInput, * originalS; 
	int background; 


	/*====this is running shell=====*/ 
	userInput = (char *) malloc(MAX_INPUT_SIZE); 
	originalS = userInput; 
	while(1){
		background = 0; 

		while(userInput[0] == '\0')
			getUserInput(userInput);  
		if(strcmp(userInput, "exit")==0) 
			break; 
	
		/*========forking===============*/ 

		memset(userInput, 0, MAX_INPUT_SIZE); 
	}
		
	free(originalS); 
	return 0; 
}

/*==================FUNCTIONS==================*/ 
void getUserInput(char * inputArg){
	printf("$ "); 
	fgets(inputArg, MAX_INPUT_SIZE, stdin); 
	if(inputArg[strlen(inputArg)-1] == '\n'){
		inputArg[strlen(inputArg)-1] = '\0'; 
	}
	inputArg = trimwhitespace(inputArg); 
	//printf("%s\n", inputArg);
}

char *trimwhitespace(char *str){
	char *end; 
	
	while(isspace((unsigned char)*str)) str++; 
	
	if(*str == 0) 
		return str; 

	end = str + strlen(str) -1; 
	while(end > str && isspace((unsigned char)*end)) end--; 

	*(end+1) = 0; 

	return str; 
}

/*
* recreating this once again and no more recreations! 
* on Tuesday Feb 6, 2018  
*/ 
