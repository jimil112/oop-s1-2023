%{
Program Discription + File Purpose: Final version of program with cleaner
styling and commenting.
%}


% dirver for funtion, printing art.
%{
Art From: https://patorjk.com/software/taag/#p=display&f=Graff
iti&t=Type%20Something%20
%}
art ();

% Introduction to guess that word.
fprintf('Hello Contestent and Welcome to GUESS THAT WORD!!!\n');
fprintf("In this game it will be your job to guess the correct 6 or 3 letter" + ...
    " word within 7 attempts\nif you are not able to do that, you LOOSE!!!\n");
fprintf('x will appear when you guess the incorrect letter\n');
fprintf('+ will appear when you guess the correct letter in correct position\n');
fprintf('# will appear when you guess the correct letter in wrong position\n');


% Creating cell array containing six letter words. 
sixLetterWords = {'nailed','coffee', 'yellow', 'inward','incase ','strike' };
threeLetterWords = {'yes', 'six','one','dad','mum', 'app', };
%{
Using 'randi' function to obtain random word from array, assining it to
variable word.
%}  
    word = sixLetterWords{randi(numel(sixLetterWords))};
    threeword = threeLetterWords{randi(numel(threeLetterWords))};

% Initializing Variable Trys,
    tries = 0;

% Prompting user to choose a game mode using input function.
    mode = input('Select game mode 1 = hard, 2 = easy: ');

% Ensure user entered valid mode. 
if mode ~= 1 && mode ~= 2
    error('Invalid Input, Enter 1 for hard or 2 for easy.');
end

% If hard mode selected run while loop.

if mode==1
    fprintf('Please enter a six-letter word.\n')

    % While Loop Executed when tires variable has a value bellow 7. 
    while tries < 7
        % Promt player for attempt.
        attempt = input(['Attempt #' num2str(tries + 1) ': '], 's');
        % Check if users attempt is 6 letters long.
        if numel(attempt) ~= 6
            % If users attempt is not 6 letters long, prompt user to do so.
             disp('Please enter a six-letter word.');
            % Return to start of loop and ask player for new attempt.
            continue;
        end
% Checking user attempt against computer selected word.

    % Defining Outcome vector.
    outcome =['+', '#', 'x'];
    
    % Initialzing empty score vector.
    score=[]; 

        for i = 1:6
             % Letter + location match
            if attempt(i) == word(i)
                % Condacinating 1st element of outcome vector into score.
                score = [score outcome(1)];
                % Letter Match
                elseif ismember(attempt(i), word)
                % Condacinating 2nd element of outcome vector into score.
                score= [score outcome(2)];
                else
                % Condacinating 3rd element of outcome vector into score.
                score= [score outcome(3)];
           end
         end 
    disp(score);
    % Add 1 to tries variable. 
    tries = tries + 1;

    % If users attempt is completely correct the game congratualtes the user.
    if score == "++++++"
        disp('You Guessed Correct!! You Win!! :)');
        break;
    % If user has reached 7 attempts befroe guessing correctly the game ends.
    elseif tries == 7
       disp('Better Luck Next Time. You Loose. :(');
       break
   end
end

% If easy mode selected run while loop. 
elseif mode==2
    fprintf('Please enter a three-letter word.\n')
    % While Loop Executed when tires variable has a value bellow 7. 
    while tries < 7
        % Promt player for attempt.
        attempt = input(['Attempt #' num2str(tries + 1) ': '], 's');
        % Check if users attempt is 3 letters long.
        if numel(attempt) ~= 3
            % If users attempt is not 3 letters long, prompt user to do so.
            disp('Please enter a three-letter word.');
            % Return to start of loop and ask player for new attempt.
            continue;
        end
    % Checking user attempt against computer selected word.
    % Defining Outcome vector.
    outcome =['+', '#', 'x'];
    % Initialzing empty score vector.
    score=[]; 
        for i = 1:3
        % Letter + location match
            if attempt(i) == threeword(i)
                % Condacinating 1st element of outcome vector into score.
                score = [score outcome(1)];
                % Letter Match
            elseif ismember(attempt(i), threeword)
                % Condacinating 2nd element of outcome vector into score.
                score= [score outcome(2)];
            else
                % Condacinating 3rd element of outcome vector into score.
                score= [score outcome(3)];
            end
        end 
    disp(score);
    % Add 1 to tries variable. 
    tries = tries + 1;

    % If users attempt is completely correct the game congratualtes the user.
        if score == "+++"
            disp('You Guessed Correct!! You Win!! :)');
            break;
        %{
        If user has reached 7 attempts befroe guessing correctly the game 
        ends.
        %}
        elseif tries == 7
            disp('Better Luck Next Time. You Loose. :(');
            break;
        end
    end
end 



