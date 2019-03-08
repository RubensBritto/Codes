grau_Rec(V,[],0).
grau_Rec(V,[(_,V)|T],R) :- grau_Rec(V,T,S), R is 1 + S.
grau_Rec(V,[H    |T],R) :- grau_Rec(V,T,S), R is 0 + S.

:- grau_Rec(a,[(a,b),(b,c),(a,a)],R),write(R), nl.