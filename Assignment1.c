#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char str[100];
	int i,key;
	do {
		printf("nhap chuoi:");
		gets(str);
		for(i=strlen(str);i>=0;i--)
		{ if(str[i]==' ')
			{	str[i]='\0';
				printf("%s", &str[i]+1);
			}
		}
	printf("%s",str);
	key=getch();	
	}
	while(key!=27);
}
