#!/usr/bin/python3
"""this module is to Calculate the perimeter of the island described in the grid """

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers): Represents the island, where 0 is water and 1 is land.

    Returns:
    - int: Perimeter of the island.
    """
    perimeter = 0

    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check left neighbor
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1

                # Check right neighbor
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

                # Check top neighbor
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                # Check bottom neighbor
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter
