/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** main
*/

#include <SFML/Graphics.h>

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "test", sfDefaultStyle, NULL);
    sfEvent event;

    // while (sfRenderWindow_isOpen(window)) {
    //     while(sfRenderWindow_pollEvent(window, &event)) {
    //         if (event.type == sfEvtClosed)
    //             sfRenderWindow_close(window);
    //     }
    // }
    // sfRenderWindow_destroy(window);
}