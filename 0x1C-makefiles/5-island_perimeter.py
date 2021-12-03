#!/usr/bin/python3
"""This module contains one function island_perimeter(grid):"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    p = 2
    for row in grid:
        for colum in row:
            if colum == 1:
                p += 2
    return p
