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

/**
 * @brief Compares two strings.
 * 
 * This function compares the two strings s1 and s2.
 * It returns 0 if they are equal, a negative value if s1 is less than s2,
 * and a positive value if s1 is greater than s2.
 * 
 * @param  s1 The first string to compare.
 * @param  s2 The second string to compare.
 * @return An integer indicating the result of the comparison.
 */
extern int zen_strcmp(const char *s1, const char *s2);

/**
 * @brief Compares two strings up to n characters.
 * 
 * This function compares the two strings s1 and s2 up to n characters.
 * It returns 0 if they are equal, a negative value if s1 is less than s2,
 * and a positive value if s1 is greater than s2.
 * 
 * @param  s1 The first string to compare.
 * @param  s2 The second string to compare.
 * @param  n The maximum number of characters to compare.
 * @return An integer indicating the result of the comparison.
 */
extern int zen_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * This function returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 *
 * @param  s The string to search.
 * @param  c The character to locate.
 * @return A pointer to the first occurrence of c in s, or NULL if not found.
 */
extern char *zen_strchr(const char *s, int c);

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function returns a pointer to the last occurrence of the character c
 * in the string s, or NULL if the character is not found.
 *
 * @param  s The string to search.
 * @param  c The character to locate.
 * @return A pointer to the last occurrence of c in s, or NULL if not found.
 */
extern char *zen_strrchr(const char *s, int c);

/**
 * @brief Locates the first occurrence of a substring in a string.
 *
 * This function returns a pointer to the first occurrence of the substring little
 * in the string big, or NULL if little is not found in big.
 *
 * @param  big The string to search.
 * @param  little The substring to locate.
 * @return A pointer to the first occurrence of little in big, or NULL if not found.
 */
extern char *zen_strstr(const char *big, const char *little);

/**
 * @brief Locates the first occurrence of a substring in a string within a given length.
 * 
 * This function returns a pointer to the first occurrence of the substring little
 * in the string big, where not more than len characters are searched.
 * It returns NULL if little is not found within the first len characters of big.
 * 
 * @param  big The string to search.
 * @param  little The substring to locate.
 * @param  len The maximum number of characters to search in big.
 * @return A pointer to the first occurrence of little in big within len characters, or NULL if not found.
 */
extern char *zen_strnstr(const char *big, const char *little, size_t len);
#endif // __Zen_String__