grau_Em(V,[],0).
grau_Em(V,[(V,_)|T],R) :- grau_Em(V,T,S), R is 1 + S.
grau_Em(V,[H    |T],R) :- grau_Em(V,T,S), R is 0 + S.

:- grau_Em(c,[(a,b),(b,c),(a,a)],R),write(R), nl.