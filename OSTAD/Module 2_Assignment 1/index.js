/**
 * Function to calculate the sum of all elements in an array
 * @param {number[]} arr - The input array
 * @returns {number} The sum of all elements in the array
 */
function calculateSum(arr) {
    // Initialize a variable to store the sum
    let sum = 0;
    
    // Loop through the array and accumulate the sum
    for (let i = 0; i < arr.length; i++) {
        sum += arr[i];
    }
    
    // Return the total sum
    return sum;
}

// Example usage:
const numbers = [1, 2, 3, 4, 5]; // Test values
console.log(calculateSum(numbers)); // Expected Output: 15

/**
 * 🕒 Time Complexity: O(n)
 * 
 * ------------------------------
 * ❓ Explain why the time complexity is O(n):
 * Since we iterate until we go through all the element of this array, performing a single addition operation for each element,
 * the time complexity is directly proportional to the size of the input array (n) -> here n means number of element of this array. Hence, O(n).
 * 
 * ------------------------------
 * 
 * 🔹 What is the time complexity if the array is empty?
 * O(1) - The loop does not run for empty array, and we simply return 0.
 * 
 * ------------------------------
 * 
 * 🔹 What is the time complexity if all elements are negative?
 * O(n) - The operations performed do not change based on the sign of the numbers, it will teverse all the elements.
 * 
 * ------------------------------
 * 
 * 🔹 What is the time complexity if the array contains only one element?
 * O(1) - The loop runs once as the number of element of this array nown 1, making it a constant time operation , only one time.
 */
