%{
Program Discription + File Purpose: gussThatWordV2, similar to
guessThatwordV1 blends introduction, choosingWord, userinput together, 
however uses userInputVsWordV2, as this version stores the symbols in a
vector.
%}

%Introduction to guess that word
fprintf('Hello Contestent and Welcome to GUESS THAT WORD!!!\n');
fprintf("In this game it will be your job to guess the correct 6 letter word " + ...
    "within 7 attempts if you are not able to do that, you LOOSE!!!\n");
fprintf('x will appear when you guess the incorrect letter\n');
fprintf('+ will appear when you guess the correct letter in correct position\n');
fprintf('# will appear when you guess the correct letter in wrong position\n');

%Creating cell array containing six letter words. 
sixLetterWords = {'nailed','coffee', 'yellow', 'inward','incase ','strike' };
%{
Using 'randi' function to obtain random word from array, assining it to
variable word.
%}  
word = sixLetterWords{randi(numel(sixLetterWords))};

%Initializing Variable Trys,
tries = 0;

%{
Setting parameter for while loop, while varible tries remains smaller than
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
        %Return to start of loop and ask player for new attempt.
        continue;
    end
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
    % Add 1 to tries variable. 
    tries = tries + 1;

   %If users attempt is completely correct the game congratualtes the user.
   if score == "++++++"
        disp('You Guessed Correct!! You Win!! :)');
        break;
   %If user has reached 7 attempts befroe guessing correctly the game ends.
   elseif tries == 7
       disp('Better Luck Next Time. You Loose. :(');
       break
   end
end



