/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * * Returns a pointer to the resulting string.
 * */
char *_strcat(char *dest, char *src) {
	/* Get the lengths of the two strings. */
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	/* Move the pointer to the end of dest. */
	dest += dest_len;
	/* Copy the src string to dest. */
	while (src_len--)
	{
		*dest++ = *src++;
	}
	/* Add a terminating null byte to dest. */
	*dest = '\0';
	/* Return a pointer to dest. */
	return (dest);
}
