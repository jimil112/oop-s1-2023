
%{
Program Discription + File Purpose:Program produces asciiArt, a large
banner for Guess That Word. The Purpose of this file is to be the function
for Guess that word.
%}

function [] = art()
%{
Art From: https://patorjk.com/software/taag/#p=display&f=Graff
iti&t=Type%20Something%20
%}
asciiArt = {...
  '  ___  _  _  ____  ____  ____    ____  _  _   __  ____    _  _   __  ____  ____  _';   
 ' / __)/ )( \(  __)/ ___)/ ___)  (_  _)/ )( \ / _\(_  _)  / )( \ /  \(  _ \(    \/ \ '; 
'( (_ \) \/ ( ) _) \___ \\___ \    )(  ) __ (/    \ )(    \ /\ /(  O ))   / ) D (\_/ ' ;
' \___/\____/(____)(____/(____/   (__) \_)(_/\_/\_/(__)   (_/\_) \__/(__\_)(____/(_)' ; 
};

for i = 1:numel(asciiArt)
    % Displaying each row. 
    disp(asciiArt{i});
end 
end