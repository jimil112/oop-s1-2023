%{
Program Discription + File Purpose: gussThatWordV1, blends, 
introduction,userinput, and userInputVsWord1 together, to see if the code 
is functional when put together.
%}

%Introduction to guess that word
fprintf('Hello Contestent and Welcome to GUESS THAT WORD!!!\n');
fprintf("In this game it will be your job to guess the correct 6 letter word " + ...
    "within 7 attempts if you are not able to do that, you LOOSE!!!\n");
fprintf('x will appear when you guess the incorrect letter\n');
fprintf('+ will appear when you guess the correct letter in correct position\n');
fprintf('# will appear when you guess the correct letter in wrong position\n');

%Creating cell array containing six letter words. 
sixLetterWords = {'nailed','coffee', 'yellow', 'inward','incase ','strike'};
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
%Initializing empty string.
outcome = "";
    for i = 1:6
        %{
        Testing if user attempt is exactly equal to computer generated
        word, testing both order and element.
        %}
        if attempt(i) == word(i)
            %if true, + ion added to outcome string.
            outcome = outcome + "+";
        %{
        Using 'ismember' fucntion to test if elements in the attempts
        array are present in the word array.
        %}
        elseif ismember(attempt(i), word)
            %if true # added to outcome string.
            outcome = outcome + "#";
        %If the other 2 outcomes do not occure, x added to outcome string.
        else
            outcome = outcome + "x";
        end
    end 
   disp(outcome);
   % Add 1 to tries variable. 
   tries = tries + 1;
   
   %If users attempt is completely correct the game congratualtes the user.
   if outcome == "++++++"
        disp('You Guessed Correct!! You Win!!');
        break;
   %If user has reached 7 attempts befroe guessing correctly the game ends.
   elseif tries == 7
       disp('Better Luck Next Time. You Loose');
       break
   end
end




