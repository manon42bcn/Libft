```
                                           @@@@                       
                                          @@@@                        
                                         @@@@                         
                                        @@@@                          
                                       @@@@                           
                                      @@@@   @@@@      @@@@@          
         &@@@   @@@@   @@@&           @@@@   @@@@    @@@@@@@@@        
         &@@@   @@@@   @@@&           @@@@@@@@@@@@@@@@@@   @@@@       
         &@@@          @@@&                  @@@@          @@@@       
         &@@@   @@@@   @@@&@@@@@@     @@@@@  @@@@         @@@@        
         &@@@   @@@@   @@@@& @@@@@   @@@@    @@@@        @@@@         
         &@@@   @@@@   @@@&   @@@@   @@@@    @@@@       @@@@          
         &@@@   @@@@   @@@&   @@@@ @@@@@@@@  @@@@     @@@@            
         &@@@   @@@@   @@@&   @@@@   @@@@    @@@@    @@@@             
         &@@@   @@@@   @@@@   @@@@   @@@@    @@@@@@ @@@@@@@@@@@       
          @@@@@ @@@@   @@@@@@@@@@    @@@@       @@@ @@@@@@@@@@@       
                                     @@@@                             
                                     @@@@                             
                                     @@@@                             
```

# Libft Extended Library #

An extensive C library for commonly used functions, extending upon the basic `libft` functionalities.
`Libft` is our first project in the common-core at 42-School. With each project, I've incorporated functions that have proven useful or necessary for various reasons. Therefore, you might find many functions whose purpose might not be immediately apparent. I've documented the entire project as best as I could, with the idea that it might be useful in your projects and, above all, to encourage you not to copy without fully understanding the details of what you're doing.
Please, don't cheat yourself. Copy is useful, but can be a little dangerous! ;-D
Kind of disclaimer:
- Many of these functions might not be the most efficient way to perform a specific task. I've created them throughout my learning process and haven't modified them since. I've consistently retained the functions as they were when I evaluated.
- There might be functions that seem repetitive, with only minor differences. Consider that, in some projects, those tiny details saved me a couple of lines to make `norminette` happy!

## **1. Libft Functions** ##

Basic `libft` with bonus. Scored 125%.

### Character Checks and Manipulation: ###

- **`int	ft_isalnum(int c);`** : Checks if the character is alphanumeric.
- **`int	ft_isalpha(int c);`** : Checks if the character is alphabetic.
- **`int	ft_isascii(int c);`** : Checks if the character is an ASCII character.
- **`int	ft_isdigit(int c);`** : Checks if the character is a digit.
- **`int	ft_isprint(int c);`** : Checks if the character is printable.
- **`int	ft_tolower(int c);`** : Converts the character to lowercase, if applicable.
- **`int	ft_toupper(int c);`** : Converts the character to uppercase, if applicable.

### String Operations: ###

- **`size_t	ft_strlen(const char *s);`** : Returns the length of the string.
- **`char	*ft_strchr(const char *s, int c);`** : Finds the first occurrence of the character `c` in the string.
- **`char	*ft_strdup(const char *src);`** : Duplicates the string.
- **`char	*ft_strjoin(char const *s1, char const *s2);`** : Joins two strings into a new string.
- **`char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));`** : Iterates over the string applying the function `f`.
- **`int	ft_strncmp(char *s1, char *s2, size_t n);`** : Compares two strings up to `n` characters.
- **`char	*ft_strnstr(const char *haystack, const char *needle, size_t loc);`** : Locates a substring in a string within `loc` characters.
- **`char	*ft_strrchr(const char *s, int c);`** : Finds the last occurrence of the character `c` in the string.
- **`char	*ft_strtrim(char const *s1, char const *set);`** : Trims the start and end of the string based on the characters in `set`.
- **`char	*ft_substr(char const *s, unsigned int start, size_t len);`** : Retrieves a substring from the string.

### Memory Operations: ###

