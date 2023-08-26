#include "main.h"
#include <stdio.h>

/**
 * copy_to_buffer - Copies n bytes from memory area pointed by src
 *					to the buffer contained in a Buffer struct.
 *
 * @outputBuffer: A Buffer struct.
 * @src: A pointer to the memory area to be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: The number of bytes copied to buffer.
 */
int copy_to_buffer(Buffer *outputBuffer, char *src, unsigned int n)
{
	unsigned int i;

	if (src == NULL)
	{
		printf("Fuck this shit is NULL!!!!\n");
		exit(1);
	}

	for (i = 0; i < n; i++)
	{
		*(outputBuffer->ptr) = src[i];
		(outputBuffer->length)++;

		if (outputBuffer->length == 1024)
		{
			write(1, outputBuffer->start, outputBuffer->length);
			outputBuffer->ptr = outputBuffer->start;
			outputBuffer->length = 0;
		}
		else
		{
			(outputBuffer->ptr)++;
		}
	}

	return (n);
}
