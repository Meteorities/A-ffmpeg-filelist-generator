//Program written @ 2019-09-27 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i,j,count_general;
	FILE * stream;  //for fopen() to use 
		
	char front_str[13] = {'f','i','l','e',' ','\'','m','e','d','i','a','_','\0'};  //front string
	char back_str[5] = {'.','t','s','\'','\0'};  //back string
	
	int middle_number = 0;
	printf("****This is xxx Stream Video ffmpeg Merge Filelist Generator****\n");
	printf("Please enter the last video clip's number: ");
	scanf("%d",&middle_number);

	printf("Please wait for a while,and close the program to check whether the file had created.\n");
	
	stream = freopen("filelist.txt","w",stdout);
	
	if(stream == NULL) {
		printf("freopen() error.Can't create file.\n");
	}
	
	for(count_general = 0;count_general < middle_number + 1;count_general++) {
		for (i = 0;i < 12;i++) {
			printf("%c",front_str[i]);
		}
		printf("%d",count_general);
		for (j = 0;j < 5;j++) {
			printf("%c",back_str[j]);
		}
		printf("\n");	
	}
	
	fclose(stream);
		
	return 0;
}