- **`void	ft_bzero(void *s, size_t n);`** : Zeroes the memory of the given pointer up to `n` bytes.
- **`void	*ft_calloc(size_t count, size_t size);`** : Allocates and zeroes memory for an array.
- **`void	*ft_memchr(const void *s, int c, size_t n);`** : Searches for the character `c` in the first `n` bytes of the string.
- **`int	ft_memcmp(const void *s1, const void *s2, size_t n);`** : Compares memory areas.
- **`void	*ft_memcpy(void *dest, const void *src, size_t n);`** : Copies `n` bytes from `src` to `dest`.
- **`void	*ft_memmove(void *dest, const void *src, size_t len);`** : Copies `len` bytes from `src` to `dest` with overlap handling.
- **`void	*ft_memset(void *b, int c, size_t len);`** : Sets the first `len` bytes of the memory area.

### Output Functions: ###

- **`void	ft_putchar_fd(char c, int fd);`** : Writes the character `c` to the file descriptor `fd`.
- **`void	ft_putendl_fd(char *s, int fd);`** : Writes the string followed by a newline to the file descriptor `fd`.
- **`void	ft_putnbr_fd(int n, int fd);`** : Writes the integer `n` to the file descriptor `fd`.
- **`void	ft_putstr_fd(char *s, int fd);`** : Writes the string to the file descriptor `fd`.

### String Parsing and Conversion: ###

- **`int	ft_atoi(const char *str);`** : Converts the initial part of the string to an integer.
- **`char	*ft_itoa(int n);`** : Converts the integer to a string.
- **`char	**ft_split(char const *s, char c);`** : Splits the string using the character `c` as a delimiter.

### Miscellaneous Functions: ###

- **`void	ft_striteri(char *s, void (*f)(unsigned int, char *));`** : Applies the function `f` to each character of the string.

## **2. Libft-Extended Functions** ##

Extended functionalities designed for more specialized tasks and operations:

