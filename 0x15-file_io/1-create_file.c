#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
*/

int create_file(const char *filename, char *text_content)
{
	int file_d, w_count, len = 0;

	if (filename == NULL) /* check if file is present */
		return (-1);
	/**
	* open file with create, write only, truncate flags
	* with read and write access for user only
	*/
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR, S_IWUSR);
	if (file_d == -1) /* check if opening and creation failed */
		return (-1);

	if (text_content) /* check content !NULL */
	{
		while (text_content[len] != '\0')
			len++;

		w_count = write(file_d, text_content, len);
		if (w_count == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
