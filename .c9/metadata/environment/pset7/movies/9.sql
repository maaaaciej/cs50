{"filter":false,"title":"9.sql","tooltip":"/pset7/movies/9.sql","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":4,"column":15},"action":"insert","lines":["SELECT DISTINCT(people.name) from stars","JOIN people ON stars.person_id = people.id","JOIN movies ON stars.movie_id = movies.id","WHERE movies.year = 2004","ORDER BY birth;"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":4,"column":15},"end":{"row":4,"column":15},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1592309316788,"hash":"6540f37504030cff2b1cc5e961d6f48cba1d4782"}