- **`long double ft_atolf(char *str)`** : Converts a string to a long double.
- **`void ft_char_replace(char **s, char org, char new)`** : Replaces a character in a string.
- **`size_t ft_strlenchar(const char *s, char c)`** : Returns the length of a string up to a specific character.
- **`int ft_strict_lenchar(const char *s, char c)`** : Returns the length of a string up to a specific character, strictly.
- **`size_t ft_strlen_max(const char *s, size_t max)`** : Returns the length of a string up to a max value.
- **`size_t ft_count_char(const char *s, char c)`** : Counts occurrences of a specific character in a string.
- **`char ft_last_char(char *s)`** : Returns the last character in a string.
- **`void ft_init_vector(int *vector, int value, int size)`** : Initializes an integer vector with a given value.
- **`void ft_safe_free_char(char **s)`** : Safely frees memory occupied by a char pointer.
- **`int ft_check_by_fnc(char *s, int (f)(int))`** : Checks a string using a specific function.
- **`char *ft_remove_lit(char *s, char c)`** : Removes literal characters from a string.
- **`char **ft_split_cs(const char *str, char *charset)`** : Splits a string using multiple delimiters.
- **`int ft_strcmp(char *s1, char *s2)`** : Compares two strings.
- **`int ft_strict_n_cmp(char *s1, char *s2, size_t l1, size_t l2)`** : Strictly compares two strings considering specified lengths.
- **`int ft_strict_cmp(char *s1, char *s2)`** : Strictly compares two strings.
- **`int ft_strncmp_fnc(char *s1, char *s2, size_t n, int (*str_to)(int))`** : Compares two strings up to `n` characters considering a specific function.
- **`t_bool ft_match_cmp(char *s1, char *s2)`** : Compares two strings and checks for a match.
- **`char *ft_strjoin_char(char const *s1, char const *s2, char sep)`** : Joins two strings with a specified separator character.
- **`char *ft_strjoin_clean_char(char **s1, char **s2, char sep, int clean)`** : Joins two strings with a separator, with the option to free the original strings.
- **`char *ft_strjoin_clean(char **s1, char **s2, int clean)`** : Joins two strings, with the option to free the original strings.
- **`char *ft_strjoin_clean_one(char **s1, char *s2)`** : Joins two strings and frees the first original string.
- **`char *ft_strjoin_clean_two(char *s1, char **s2)`** : Joins two strings and frees the second original string.
- **`char *ft_strjoin_clear_ptn(char *s1, char *s2, int clean)`** : Joins two strings and clears the pattern.
- **`char *ft_strndup(const char *src, size_t len)`** : Duplicates a string up to a specified length.
- **`char *ft_strnjoin(char const *s1, char const *s2, size_t len_s1, size_t len_s2)`** : Joins two strings considering specified lengths for both.
- **`char *ft_strnjoin_clean(char *s1, char *s2, size_t len_s1, size_t len_s2)`** : Joins two strings considering specified lengths for both, with the option to free the original strings.
- **`t_bool ft_is_charset(char c, char *charset)`** : Checks if a character exists in a given charset.
- **`size_t ft_len_charset(char const *s, char *charset)`** : Returns the length of a string up to a specific charset.
- **`char *ft_strnstr_end(const char *haystack, const char *needle, size_t loc)`** : Finds the last occurrence of a substring in a string, up to a specified length.
- **`size_t ft_strnstr_len(const char *haystack, const char *needle, size_t len)`** : Returns the length up to the occurrence of a substring.
- **`char *ft_strtrim_clean(char *s1, char const *set)`** : Trims characters from a string and cleans it.
- **`void ft_clear_tabs(char **tab)`** : Clears tabs from a string.
- **`size_t ft_count_tab(char **s)`** : Counts tabs in a string.
- **`void ft_sort_str_tab(char **tab)`** : Sorts a tabbed string.
- **`void *ft_sec_malloc(size_t size)`** : Safely allocates memory.
- **`void *ft_sec_calloc(size_t size)`** : Safely allocates and initializes memory.
- **`void ft_perror(char *msg)`** : Custom error message function.
- **`void ft_my_perror(char *exc, char *msg)`** : Another custom error message function.
- **`void ft_sec_free(void *ptr)`** : Safely frees memory.

## **3. GNL (Get Next Line) Functions**

- **`char	*get_next_line(int fd);`** : Reads a line from a file descriptor.

This version of GNL is a small adaption of my GNL to work as a module of libft.

### Workflow of the `libft-gnl` module (Get Next Line)

The `libft-gnl` module revolves around the `get_next_line` function, designed to read one line from a file per call until no more lines remain. The implementation of `get_next_line` leverages a static buffer to ensure information retention between calls and to handle efficient file reading. Below is an overview of the module's workflow:

1. **Initialization and Validation**:
  - `get_next_line` starts by checking if the file descriptor `fd` is valid, if the buffer size is correct, and if the end of the file hasn't been reached yet.

2. **Reading and Searching**:
  - The function checks if there's already content in the buffer. If there's no content or no new line in the existing content, more is read from the file into the buffer using `read()`.
  - Every time content is read into the buffer, a new line (`\n`) is searched for. If a new line is found, the line is processed and returned.

3. **Line Processing**:
  - If a new line is detected in the buffer, the `ft_line_proccess` function processes the line. It extracts the line from the buffer, returns it, and adjusts the buffer to remove the read line, leaving any remaining content for the next call.

4. **Continued Reading**:
  - If no new line is detected, `get_next_line` continues reading from the file to the buffer and looking for a new line. This process continues until a new line is found or the end of the file is reached.

5. **Finalization**:
  - Once a complete line has been read and processed, `get_next_line` returns it. If the end of the file is reached without finding a new line, it returns the last line or NULL if no content remains.

6. **Helper Functions**:
  - The `libft-gnl` module has several helper functions for string handling (`ft_substr_gnl`, `ft_strjoin_gnl`). These functions are primarily used for processing the buffer and extracting lines from the read content.
