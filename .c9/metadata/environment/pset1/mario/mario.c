{"filter":false,"title":"mario.c","tooltip":"/pset1/mario/mario.c","undoManager":{"mark":11,"position":11,"stack":[[{"start":{"row":0,"column":0},"end":{"row":2,"column":18},"action":"insert","lines":["","#include <cs50.h>","#include <stdio.h>"],"id":1}],[{"start":{"row":2,"column":18},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":2},{"start":{"row":3,"column":0},"end":{"row":4,"column":0},"action":"insert","lines":["",""]},{"start":{"row":4,"column":0},"end":{"row":5,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":5,"column":0},"end":{"row":27,"column":1},"action":"insert","lines":["int main(void)","{","    int i=0;","    int n=0;","","    do","    {","        printf(\"Height:\");","        n=GetInt();","    } while (n<0 || n>23);","","    for (i=0; i<n; i++)","    {","        printf(\" \");","        for (int x=0; x<i+2; x++)","        {","            printf(\"#\");","        }","        printf(\"\\n\");","    }","","    return 0;","}"],"id":3}],[{"start":{"row":13,"column":9},"end":{"row":13,"column":10},"action":"insert","lines":[" "],"id":4}],[{"start":{"row":13,"column":9},"end":{"row":13,"column":10},"action":"remove","lines":[" "],"id":5}],[{"start":{"row":1,"column":0},"end":{"row":1,"column":17},"action":"remove","lines":["#include <cs50.h>"],"id":6}],[{"start":{"row":3,"column":0},"end":{"row":3,"column":17},"action":"insert","lines":["#include <cs50.h>"],"id":7}],[{"start":{"row":5,"column":0},"end":{"row":27,"column":1},"action":"remove","lines":["int main(void)","{","    int i=0;","    int n=0;","","    do","    {","        printf(\"Height:\");","        n=GetInt();","    } while (n<0 || n>23);","","    for (i=0; i<n; i++)","    {","        printf(\" \");","        for (int x=0; x<i+2; x++)","        {","            printf(\"#\");","        }","        printf(\"\\n\");","    }","","    return 0;","}"],"id":8},{"start":{"row":5,"column":0},"end":{"row":28,"column":1},"action":"insert","lines":["int main(void){","    int height;","    int spaces;","    int dashes;","","    do ","    {","        printf(\"Height:\");","        height = GetInt();","    }","    while (height <= 0 || height >= 23);","    //loop for the rows","    for (int i = 1; i <= height; i++){ //fixed the <= part of the operator","        //loop for the spaces and dashes per row","        for (spaces = (height - i); spaces >= 0; spaces--){","            printf(\" \");","        }","        for (dashes = 1; dashes <= (i + 1); dashes++){","            printf(\"#\");    ","        }","        printf(\"\\n\");","    }","    return 0;","}"]}],[{"start":{"row":1,"column":0},"end":{"row":28,"column":1},"action":"remove","lines":["","#include <stdio.h>","#include <cs50.h>","","int main(void){","    int height;","    int spaces;","    int dashes;","","    do ","    {","        printf(\"Height:\");","        height = GetInt();","    }","    while (height <= 0 || height >= 23);","    //loop for the rows","    for (int i = 1; i <= height; i++){ //fixed the <= part of the operator","        //loop for the spaces and dashes per row","        for (spaces = (height - i); spaces >= 0; spaces--){","            printf(\" \");","        }","        for (dashes = 1; dashes <= (i + 1); dashes++){","            printf(\"#\");    ","        }","        printf(\"\\n\");","    }","    return 0;","}"],"id":9},{"start":{"row":1,"column":0},"end":{"row":39,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <stdio.h>","","int main(void)","{","int height;","","do {","    height = get_int(\"Height: \");","}","while (height < 1 || height > 8);","","if (height > 0 || height < 9) {","    int counter = 0;","    for (int row=0; row<height; row++) {","        if (counter != height) {","            for (int spaces = (height-1) - counter; spaces > 0; spaces--) {","                printf(\" \");","            }","            for (int hashes = 0; hashes <= counter; hashes++) {","                printf(\"#\");","            }","","  //ignore this block below if you want only one side","","            printf(\"  \"); ","","            for (int hashes = 0; hashes <= counter; hashes++) {","                printf(\"#\");","            }","","  //##################################################","","            printf(\"\\n\");","            counter++;","        }","    }     ","}       ","}"]}],[{"start":{"row":26,"column":25},"end":{"row":26,"column":26},"action":"remove","lines":[" "],"id":10},{"start":{"row":37,"column":5},"end":{"row":37,"column":10},"action":"remove","lines":["     "]},{"start":{"row":38,"column":1},"end":{"row":38,"column":8},"action":"remove","lines":["       "]}],[{"start":{"row":32,"column":0},"end":{"row":33,"column":0},"action":"remove","lines":["  //##################################################",""],"id":11}],[{"start":{"row":24,"column":0},"end":{"row":25,"column":0},"action":"remove","lines":["  //ignore this block below if you want only one side",""],"id":12}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":11,"column":0},"end":{"row":12,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1591437241321,"hash":"b27a08b754d740218c4adb167d992c9da5dab228"}