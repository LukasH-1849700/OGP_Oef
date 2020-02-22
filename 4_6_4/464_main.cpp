#include <string>
#include <iostream>

void pig_latinator(std::string *s);

int main()
{
	using std::string;

	string s = "according to all known laws of aviation, there is no way a bee should be able to fly.\nits wings are too small to get its fat little body off the ground.\nthe bee, of course, flies anyway because bees don't care what humans think is impossible.";

	pig_latinator(&s);

	std::cout << s;

	return 0;
}

void pig_latinator(std::string* s)
{
	using std::string;

	int prev_i = 0;
	while (prev_i < (int)s->length()) {
		// Find the index of the next char that likely isn't part of a word
		int curr_i = s->find_first_of(" .,?!;:/<>&(){}[]\n\0", prev_i);

		// Make a substring of the (potential) word at position prev_i
		string word = s->substr(prev_i, curr_i-prev_i);
		if (!word.empty()) {
			word += word[0];	// Add the first letter of the word to the end
			word += "ay";		// Add ay after the letter
			word.erase(0, 1);	// Remove the first letter of the word
			s->erase(prev_i, curr_i-prev_i);	// Take the old word out of the string
			s->insert(prev_i, word);	// Insert the new word into the string
		}

		prev_i += word.length()+1;
	}
}