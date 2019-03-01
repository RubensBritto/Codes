pares([],[]).
pares([(A,B)|T],[S1|S]) :- pares(T,S), S1 is A + B.
?- pares([(1,2),(3,4)],S), write(S), nl. 