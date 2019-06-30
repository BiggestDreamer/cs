#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
int main(){
	char *p = (char*)malloc(sizeof(char)*10);
	if (p == NULL)
		return -1;
	char* ptr = p;
	for(int i=0;i<10;i++){
		printf("%#X\n", p);
		p++;
	}
	free(ptr);
	return 0;
}
