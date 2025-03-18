/**
 * Function to find the maximum number in an array
 * @param {number[]} arr - The input array
 * @returns {number|null} The maximum number in the array, or null if the array is empty
 */
function findMax(arr) {
    if (arr.length === 0) return null;

    let max = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Example usage:
const numbers = [3, 7, 2, 9, 5, -1, 10, 6];
console.log(findMax(numbers));

/**
 * 🕒 Time Complexity: O(n)
 * 
 * ------------------------------
 * ❓ Explain why the time complexity is O(n):
 * The function iterates through the array once, comparing each element to the current max value.
 * Since there is one loop that runs `n` times (where `n` is the array length), the time complexity is O(n).
 * 
 * ------------------------------
 * 
 * 💾 Space Complexity: O(1)
 * 
 * ------------------------------
 * ❓ Explain why the space complexity is O(1):
 * The function uses only a constant amount of extra space (`max` variable), regardless of the input size.
 * No additional data structures are used, so the space complexity remains O(1).
 * 
 * ------------------------------
 * 
 * 🔹 What is the space complexity if the array is empty?
 * O(1) - The function only uses a single variable (`max`), and no additional memory is allocated.
 * 
 * ------------------------------
 * 
 * 🔹 What is the space complexity if all elements are negative?
 * O(1) - The algorithm does not depend on the sign of the numbers, only their relative values.
 * 
 * ------------------------------
 * 
 * 🔹 What is the space complexity if the array contains only one element?
 * O(1) - The function will return that single element without using extra space.
 */
