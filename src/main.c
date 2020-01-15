/*
 * EPITECH PROJECT
 * my_ls
 * File description
 * main.c
 */

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include "../lib/include/my.h"

int main(int argc, char **argv)
{
	DIR *dir;
	struct dirent *sd;

	dir = opendir(".");

	while ( (sd = readdir(dir)) != NULL )
	{
		if (sd->d_name[0] != '.'){
			my_putstr(sd->d_name);
			my_putstr("  ");
		}
	}
	my_putchar('\n');

	closedir(dir);

	return (0);
}
