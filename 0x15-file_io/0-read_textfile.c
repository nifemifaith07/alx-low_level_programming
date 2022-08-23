#include "main.h"

/**
 * read_textfile - reads textfile, prints it to POSIX std output.
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails, number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_count, w_count;
	int file_d;
	char *buf;

	/* check if file is present */
	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY); /* open file */
	if (file_d == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	r_count = read(file_d, buf, letters); /* read file */
	if (r_count == -1)
		return (0);

	w_count = write(STDOUT_FILENO, buf, r_count); /* write file */
	if (w_count == -1 || r_count != w_count) /*check if write failed*/
		return (0);

	free(buf);

	close(file_d); /*close file*/

	return (w_count);
}
