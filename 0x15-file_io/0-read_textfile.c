#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd;
	char *buffer = malloc(sizeof(char) * letters);
	FILE *fp;

	if (!filename || !buffer)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	rd = fread(buffer, sizeof(char), letters, fp);
	fclose(fp);

	if ((size_t)rd != letters && ferror(fp))
	{
		free(buffer);
		return (0);
	}

	fwrite(buffer, sizeof(char), rd, stdout);
	free(buffer);

	return (rd);
}
