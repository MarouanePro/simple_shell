#include "shell.h"


int built_in_handler(char **_args, char **env)
{
	int i = 0;
	tpe_bui arr_bu[] = {
		{"cd", fun_cd		},
		{"pwd", fun_pwd		},
		{"exit", fun_exit	},
		{"env", fun_envi	}
	};
	for (; i < 4; i++)
		if (_strcmp(arr_bu[i].s, _args[0]) == 0)
		{
			if (_strcmp(arr_bu[i].s, "env") == 0)
				return (arr_bu[i].fun(env));
			else
				return (arr_bu[i].fun(_args));
		}
	return (1);

}
