/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** is_alphanum
*/

int is_alphanum(char c)
{
    return (c >= '0' && c <= '9') ? (1) :
    ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? (1) : (0);
}