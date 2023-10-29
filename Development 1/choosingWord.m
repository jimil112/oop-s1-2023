
%{
Program Discription + File Purpose: Creating List of words and choosing a 
word, the purpose of this file is to test if the program chooses a
different word everytime.
%}

%Creating cell array containing six letter words. 
sixLetterWords = {'nailed','coffee', 'yellow', 'inward','incase', 'strike'};
%{
Using 'randi' function to obtain random word from array, assining it to
variable word.
%}
word = sixLetterWords{randi(numel(sixLetterWords))};

%{
Diplaying word to test program.
%}
disp(word);




