const char text_startup[]="Still Alive by maniek86 2022 (C). https://maniek86.xyz";

uint8_t musicdata[]={00,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,67,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,0,0,0,0,67,0,0,0,255,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0,65,0,0,0,58,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,65,0,0,0,0,0,0,0,67,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,62,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,58,0,0,0,58,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,67,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,0,0,0,0,255,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,255,0,0,0,65,0,0,0,58,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,67,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,63,0,0,0,65,0,0,0,255,0,0,0,58,0,0,0,63,0,0,0,65,0,0,0,66,0,0,0,65,0,0,0,63,0,0,0,61,0,0,0,255,0,0,0,0,0,0,0,58,0,0,0,59,0,0,0,61,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,65,0,0,0,63,0,0,0,63,0,0,0,61,0,0,0,63,0,0,0,61,0,0,0,61,0,0,0,0,0,0,0,61,0,0,0,255,0,0,0,58,0,0,0,59,0,0,0,61,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,68,0,0,0,66,0,0,0,65,0,0,0,63,0,0,0,63,0,0,0,65,0,0,0,66,0,0,0,0,0,0,0,66,0,0,0,255,0,0,0,68,0,0,0,70,0,0,0,71,0,0,0,71,0,0,0,70,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,66,0,0,0,68,0,0,0,70,0,0,0,70,0,0,0,68,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,63,0,0,0,61,0,0,0,63,0,0,0,66,0,0,0,66,0,0,0,65,0,0,0,0,0,0,0,65,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,67,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,58,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,67,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,00,62,0,0,0,0,0,0,0,63,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,58,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,67,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,0,0,0,0,255,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,255,0,0,0,65,0,0,0,58,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,67,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,63,0,0,0,65,0,0,0,255,0,0,0,58,0,0,0,63,0,0,0,65,0,0,0,66,0,0,0,65,0,0,0,63,0,0,0,61,0,0,0,255,0,0,0,0,0,0,0,58,0,0,0,59,0,0,0,61,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,65,0,0,0,63,0,0,0,63,0,0,0,61,0,0,0,63,0,0,0,61,0,0,0,61,0,0,0,0,0,0,0,61,0,0,0,0,0,0,0,58,0,0,0,59,0,0,0,61,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,68,0,0,0,66,0,0,0,65,0,0,0,63,0,0,0,63,0,0,0,65,0,0,0,66,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,68,0,0,0,70,0,0,0,71,0,0,0,71,0,0,0,70,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,66,0,0,0,68,0,0,0,70,0,0,0,70,0,0,0,68,0,0,0,66,0,0,0,66,0,0,0,0,0,0,0,63,0,0,0,61,0,0,0,63,0,0,0,66,0,0,0,66,0,0,0,65,0,0,0,0,0,0,0,65,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,68,0,67,0,0,0,65,0,0,0,65,0,0,0,0,0,67,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,0,0,0,0,255,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,255,0,0,0,65,0,0,0,58,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,67,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,63,0,0,0,65,0,0,0,0,0,0,0,0,0,0,0,58,0,0,0,58,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,0,67,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,67,0,0,0,65,0,0,0,65,0,0,0,0,0,0,0,255,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,255,0,0,0,65,0,0,0,58,0,0,00,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,67,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,0,0,0,0,62,0,0,0,0,0,0,0,63,0,0,0,65,0,0,0,255,0,0,0,58,0,0,0,63,0,0,0,65,0,0,0,66,0,0,0,65,0,0,0,63,0,0,0,61,0,0,0,255,0,0,0,0,0,0,0,58,0,0,0,59,0,0,0,61,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,65,0,0,0,63,0,0,0,63,0,0,0,61,0,0,0,63,0,0,0,61,0,0,0,61,0,0,0,0,0,0,0,61,0,0,0,0,0,0,0,58,0,0,0,59,0,0,0,61,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,68,0,0,0,66,0,0,0,65,0,0,0,63,0,0,0,63,0,0,0,65,0,0,0,66,0,0,0,0,0,0,0,66,0,0,0,0,0,0,0,68,0,0,0,70,0,0,0,71,0,0,0,71,0,0,0,70,0,0,0,68,0,0,0,68,0,0,0,0,0,0,0,66,0,0,0,68,0,0,0,70,0,0,0,70,0,0,0,68,0,0,0,66,0,0,0,66,0,0,0,0,0,0,0,63,0,0,0,61,0,0,0,63,0,0,0,66,0,0,0,66,0,0,0,65,0,0,0,0,0,0,0,65,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,70,0,0,0,72,0,0,0,70,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,65,0,0,0,70,0,0,0,70,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,70,0,0,0,70,0,0,0,72,0,0,0,70,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,65,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,70,0,0,0,70,0,0,0,72,0,0,0,70,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,65,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,70,0,0,0,72,0,0,0,70,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,65,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,70,0,0,0,70,0,0,0,72,0,0,0,70,0,0,0,67,0,0,0,63,0,0,0,0,0,0,0,65,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,70,0,0,0,70,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,67,0,0,0,67,0,0,0,0,0,0,0,254,0};
uint8_t musicdata2[]={63,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,67,0,65,0,65,0,0,0,0,0,67,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,67,0,65,0,65,0,0,0,255,0,67,0,0,0,63,0,0,0,65,0,58,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,67,0,68,0,0,0,65,0,0,0,0,0,62,0,0,0,63,0,65,0,0,0,58,0,0,0,0,0,58,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,67,0,65,0,65,0,0,0,0,0,67,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,67,0,65,0,65,0,0,0,255,0,67,0,0,0,63,0,0,0,65,0,58,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,0,0,0,67,0,68,0,0,0,65,0,0,0,0,0,62,0,0,0,63,0,65,0,0,0,58,0,0,0,0,0,59,0,0,0,255,0,63,0,0,0,255,0,66,0,0,0,255,0,0,0,70,0,71,0,70,0,66,0,63,0,255,0,58,0,0,0,255,0,62,0,0,0,255,0,65,0,0,0,255,0,0,0,68,0,70,0,68,0,65,0,62,0,0,0,63,0,0,0,0,0,0,0,254,0};

