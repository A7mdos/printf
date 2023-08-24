#include "main.h"

/**
 * free_buffer - Frees a variable of type Buffer struct.
 *
 * @outputBuffer: A pointer to the Buffer to be freed.
 */
void free_buffer(Buffer *outputBuffer)
{
	free(outputBuffer->start);
	free(outputBuffer);
}
