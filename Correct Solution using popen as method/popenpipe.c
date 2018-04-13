#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[])
{
	FILE *fp/
	char path[1035];
	
	/* Open the command to display all files in the home directory and put in the optup.tst*/
	fp =popen("cat /etc/passwd | grep --color= always -in lib", "r");
	if (fp==NULL) {
	printf("Failed to run command");
	exit(1);
	}
	
	*/Display result*/
	while(fgets(path, sizeof(path)-i, fp) != NULL{
	printf("%s, path);
	}
	
	pclose(fp);
	return 0;
}