const char text_ascii_0[]="             .,-:;//;:=,\n         . :H@@@MM@M#H/.,+%;,\n      ,/X+ +M@@M@MM%=,-%HMMM@X/,\n     -+@MM; $M@@MH+-,;XMMMM@MMMM@+-\n    ;@M@@M- XM@X;. -+XXXXXHHH@M@M#@/.\n  ,%MM@@MH ,@%=            .---=-=:=,.\n  -@#@@@MX .,              -%HX$$%%%+;\n =-./@M@M$                  .;@MMMM@MM:\n X@/ -$MM/                    .+MM@@@M$\n,@M@H: :@:                    . -X#@@@@-\n,@@@MMX, .                    /H- ;@M@M=\n.H@@@@M@+,                    %MM+..%#$.\n /MMMM@MMH/.                  XM@MH; -;\n  /%+%$XHH@$=              , .H@@@@MX,\n   .=--------.           -%H.,@@@@@MX,\n   .%MM@@@HHHXX$$$%+- .:$MMX -M@@MM%.\n     =XMMM@MM@MM#H;,-+HMM@M+ /MMMX=\n       =%@M@M#@$-.=$@MM@@@M; %M%=\n         ,:+$+-,/H#MMMMMMM@- -,\n               =++%%%%+/:-.";
const char text_ascii_1[]="             =+$HM####@H%;,\n          /H###############M$,\n          ,@################+\n           .H##############+\n             X############/\n              $##########/\n               %########/\n                /X/;;+X/\n\n                 -XHHX-\n                ,######,\n#############X  .M####M.  X#############\n##############-   -//-   -##############\nX##############%,      ,+##############X\n-##############X        X##############-\n %############%          %############%\n  %##########;            ;##########%\n   ;#######M=              =M#######;\n    .+M###@,                ,@###M+.\n       :XH.                  .HX:";
const char text_ascii_2[]="                 =/;;/-\n                +:    //\n               /;      /;\n              -X        H.\n.//;;;:;;-,   X=        :+   .-;:=;:;%;.\nM-       ,=;;;#:,      ,:#;;:=,       ,@\n:%           :%.=/++++/=.$=           %=\n ,%;         %/:+/;,,/++:+/         ;+.\n   ,+/.    ,;@+,        ,%H;,    ,/+,\n      ;+;;/= @.  .H##X   -X :///+;\n      ;+=;;;.@,  .XM@$.  =X.//;=%/.\n   ,;:      :@%=        =$H:     .+%-\n ,%=         %;-///==///-//         =%,\n;+           :%-;;;;;;;;-X-           +:\n@-      .-;;;;M-        =M/;;;-.      -X\n :;;::;;-.    %-        :+    ,-;;-;:==\n              ,X        H.\n               ;/      %=\n                //    +;\n                 ,////,";
const char text_ascii_3[]="                          .,---.\n                        ,/XM#MMMX;,\n                      -%##########M%,\n                     -@######%  $###@=\n      .,--,         -H#######$   $###M:\n   ,;$M###MMX;     .;##########$;HM###X=\n,/@###########H=      ;################+\n-+#############M/,      %##############+\n%M###############=      /##############:\nH################      .M#############;.\n@###############M      ,@###########M:.\nX################,      -$=X#######@:\n/@##################%-     +######$-\n.;##################X     .X#####+,\n .;H################/     -X####+.\n   ,;X##############,       .MM/\n      ,:+$H@M#######M#$-    .$$=\n           .,-=;+$@###X:    ;/=.\n                  .,/X$;   .::,\n                      .,    ..";
const char text_ascii_4[]="                     -$-\n                    .H##H,\n                   +######+\n                .+#########H.\n              -$############@.\n            =H###############@  -X:\n          .$##################:  @#@-\n     ,;  .M###################;  H###;\n   ;@#:  @###################@  ,#####:\n -M###.  M#################@.  ;######H\n M####-  +###############$   =@#######X\n H####$   -M###########+   :#########M,\n  /####X-   =########%   :M########@/.\n    ,;%H@X;   .$###X   :##MM@%+;:-\n                 ..\n  -/;:-,.              ,,-==+M########H\n -##################@HX%%+%%$%%%+:,,\n    .-/H%%%+%%$H@###############M@+=:/+:\n/XHX%:#####MH%=    ,---:;;;;/&&XHM,:###$\n$@#MX %+;-                           .";
const char text_ascii_5[]="                                     :X-\n                                  :X###\n                                ;@####@\n                              ;M######X\n                            -@########$\n                          .$##########@\n                         =M############-\n                        +##############$\n                      .H############$=.\n         ,/:         ,M##########M;.\n      -+@###;       =##########M;\n   =%M#######;     :#########M/\n-$M###########;   :########/\n ,;X###########; =#######$.\n     ;H#########+######M=\n       ,+#############+\n          /M########@-\n            ;M#####%\n              +####:\n               ,$M-";
const char text_ascii_6[]="            .+\n             /M;\n              H#@:              ;,\n              -###H-          -@/\n               %####$.  -;  .%#X\n                M#####+;#H :M#M.\n..          .+/;%#############-\n -/%H%+;-,    +##############/\n    .:$M###MH$%+############X  ,--=;-\n        -/H#####################H+=.\n           .+#################X.\n         =%M####################H;.\n            /@###############+;;/%%;,\n         -%###################$\n       ;H######################M=\n    ,%#####MH$%;+#####M###-/@####%\n  :$H%+;=-      -####X.,H#   -+M##@-\n .              ,###;    ;      =$##+\n                .#H,               :XH,\n                 +                   .;-";
const char text_ascii_7[]="           .-;+$XHHHHHHX$+;-.\n        ,;X@@X%/;=----=:/%X@@X/,\n      =$@@%=.              .=+H@X:\n    -XMX:                      =XMX=\n   /@@:                          =H@+\n  %@X,                            .$@$\n +@X.                               $@%\n-@@,                                .@@=\n%@%                                  +@$\nH@:                                  :@H\nH@:         :HHHHHHHHHHHHHHHHHHX,    =@H\n%@%         ;@M@@@@@@@@@@@@@@@@@H-   +@$\n=@@,        :@@@@@@@@@@@@@@@@@@@@@= .@@:\n +@X        :@@@@@@@@@@@@@@@M@@@@@@:%@%\n  $@$,      ;@@@@@@@@@@@@@@@@@M@@@@@@$.\n   +@@HHHHHHH@@@@@@@@@@@@@@@@@@@@@@@+\n    =X@@@@@@@@@@@@@@@@@@@@@@@@@@@@X=\n      :$@@@@@@@@@@@@@@@@@@@M@@@@$:\n        ,;$@@@@@@@@@@@@@@@@@@X/-\n           .-;+$XXHHHHHX$+;-.";
const char text_ascii_8[]="            ,:/+/-\n            /M/              .,-=;//;-\n       .:/= ;MH/,    ,=/+%$XH@MM#@:\n      -$##@+$###@H@MMM#######H:.    -/H#\n .,H@H@ X######@ -H#####@+-     -+H###@X\n  .,@##H;      +XM##M/,     =%@###@X;-\nX%-  :M##########$.    .:%M###@%:\nM##H,   +H@@@$/-.  ,;$M###@%,          -\nM####M=,,---,.-%%H####M$:          ,+@##\n@##################@/.         :%H##@$-\nM###############H,         ;HM##M$=\n#################.    .=$M##M$=\n################H..;XM##M$=          .:+\nM###################@%=           =+@MH%\n@#################M/.         =+H#X%=\n=+M###############M,      ,/X#H+:,\n  .;XM###########H=   ,/X#H+:;\n     .=+HM#######M+/+HM@+=.\n         ,:/%XM####H/.\n              ,.:=-.";
const char text_ascii_9[]="       #+ @      # #              M#@\n .    .X  X.%##@;# #   +@#######X. @H%\n   ,==.   ,######M+  -#####%M####M-    #\n  :H##M%:=##+ .M##M,;#####/+#######% ,M#\n .M########=  =@#@.=#####M=M#######=  X#\n :@@MMM##M.  -##M.,#######M#######. =  M\n             @##..###:.    .H####. @@ X,\n   ############: ###,/####;  /##= @#. M\n           ,M## ;##,@#M;/M#M  @# X#% X#\n.%=   ######M## ##.M#:   ./#M ,M #M ,#$\n##/         $## #+;#: #### ;#/ M M- @# :\n#+ #M@MM###M-;M #:$#-##$H# .#X @ + $#. #\n      ######/.: #%=# M#:MM./#.-#  @#: H#\n+,.=   @###: /@ %#,@  ##@X #,-#@.##% .@#\n#####+;/##/ @##  @#,+       /#M    . X,\n   ;###M#@ M###H .#M-     ,##M  ;@@; ###\n   .M#M##H ;####X ,@#######M/ -M###$  -H\n    .M###%  X####H  .@@MM@;  ;@#M@\n      H#M    /@####/      ,++.  / ==-,\n               ,=/:, .+X@MMH@#H  #####$=";

