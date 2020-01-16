/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** main.c
*/

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include "../lib/include/my.h"

int main(int argc, char **argv)
{
    if (argc != 1){
        if (argv[1][0] == '-')
            trie(argc, argv);
        if (argv[1][0] != '-')
            ls(opendir(argv[1]));
    }
    else
        ls(opendir("./"));
    return (0);
}

void trie(int argc, char **argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'a' && argv[1][2] == NULL){
        if (argc == 2)
            lsa(opendir("./"));
        else
            lsa(opendir(argv[2]));
    }
    if (argv[1][0] == '-' && argv[1][1] == 'l' && argv[1][2] == NULL){
        if (argc == 2)
            lsl(opendir("./"));
        else
            lsl(opendir(argv[2]));
    }
    else
        trie2(argc, argv);
}

void trie2(int argc, char **argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'a' && argv[1][2] == 'l' ){
        if (argc == 2)
            lsla(opendir("./"));
        else
            lsla(opendir(argv[2]));
    }
    if (argv[1][0] == '-' && argv[1][1] == 'l' && argv[1][2] == 'a' ){
        if (argc == 2)
            lsla(opendir("./"));
        else
            lsla(opendir(argv[2]));
    }
}
