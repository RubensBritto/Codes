sl([],0).
sl([R|T],S) :- sl(T,S1), S is R + S1.

sll([],[]).
sll([H|T],[S|R]) :- sl(H,S), sll(T,R).

?- sll([[1,2,3],[]],S), write(S), nl.