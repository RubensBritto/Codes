pares([],[]).
pares([(A,B)|T],[A|S]) :- pares(T,S).

?- pares([(1,2),(3,4)],S), write(S), nl. 