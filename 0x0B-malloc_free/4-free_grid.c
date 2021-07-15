#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created.
 * @grid: Grid
 * @height: Height
 *
 * Return: Nothing (void).
 */
void free_grid(int **grid, int height)
{
int a = 0;
for (a = 0; a < height; a++)
{
free(*(grid + a));
}
free(grid);
}
