#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "keywords.h"//꺽새는 라이브러리고 내가만든 헤더는 큰따옴표 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is_whitespace(char c)
{
	if(c == ' '||
	   c == '\n'||
	   c == '\r'||
	   c == '\t'||
	   c == '('
	   )
	{
		return 1;
	}
	
	return 0;
 } 
 
int fget_word(FILE* fp,char *word)
{
	int cnt = 0; 
	char c;
	
	while((c=fgetc(fp))!=EOF)
	{
		if(is_whitespace(c)==0)
			break;
	}
	
	if(c == EOF)
	{
		return 0;
	}
	
	cnt =0;
	word[cnt++] = c;
	word[cnt] = '\0';//한글자로 끝날 수도 있으니까. 

	while((word[cnt]= fgetc(fp))!=EOF)
	{
		if(is_whitespace(word[cnt]) == 1)
		{
			word[cnt]='\0';//End of string
			break;
		}
		cnt++;
	}
	
	return cnt;//이제 읽은 문장의 글자수가 몇인지 뱉어주는 것임. 
	
}
int main(int argc, char *argv[]) {
	
	FILE *fp;
	char filepath[100];
	char word[100];
	
	//file open
	printf("input the file path: ");
	scanf("%s",filepath); 
	fp = fopen(filepath,"r");
	
	if(fp == NULL)//fopen했는데도 NULL이면 잘못됬다고 출력해줌.
	{
		printf("file path is wrong! %s\n",filepath);
		return -1; //잘못입력됬을 때 밑으로 프로그램이 못가게 해주는 것. 
	} 

	
	//word
	while(fget_word(fp,word)!=0)
	{
		count_word(word);
	}
	//output
	print_word();
	
	fclose(fp);
	
}

 
