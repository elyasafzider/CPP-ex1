#include <string>
#include <iostream>
#include <stdexcept>

#include "PhoneticFinder.hpp"
using namespace std;



string phonetic::find(string text, string word) {

if (word[0] == ' ')
{
    throw invalid_argument("The word is empty");
}
int text_size = text.size();
string copy_text = text;
string copy_word = word;

 transform(copy_text.begin(),copy_text.end(),copy_text.begin(),::tolower);
 transform(copy_word.begin(),copy_word.end(),copy_word.begin(),::tolower);

replace (copy_text.begin(), copy_text.end(), 'v', 'w');
replace (copy_text.begin(), copy_text.end(), 'b', 'p');
replace (copy_text.begin(), copy_text.end(), 'f', 'p');
replace (copy_text.begin(), copy_text.end(), 'g', 'j');
replace (copy_text.begin(), copy_text.end(), 'c', 'q');
replace (copy_text.begin(), copy_text.end(), 'k', 'q');
replace (copy_text.begin(), copy_text.end(), 's', 'z');
replace (copy_text.begin(), copy_text.end(), 'd', 't');
replace (copy_text.begin(), copy_text.end(), 'o', 'u');
replace (copy_text.begin(), copy_text.end(), 'i', 'y');

replace (copy_word.begin(), copy_word.end(), 'v', 'w');
replace (copy_word.begin(), copy_word.end(), 'b', 'p');
replace (copy_word.begin(), copy_word.end(), 'f', 'p');
replace (copy_word.begin(), copy_word.end(), 'g', 'j');
replace (copy_word.begin(), copy_word.end(), 'c', 'q');
replace (copy_word.begin(), copy_word.end(), 'k', 'q');
replace (copy_word.begin(), copy_word.end(), 's', 'z');
replace (copy_word.begin(), copy_word.end(), 'd', 't');
replace (copy_word.begin(), copy_word.end(), 'o', 'u');
replace (copy_word.begin(), copy_word.end(), 'i', 'y');

int found = copy_text.find(copy_word);

if (found == (-1) || (text[found + word.size()] != ' ' && (found + word.size()) != text_size) || text[found-1] != ' '&& found != 0)
{
    throw invalid_argument("Word '"+word+"' is not found");
}

 string ans = (string)(text.substr(found,(word.size())));
 return ans;


}


