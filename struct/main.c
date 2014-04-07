#include <stdio.h>

#define HISTORY_NUM 5

struct fee {
	int No,
		CurrentTotal,
		DiscountTotal,
		Discount,
		Total;
};

int No,
	CurrentTotal,
	DiscountTotal,
	Discount,
	Total;

struct fee feedata[HISTORY_NUM];

void set_fee (struct fee *feedata, int CurrentTotal, int DiscountTotal, int Discount, int Total);
void get_fee (struct fee *feedata);

int main ()
{
	
	
	int c; 
	int a; 
	c=12345; 
	for(a = 0; c != 0; a++)
	c /= 10;
	
	printf("答え…%d桁", a);//omake
	
	while(1) {
		
		int menu;
		
		printf("料金1 %d円 料金2 %d円 料金3 %d円 料金4 %d円\n", CurrentTotal, DiscountTotal, Discount, Total);
		printf("1 : データ入力 2 : 戻る 3 : EXIT\n");
		
		scanf("%d", &menu);
		
		if(menu == 1) {
			
			printf("金額1\n");
			scanf("%d", &CurrentTotal);
			
			printf("金額2\n");
			scanf("%d", &DiscountTotal);
			
			printf("金額3\n");
			scanf("%d", &Discount);
			
			printf("金額4\n");
			scanf("%d", &Total);
			
			set_fee(feedata, CurrentTotal, DiscountTotal, Discount, Total);
			
		}
		else if(menu == 2) {
			
			get_fee(feedata);
			
		}
		else if(menu == 3) {
			
			break;
		}
		
	}
	
	return 0;
	
}

void set_fee (struct fee *feedata, int CurrentTotal, int DiscountTotal, int Discount, int Total)
{
	
	struct fee *p = feedata;
	
	int PrevCurrentTotal,
		PrevDiscountTotal,
		PrevDiscount,
		PrevTotal;
	
	int NextCurrentTotal,
		NextDiscountTotal,
		NextDiscount,
		NextTotal;
	
	int i;
	for(i = 0; i < HISTORY_NUM; i++) {
		
		NextCurrentTotal  = feedata->CurrentTotal;
		NextDiscountTotal = feedata->DiscountTotal;
		NextDiscount      = feedata->Discount;
		NextTotal         = feedata->Total;
		
		feedata->CurrentTotal  = PrevCurrentTotal;
		feedata->DiscountTotal = PrevDiscountTotal;
		feedata->Discount      = PrevDiscount;
		feedata->Total         = PrevTotal;
		
		PrevCurrentTotal  = NextCurrentTotal;
		PrevDiscountTotal = NextDiscountTotal;
		PrevDiscount      = NextDiscount;
		PrevTotal         = NextTotal;
		
		feedata++;
	}
	
	p->No            = 0;
	p->CurrentTotal  = CurrentTotal;
	p->DiscountTotal = DiscountTotal;
	p->Discount      = Discount;
	p->Total         = Total;
	
}

void get_fee (struct fee *feedata)
{
	
	int i;
	for(i = 0; i < (HISTORY_NUM - 1); i++) {
		
		feedata->CurrentTotal   = (feedata+1)->CurrentTotal;
		feedata->DiscountTotal  = (feedata+1)->DiscountTotal;
		feedata->Discount       = (feedata+1)->DiscountTotal;
		feedata->Total          = (feedata+1)->DiscountTotal;
		
		if(i == 0) {
			
			CurrentTotal  = feedata->CurrentTotal;
			DiscountTotal = feedata->DiscountTotal;
			Discount      = feedata->Discount;
			Total         = feedata->Total;
		}
		
		feedata++;
	}
}

