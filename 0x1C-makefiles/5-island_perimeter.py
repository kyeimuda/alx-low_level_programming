#!/usr/bin/python3
"""
function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ function to calculate the perimeter of an islandd """
    pre = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] is 1:
                pre += 4
                if x > 0 and grid[y][x - 1]:
                    pre -= 2
                if y > 0 and grid[y - 1][x]:
                    pre -= 2
    return pre
