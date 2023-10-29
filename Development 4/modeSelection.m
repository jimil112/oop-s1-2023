%{
Program Discription + File Purpose: Program prompts the user to choose for
2 modes easy or hard, purpose of this file is to test if the user input for 
modes is read correctly and if the code runs.
%}

%Prompting user to choose a game mode using input function.
mode = input('Select game mode 1 = hard, 2 = easy: ');
%Ensure user entered valid mode. 
if mode ~= 1 && mode ~= 2
    error('Invalid Input, Enter 1 for hard or 2 for easy.');
end
 
%Testing if program runs correctly
disp(mode); 





