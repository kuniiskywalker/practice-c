#include <stdio.h>

int main ()
{
	
	char *WeekName();
	
	int n;
	
	for(n = 0; n <= 6; n++) {
		
		printf("%d %s\n", WeekName(n), WeekName(n));
	}
	
}

char *WeekName(int nn)
{
	
	static char name[7][10] = { 
				"Sunday", "Monday", "TuesDay",
				"WednesDay", "ThurseDay", "Friday",
				"SaturDay"
				 };
	
	return name[nn];
	
}

