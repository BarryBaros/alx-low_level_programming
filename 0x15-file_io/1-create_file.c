#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, nam = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (nam = 0; text_content[nam];)
			nam++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
		w = write(f, text_content, nam);

	if (f == -1 || (text_content != NULL && w == -1))
		return (-1);

	close(f);

	return (1);
}
