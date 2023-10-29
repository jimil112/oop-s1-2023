%{
Program Discription: Program Prompts user to enter a six letter word, and
displays game over after the 7th attempt. The attempt number increases by 1
everytime the user inputs a word.
%}

%{
File Purpose: To test if program takes in user inputs and ends after 7th 
attempt, if program correctsfor incorrect length of word and if the attempt
number increases after every try.
%}

%Initializing Variable Trys,
tries = 0;

%{
Setting variable for while loop, while varibles tries remains smaller than
7 the loop continues, as the user only gets 7 attempts.
%} 
while tries < 7
    %{
    Obtain the players attempt, and prompt the user with a specific
    attempt number.
    %}
    attempt = input(['Attempt #' num2str(tries + 1) ': '], 's');
    %Check if users attempt is 6 letters long.
    if numel(attempt) ~= 6
        %If users attempt is not 6 letters long, prompt user to do so.
        disp('Please enter a six-letter word.');
        %Return to start of loop as a player for new attempt.
        continue;
    end
   % Add 1 to tries variable. 
   tries = tries + 1;
end
disp('Game Over');



