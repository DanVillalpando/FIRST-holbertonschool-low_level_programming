#!/usr/bin/python3
"""
5. Island Perimeter
"""

class Figure:
    """
    Defines a class figure
    """
    land = 1
    water = 0
    number = 0
    
    def __init__(self, width=0, height=0):
        """
        Init method to construct a rectangle
        """
        self.height = height
        self.width = width
        Figure.number += 1

    def island_perimeter(grid):
	"""
	returns the perimeter of the island described 
	in grid
	"""
        if self.__width == 0 or self.__height == 0:
            return (0)
        else:
            return (2 * (self.__width + self.__height)
