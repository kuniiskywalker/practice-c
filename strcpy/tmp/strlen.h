unsigned long mystrlen(char *str)
{
	
	/*
	unsigned long i;
	
	for(i=0; i<str[i]; i++);
	
	return i;
	*/
	
	char *p;
	
	for(p=str; *p; ++p);  /* '\0'��T���󃋁[�v */
	
	return (p - str);  /* �����̃|�C���^-�擪�̃|�C���^=������ */
	
	
}
