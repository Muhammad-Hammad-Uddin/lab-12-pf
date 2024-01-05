#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char string[100];
	char decrypted[100];
	int i; 
	printf("enter a string\n");
	fgets(string,100,stdin);
	for(i=0;i<strlen(string);i++){
		string[i]+=i;
	}
	FILE *fptr;
	fptr=fopen("task.txt","w");
	if(fptr==NULL){
		printf("\nERROR");
	}
	
	printf("\nEncrypted : %s", string);
    fputs(string,fptr);
    fclose(fptr);
		
	
	
	FILE *ptr;
	ptr=fopen("task.txt","r");
	if(ptr==NULL){
		printf("\nERROR");
	}
		fgets(decrypted,100,ptr);
		for(i=0;i<strlen(string);i++){
			decrypted[i]-=i;
		
	}
	printf("\n\nDecrypted : %s\n", decrypted);

		
		
	}
