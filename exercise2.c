int getValueFromArray(int *array, int len, int index) {
    // Return the element from the array at the specified index
    return array[index];
}

int getValueFromArray(int *array, int len, int index) {
    // Check if the index is within the bounds of the array
    if (index >= 0 && index < len) {
        return array[index];
    } else {
        // Handle the case where the index is out of bounds
        // You can return a special value or handle it as needed
        return -1; // Example: returning -1 to indicate an invalid index
    }
}