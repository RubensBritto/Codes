
%intersecao.


pertence(X, [X|T]).
pertence(X, [H|T]):- pertence(X, T).


intersec([], _, []).
intersec(_, [], []).
intersec([H|T], B, [H|R]):- pertence(H, B), intersec(T, B, R).
intersec([H|T], B, R):- intersec(T, B, R).

:-intersec([1,2,3],[2,5,3],R), write(R), nl. 