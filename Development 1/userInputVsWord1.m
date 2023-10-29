%{
Program Discription: Program tests a simple user input agaisnt a word
selected by the computer, displaying symbols according to rules of the
game.
%}

%{
File Purpose: To see how Program takes in a user input and compares it to
the compter chosen word, and how if it displays symbols correctly. 
%}

%Computer selecting word.
sixLetterWords = {'nailed','coffee', 'yellow', 'inward','inclace', 'strike'};
word = sixLetterWords{randi(numel(sixLetterWords))};
%Dsiplaying word in order to see if test is accurate. 
disp(word);

%Basic user input prompt for testing program. 
attempt = input(['Word : '], 's');

% Checking user attempt against computer selected word.

%Initializing outcome variable.
outcome = "";
    for i = 1:6
        %{
        Testing if user attempt is exactly equal to computer generated
        word, testing both order and element.
        %}
        if attempt(i) == word(i)
            %if true, + ion added to outcome array.
            outcome = outcome + "+";
        %{
        Using 'ismember' fucntion to test if elements in the attempts
        array are present in the word array.
        %}
        elseif ismember(attempt(i), word)
            %if true # added to outcome array
            outcome = outcome + "#";
        %If the other 2 outcomes do not occure, x added to outcome array.
        else
            outcome = outcome + "x";
        end
    end 

    disp(outcome);


    