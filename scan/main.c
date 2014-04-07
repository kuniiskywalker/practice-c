#include <stdio.h>
#include <stdlib.h>
#include "strcat.h"

int main (int argc, const char * argv[])
{
	
	FILE  *fpi;
	unsigned char buf;
	
	if((fpi=fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "input file open error\n");
		exit(1);
	}
	
	int i = 1;
	while (fread(&buf, sizeof(unsigned char), 1, fpi) == 1){
		
		i++;
		if(i == 14) break;
	}
	
	char Height[10];
	while (fread(&buf, sizeof(unsigned char), 1, fpi) == 1){
		printf("%d”Ô–Ú%02x\n", i, buf);
		
		mystrcat(Height, 11);
		
		i++;
		if(i == 18) break;
	}
	
	while (fread(&buf, sizeof(unsigned char), 1, fpi) == 1){
		printf("%d”Ô–Ú%02x\n", i, buf);
		
		i++;
		if(i == 22) break;
	}
	
	fclose(fpi);
	
	return 0;
	
}



