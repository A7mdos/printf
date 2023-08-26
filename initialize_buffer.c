#include "main.h"

/**
 * init_buffer - Initializes a variable of type struct Buffer.
 *
 * Return: A pointer to the initialized Buffer.
 */
Buffer *init_buffer()
{
	Buffer *outputBuffer;

	outputBuffer = malloc(sizeof(Buffer));
	if (outputBuffer == NULL)
		return (NULL);


	outputBuffer->start = malloc(sizeof(char) * 1024);
	if (outputBuffer->start == NULL)
	{
		free(outputBuffer);
		return (NULL);
	}

	outputBuffer->ptr = outputBuffer->start;
	outputBuffer->length = 0;

	return (outputBuffer);
}
