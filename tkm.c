#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tkm ()
{
	srand(time(NULL));

	int sayi = rand() % 3;
	if(sayi == 0)
		return ('t');
	else if(sayi == 1)
		return ('k');
	return('m');
}

int main()
{
	char userSecim;
	char pcSecim = tkm();
	
	while(1)
	{
		printf("Seciminizi Yapiniz.. (t/k/m)\n");
		scanf("%c", &userSecim);
		
		if(userSecim != 't' && userSecim != 'm' && userSecim != 'k')
		{
			printf("Yanlis Karakter Girdisi!\n");
		}
		else if(userSecim == pcSecim)
		{
			printf("Berabere!");
			break;
		}
		else if(userSecim == 't' && pcSecim == 'k')
		{
			printf("Kagit tasi sarar! Bilgisayar Kazandi.");
			break;
		}
		else if(userSecim == 't' && pcSecim == 'm')
		{
			printf("Tas makasi kirar! Kullanici Kazandi.");
			break;
		}
		else if(userSecim == 'k' && pcSecim == 't')
		{
			printf("Kagit tasi sarar! Kullanici Kazandi.");
			break;
		}
		else if(userSecim == 'k' && pcSecim == 'm')
		{
			printf("Makas kagidi keser! Bilgisayar Kazandi.");
			break;
		}
		else if(userSecim == 'm' && pcSecim == 'k')
		{
			printf("Makas Kagidi Keser! Kullanici Kazandi.");
			break;
		}
		else if(userSecim == 'm' && pcSecim == 't')
		{
			printf("Tas Makasi Kirar! Bilgisayar Kazandi.");
			break;
		}
	}
}
