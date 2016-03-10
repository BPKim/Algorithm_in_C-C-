#include <stdio.h>

int main()
{
	char temp[256];
	
	FILE * fp = NULL;
	int i = 0;

	fp = fopen("artist", "r+");
	if (fp == NULL){
		printf("FILE OPEN ERROR! \n");
		return 0;
	}
	while (!feof(fp)){
		fscanf(fp, "%s", &temp[i]);

		if (i != 0)	{
			
			if ((temp[i] == 't') && (temp[i - 1] == "\\")
			{
				//여기에서 배열에 넣기 
			}

		}
		i++;
	}

	fclose(fp);

	return 0;
}