#include <stdio.h>

int main() {
	/**
	 * This is a simple language. Its name is Inkstone.
	 * This version is the erhu. Please wait the ox.
	 */
	/*Welcome to Inkstone.*/
	printf("This is Instrument, \na simple language.\n");
	/*Dead cycle*/
	while (1) {
		/*Ask pass of file*/
		char filePass;
		printf("$pass$ ");
		scanf("%s", &filePass);
		/*Var*/
		char fileThings;
		/*Open the file*/
		FILE *fp;
		fp = fopen(filePass, "wr");
		fgets(fileThings, 700, fp);
		printf("%s", &fileThings);
		fclose(fp);
	}

	return 0;
}
/*by GaoXuyang*/
