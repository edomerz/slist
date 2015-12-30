#include "slist.h"
	
int main(int argc, char* argv[], char** envp)
{
	int input = 0;
		
	if(argc != 2)
	{
		printf("Usage:./slist (int)input\n");
		return(-1);
	}
	input = atoi(argv[1]);
	printf("var: %d\n", input);
	
	return(0);
}
