class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
          vector<string> morseCode = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
            "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
            "..-", "...-", ".--", "-..-", "-.--", "--.."
        };

        unordered_set<string> uniqueMorse;

        for (const string& word : words) {
            string morseRepresentation = "";
            for (char c : word) {
                morseRepresentation += morseCode[c - 'a'];
            }
            uniqueMorse.insert(morseRepresentation);
        }

        return uniqueMorse.size();
    }
};
/*
Approach
Define the English alphabet and Morse code representations:

letters stores the lowercase English alphabet from 'a' to 'z'.
morse_code stores the corresponding Morse code representations for each letter.
Create a dictionary mapping letters to Morse code:

morse_dict is a dictionary created by zipping letters and morse_code together. It maps each letter to its Morse code representation.
Initialize a list to store words converted to Morse code:

words2 is an empty list that will be used to store the Morse code representations of the input words.
Iterate through each word in the input list:

For each word in words, the code initializes an empty string k to store the Morse code for the current word.
Iterate through each character in the current word:

For each character i in the current word, the code appends the Morse code representation of that character (retrieved from morse_dict) to the string k.
Append the Morse code for the current word to the list:

After converting the entire word to Morse code and building the string k, the code appends k to the words2 list.
Return the count of unique Morse code representations:

The code returns the length of the set of words2. This effectively counts the number of unique Morse code representations in the list and returns that count as the result.
*/
