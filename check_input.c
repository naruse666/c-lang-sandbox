#include <stdio.h>
#include <stdbool.h>

int	check_input(int argc, char **argv)
{
	while (*argv)
	{
		argv++;
	}
	if (argc < 1 || 3 < argc)
		return (false);
	if (argc == 2)
	{
		// check unsigned int ??
	}
	else if (argc == 3)
	{
		// check unsigned int ??
	}
	return (true);
}

/*
 * if 1 argument, search key by arg
 *	return (1)
 *
 * if 2 argument, search key by arg2 in specified (arg1) dict
 *	only check arg2 here.
 *	arg1 want to prevent by open().
 *
 *	return (2)
*/

int check_mode()
{
}


int main(int argc, char *argv[]){
	printf("*argv = %s\n", *argv);
	check_input(argc, argv);
}

