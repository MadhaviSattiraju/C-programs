#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
 	char n[]="a4656780135647687768fgugvgvgcrxrdt75tfyuguihi86rrdctyg653dxrfc12bhbhvghc1098gvhjgyu75dghgv";
    char x[]="0123456789";
    int i,j;
    int count[10]={0,0,0,0,0,0,0,0,0,0};
	for (i=0;i<strlen(n);i++)
	{
		for(j=0;j<10;j++)
		{
			if(n[i]==x[j])
			count[j]++;
		//	printf("%d ",count[j]);
		}
	}
	for (i=0;i<10;i++)
	{
		printf("%d",count[i]);
		printf(" ");
	}
	return 0;
}

