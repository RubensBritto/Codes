recebe_lista([],0).
recebe_lista([R|T],S) :- recebe_lista(T,S1), S is R + S1.

%?- recebe_lista([1,2,3],S), write(S), nl.