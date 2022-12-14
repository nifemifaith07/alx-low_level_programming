#!/usr/bin/python3
"""
Island perimeter using effective counting approach
    Each land cell contributes 4 to the perimeter of the island
    but if it shares its sides with a neighbour subtract 2
    one for its shared side and one for the neighbour shared side
"""


def island_perimeter(grid):
    """
        returns the perimeter of the island described in grid

        grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water,
            and there is one island (or nothing).
        The island doesn’t have “lakes”
            (water inside that isn’t connected to the water around the island).
    """
    per = 0
    for x in range(0, len(grid), 1):
        for y in range(0, len(grid[0]), 1):
            if grid[x][y] == 1:
                per += 4
                if y > 0 and grid[x][y - 1] == 1:
                    per -= 2
                if x > 0 and grid[x - 1][y] == 1:
                    per -= 2
    return per
