#include <stdio.h>

int main()
{
	FILE *fp;
	char path[50];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets (path);
	fp=fopen(path, "wt");
	if (fp==NULL)
	{
		printf("\nLoi mo file");
		
	}
	else
	{
		fprintf(fp, "Hoc phi di doi voi hanh");
		fclose(fp);
	}
}
