/*Given the string, check if it is a palindrome.

Example

For inputString = "aabaa", the output should be
checkPalindrome(inputString) = true;
For inputString = "abac", the output should be
checkPalindrome(inputString) = false;
For inputString = "a", the output should be
checkPalindrome(inputString) = true.
Input/Output

[time limit] 500ms (cpp)
[input] string inputString

A non-empty string consisting of lowercase characters.

Guaranteed constraints:
1 ≤ inputString.length ≤ 10.

[output] boolean

true if inputString is a palindrome, false otherwise.
*/

bool checkPalindrome(std::string inputString) {
    std::string r = inputString;
    std::reverse(r.begin(), r.end());
    return inputString == r ? true : false;
}
