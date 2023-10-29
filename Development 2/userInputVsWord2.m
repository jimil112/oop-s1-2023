%{
Program Discription: Similar to user input test 1 the program tests a simple 
user input agaisnt a word selected by the computer, displaying symbols 
according to rules of the game, however this places the symbols in a vector
and draws them out when needed. 
%}

%{
File Purpose: To see how Program takes in a user input and compares it to
the compter chosen word, if it draws and displays symbols correctly from 
the vector. 
%}

%Computer selecting word.
sixLetterWords = {'nailed','coffee', 'yellow', 'inward','incase', 'strike'};
word = sixLetterWords{randi(numel(sixLetterWords))};
%Dsiplaying word in order to see if test is accurate. 
disp(word);

%Basic user input prompt for testing program. 
attempt = input(['Word : '], 's');

% Checking user attempt against computer selected word.
%Defining Outcome vector.
outcome =['+', '#', 'x'];
%Initialzing empty score vector.
 score=[]; 
for i = 1:6
        %{
        Testing if user attempt is exactly equal to computer generated
        word, testing both order and element.
        %}
        if attempt(i) == word(i)
            %Condacinating 1st element of outcome vector into score.
           score = [score outcome(1)];
        %{
        Using 'ismember' fucntion to test if elements in the attempts
        array are present in the word array.
        %}
        elseif ismember(attempt(i), word)
            %Condacinating 2nd element of outcome vector into score.
           score= [score outcome(2)];
        else
           %Condacinating 3rd element of outcome vector into score.
           score= [score outcome(3)];
        end
    end 
disp(score);

if score == "++++++"
    disp('good job you won')
end



    