#!/usr/bin/python3
"""This module contains one function island_perimeter(grid):"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimetro = 0
    row = len(grid)
    col = len(grid[0])
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if grid[i - 1][j] != 1:
                    perimetro += 1
                if grid[i + 1][j] != 1:
                    perimetro += 1
                if grid[i][j - 1] != 1:
                    perimetro += 1
                if grid[i][j + 1] != 1:
                    perimetro += 1
    return perimetro 
