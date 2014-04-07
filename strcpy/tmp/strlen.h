unsigned long mystrlen(char *str)
{
	
	/*
	unsigned long i;
	
	for(i=0; i<str[i]; i++);
	
	return i;
	*/
	
	char *p;
	
	for(p=str; *p; ++p);  /* '\0'を探す空ループ */
	
	return (p - str);  /* 末尾のポインタ-先頭のポインタ=文字数 */
	
	
}
