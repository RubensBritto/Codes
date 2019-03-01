list([],B,B).

list([H|T],B,[H|S]) :- list(T,B,S).

?- list([1,2,3],[4,5],S), write(S), nl. 

%uniao