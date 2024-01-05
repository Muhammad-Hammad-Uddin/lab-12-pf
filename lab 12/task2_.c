#include<stdio.h>
#include<string.h>
struct student{
		char name [50];
		float marks;
		
	};
int main(){
	FILE *fptr;
	fptr = fopen("result.txt","w");
	if(fptr == NULL){
		printf("The file is not opened.");
    }
    else{
    	int n;
    	printf("enter number of students");
    	scanf("%d",&n);
    	struct student s[n];
    	int i;
    	for(i=0;i<n;i++){
    		printf("enter details for %d\n",i+1);
    		printf("enter name\n");
    		scanf("%s",s[i].name);
    		printf("enter marks");
    		scanf("%f",&s[i].marks);
    		fprintf(fptr,"%s %f",s[i].name,s[i].marks);
    		
    		
    		
		}
	}
	fclose(fptr);
	
	printf("\nResult successfully stored");
	
}
