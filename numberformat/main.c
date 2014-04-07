#include <stdio.h>
#include <string.h>

char *number_format (char *bb, int *Num);

int main ()
{
	
	int Num = 100000;
	
	char *bb;
	
	number_format(bb, &Num);
	
	printf("%s", bb);
	
}


char *number_format (char *Out, int *Num)
{
	
	int StrLen, SplitPoint;
	
	char *buf, *result = Out;
	
	sprintf(buf, "%d", *Num);
	
	StrLen = strlen( buf );
	
	SplitPoint = (StrLen / 3);
	if(SplitPoint == 0) {
		
		SplitPoint = 3;
	}
	
	printf("%d\n", SplitPoint);
	
	int i;
	for(i=0;*buf;i++) {
		
		*result = *buf;
		
		*result++; *buf++;
		
		if( (i % SplitPoint) == 0 && (i+1) != StrLen && StrLen >= 4 ) {
			
			*result = ',';
			
			*result++;
			
			SplitPoint = 3;
		}
	}
	
	*result = '\0';
	
	return Out;
	
}

