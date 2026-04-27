LIBFT - MILESTONE 0

 LIBFT is the first project of the 42 program. Create your very first library, starting with standard C functions and some additional useful functions.
 This will deepen your knowledge in low-level programming, and also in memory management.

   Features :

-> Character checks

- ft_isalpha;       ---   check if char is a letter;
- ft_isdigit;       ---   check if char is a number;
- ft_isalnum;       ---   check if char is alphanumeric;
- ft_isascii;       ---   check if char is within ascii range;
- ft_isprint;       ---   check if char is printable;

-> String manipulation

- ft_strlen;        ---   returns the string's length;
- ft_strdup;        ---   duplicates a given string;
- ft_strlcpy;       ---   copies the given string with a size limit;
- ft_strlcat;       ---   concatenates string with a size limit;
- ft_strchr;        ---   finds first occurence of a char in given string;
- ft_strrchr;       ---   finds last occurence of a char in given string;
- ft_strncmp;       ---   compares two strings up to n bytes;
- ft_strnstr;       ---   locates a substring within n bytes of the given string;
- ft_substr;        ---   extracts a substring within the given string;
- ft_strjoin;       ---   joins two strings into one;
- ft_strtrim;       ---   trims a string of given char from start and end;
- ft_split;         ---   splits the given string with the given delimiter;
- ft_strmapi;       ---   apllies a function to all chars, and returns the product string;
- ft_striteri;      ---   applies a function to all chars;

-> Memory functions

- ft_memset;        ---   fills memory field with the given byte;
- ft_bzero;         ---   sets memory field to zero;
- ft_memcpy;        ---   copies memory; (does not handle overlapping cases);
- ft_memmove;       ---   copies memory safely;
- ft_memchr;        ---   searches for a byte in the given memory field;
- ft_memcmp;        ---   compares two memory fields;
- ft_calloc;        ---   allocates memory and initializes it with zeros;

-> Conversion functions

- ft_atoi;          ---   converts a string to an integer;
- ft_itoa;          ---   converts an integer to a string;

-> File descriptor output

- ft_putchar_ld;    ---   writes a char to a file descriptor;
- ft_pustr_fd;      ---   writes a string to a file descriptor;
- ft_putendl_fd;    ---   writes a string followed by a newline;
- ft_putnbr_fd;     ---   writes a number to a file descriptor;

-> Linked list functions

- ft_ lstnew;       ---   creates a new list node;
- ft_lstadd_front;  ---   adds a node to the beginning;
- ft_lstadd_back;   ---   adds a node to the end;
- ft_lstsize;       ---   counts the number of nodes;
- ft_lstlast;       ---   returns the last node;
- ft_lstdelone;     ---   deletes a single node;
- ft_lstclear;      ---   safely deletes the entire list;
- ft_lstiter;       ---   applies a function to each node;
- ft_lstmap;        ---   applies a function to each node and returns the product list;


   Installation :

git clone 
