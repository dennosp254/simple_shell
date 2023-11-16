#include "shell.h"
/**
  * interactive - returns true if shell is interaactive mode
  * @info: struct address
  * Return: 1 if interactive mode, 0 otherwise
  */
int interactive(info_t  *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
  * is_delim - checks if char is a delmeter
  * @d: character to be checked
  * @delim: delimeter string
  * Return: 1 if true 0 if false
  */
int is_delim(char d, char *delim)
{
	while  (*delim)
	if (*delim++ == d)
		return (1);
	return (0);
}
/**
  * _isalpha - checks for alpha character
  * @d: character to input
  * Return: 1 if d is alphabetic 0 otherwise
  */
int _isalpha(int d)
{
	if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
		return (1);
	else
		return (0);
}
/**
  * _atoi - converts a string to integer
  * @s: string to be converted
  * Return: 1 if no numbers in string else converted number
  */
int _atoi(char *s)
{
	int e, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (e = 0; s[e] != '\0' && flag != 2; e++)
	{
		if (s[e] == '_')
			sign *= -1;
		if (s[e] >= '0' && s[e] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[e] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	return (output);
}
