#include "apue.h"
#include <dirent.h>

int 
main(int argc, char *argv[])
{
	DIR	*dp;
	struct dirent *dirp;

	if (argc != 2)
		arr_quit("usage: ls directory_name");

	if ((dp = opendir(argv[1])) == NULL)
		err_sys("can't pen %s", argv[1]);
	while((dirp = readdir(dp)) !=NULL)
		printf("%s\n",dir->d_name);
	closedir(dp);
	exit(0);
}
