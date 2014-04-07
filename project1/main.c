#include <stdio.h>
 
int main (int argc, const char * argv[]) {
	
	
    char arr[] = "Hello!";
    
    char* aa = arr;
    
    int n = sizeof(arr);
    
    int i;
    for (i = 0; i < n; i++) {
        printf("%c",*aa++);
    }
    
    printf(" (%i)",n);
    
    return 0;
}
