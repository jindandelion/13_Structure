#define MAX_NAME 30

struct keytap{
	int nums;//��� ������ count
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
};//keywrds�� �� ���� �̸�.

void count_word(char *word)
{
	int i;
	
	//keyword�� �ϳ��� �ƴϴϱ� �� keyword���� �������ߵ�. 
	for(i=0;i<13;i++)
	{
		//if word�� i��° keyword�� ������
		if(strncmp(word,keywrds[i].name,strlen(keywrds[i].name))==0)//0�̸� �� ���ڰ� ���� ��.
		{
			//string�� n�� ������ ���ϴ� ���̴�. -strncmp(���Ұ�,Ű����,�����) 
			//nums++;
			keywrds[i].nums++; 
		 } 	
	}	
} 

void print_word()
{
	int i;
	//i��° keyword�� ���ؼ�
	for(i=0;i<13;i++)
		printf("%s : %i\n", keywrds[i].name, keywrds[i].nums);
		//printf(Ű���� �̸�: �󵵼�); 
}


