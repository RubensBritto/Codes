grau(V,[],0).
grau(V,[(V,V)|T],R) :- grau(V,T,S), R is 2 + S.
grau(V,[(V,_)|T],R) :- grau(V,T,S), R is 1 + S.
grau(V,[(_,V)|T],R) :- grau(V,T,S), R is 1 + S.
grau(V,[H    |T],R) :- grau(V,T,S), R is 0 + S.

:- grau(a,[(a,b),(b,c),(a,a)],R),write(R), nl.