#include<stdio.h>
#include<string.h>
int main(){
	FILE *pf;
	char paragraph[100];
	char tar;
	int i,count=0;
//	feof(pf);
	
	pf=fopen("hammad.txt","w");
	if(pf==NULL){
		printf("unable");
}
else{
	printf("enter paragraph");
	fgets(paragraph,sizeof(paragraph),stdin);
	fprintf(pf,"%s",paragraph);
	
	fclose(pf);
	printf("data added successfully\n");
//	while(!feof(pf)){
//		ch=fgetc(pf);
//		printf("%c",ch);
		
	}
    pf=fopen("hammad.txt","r");
    if(pf==NULL){
		printf("unable");
}
else{
	printf("enter target character\n");
	scanf("%c",&tar);
	int length=strlen(paragraph);
	for(i=0;i<length;i++){
		if(paragraph[i]==tar){
			count++;
		}
	}
}
	printf("Frequency of '%c' in the paragraph: %d\n", tar, count);
	
	
}
