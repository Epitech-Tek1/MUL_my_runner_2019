/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

////////////////////////////////////////////////////////////
/// Return 0 if program finish with no problem
///
////////////////////////////////////////////////////////////
#define         EXIT_SUCCESS    0

////////////////////////////////////////////////////////////
/// Return 1 if program finish with a problem
///
////////////////////////////////////////////////////////////
#define         EXIT_FAILED     1

#define         EXIT_ERROR      84

////////////////////////////////////////////////////////////
/// End of a line
///
////////////////////////////////////////////////////////////
#define         _END_LINE_      '\n'

////////////////////////////////////////////////////////////
/// End of a string
///
////////////////////////////////////////////////////////////
#define         _END_STR_       '\0'

typedef struct insert_to_tab_s
{
    int i;
    int j;
    int k;
} insert_to_tab_t;

////////////////////////////////////////////////////////////
/// Put a int into a string
///
////////////////////////////////////////////////////////////
char            *my_into_str(int nb);

////////////////////////////////////////////////////////////
/// Print a string
///
////////////////////////////////////////////////////////////
char            *my_putstr(char *);

////////////////////////////////////////////////////////////
/// Reverse a string
///
////////////////////////////////////////////////////////////
char            *my_revstr(char *);

////////////////////////////////////////////////////////////
/// Replace a string
///
////////////////////////////////////////////////////////////
char            *my_strdup(char const *);

////////////////////////////////////////////////////////////
/// concatenat strings
///
////////////////////////////////////////////////////////////
char            *my_strcat(char *, char const *);

////////////////////////////////////////////////////////////
/// Check if a char is a character
///
////////////////////////////////////////////////////////////
int             is_charac(char c);

////////////////////////////////////////////////////////////
/// calcul a power of a number
///
////////////////////////////////////////////////////////////
int             my_compute_power_rec(int, int);

////////////////////////////////////////////////////////////
/// Count the length of a line
///
////////////////////////////////////////////////////////////
int             my_length_line(char *tab);

////////////////////////////////////////////////////////////
/// Count line number of a file
///
////////////////////////////////////////////////////////////
int             my_nbr_line(char *tab, int i, int line);

////////////////////////////////////////////////////////////
/// Open a file and read
///
////////////////////////////////////////////////////////////
int             my_open_read(char *filepath, char *str, _Bool *error);

////////////////////////////////////////////////////////////
/// Return opposite number
///
////////////////////////////////////////////////////////////
int             my_opp_nbr(int nbr);

////////////////////////////////////////////////////////////
/// Print a number
///
////////////////////////////////////////////////////////////
int             my_put_nbr(int);

////////////////////////////////////////////////////////////
/// Count length of a string
///
////////////////////////////////////////////////////////////
int             my_strlen(char *);

////////////////////////////////////////////////////////////
/// Count length of a word
///
////////////////////////////////////////////////////////////
// int             my_strlen_word(char *str, int i);

////////////////////////////////////////////////////////////
/// Put a string into a int
///
////////////////////////////////////////////////////////////
int             my_strto_int(char *str);

////////////////////////////////////////////////////////////
/// Check if a string is number
///
////////////////////////////////////////////////////////////
int             my_str_isnum(char *str);

////////////////////////////////////////////////////////////
/// Print a char
///
////////////////////////////////////////////////////////////
void            my_putchar(char);

////////////////////////////////////////////////////////////
/// Print a char **
///
////////////////////////////////////////////////////////////
_Bool           my_putstrstr(char *tab[]);

////////////////////////////////////////////////////////////
/// Put a char * into a char **
///
////////////////////////////////////////////////////////////
char **my_str_to_word_array(char const *str);

#endif /* !MY_H_ */