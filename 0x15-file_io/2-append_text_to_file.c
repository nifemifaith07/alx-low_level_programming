#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to add data to
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, a_count, len = 0;

	if (filename == NULL) /* check if file is present */
		return (-1);

	/* open file with append ant write flags */
	file_d = open(filename, O_APPEND | O_WRONLY);
	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		while (text_content != '\0')
			len++;

		a_count = write(file_d, text_content, len);
		if (a_count == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
