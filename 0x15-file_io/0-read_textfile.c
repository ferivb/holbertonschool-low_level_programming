#include "main.h"

/**
  * read_textfile - prints a txt to the stdout
  * @filename: name of the file
  * @letters: letters to read
  * Return: conter of numbers
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t sizrd, sizwr;
	int fd = open(filename, O_RDONLY);
	char *hold = (char *)malloc(letters * sizeof(char));

	if (hold == NULL)
	{
		free(hold);
		fd = 0;
		return (0);
	}
	sizrd = read(fd, hold, letters);
	sizwr = write(STDOUT_FILENO, hold, sizrd);
	if (fd == '\0' || sizrd == -1 || sizwr == -1)
	{
		free(hold);
		fd = 0;
		return (0);
	}
	free(hold);
	close(fd);
	fd = 0;
	return (sizwr);
}
