#ifndef   __Zen_Util__
# define  __Zen_Util__

/**
 * @brief Checks whether the given integer value corresponds to an ASCII character.
 *
 * This function determines if the provided integer falls within the range of
 * standard 7-bit ASCII characters (0x00 to 0x7F).
 *
 * @param  c The integer value to check.
 * @return 1 if c is an ASCII character, 0 otherwise.
 */
int zen_isascii(int c);

/**
 * @brief Checks whether the given integer value is an alphanumeric character.
 *
 * This function returns 1 if the input is an ASCII letter or digit (A-Z, a-z, 0-9), 0 otherwise.
 *
 * @param  c The integer value to check.
 * @return 1 if c is alphanumeric, 0 otherwise.
 */
int zen_isalnum(int c);

/**
 * @brief Checks whether the given integer value is an alphabetic character.
 *
 * This function returns 1 if the input is an ASCII letter (A-Z, a-z), 0 otherwise.
 *
 * @param  c The integer value to check.
 * @return 1 if c is alphabetic, 0 otherwise.
 */
int zen_isalpha(int c);

/**
 * @brief Checks whether the given integer value is a decimal digit.
 *
 * This function returns 1 if the input is an ASCII digit (0-9), 0 otherwise.
 *
 * @param  c The integer value to check.
 * @return 1 if c is a digit, 0 otherwise.
 */
int zen_isdigit(int c);

/**
 * @brief Checks whether the given integer value is a printable ASCII character.
 *
 * This function returns 1 if the input is a printable ASCII character (including space), 0 otherwise.
 *
 * @param  c The integer value to check.
 * @return 1 if c is printable, 0 otherwise.
 */
int zen_isprint(int c);

#endif // __Zen_Util__