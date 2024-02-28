#include "main.h"

/**
 * ctrl_c_handler - keyboard input handler
 *
 * @signum: int
 *
 * Return: void
 */

void ctrl_c_handler(int signum)
{
	if (signum == SIGINT)
		print("\n($) ", STDIN_FILENO);
}
