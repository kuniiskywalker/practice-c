
void LoginMenu();
void AdminTopMenu();

void LoginMenu (void) {
	
	printf("\n");
	printf("*************************\n");
	printf("**  Welcome to OwlCart **\n");
	printf("*************************\n");
	
	char Id[10];
	char Pass[10];
	
	printf("Enter Your Account \n"); 
	
	LOOP {
		
		printf("ID "); scanf("%s",Id);
		printf("PASS "); scanf("%s",Pass);
		
		printf("Id %s Pass %s", Id, Pass);
		
		if (strcmp(Id,"admin") == 0 && strcmp(Pass,"admin") == 0){
			
			AdminTopMenu();
			break;
		}
		else {
			
			printf("入力されたIDまたはPASSが違います。\n");
			
			continue;
		}
	}
	
}

void AdminTopMenu (void) {
	
	char b;
	
	LOOP {
		
		printf("\n");
		printf("*                              ログアウト(e)\n");
		printf("********************************************\n");
		printf("*  TOP(t) | 顧客・受注検索(s) | 管理(m) |  *\n");
		printf("********************************************\n");
		
		scanf("%c", &b);
		
		if(b == 'e') {
			
			break;
		}
	}
}

