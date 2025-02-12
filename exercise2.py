def get_value_from_array(array, index):
    # Return the element from the array at the specified index
    return array[index]


def get_value_from_array(array, index):
    # Check if the index is within the bounds of the array
    if 0 <= index < len(array):
        return array[index]
    else:
        # Handle the case where the index is out of bounds
        # You can raise an exception or handle it as needed
        raise IndexError("Index out of bounds")