#define MAX_NAME 30

struct keytap{
	int nums;//몇번 나오냐 count
	char name[MAX_NAME]; 
};

struct keytap keywrds[13]={
	
	{0,"int"},
	{0,"float"},
	{0,"return"},
	{0,"if"},
	{0,"for"},
	{0,"while"},
	{0,"goto"},
	{0,"switch"},
	{0,"case"},
	{0,"void"},
	{0,"default"},
	{0,"char"},
	{0,"do"}
};//keywrds가 찍어낸 와플 이름.

void count_word(char *word)
{
	int i;
	
	//keyword가 하나가 아니니까 각 keyword별로 계산해줘야됨. 
	for(i=0;i<13;i++)
	{
		//if word랑 i번째 keyword랑 같으면
		if(strncmp(word,keywrds[i].name,strlen(keywrds[i].name))==0)//0이면 두 글자가 같은 것.
		{
			//string을 n개 까지만 비교하는 것이다. -strncmp(비교할거,키워드,몇글자) 
			//nums++;
			keywrds[i].nums++; 
		 } 	
	}	
} 

void print_word()
{
	int i;
	//i번째 keyword에 대해서
	for(i=0;i<13;i++)
		printf("%s : %i\n", keywrds[i].name, keywrds[i].nums);
		//printf(키워드 이름: 빈도수); 
}


