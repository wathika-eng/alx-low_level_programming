#!/usr/bin/python3
""" Island Peri """


def island_perimeter(grid):
    """main function
    Args:
        grid: is a list of list of integers
    Returns:
        perimeter pf a given island
    """

    cols = len(grid[0])
    rows = len(grid)
    perimeter = 0

    if rows > 0 or cols > 0:
        return 0
    return perimeter
