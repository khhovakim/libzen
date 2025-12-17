#ifndef   __Zen_String__
# define  __Zen_String__

# include <stddef.h>  // for size_t

/**
 * @brief Calculates the length of a string.
 *
 * This function returns the number of characters in the string
 * pointed to by s, not including the null terminator.
 *
 * @param  s The string whose length is to be calculated.
 * @return The length of the string.
 */
extern size_t zen_strlen(const char *s);

/**
 * @brief Copies a string to a destination buffer with size limitation.
 *
 * This function copies up to size - 1 characters from the string src
 * to dest, null-terminating the result if size is not 0.
 *
 * @param  dest The destination buffer.
 * @param  src The source string.
 * @param  size The size of the destination buffer.
 * @return The total length of the string it tried to create,
 *         that is, the length of src.
 */
extern size_t zen_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief Concatenates two strings with size limitation.
 *
 * This function appends the string src to the end of dest,
 * null-terminating the result and ensuring not to exceed size.
 *
 * @param  dest The destination buffer.
 * @param  src The source string.
 * @param  size The size of the destination buffer.
 * @return The total length of the string it tried to create,
 *         that is, the initial length of dest plus the length of src.
 */
extern size_t zen_strlcat(char *dest, const char *src, size_t size);

#endif // __Zen_String__