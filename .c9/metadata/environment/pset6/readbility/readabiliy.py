{"filter":false,"title":"readabiliy.py","tooltip":"/pset6/readbility/readabiliy.py","undoManager":{"mark":13,"position":13,"stack":[[{"start":{"row":0,"column":0},"end":{"row":39,"column":36},"action":"insert","lines":["from cs50 import get_string"," import re",""," sentence = get_string(\"Text: \")",""," # Split sentence by spaces"," sentence = sentence.split()",""," letters = 0"," words = 0"," sentences = 0",""," # Loop over setence list"," for word in sentence:","     # Count words","     words += 1","","     # Count letters","     filtered_word = re.sub('[^A-Za-z0-9]+', '', word)","     letters += len(filtered_word)","","     # Count sentences","     sentence_delims = ['!', '?', '.']","     if any(delim in word for delim in sentence_delims):","         sentences += 1","     # Above is the same as:","     # for delim in sentence_delims:","     #     if delim in word:","",""," AVERAGE = 100 / words"," # Coleman-Liau Index"," index = (0.0588 * letters * AVERAGE) - (0.296 * sentences * AVERAGE) - 15.8",""," if index < 1:","     print(\"Before Grade 1\")"," elif index > 16:","     print(\"Grade 16+\")"," else:","     print(f\"Grade {round(index)}\") "],"id":1}],[{"start":{"row":39,"column":35},"end":{"row":39,"column":36},"action":"remove","lines":[" "],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":1,"column":1},"action":"remove","lines":[" "],"id":3}],[{"start":{"row":3,"column":0},"end":{"row":3,"column":1},"action":"remove","lines":[" "],"id":4}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":1},"action":"remove","lines":[" "],"id":5}],[{"start":{"row":9,"column":0},"end":{"row":9,"column":1},"action":"remove","lines":[" "],"id":6}],[{"start":{"row":10,"column":0},"end":{"row":10,"column":1},"action":"remove","lines":[" "],"id":18}],[{"start":{"row":6,"column":0},"end":{"row":6,"column":1},"action":"remove","lines":[" "],"id":19}],[{"start":{"row":13,"column":0},"end":{"row":13,"column":1},"action":"remove","lines":[" "],"id":20}],[{"start":{"row":30,"column":0},"end":{"row":30,"column":1},"action":"remove","lines":[" "],"id":21}],[{"start":{"row":32,"column":0},"end":{"row":32,"column":1},"action":"remove","lines":[" "],"id":22}],[{"start":{"row":34,"column":0},"end":{"row":34,"column":1},"action":"remove","lines":[" "],"id":23}],[{"start":{"row":36,"column":0},"end":{"row":36,"column":1},"action":"remove","lines":[" "],"id":24}],[{"start":{"row":38,"column":0},"end":{"row":38,"column":1},"action":"remove","lines":[" "],"id":25}]]},"ace":{"folds":[],"scrolltop":245,"scrollleft":0,"selection":{"start":{"row":38,"column":0},"end":{"row":38,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":14,"state":"start","mode":"ace/mode/python"}},"timestamp":1592208881542,"hash":"629f17169358665b6049dff5d6d0d96c747b8896"}