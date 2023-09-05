#include "main.h"
/**
 * create_file - creats a file without perm
 * @filename: the filename
 * @text_content: u who tell me
 * Return: 1 if succeed -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = write(f, text_content, strlen(text_content));
		if (len == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
