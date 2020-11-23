#include "hsh.h"

/**
 * hsh_setenv - add or overwrite an env
 *
 * @data: the data struct
 *
 * Return: 1 if success, 0 if failure
 */

int hsh_setenv(data_t *data)
{

	if (!data->toks[2])
	{
		puts("setenv takes 2 parameters!");
		return (1);
	}

	_setenv(data, data->toks[1], data->toks[2]);

	return (1);
}

/**
 * hsh_unsetenv - remove an env
 *
 * @data: name of the env to remove
 * @name: name of variable to unset
 *
 * Return: 1 if success, 0 if failure
 */

int hsh_unsetenv(data_t *data, char *name)
{
	if (!data->toks[1])
	{
		puts("No argument provided.");
		return (0);
	}

	_unsetenv(data, name);

	return (1);
}
