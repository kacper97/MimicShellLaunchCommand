#include "../includes/shell.h"
///The parser's job will be to break up the individual parts of the command line from the shell's input.
int			ft_parse_check(char *str)
{
	int i;
	char **split;
	
	split = ft_strsplip(str, ';');
	if (!split)
		return (1);
	i=-1;
	while (string[++i)
	{
		if (str[i] == ';' && str[i+1] == ';')
		{
			ft_putend1("42sh: parse error near ';;'");
			return (1);
		}
	}
	return (0);
}
