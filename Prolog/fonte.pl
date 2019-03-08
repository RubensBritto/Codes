fonte(V, [], E):- E > 0.
fonte(V, [(V,H)|T], E):- H =\= V, E1 is E + 1,fonte(V, T, E1).

fonte(V, [(H, I)|T], E):- H =\= V, I =\= V, fonte(V, T, E).


:- fonte(1,[(1,2),(1,3),(2,3)],0).
