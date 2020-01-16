/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** ls command
*/

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include "../lib/include/my.h"

int lsa (DIR *dir)
{
    struct dirent *sd;

    while ( (sd = readdir(dir)) != NULL )
    {
        my_putstr(sd->d_name);
        my_putstr("  ");
    }
    my_putchar('\n');
    closedir(dir);
    return (0);
}

int lsla (DIR *dir)
{
    struct dirent *sd;

    while ( (sd = readdir(dir)) != NULL )
    {
        my_putstr(sd->d_name);
        my_putchar('\n');
    }
    closedir(dir);
    return (0);
}

int ls (DIR *dir)
{
    struct dirent *sd;

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

int lsl (DIR *dir)
{
    struct dirent *sd;

    while ( (sd = readdir(dir)) != NULL )
    {
        if (sd->d_name[0] != '.'){
            my_putstr(sd->d_name);
            my_putchar('\n');
        }
    }
    closedir(dir);
    return (0);
}
