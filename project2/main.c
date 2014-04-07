#include <stdio.h>
 
int main (int argc, const char * argv[]) {
	
	
	
	/*
    char arr[] = "Hello!";
    
    char* aa = arr;
    
    int n = sizeof(arr);
    
    int i;
    for (i = 0; i < n; i++) {
        printf("%c",*aa++);
    }
    
    printf(" (%i)",n);
    */
    
    
	int data[] = {12,345,6789};
    int* arr = data;
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("%i\n",*arr++);
    }    
    
    
    
    /*
    char txt1[] = "This is test!";
    
    char* txt2 = txt1;
    txt1[2] = 'a';
    txt1[3] = 't';
    txt1[8] = 'H';
    txt1[9] = 'O';
    txt1[10] = 'G';
    txt1[11] = 'E';
    printf("%s",txt2);
    */
    
    
    
    
    return 0;
}
