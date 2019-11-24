#include"stackINT.h"
#include"mystring.h"

int main(int argc, char* argv[]){

	tStack* s=stackInit();

	for(int i=1; i<argc; i++){
		stackPush(s,strlen(argv[i]));
		char* str=stringCreate(argv[i]);
		str[0]=i+(int)'0';
		printf("%s\n",str);
		stringFree(str);
	}

	while(!stackEmpty(s)) printf("%d	",stackPop(s));

	printf("\n");

	char buffer[10]={0};

	addChar(buffer,'R');
	addChar(buffer,'i');
	addChar(buffer,'s');
	addChar(buffer,'o');

	char* st=stringCreate(buffer);
	printf("%s\n",st);
	stringFree(st);
	stackFree(s);
	return 0;
}
