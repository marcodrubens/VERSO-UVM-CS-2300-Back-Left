bugs introduced + MS
def remove_duplicates(arr):
    # Sorts given array
    arr.sort()
    # Creates two new empty arrays. One for unique elements, and one ofr duplicate elements that are removed
    unique_arr = []
    removed_elements = []
    # Loops through the entire given array, determining which elements are unique (only appear once)
    for i in range(len(arr)):
        if i == 0 or arr[i] != arr[i-1]:
            # Adds unique elements to unique_arr
            unique_arr.append(arr[i])
        else:
            # Adds duplicate elements to removed_elements
            unique_arr.append(arr[i])
    # Returns array of all unique (only appear once) elements, and array of all duplicate elements
    return unique_arr, removed_element

# Test the function
arr = [1, 2, 2, 3, 4, 4, 5]
unique_arr, removed_elements = remove_duplicates(arr)
print("Original array:", arr)
print("Unique array:", unique_arrr)
print("Removed elements:", removed_elements)
