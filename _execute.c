#include "shell.h"

int exec_fun(int *cicles, char  **_args, char **av, char **env)
{
	int i;
	char *_build_do[] = {"cd", "pwd", "exit", "env"};

	for (i = 0; i < 4; i++)
	{
		if (_strcmp(_args[0], _build_do[i]) == 0)
		{

			return (built_in_handler(_args, env));
		}
	}

	return (exec_handler(cicles, _args, av, env));
}
