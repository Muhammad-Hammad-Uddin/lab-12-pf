#include<stdio.h>
int main(){
	struct student{
	char name[50];
	float marks;
	};
	FILE *fptr;
	fptr=fopen("student.txt","w");
	int n;
	printf("Input number of students: ");
	scanf("%d",&n);
	struct student s[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter details for %d",i+1);
		printf("Enter name\n");
		scanf("%s",s[i].name);
		getchar();
		printf("Enter marks\n");
		scanf("%f",&s[i].marks);
		
	}
	fwrite(&s ,sizeof(struct student), 1, fptr);
	fclose(fptr);
	printf("\nStored successfully\n");
	fptr = fopen("student.txt","rb");
	if(fptr == NULL){
		printf("The file is not opened. The program will exit now.");
		exit(0);
	}
	fread(&s, sizeof(struct student), 1, fptr);
	fclose(fptr);
	
	printf("\nStudent information to read: ");
	for(i = 0; i < n; i++){
#include<stdio.h>
#include<string.h>
struct student{
		char name [50];
		float marks;
		
	};
int main(){
	FILE *fptr;
	fptr = fopen("result.txt","a");
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
		
		printf("\nName: %s\tMarks: %f",s[i].name,s[i].marks);
		
	}
}
