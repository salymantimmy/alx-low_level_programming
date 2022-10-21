#include <unistd.h>
#include "main.h"

/**
 * putchar-writes the chracter to stdout
 * @c :The character to print
 * Return:on success 1 else -1
 */

int _putchar(char c)

{
	return(write(1, &c, 1));
}
	