const char lyrics[][10]={"This", "was", "a", "[triumph.", "I'm", "making", "a", "note", "[here:", "HUGE", "[SUCCESS.", "It's", "hard", "to", "]over", "[state", "my", "]satis", "[faction.", "0Aperture", "[Science", "We", "do", "what", "we", "[must", "because", "we", "[can.", "For", "the", "good", "of", "all", "of", "[us.", "1Except", "the", "ones", "who", "are", "[dead.", "[", "0But", "there's", "no", "sense", "[crying", "over", "every", "[mistake.", "You", "just", "keep", "on", "[trying", "till", "you", "run", "out", "of", "[cake.", "2And", "the", "science", "gets", "[done.", "And", "you", "make", "a", "neat", "[gun.", "0For", "the", "people", "who", "[are", "still", "[alive.", "{", "I'm", "not", "even", "[angry.", "I'm", "being", "so", "sincere", "right", "[now.", "Even", "though", "you", "3broke", "my", "[heart.", "And", "killed", "[me.", "6And", "tore", "me", "to", "[pieces.", "And", "threw", "every", "piece", "into", "4a", "[fire.", "As", "they", "burned", "it", "hurt", "[because", "5I", "was", "so", "happy", "for", "[you!", "Now,", "these", "points", "of", "[data", "make", "a", "beautiful", "[line.", "And", "we're", "out", "of", "[beta.", "We're", "releasing", "on", "[time.", "6So", "I'm", "GLaD.", "I", "got", "[burned.", "2Think", "of", "all", "the", "things", "we", "[learned", "0for", "the", "people", "who", "[are", "still", "[alive.", "}", "Go", "ahead", "and", "leave", "[me.", "I", "think", "I'd", "prefer", "to", "stay", "[inside.", "Maybe", "you'll", "find", "someone", "[else", "to", "help", "[you", "Maybe", "7Black", "]Mesa", "].", "].", "[.", "THAT", "WAS", "A", "JOKE.", "FAT", "[CHANCE.", "Anyway,", "8this", "cake", "is", "[great", "It's", "so", "delicious", "and", "[moist.", "9Look", "at", "me", "still", "[talking", "1when", "there's", "Science", "to", "[do.", "0When", "I", "look", "out", "[there,", "it", "makes", "me", "GLaD", "I'm", "not", "[you.", "2I've", "]experi", "ments", "to", "[run.", "6There", "is", "research", "to", "be", "[done.", "0On", "the", "people", "who", "[are", "still", "[alive.", "|", "PS:", "And", "believe", "me", "I", "[am", "still", "[alive.", "PPS:", "I'm", "doing", "science", "and", "[I'm", "still", "[alive.", "PPPS:", "I", "feel", "FANTASTIC", "and", "[I'm", "still", "[alive.", "[", "FINAL", "[THOUGHT:", "While", "you're", "dying", "I'll", "[be", "still", "[alive.", "[", "FINAL", "THOUGHT", "[PS:", "And", "when", "you're", "dead", "I", "will", "[be", "still", "[alive.", "[", "[", "STILL", "[ALIVE"};
uint8_t lyricsync[]={00,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,31,0,0,0,31,0,0,0,50,0,0,0,0 ,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,31,0,0,0,0 ,0,0,0,31,0,0,0,33,0,0,0,0,0,0,0,33,0,0,0,0  ,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,40,0,0,0,0 ,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,31,0,0,0,0,0,0,0,31,0,0,0,99,0,0,0,0,0,0,0,0,0,0,0,31,0,0,0,0 ,0,0,0,0,0,0,0,31,0,0,0,0,0,0,0,0,0,0,0,100,0,0,0,0,0,0,0,0,0,0,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8 ,0,0,0,0 ,0,0,0,0 ,0,0,0,80,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,60,0,0,0,30,0,0,0,60,0,0,0,60,0,0,0,0,0,0,0,0  ,0,0,0,80,0,0,0,0 ,0,0,0,0,0,0,0,0  ,0,0,0,60,0,0,0,90,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,60,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,60,0,0,0,0,0,0,0,0,20,0,0,0,0 ,0,0,0,60,0,0,0,50,0,0,0,60,0,0,0,60,0,0,0,60,0,0,0,0  ,0,1,0,0,0,0,0,40,0,0,0,20,0,0,0,80,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,70,0,0,0,0 ,0,0,0,80,0,0,0,0 ,0,0,0,80,0,0,0,0 ,0,0,0,80,0,0,0,0,0,0,0,0 ,0,0,0,0  ,0,0,0,30,0,0,0,30,0,0,0,60,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,70,0,0,0,0 ,0,0,0,30,0,0,0,30,0,0,0,30,0,0,0,30,0,0,0,60,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,0,30,0,0,0,30,0,0,0,50,0,0,0,0 ,0,0,0,70,0,0,0,0,0,0,0,30,0,0,0,0,0,0,0,30,0,0,0,30,0,0,0,30,0,0,0,50,0,0,0,60,0,0,0,0,0,0,0,60,0,0,0,0,0,0,0,30,0,0,0,30,0,0,0,50,0,0,0,0 ,0,0,0,30,0,0,0,60,0,0,0,0,0,0,0,25,0,0,0,60,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,60,0,0,0,80,0,0,0,0 ,0,0,0,80,0,0,0,0 ,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,80,0,0,0,0 ,0,0,0,99,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0 ,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0 ,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,00,8 ,0,0,0,0,0,0,0,60,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,50,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0 ,0,0,0,30,0,0,0,60,0,0,0,60,0,0,0,90,0,0,0,0 ,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,40,0,0,0,25,0,0,0,80,0,0,0,0 ,0,0,0,80,0,0,0,0,0,0,0,0  ,0,0,0,90,0,0,0,0 ,0,0,0,0,0,0,0,  1,0,0,0,0 ,0,0,0,70,0,0,0,0,0,0,0,  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,30,0,0,0,99,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,70,0,0,0,0 ,0,0,0,0  ,0,1,0,0 ,0,0,0,50,0,0,0,70,0,0,0,70,0,0,0,0 ,0,0,0,60,0,0,0,60,0,0,0,0  ,0,0,0,0,0,0,0,50,0,0,0,25,0,0,0,50,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,90,0,0,0,0 ,0,0,0,30,0,0,0,30,0,0,0,80,0,0,0,0 ,0,0,0,0 ,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,40,0,0,0,25,0,0,0,80,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,80,0,0,0,0 ,0,0,0,25,0,0,0,65,0,0,0,0 ,0,0,0,0 ,0,0,0,60,0,0,0,0,0,0,0,60,0,0,0,0,1,0,0,0 ,0,0,0,50,0,0,0,30,0,0,0,30,0,0,0,80,0,0,0,0,0,0,0,30,0,0,0,0,0,1,0,0 ,0,0,0,60,0,0,0,50,0,0,0,50,0,0,0,20,0,0,0,70,0,0,0,40,0,0,0,0,0,0,0,1 ,0,0,0,50,0,0,0,70,0,0,0,0 ,0,0,0,50,0,0,0,80,0,0,0,0,0,0,0,25,0,0,0,90,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,0,40,0,0 ,0,0,0,30,0,0,0,45,0,0,0,0,0,99,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,25,0,0,0,30,0,0,0,70,0,0,0,0 ,0,0,0,0,0,0,0,0  ,0,0,0,60,0,0,0,60,0,0,0,0,0,0,0,0  ,0,0,0,80,0,0,0,0 ,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0 ,0,0,0,70,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,0 ,0,0,0,80,0,0,0,0,0,0,0,0,0,0,0,70,0,0,0,80,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,0 ,0,1,0,0 ,0,0,0,99,0,0,0,0,0 ,0,0,0,0  ,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,40,0,0,0,30,0,0,0,80,0,0,0,0,0,0,0,0  ,0,0,0,0 ,0,0,0,0 ,0,0,0,0,0,0,0,0  ,0,0,0,40,0,0,0,80,0,0,0 ,0,0,0,0,0  ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,99,0,0,0,0,0,0,0,0 ,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,1 ,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,60,0,0,0,30,0,0,0,0  ,0,0,0,30,0,0,0,50,0,0,0,60,0,0,0,0 ,0,0,0,0 ,0,0,0,50,0,0,0,40,0,0,0,0  ,0,0,0,0,0,1,0,0 ,0,0,0,60,0,0,0,80,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,45,0,0,0,0 ,0,1,0,0 ,0,0,0,25,0,0,0,20,0,0,0,70,0,0,0,90,0,0,0,0,0,0,0,60,0,0,0,0,0,1,0,0 ,0,0,0,30,0,0,0,80,0,0,0,0,0,0,0,70,0,0,0,0,0,0,0,25,0,0,0,50,0,0,0,10,0,0,0,60,0,0,0,40,0,0,0,50,0,0,0,80,0,0,0,0,0,0,0,30,0,0,1,0,0,0,0,0 ,0,0,0,0,70,0,0,0 ,0,0,0,0 ,0,0,0,30,0,0,0,60,0,0,0,60,0,0,0,0,0,1,0,0 ,0,0,0,60,0,0,0,10,0,0,0,0 ,0,0,0,60,0,0,0,60,0,0,0,30,0,0,0,0,0,0,0,1 ,0,0,0,50,0,0,0,60,0,0,0,0 ,0,0,0,50,0,0,0,70,0,0,0,0,0,0,0,25,0,0,0,60,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0  ,1,0,0,0,0,0,0,0,1,0,0,50,0,0,0,50,0,0,0,0 ,0,0,0,60,0,0,0,60,0,0,0,80,0,0,0,0,0,0,0,25,0,0,0,60,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,40,0,0,0,70,0,0,0,0 ,0,0,0,50,0,0,0,0 ,0,0,0,50,0,0,0,80,0,0,0,0,0,0,0,25,0,0,0,60,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,60,0,0,0,30,0,0,0,60,0,0,0,0 ,0,0,0,0 ,0,0,0,50,0,0,0,80,0,0,0,0,0,0,0,25,0,0,0,60,0,0,0,0 ,0,0,0,0,0,0,0,1  ,0,0,0,0,0,0,0,0,20,0,0,0,20,0,0,0,0,0,0,30,0,0,0,20,0,0,0,70,0,0,0,0 ,0,0,0,30,0,0,0,80,0,0,0,0,0,0,0,25,0,0,0,60,0,0,0,0 ,0,0,0,0,0,0,0,1  ,0,0,0,0,0,10,0,20,0,0,0,0,1,0,50,0,0,0,30,0,0,0,25,0,0,0,30,0,0,0,60,0,0,0,30,0,0,0,80,0,0,0,0,0,0,0,25,0,0,0,60,0,0,0,0 ,0,0,0,0,0,0,0,0  ,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,90,0,0,0,0 ,0,0,0,0,0,0,0,0  ,255};

const char text_nw[]="[";
const char text_t1_0[]="[Forms FORM-29827281-12:";
const char text_t1_1[]="[Test Assessment Report";

const char text_t2_0[]="[Forms FORM-55551-5:";
const char text_t2_1[]="[Personnel File Addendum:";
const char text_t2_2[]="[Dear <<Subject Name Here>>.";

const char text_t3_0[]="[Forms FORM-55551-6:";
const char text_t3_1[]="[Personnel File Addendum Addendum:";
const char text_t3_2[]="[One last thing:";