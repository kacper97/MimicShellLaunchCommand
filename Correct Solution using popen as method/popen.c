int main( int argc, char *argv[])
{
	FILE *fp/
	char path[1035];
	
	/* Open the command to display all files in the home directory and put in the optup.tst*/
	fp =popen("/bin/ls -la -> -> output.txt", "r");
	if (fp==NULL( {
	printf("Failed to run command");
	exit(1);
	}
	
	pclose(fp);
	return 0;
}