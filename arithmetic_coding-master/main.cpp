#include "encode.h"
#include "decode.h"
#include <time.h>

int main (int argc, char **argv)
{	
	/*------------------------*/
	
	FILE *f1,*f2,*f3,*f4;
	f1 = fopen("8657word","r");
	f2 = fopen("empty.txt","w+");
	f3 = fopen("bbb.txt","w+");
	f4 = fopen("cosr.csv","w+");
	int i = 0;
	do {
	char str[20];
	fscanf(f1,"%s ",str);
	fprintf(f2,"%s ",str);

	clock_t begin, end;
    double cost;
    //開始記錄
    begin = clock();
	

	/*-----------------------*/


	
	if (argc < 0)
	{
		std::cout<<"Using: name_programm <input_of_file> <output_file>"<<endl;
		return -1;
	}/*
	if (argv[1][0] == 'e')
	{*/
		Encode obj;
		obj.encode(argv[2], argv[3]);
		/*
	}
	else if (argv[1][0] == 'd')
	{
		Decode obj;
		obj.decode(argv[2], argv[3]);
	}
	*/

	end = clock();
    cost = (double)(end - begin)/CLOCKS_PER_SEC;
    fprintf(f4,"%lf,",cost);
	printf("%d\n",i);
	i++;
	}while(!feof(f1));
	fclose(f1);
	fclose(f2);
	fclose(f3);
	fclose(f4);
	


	return 0;
}
