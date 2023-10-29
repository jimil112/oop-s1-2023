
%{
Program Discription + File Purpose: Creating List of words and choosing a 
word for easy mode, the purpose of this file is to test if the program 
chooses a different word everytime.
%}

%Creating cell array containing three letter words. 
threeLetterWords = {'yes', 'six','one','dad','mum', 'app',};
%{
Using 'randi' function to obtain random word from array, assining it to
variable word.
%}
threeword = threeLetterWords{randi(numel(threeLetterWords))};

%{
Diplaying word to test program.
%}
disp(threeword);