# WordCount
Project developed to count the amount of times each word is included in a given text, in order to aid in the reviewing and correction of written assignments.

<h2>Current Functionality</h2>

1. Reads text directly from .txt file named "Text" within the same directory.
2. Counts the instances of each word in the text.
3. Outputs each word followed by the amount of times the word was used in alphabetical order.

<h2>Future Plans</h2>

1. Change output to show most frequent words first.
2. Add possibility to read directly from Word documents AND/OR create UI for manual input of text.
3. Have the program look up the top N most used words on the internet and provide possible synonyms if available.
  3.1. Include this functionality for both Spanish and English at least.
  
<h2>Known Bugs</h2>

1. Whitespace is sometimes counted as an individual word.

<h2>Unresolved Issues</h2>

1. If the program were to read directly from a Word document, it would include the header and other data that isn't part of the main body.
2. Don't know of a way to fine-tune synonym suggestions given the context in which the word appears in (for example, if a noun is used as a verb within the text, the synonyms given would still be other nouns)
