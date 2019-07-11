#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;

//Uœmiech
int a=1; string b;

//intro
int Dragon = 0 ;

//Bitwa
int nor_atak; int super_atak; int czar; int wyb_ataku; int obrazenia_potwora;

//Bohater
int LVL=1 ; int exph ;int expmax=20; int zycieh; int zyciemax=10; int manah; int manamax=5; int gold;
int atak=1; int obrona=1; int moc=1; string Imie; float no_line_hp; float no_point_hp; float no_line_mana; float no_point_mana;
int HeroesSD; int HeroesSHD; int HeroesHeD; int HeroesAD; int HeroesTD;int HeroesBD; 
int AtackaddH; int DeffaddH;


int energy ;

//Rozwó³j
int Rozwoj;int goldup;

//Potwór
string Pnazwa; int PLVL; int PHP=1; int PAtak; int PDef ; int PMoc;
int P_line_hp ;int P_point_hp; int PHPmax; int PHPmax_set;

//Fontanna

string fchoice;int flos ; int fexit ;

//Sklep
int SP; int SD; int SC; int SHP; int SHD; int SHC; int HeP; int HeD; int HeC; int AP; int AD; int AC; int TP; int TD; int TC; int BP; int BD; int BC;
int Shopchoice;


//losowanie
int los;

//Mapa
string Mapa[11][11];
int SPosX = 0;int SPosY = 0;int FPosX = 0;int FPosY = 0;int BPosX = 0;int BPosY = 0;int EPosX = 0;int EPosY = 0;
int MapX = 0 ; int MapY = 0 ;
int MIG = 0 ;

//LvLup
int expup;

//ruch
int pion=0; int poziom=0;int ruch;int petla;int x_y[10][10];int h;

void intro()
{
	cout<<endl<<"Gra jest dostosowana do pelnego okna - prosze otworz je zanim zaczniesz :)"<<endl<<endl;
	system("pause");
	while(Dragon<10)
	{		
system("cls");
cout<<"                                             ,d888 `            "<<endl;
cout<<"                                            ,d88`               "<<endl;
cout<<"                                         ,d8`                   "<<endl;
cout<<"                                       ,d8*                     "<<endl;
cout<<"                                     ,d88*              ..d*`   "<<endl;
cout<<"                                   ,d88`         . .d8*`        "<<endl;
cout<<"                                 ,d888`    ..d8P*`              "<<endl;
cout<<"                         .     ,d8888*8888*`                    "<<endl;
cout<<"                       ,*     ,88888*8P*                        "<<endl;
cout<<"                     ,*      d888888*8b.                        "<<endl;
cout<<"                   ,P       d8  *888.*888b.                     "<<endl;
cout<<"                 ,8*        8    *888  `*88888b.                "<<endl;
cout<<"               ,d8                *88           *8 8b.          "<<endl;
cout<<"              d8`                  *8b                *8b.      "<<endl;
cout<<"            ,d8`                    *8.                   *88b. "<<endl;
cout<<"           d8P                       88.                        "<<endl;
cout<<"         ,88P                        888                        "<<endl;
cout<<"        d888*       .d88P             888                       "<<endl;
cout<<"       d8888b..d888888*               888                       "<<endl;
cout<<"     ,888888888888888b.               888                       "<<endl;
cout<<"    ,8*;88888P*788888888ba.           888                       "<<endl;
cout<<"   ,8;,8888*        `88888*          d88*                       "<<endl;
cout<<"   )8e888*          ,88888be.        888                        "<<endl;
cout<<"  ,d888`           ,8888888*        d888                        "<<endl;
cout<<" ,d88P`           ,8888888Pb.     d888`                         "<<endl;
cout<<" 888*            ,88888888*   .d8888*                           "<<endl;
cout<<" `88            ,888888888    .d88888b                          "<<endl;
cout<<"  `P           ,8888888888bd888888*                             "<<endl;
cout<<"               d888888888888d888*                               "<<endl;
cout<<"               8888888888888888b.                               "<<endl;
cout<<"               88*. *88888888888b.        .db                   "<<endl;
cout<<"               `888b.`8888888888888b. .d8888P                   "<<endl;
cout<<"                *88b.`*8888888888888888888888b...               "<<endl;
cout<<"                 *888b.`*8888888888P*78888888888 88e.           "<<endl;
cout<<"                  88888b.`*.d8888b*`88888P *                    "<<endl;
cout<<"                  `888888b     .d88888888888*`888 8.            "<<endl;
cout<<"                   )888888.   d888888888888P   `88 88888b.      "<<endl;
cout<<"                  ,88888*    d88888888888*`    `8 888b          "<<endl;
cout<<"                 ,8888*    .8888888888P`           `888b.       "<<endl;
cout<<"                ,888*      888888888b...             `888P88b.  "<<endl;
cout<<"       .db.   ,d88*        88888888888888b           `8888      "<<endl;
cout<<"   ,d888888b.8888`         `*888888888888888888P`    `888b.     "<<endl;
cout<<"  /*8888b*`              `*8888P*``8888`               `8888b.  "<<endl;
cout<<"       /*88`                 .ed8b..  .d888P`             `88888"<<endl;
cout<<"                            d8*888888888P*                `88b  "<<endl;
cout<<"                           (*``,d8888*`                   `88   "<<endl;
cout<<"                              (*`                             `8"<<endl<<endl; 
cout<<"       __    __   ____               ___   ___                  "<<endl;
cout<<"      |  |  |  | |    |      |      |   | |     |   |  |   |    "<<endl;
cout<<"      | _|  |__| |           |      |   | |     |   |  |   |    "<<endl; 
cout<<"      |:    |    |   _       |      |   | |     |===|  |___|    "<<endl;
cout<<"      | :   |    |    |      |      |   | |     |   |    |      "<<endl;
cout<<"      |  :  |    |____|      |_____ |___| |___  |   |    |      "<<endl;
Sleep(500);

system("cls");
;cout<<"                                          ,d888`                "<<endl;
cout<<"                                        ,d888`       .d8*`      "<<endl;
cout<<"                                      ,d88`          .d8*`      "<<endl;
cout<<"                                    ,d88*           .d8*`       "<<endl;
cout<<"                                  ,d88*          ..d*`          "<<endl;
cout<<"                                 ,d88`       . .d8*`            "<<endl;
cout<<"                               ,d888`    ..d8P*`                "<<endl;
cout<<"                         .    ,d8888*8888*`                     "<<endl;
cout<<"                       ,*    ,88888*8P*                         "<<endl;
cout<<"                     ,*     d888888*8b.                         "<<endl;
cout<<"                   ,P      d8  *888.*888b.                      "<<endl;
cout<<"                 ,8*      8    *888  `*88888b.                  "<<endl;
cout<<"               ,d8               88           *8 8b.            "<<endl;
cout<<"              d8`                *8b                *88b.       "<<endl;
cout<<"            ,d8`                   *8.                          "<<endl;
cout<<"           d8P                       88.                        "<<endl;
cout<<"         ,88P                         888                       "<<endl;
cout<<"        d888*       .d88P               888                     "<<endl;
cout<<"       d8888b..d888888*                  888                    "<<endl;
cout<<"     ,888888888888888b.                  888                    "<<endl;
cout<<"    ,8*;88888P*788888888ba.             8888                    "<<endl;
cout<<"   ,80,8888*        `88888*            d888*                    "<<endl;
cout<<"   )8e888*          ,88888be.         8888                      "<<endl;
cout<<"  ,d888`           ,8888888*        d8888                       "<<endl;
cout<<" ,d88P`           ,8888888Pb.     d8888`                        "<<endl;
cout<<" 888*            ,88888888*   .d88888*                          "<<endl;
cout<<" `88            ,888888888    .d88888b                          "<<endl;
cout<<"  `P           ,8888888888bd888888*                             "<<endl;
cout<<"               d888888888888d888*                               "<<endl;
cout<<"               8888888888888888b.                               "<<endl;
cout<<"               88*. *88888888888b.        .db                   "<<endl;
cout<<"               `888b.`8888888888888b. .d8888P                   "<<endl;
cout<<"                *88b.`*8888888888888888888888b...               "<<endl;
cout<<"                 *888b.`*8888888888P*78888888888 88e.           "<<endl;
cout<<"                  88888b.`*.d8888b*`88888P *                    "<<endl;
cout<<"                  `888888b     .d88888888888*`888 8.            "<<endl;
cout<<"                   )888888.   d888888888888P   `88 88888b.      "<<endl;
cout<<"                  ,88888*    d88888888888*`    `8 888b          "<<endl;
cout<<"                 ,8888*    .8888888888P`           `888b.       "<<endl;
cout<<"                ,888*      888888888b...             `888P88b.  "<<endl;
cout<<"       .db.   ,d88*        88888888888888b           `8888      "<<endl;
cout<<"   ,d888888b.8888`         `*888888888888888888P`    `888b.     "<<endl;
cout<<"  /*8888b*`              `*8888P*``8888`               `8888b.  "<<endl;
cout<<"       /*88`                 .ed8b..  .d888P`             `88888"<<endl;
cout<<"                            d8*888888888P*                `88b  "<<endl;
cout<<"                           (*``,d8888*`                   `88   "<<endl;
cout<<"                              (*`                             `8"<<endl<<endl; 
cout<<"       __    __   ____               ___   ___                  "<<endl;
cout<<"      |  |  |  | |    |      |      |   | |     |   |  |   |    "<<endl;
cout<<"      | _|  |__| |           |      |   | |     |   |  |   |    "<<endl; 
cout<<"      |:    |    |   _       |      |   | |     |===|  |___|    "<<endl;
cout<<"      | :   |    |    |      |      |   | |     |   |    |      "<<endl;
cout<<"      |  :  |    |____|      |_____ |___| |___  |   |    |      "<<endl;
Sleep(500);  

system("cls");
cout<<"                                          ,d888`                "<<endl;
cout<<"                                        ,d888`       .d8*`      "<<endl;
cout<<"                                      ,d88`          .d8*`      "<<endl;
cout<<"                                    ,d88*           .d8*`       "<<endl;
cout<<"                                  ,d88*          ..d*`          "<<endl;
cout<<"                                 ,d88`       . .d8*`            "<<endl;
cout<<"                               ,d888`    ..d8P*`                "<<endl;
cout<<"                         .    ,d8888*8888*`                     "<<endl;
cout<<"                       ,*    ,88888*8P*                         "<<endl;
cout<<"                     ,*     d888888*8b.                         "<<endl;
cout<<"                   ,P      d8  *888.*888b.                      "<<endl;
cout<<"                 ,8*      8    *888  `*88888b.                  "<<endl;
cout<<"               ,d8               88           *8 8b.            "<<endl;
cout<<"              d8`                *8b                *88b.       "<<endl;
cout<<"            ,d8`                   *8.                          "<<endl;
cout<<"           d8P                       88.                        "<<endl;
cout<<"         ,88P                         888                       "<<endl;
cout<<"        d888*       .d88P               888                     "<<endl;
cout<<"       d8888b..d888888*                  888                    "<<endl;
cout<<"     ,888888888888888b.                  888                    "<<endl;
cout<<"    ,8*;88888P*788888888ba.             8888                    "<<endl;
cout<<"   ,8;,8888*        `88888*            d888*                    "<<endl;
cout<<"   )8e888*          ,88888be.         8888                      "<<endl;
cout<<"  ,d888`           ,8888888*        d8888                       "<<endl;
cout<<" ,d88P`           ,8888888Pb.     d8888`                        "<<endl;
cout<<" 888*            ,88888888*   .d88888*                          "<<endl;
cout<<" `88            ,888888888    .d88888b                          "<<endl;
cout<<"  `P .         ,8888888888bd888888*                             "<<endl;
cout<<"  . .  .       d888888888888d888*                               "<<endl;
cout<<"               8888888888888888b.                               "<<endl;
cout<<"               88*. *88888888888b.        .db                   "<<endl;
cout<<"               `888b.`8888888888888b. .d8888P                   "<<endl;
cout<<"                *88b.`*8888888888888888888888b...               "<<endl;
cout<<"                 *888b.`*8888888888P*78888888888 88e.           "<<endl;
cout<<"                  88888b.`*.d8888b*`88888P *                    "<<endl;
cout<<"                  `888888b     .d88888888888*`888 8.            "<<endl;
cout<<"                   )888888.   d888888888888P   `88 88888b.      "<<endl;
cout<<"                  ,88888*    d88888888888*`    `8 888b          "<<endl;
cout<<"                 ,8888*    .8888888888P`           `888b.       "<<endl;
cout<<"                ,888*      888888888b...             `888P88b.  "<<endl;
cout<<"       .db.   ,d88*        88888888888888b           `8888      "<<endl;
cout<<"   ,d888888b.8888`         `*888888888888888888P`    `888b.     "<<endl;
cout<<"  /*8888b*`              `*8888P*``8888`               `8888b.  "<<endl;
cout<<"       /*88`                 .ed8b..  .d888P`             `88888"<<endl;
cout<<"                            d8*888888888P*                `88b  "<<endl;
cout<<"                           (*``,d8888*`                   `88   "<<endl;
cout<<"                              (*`                             `8"<<endl<<endl; 
cout<<"       __    __   ____               ___   ___                  "<<endl;
cout<<"      |  |  |  | |    |      |      |   | |     |   |  |   |    "<<endl;
cout<<"      | _|  |__| |           |      |   | |     |   |  |   |    "<<endl; 
cout<<"      |:    |    |   _       |      |   | |     |===|  |___|    "<<endl;
cout<<"      | :   |    |    |      |      |   | |     |   |    |      "<<endl;
cout<<"      |  :  |    |____|      |_____ |___| |___  |   |    |      "<<endl;

system("cls");
cout<<"                                          ,d888`                "<<endl;
cout<<"                                        ,d888`       .d8*`      "<<endl;
cout<<"                                      ,d88`          .d8*`      "<<endl;
cout<<"                                    ,d88*           .d8*`       "<<endl;
cout<<"                                  ,d88*          ..d*`          "<<endl;
cout<<"                                 ,d88`       . .d8*`            "<<endl;
cout<<"                               ,d888`    ..d8P*`                "<<endl;
cout<<"                         .    ,d8888*8888*`                     "<<endl;
cout<<"                       ,*    ,88888*8P*                         "<<endl;
cout<<"                     ,*     d888888*8b.                         "<<endl;
cout<<"                   ,P      d8  *888.*888b.                      "<<endl;
cout<<"                 ,8*      8    *888  `*88888b.                  "<<endl;
cout<<"               ,d8               88           *8 8b.            "<<endl;
cout<<"              d8`                *8b                *88b.       "<<endl;
cout<<"            ,d8`                   *8.                          "<<endl;
cout<<"           d8P                       88.                        "<<endl;
cout<<"         ,88P                         888                       "<<endl;
cout<<"        d888*       .d88P               888                     "<<endl;
cout<<"       d8888b..d888888*                  888                    "<<endl;
cout<<"     ,888888888888888b.                  888                    "<<endl;
cout<<"    ,8*;88888P*788888888ba.             8888                    "<<endl;
cout<<"   ,8;,8888*        `88888*            d888*                    "<<endl;
cout<<"   )8e888*          ,88888be.         8888                      "<<endl;
cout<<"  ,d888`           ,8888888*        d8888                       "<<endl;
cout<<" ,d88P`           ,8888888Pb.     d8888`                        "<<endl;
cout<<" 888*            ,88888888*   .d88888*                          "<<endl;
cout<<" `88            ,888888888    .d88888b                          "<<endl;
cout<<"  `P *         ,8888888888bd888888*                             "<<endl;
cout<<"  * *  .       d888888888888d888*                               "<<endl;
cout<<"  .  * . .     8888888888888888b.                               "<<endl;
cout<<"               88*. *88888888888b.        .db                   "<<endl;
cout<<"               `888b.`8888888888888b. .d8888P                   "<<endl;
cout<<"                *88b.`*8888888888888888888888b...               "<<endl;
cout<<"                 *888b.`*8888888888P*78888888888 88e.           "<<endl;
cout<<"                  88888b.`*.d8888b*`88888P *                    "<<endl;
cout<<"                  `888888b     .d88888888888*`888 8.            "<<endl;
cout<<"                   )888888.   d888888888888P   `88 88888b.      "<<endl;
cout<<"                  ,88888*    d88888888888*`    `8 888b          "<<endl;
cout<<"                 ,8888*    .8888888888P`           `888b.       "<<endl;
cout<<"                ,888*      888888888b...             `888P88b.  "<<endl;
cout<<"       .db.   ,d88*        88888888888888b           `8888      "<<endl;
cout<<"   ,d888888b.8888`         `*888888888888888888P`    `888b.     "<<endl;
cout<<"  /*8888b*`              `*8888P*``8888`               `8888b.  "<<endl;
cout<<"       /*88`                 .ed8b..  .d888P`             `88888"<<endl;
cout<<"                            d8*888888888P*                `88b  "<<endl;
cout<<"                           (*``,d8888*`                   `88   "<<endl;
cout<<"                              (*`                             `8"<<endl<<endl; 
cout<<"       __    __   ____               ___   ___                  "<<endl;
cout<<"      |  |  |  | |    |      |      |   | |     |   |  |   |    "<<endl;
cout<<"      | _|  |__| |           |      |   | |     |   |  |   |    "<<endl; 
cout<<"      |:    |    |   _       |      |   | |     |===|  |___|    "<<endl;
cout<<"      | :   |    |    |      |      |   | |     |   |    |      "<<endl;
cout<<"      |  :  |    |____|      |_____ |___| |___  |   |    |      "<<endl;


system("cls");
cout<<"                                          ,d888`                "<<endl;
cout<<"                                        ,d888`       .d8*`      "<<endl;
cout<<"                                      ,d88`          .d8*`      "<<endl;
cout<<"                                    ,d88*           .d8*`       "<<endl;
cout<<"                                  ,d88*          ..d*`          "<<endl;
cout<<"                                 ,d88`       . .d8*`            "<<endl;
cout<<"                               ,d888`    ..d8P*`                "<<endl;
cout<<"                         .    ,d8888*8888*`                     "<<endl;
cout<<"                       ,*    ,88888*8P*                         "<<endl;
cout<<"                     ,*     d888888*8b.                         "<<endl;
cout<<"                   ,P      d8  *888.*888b.                      "<<endl;
cout<<"                 ,8*      8    *888  `*88888b.                  "<<endl;
cout<<"               ,d8               88           *8 8b.            "<<endl;
cout<<"              d8`                *8b                *88b.       "<<endl;
cout<<"            ,d8`                   *8.                          "<<endl;
cout<<"           d8P                       88.                        "<<endl;
cout<<"         ,88P                         888                       "<<endl;
cout<<"        d888*       .d88P               888                     "<<endl;
cout<<"       d8888b..d888888*                  888                    "<<endl;
cout<<"     ,888888888888888b.                  888                    "<<endl;
cout<<"    ,8*;88888P*788888888ba.             8888                    "<<endl;
cout<<"   ,8;,8888*        `88888*            d888*                    "<<endl;
cout<<"   )8e888*          ,88888be.         8888                      "<<endl;
cout<<"  ,d888`           ,8888888*        d8888                       "<<endl;
cout<<" ,d88P`           ,8888888Pb.     d8888`                        "<<endl;
cout<<" 888*            ,88888888*   .d88888*                          "<<endl;
cout<<" `88            ,888888888    .d88888b                          "<<endl;
cout<<"  `P @         ,8888888888bd888888*                             "<<endl;
cout<<"  @ @  *       d888888888888d888*                               "<<endl;
cout<<"  *  @ * *     8888888888888888b.                               "<<endl;
cout<<"   .   . .     88*. *88888888888b.        .db                   "<<endl;
cout<<"      .        `888b.`8888888888888b. .d8888P                   "<<endl;
cout<<"  .      .      *88b.`*8888888888888888888888b...               "<<endl;
cout<<"    .  .         *888b.`*8888888888P*78888888888 88e.           "<<endl;
cout<<"                  88888b.`*.d8888b*`88888P *                    "<<endl;
cout<<"                  `888888b     .d88888888888*`888 8.            "<<endl;
cout<<"                   )888888.   d888888888888P   `88 88888b.      "<<endl;
cout<<"                  ,88888*    d88888888888*`    `8 888b          "<<endl;
cout<<"                 ,8888*    .8888888888P`           `888b.       "<<endl;
cout<<"                ,888*      888888888b...             `888P88b.  "<<endl;
cout<<"       .db.   ,d88*        88888888888888b           `8888      "<<endl;
cout<<"   ,d888888b.8888`         `*888888888888888888P`    `888b.     "<<endl;
cout<<"  /*8888b*`              `*8888P*``8888`               `8888b.  "<<endl;
cout<<"       /*88`                 .ed8b..  .d888P`             `88888"<<endl;
cout<<"                            d8*888888888P*                `88b  "<<endl;
cout<<"                           (*``,d8888*`                   `88   "<<endl;
cout<<"                              (*`                             `8"<<endl<<endl; 
cout<<"       __    __   ____               ___   ___                  "<<endl;
cout<<"      |  |  |  | |    |      |      |   | |     |   |  |   |    "<<endl;
cout<<"      | _|  |__| |           |      |   | |     |   |  |   |    "<<endl; 
cout<<"      |:    |    |   _       |      |   | |     |===|  |___|    "<<endl;
cout<<"      | :   |    |    |      |      |   | |     |   |    |      "<<endl;
cout<<"      |  :  |    |____|      |_____ |___| |___  |   |    |      "<<endl;

system("cls");
cout<<"                                          ,d888`                "<<endl;
cout<<"                                        ,d888`       .d8*`      "<<endl;
cout<<"                                      ,d88`          .d8*`      "<<endl;
cout<<"                                    ,d88*           .d8*`       "<<endl;
cout<<"                                  ,d88*          ..d*`          "<<endl;
cout<<"                                 ,d88`       . .d8*`            "<<endl;
cout<<"                               ,d888`    ..d8P*`                "<<endl;
cout<<"                         .    ,d8888*8888*`                     "<<endl;
cout<<"                       ,*    ,88888*8P*                         "<<endl;
cout<<"                     ,*     d888888*8b.                         "<<endl;
cout<<"                   ,P      d8  *888.*888b.                      "<<endl;
cout<<"                 ,8*      8    *888  `*88888b.                  "<<endl;
cout<<"               ,d8               88           *8 8b.            "<<endl;
cout<<"              d8`                *8b                *88b.       "<<endl;
cout<<"            ,d8`                   *8.                          "<<endl;
cout<<"           d8P                       88.                        "<<endl;
cout<<"         ,88P                         888                       "<<endl;
cout<<"        d888*       .d88P               888                     "<<endl;
cout<<"       d8888b..d888888*                  888                    "<<endl;
cout<<"     ,888888888888888b.                  888                    "<<endl;
cout<<"    ,8*;88888P*788888888ba.             8888                    "<<endl;
cout<<"   ,8;,8888*        `88888*            d888*                    "<<endl;
cout<<"   )8e888*          ,88888be.         8888                      "<<endl;
cout<<"  ,d888`           ,8888888*        d8888                       "<<endl;
cout<<" ,d88P`           ,8888888Pb.     d8888`                        "<<endl;
cout<<" 888*            ,88888888*   .d88888*                          "<<endl;
cout<<" `88            ,888888888    .d88888b                          "<<endl;
cout<<"  `P @         ,8888888888bd888888*                             "<<endl;
cout<<"  @ @  @       d888888888888d888*                               "<<endl;
cout<<"  @  @ @ @     8888888888888888b.                               "<<endl;
cout<<"   @  * @ @    88*. *88888888888b.        .db                   "<<endl;
cout<<"  @ * @ * . .  `888b.`8888888888888b. .d8888P                   "<<endl;
cout<<"  @   @ * . @   *88b.`*8888888888888888888888b...               "<<endl;
cout<<"  . * @ . @ *  . *888b.`*8888888888P*78888888888 88e.           "<<endl;
cout<<"  . . . .  .  .   88888b.`*.d8888b*`88888P *                    "<<endl;
cout<<" .  . . .  . .    `888888b     .d88888888888*`888 8.            "<<endl;
cout<<"                   )888888.   d888888888888P   `88 88888b.      "<<endl;
cout<<"                  ,88888*    d88888888888*`    `8 888b          "<<endl;
cout<<"                 ,8888*    .8888888888P`           `888b.       "<<endl;
cout<<"                ,888*      888888888b...             `888P88b.  "<<endl;
cout<<"       .db.   ,d88*        88888888888888b           `8888      "<<endl;
cout<<"   ,d888888b.8888`         `*888888888888888888P`    `888b.     "<<endl;
cout<<"  /*8888b*`              `*8888P*``8888`               `8888b.  "<<endl;
cout<<"       /*88`                 .ed8b..  .d888P`             `88888"<<endl;
cout<<"                            d8*888888888P*                `88b  "<<endl;
cout<<"                           (*``,d8888*`                   `88   "<<endl;
cout<<"                              (*`                             `8"<<endl<<endl; 
cout<<"       __    __   ____               ___   ___                  "<<endl;
cout<<"      |  |  |  | |    |      |      |   | |     |   |  |   |    "<<endl;
cout<<"      | _|  |__| |           |      |   | |     |   |  |   |    "<<endl; 
cout<<"      |:    |    |   _       |      |   | |     |===|  |___|    "<<endl;
cout<<"      | :   |    |    |      |      |   | |     |   |    |      "<<endl;
cout<<"      |  :  |    |____|      |_____ |___| |___  |   |    |      "<<endl;
	Dragon++;
	}
	system("pause");
}
int dane_postaci()
{

    cout<< "Imie :"<<Imie<<endl;
    cout<< "LVL  :"<<LVL  <<"    EXP  :"<<exph   << "/" << expmax  <<endl;
    cout<< "HP   :"<<"<";
    no_line_hp= 10*zycieh/zyciemax;
    no_point_hp=10-no_line_hp;
    no_line_mana= 10*manah/manamax;
    no_point_mana=10-no_line_mana;
    
    AtackaddH = HeroesSD;
	DeffaddH = HeroesSHD+HeroesHeD+HeroesAD+HeroesTD+HeroesBD;
	    
    
    cout<< "HP   <";
        for(no_line_hp ; no_line_hp>0 ;no_line_hp--)
            {
                cout<<"|";
            }
        for(no_point_hp ; no_point_hp>0 ;no_point_hp--)
            {
                cout<<".";
            }
    cout<<">";
    cout<<"  Mana <";
        for(no_line_mana ; no_line_mana>0 ;no_line_mana--)
            {
                cout<<"|";
            }
        for(no_point_mana ; no_point_mana>0 ;no_point_mana--)
            {
                cout<<".";
            }
    cout<<">"<<endl;
    cout<< "Atak :"<<atak <<" +" <<AtackaddH<<endl;
    cout<< "Def  :"<<obrona <<" +" <<DeffaddH<<endl;
    cout<< "Moc  :"<<moc <<endl;
    cout<< "Gold :"<<gold <<endl;
}
int Potwor()
{
    P_line_hp= 10*PHP/PHPmax;
    
	if(P_line_hp<0)
	{
		P_line_hp= 0;
	}
	
    P_point_hp=10-P_line_hp;

    cout<< "Nazwa:"<<Pnazwa<<endl;
    cout<< "LVL  :"<<PLVL  <<endl;
    
    cout<<"HP: <";
            for(P_line_hp ; P_line_hp>0 ;P_line_hp--)
            {
                cout<<"|";
            }
        for(P_point_hp ; P_point_hp>0 ;P_point_hp--)
            {
                cout<<".";
            }
    cout<<">"<<endl;

    cout<< "Atak :"<<PAtak <<endl;
    cout<< "Def  :"<<PDef <<endl;
    cout<< "Moc  :"<<PMoc <<endl;
}
int losowanie()
{
    srand(time(NULL));
    los=rand()%10+1;


       switch(los)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        {
            Pnazwa="Szczur";PLVL=1;PHP=3;PAtak=10;PDef=1;PMoc=1;
            PHPmax = PHP;
            Potwor();
            break;
        }
        case 5:
        case 6:
        case 7:

        {
            Pnazwa="Goblin";PLVL=2;PHP=11;PAtak=7;PDef=1;PMoc=1;
            PHPmax = PHP;
            Potwor();
            break;
        }
        case 8:
        case 9:
        {
            Pnazwa="Trogolita";PLVL=4;PHP=16;PAtak=4;PDef=7;PMoc=1;
            PHPmax = PHP;            
            Potwor();
            break;
        }
        case 10:
        {
            Pnazwa="Troll";PLVL=6;PHP=34;PAtak=9;PDef=12;PMoc=1;
            PHPmax = PHP;            
            Potwor();
            break;
        }
    }
}
int poczatek()
{
    for(int i=10 ; i>0 ; i--)
    {

    cout<<"     Rozdaj punkty umiejetnosci"<<endl<<endl;
    cout<<"1.Wiecej HP    (1pkt um.---> 2pktHP)"<<endl;
    cout<<"2.Wiecej Many  (1pkt um.---> 2pktMany)"<<endl;
    cout<<"3.Wiecej Ataku (1pkt um.---> 1pktAtaku)"<<endl;
    cout<<"4.Wiecej Obrony(1pkt um.---> 1pktObrony)"<<endl;
    cout<<"5.Wiecej Mocy  (1pkt um.---> 1pktMocy)"<<endl;
    cout<<"  Pozostalo " << i <<" punktow umiejetnosci" <<endl<<endl;

    dane_postaci();

    cin>>Rozwoj;

    switch(Rozwoj)
    {
        case 1:
        {
            zyciemax=zyciemax+2;
            break;
        }
        case 2:
        {
            manamax=manamax+2;
            break;
        }
        case 3:
        {
            atak++;
            break;
        }
        case 4:
        {
            obrona++;
            break;
        }
        case 5:
        {
            moc++;
            break;
        }
        default:
        {
            system( "cls" );
            cout<<"Nie mozesz rozwinac tego czego nie ma ..."<<endl << "Ogarnij sie..."<<endl;
            i++;
            Sleep(2000);
            break;
        }
    }
    system( "cls" );
    }
        for(zycieh;zycieh<zyciemax ;zycieh++)
       {
    cout<<"Stwarzanie "<<Imie<<" ..."<<endl<<endl;
    dane_postaci();
    Sleep(100);
    system( "cls" );
       }
    for(manah;manah<manamax ;manah++)
       {
    cout<<"Stwarzanie "<<Imie<<" ..."<<endl<<endl;
    dane_postaci();
    Sleep(100);
    system( "cls" );

    }
}
int bitwa()
{
   while((zycieh>0)&&(PHP>0))
   {
system("cls");
cout<<"Wybierz rodzaj ataku"<<endl<<endl;

cout<<"1.Normalny atak"<<endl;
cout<<"2.super_atak(Koszt 3 many)"<<endl;
cout<<"3.Uzycie czaru(Koszt 1 many)"<<endl<<endl;

Potwor();
cout<<"                 "<<endl;
dane_postaci();
cin>>wyb_ataku;

       switch(wyb_ataku)
    {
case 1:
        {
            nor_atak = atak + AtackaddH- PDef/2;
            if(nor_atak>=0)
            {
            cout<<"Zadales "<<nor_atak<<" obrazenia."<<endl;
            Sleep(500);
             for(nor_atak;nor_atak>0 ;nor_atak--)
            {
                system( "cls" );
                PHP--;
                Potwor();
                Sleep(200);

            }
            }
            else
            {
                system("cls");
                PHP++;
                 cout<<"Twoj cios nic nie zrobil przeciwnikowi ..."<<endl<<"Jedynie go wkurzyl (zyskuje 1 hp)"<<endl;
                Sleep(1000);
            }
        break;
        }
case 2:
        {
            if(manah>=3)
            {
            manah=manah-3;
            super_atak= atak*2 + AtackaddH - PDef/2;
            if(super_atak>=0)
            {
            cout<<"Zadales "<<super_atak<<" obrazenia."<<endl;
            Sleep(500);
            for(super_atak;super_atak>0 ;super_atak--)
            {
                system( "cls" );
                PHP--;
                Potwor();
                Sleep(200);
            }
            }
            else
            {
                system("cls");
                PHP++;
                cout<<"Twoj cios nic nie zrobil przeciwnikowi ..."<<endl<<"Jedynie go wkurzyl (zyskuje 1 hp)"<<endl;
                Sleep(1000);
            }
            }
            else
            {
                cout<<"typie nie masz many... "<<endl;
                Sleep(1000);
            }
            break;
        }
case 3:
                if(manah>=1)
                {
                {
            manah=manah-1;
            czar= moc*1.5 - PDef/2;
            if(czar>=0)
            {

            cout<<"Zadales "<<czar<<" obrazenia."<<endl;
            Sleep(500);

             for(czar;czar>0 ;czar--)
            {
                system( "cls" );
                PHP--;
                Potwor();
                Sleep(200);
            }
            }
            else
            {
                system("cls");
                PHP++;
                cout<<"Twoj cios nic nie zrobil przeciwnikowi ..."<<endl<<"Jedynie go wkurzyl (zyskuje 1 hp)"<<endl;
                Sleep(1000);
            }
            break;
        default:
        {
            cout<<"Zastanawiajac sie co zrobic jak debil ... Przeciwnik atakuje ..."<<endl;
            Sleep(1000);
            break;
        }
        }
        }
             else
            {
                cout<<"typie nie masz many... "<<endl;
                Sleep(1000);
            }
}
if(PHP<=0)

{
    system("cls");
    cout<<"!!!Zabiles potwora!!!"<<endl;
    Sleep(1500);
    system("cls");
        return 0;
}

obrazenia_potwora = (PAtak - obrona - DeffaddH)/2 ;
            if(obrazenia_potwora>=0)
            {
            cout<<"Otrzymales "<<obrazenia_potwora<<" obrazen."<<endl;
            Sleep(500);
            for(obrazenia_potwora;obrazenia_potwora>0 ;obrazenia_potwora--)
            {
                system( "cls" );
                zycieh--;
                dane_postaci();
                Sleep(300);
            }
            }
            else
            {
                system("cls");
                PHP++;
                cout<<"Jestes na tyle zakuta pala ze nic Ci sie nie stalo..."<<endl<<"Brawo (zyskujesz 1 hp)..."<<endl;
                Sleep(1000);

}
}
//PHPmax_set = 0;
if(zycieh<=0)
{
    cout <<"Przegrales..."<<endl<<"Pussy"<<endl;
    return 0;
}

}
int LvLup()
{
  if(zycieh>0)
  {
   srand(time(NULL));
    expup=rand()%10+1+los;
    cout<<"Otrzymujesz "<<expup <<"."<<endl;
    goldup= rand()%10+3*PLVL ;
    cout<<"Zdobyles "<<goldup<<"g"<<endl;
    Sleep(500);
                for(expup;expup>0 ;expup--)
            {
                system( "cls" );
                exph++;
                dane_postaci();
                Sleep(200);
            }
                for(goldup;goldup>0 ;goldup--)
            {
                system( "cls" );
                gold++;
                dane_postaci();
                Sleep(200);
            }

    if(exph>=expmax)
    {
        LVL++;
        exph=exph-expmax;
        expmax=expmax+5;
        for(int i=3 ; i>0 ; i--)
    {

    cout<<"     Rozdaj punkty umiejetnosci"<<endl<<endl;
    cout<<"1.Wiecej HP    (1pkt um.---> 2pktHP)"<<endl;
    cout<<"2.Wiecej Many  (1pkt um.---> 2pktMany)"<<endl;
    cout<<"3.Wiecej Ataku (1pkt um.---> 1pktAtaku)"<<endl;
    cout<<"4.Wiecej Obrony(1pkt um.---> 1pktObrony)"<<endl;
    cout<<"5.Wiecej Mocy  (1pkt um.---> 1pktMocy)"<<endl;
    cout<<"  Pozostalo " << i <<" punktow umiejetnosci" <<endl<<endl;

    dane_postaci();

    cin>>Rozwoj;

    switch(Rozwoj)
    {
        case 1:
        {
            zyciemax=zyciemax+2;
            break;
        }
        case 2:
        {
            manamax=manamax+2;
            break;
        }
        case 3:
        {
            atak++;
            break;
        }
        case 4:
        {
            obrona++;
            break;
        }
        case 5:
        {
            moc++;
            break;
        }
        default:
        {
            system( "cls" );
            cout<<"Nie mozesz rozwinac tego czego nie ma ..."<<endl << "Ogarnij sie..."<<endl;
            i++;
            Sleep(2000);
            break;
        }
    }
    system( "cls" );
    }
        for(zycieh;zycieh<zyciemax ;zycieh++)
       {
    cout<<"Uzdrawianie "<<Imie<<" ..."<<endl<<endl;
    dane_postaci();
    Sleep(100);
    system( "cls" );
       }
    for(manah;manah<manamax ;manah++)
       {
    cout<<"Regenerowanie "<<Imie<<" ..."<<endl<<endl;
    dane_postaci();
    Sleep(100);
    system( "cls" );

    }
    }
  }
}
int ShowMap()
{
MapX = 0;
MapY = 0;


cout<<"    Map:    "<<endl; 
cout<<".          ."<<endl; 

for(MapY; MapY<11; MapY++)
{
	cout<<"|";
	for(MapX; MapX<11; MapX++)
{
	cout<<Mapa[MapX][MapY];
}
	cout<<"|";
	MapX = 0 ;
    cout<<endl; 
}
cout<<".----------."<<endl; 
cout<<"H <--- Heroes"; 
cout<<",    X <--- No-one now :<"<<endl; 
cout<<"E <--- End of the dungeon"; 
cout<<", S <--- Shop "<<endl; 
cout<<"B <--- Mini Boss"; 
cout<<",    F <--- Fountain "<<endl; 

	
}
int CreatMap()
{
MapX = 0;
MapY = 0;
SPosX = 0;
SPosY = 0;
FPosX = 0;
FPosY = 0;
BPosX = 0;
BPosY = 0;
EPosX = 0;
EPosY = 0;
srand(time(NULL));
SPosX=rand()%5;
SPosY=rand()%5;
FPosX=rand()%5+6;
FPosY=rand()%5;
BPosX=rand()%5;
BPosY=rand()%5+6;
EPosX=rand()%5+6;
EPosY=rand()%5+6;
for(MapY; MapY<11; MapY++)
{
for(MapX; MapX<11; MapX++)
{
	Mapa[MapX][MapY] = "X" ;
}
	MapX = 0 ;
}
}
int MAPMIG()
{
	MIG=0;
	while(MIG!=6)
{
MIG++;
MapX = 0 ; 
MapY = 0 ;
Mapa[pion][poziom] = " " ;
system("cls");
cout<<"    Map:    "<<endl; 
cout<<".          ."<<endl; 
for(MapY; MapY<11; MapY++)
{
	cout<<"|";
	for(MapX; MapX<11; MapX++)
{
	cout<<Mapa[MapX][MapY];
}
	cout<<"|";
	MapX = 0 ;
    cout<<endl; 
}
cout<<".----------."<<endl; 
Sleep(300);

//

MapX = 0 ; 
MapY = 0 ;
Mapa[pion][poziom] = "H" ;
system("cls");
cout<<"    Map:    "<<endl; 
cout<<".          ."<<endl; 

for(MapY; MapY<11; MapY++)
{
	cout<<"|";
	for(MapX; MapX<11; MapX++)
{
	cout<<Mapa[MapX][MapY];
}
	cout<<"|";
	MapX = 0 ;
    cout<<endl; 
}
cout<<".----------."<<endl; 

Sleep(300);


}
}
int Sklep()
{	
cout<<"Wsrod skal zauwazasz malutkie drzwiczki."<<endl;
cout<<"Nie jestes w stanie odpuscic i zagladasz do srodka."<<endl;
cout<<"Nagle skrzat wyskakuje z fotela i Cie wita:"<<endl;
cout<<"Hej! Usiadz i odpocznij sobie! A moze chcesz cos zakupic?"<<endl;
system("pause");

system("cls");

    srand(time(NULL));
    SP=rand()%5+1;
    SD=SP - rand()%2;
    if(SD<=0)
    {
    	SD=1;
	}
	SC=SP*3 + SD*15 + rand()%5;

    SHP=rand()%5+1;
    SHD=SHP - rand()%3;
    if(SHD<=0)
    {
    	SHD=1;
	}
	SHC=SHP*3 + SHD*15 + rand()%5;

    HeP=rand()%5+1;
    HeD=HeP - rand()%2;
    if(HeD<=0)
    {
    	HeD=1;
	}
	HeC=HeP*2 + HeD*10 + rand()%8;

    AP=rand()%5+1;
    AD=2*AP - rand()%6;
    if(AD<=0)
    {
    	AD=1;
	}
	AC=AP*4 + AD*9 + rand()%5;

    TP=rand()%5+1;
    TD=TP - rand()%3;
    if(TD<=0)
    {
    	TD=1;
	}
	TC=TP*4 + TD*10 + rand()%5;

    BP=rand()%5+1;
    BD=BP - rand()%3;
    if(BD<=0)
    {
    	BD=1;
	}
	BC=BP*3 + BD*6 + rand()%6;			

cout<<"Takie cudenka mam dla Ciebie:"<<endl;
cout<<"1.Miecz +"<<SP<<" zadaje dodatkowo "<<SD<<"<-- Kosztuje "<< SC <<endl;
cout<<"2.Tarcza +"<<SHP<<" broni dodatkowo "<<SHD<<"<-- Kosztuje "<< SHC<< endl;
cout<<"3.Helm +"<<HeP<<" broni dodatkowo "<<HeD<<"<-- Kosztuje "<< HeC <<endl;
cout<<"4.Pancerz +"<<AP<<" broni dodatkowo "<<AD<<"<-- Kosztuje "<< AC <<endl;
cout<<"5.Spodnie +"<<TP<<" broni dodatkowo "<<TD<<"<-- Kosztuje "<< TC <<endl;
cout<<"6.Buty +"<<BP<<" broni dodatkowo "<<BD<<"<-- Kosztuje "<< BC <<endl;
cout<<"7.Nic mi nie potrzeba" <<endl;
cout<<"To co ?Znajdziesz cos dla siebie?"<<endl;
cout<<"W mieszku masz :"<<gold<<endl;
cin>>Shopchoice;


	        if	   (Shopchoice==1) 
			{
			if(gold>=SC)
			{
				gold=gold-SC;
				cout<<"Dzieki za zakup miecz jest twoj"<<endl;
				cout<<"W mieszku zostalo ci :"<<gold<<endl;
				system("pause");
				HeroesSD=SD;
				
			}
			else
			{
				cout<<"Nie zawracaj mi glowy! Jak nie masz kasy to wybierz cos innego albo zjezdzaj!"<<endl;
				system("pause");
			}	
			}
			
			else if	   (Shopchoice==2) 
			{
			if(gold>=SHC)
			{
				gold=gold-SHC;
				cout<<"Dzieki za zakup tarcza jest twoj"<<endl;
				cout<<"W mieszku zostalo ci :"<<gold<<endl;
				system("pause");
				HeroesSHD=SHD;				
				
			}
			else
			{
				cout<<"Nie zawracaj mi glowy! Jak nie masz kasy to wybierz cos innego albo zjezdzaj!"<<endl;
				system("pause");
			}	
			}
		
			else if	   (Shopchoice==3) 
			{
			if(gold>=HeC)
			{
				gold=gold-HeC;
				cout<<"Dzieki za zakup helm jest twoj"<<endl;
				cout<<"W mieszku zostalo ci :"<<gold<<endl;
				system("pause");
				HeroesHeD=HeD;
								
			}
			else
			{
				cout<<"Nie zawracaj mi glowy! Jak nie masz kasy to wybierz cos innego albo zjezdzaj!"<<endl;
				system("pause");
			}	
			}
			
			else if	   (Shopchoice==4) 
			{
			if(gold>=AC)
			{
				gold=gold-AC;
				cout<<"Dzieki za zakup pancerz jest twoj"<<endl;
				cout<<"W mieszku zostalo ci :"<<gold<<endl;
				system("pause");
				HeroesAD=AD;				
			}
			else
			{
				cout<<"Nie zawracaj mi glowy! Jak nie masz kasy to wybierz cos innego albo zjezdzaj!"<<endl;
				system("pause");
			}	
			}
			
			else if	   (Shopchoice==5) 
			{
			if(gold>=TC)
			{
				gold=gold-AC;
				cout<<"Dzieki za zakup spodnie jest twoj"<<endl;
				cout<<"W mieszku zostalo ci :"<<gold<<endl;
				system("pause");
				HeroesTD=TD;				
				
			}
			else
			{
				cout<<"Nie zawracaj mi glowy! Jak nie masz kasy to wybierz cos innego albo zjezdzaj!"<<endl;
				system("pause");
			}	
			}
			
			else if	   (Shopchoice==6) 
			{
			if(gold>=BC)
			{
				gold=gold-BC;
				cout<<"Dzieki za zakup buty jest twoj"<<endl;
				cout<<"W mieszku zostalo ci :"<<gold<<endl;
				system("pause");
				HeroesBD=BD;
								
			}
			else
			{
				cout<<"Nie zawracaj mi glowy! Jak nie masz kasy to wybierz cos innego albo zjezdzaj!"<<endl;
				system("pause");
			}	
			}
			else if	   (Shopchoice==7) 
			{

				cout<<"Jak cos to wiesz gdzie mnie szukac ! Powodzenia tam.. wiesz w lochach."<<endl;
				system("pause");
	
			}
			else 	{cout<<"Heh?! Stary jestem chyba nie doslyszalem"<<endl;} 
			

	
}
int Fontanna()
{
	
	fexit=0;
	while(fexit==0)
	{
		
	system("cls");
    cout<< "Fontanna z dziwnie wygladajaca zielona woda niejako wyrasta sposrod piasku i unoszacego sie kurzu "<<endl;
    cout<< "Czy zechcesz sie z niej napic?"<<endl;
    cout<< "T/N?"<<endl;
    cin>>fchoice;
	if((fchoice=="T")||(fchoice=="t"))
	{
		fexit=1;		
    	srand(time(NULL));
    	flos=rand()%10+1;
    	
    	if(flos<8)
    	{

    		cout<< "Dobry wybor !"<<endl<<"Woda Ci nie zaszkodzila a wrecz przeciwnie, pomogla Ci leczac Cie o 5hp !"<<endl;
    		zycieh= zycieh + 5;
    		if(zycieh>zyciemax){zycieh=zyciemax;}
    		
		}
		
		if(flos>=8)
    	{
    		cout<< "TFFFFUUU! Otrules sie i traciesz 4 HP."<<endl;
     		zycieh= zycieh - 4;
			 
			 
			if(zycieh<=0)
  			{
 				cout<<"Umarles"<<endl;
  				system("pause");
 				return 0;
   			}
    
			    		
		}
		Sleep(500);	
	}
	
	else if((fchoice=="N")||(fchoice=="n"))
	{
		fexit=1;
		cout<<"Odchodzisz ale nie dowiedziales sie co skrywa fontanna.";	
		Sleep(500);
	}	
	else
	{
		cout<<"Co nie wiesz co chcesz zrobic?!";
		system("pause");	
	}
	
	}
	
}
int MiniBoss()
{

	system("cls");
    cout<<"!Bitwa!"<<endl<<endl;
    Pnazwa="MiniBoss";
    PLVL=3+rand()%LVL;
    PHP=15+(rand()%LVL)*3;
    PAtak=8+rand()%LVL;
    PDef=2+rand()%LVL;
    PMoc=5+rand()%LVL;
    Potwor();
    cout<<"                 "<<endl;
    dane_postaci();
    Sleep(2000);
    bitwa();
    LvLup();
    if(PHP<=0)
    {
        cout<<"wygrales"<<endl;
        system("pause");
        return 0;
    }
    
    if(zycieh<=0)
    {
    cout<<"Umarles"<<endl;
    system("pause");
    }
	
}
int ruchy()
{
	

	        if	   ((pion==FPosX)&&(poziom==FPosY)) {Mapa[pion][poziom] = "F" ;}
            else if((pion==SPosX)&&(poziom==SPosY)) {Mapa[pion][poziom] = "S" ;}
            else if((pion==BPosX)&&(poziom==BPosY)) {Mapa[pion][poziom] = "B" ;}
            else if((pion==EPosX)&&(poziom==EPosY)) {Mapa[pion][poziom] = "E" ;}
            else Mapa[pion][poziom] = " " ;
				
    system("cls");
    cout<<FPosX<<FPosY<<endl;
    cout<<SPosX<<SPosY<<endl;
    cout<<BPosX<<BPosY<<endl;
    cout<<EPosX<<EPosY<<endl;
      
    cout<<pion<<":"<<poziom<<endl;
    if(0<pion)
    {
    cout<<"Jesli chcesz isc do lewo wpisz 1."<<endl;
    }
    if(10>poziom)
    {
    cout<<"Jesli chcesz isc w dol wpisz 2."<<endl;
    }
    if(10>pion)
    {
    cout<<"Jesli chcesz isc w prawo wpisz 3."<<endl;
    }
    if(0<poziom)
    {
    cout<<"Jesli chcesz isc w gora wpisz 4."<<endl;
    }
    cout<<"Chcesz zobaczyc mape? Wpisz 5."<<endl;
    cin>>ruch;
    system("cls");
    switch(ruch)
    {
    case 1:
    {
        if(0<pion)
        {
        pion--;
        }
        else
        {
        	cout<<"rozgladasz sie ja debil i nic z tego nie wynika ..."<<endl;
            system("pause");
            return 1;
        }
        break;
    }
     case 2:
    {
       if(10>poziom)
        {
        poziom++;
        }
        else
        {
        	cout<<"rozgladasz sie ja debil i nic z tego nie wynika ..."<<endl;
            system("pause");
            return 1;
        }
        break;
    }
     case 3:
    {
        if(10>pion)
        {
        pion++;
        }
        else
        {
        	cout<<"rozgladasz sie ja debil i nic z tego nie wynika ..."<<endl;
            system("pause");
            return 1;
        }
        break;
    }
     case 4:
    {
        if(0<poziom)
        {
        poziom--;
        }
        else
        {
        	cout<<"rozgladasz sie ja debil i nic z tego nie wynika ..."<<endl;
            system("pause");
            return 1;
        }
        break;
    }
         case 5:
    {
        
        MAPMIG();
        system("cls");
        ShowMap();
        system("pause");
        
        break;
    }
        default:
            {
                cout<<"rozgladasz sie ja debil i nic z tego nie wynika ..."<<endl;
                system("pause");
                return 1;
            }
    }
    
    	    if	   ((pion==FPosX)&&(poziom==FPosY)) 
			{
			cout<<"Odnalazles Fontanne ! Brawo!"<<endl;
			system("pause");
			Fontanna();			
			}
            else if((pion==SPosX)&&(poziom==SPosY))
			 {	 	
			cout<<"Odnalazles Sklep ! Brawo!"<<endl;
	  		system("pause");
			Sklep();			
			 }
            else if((pion==BPosX)&&(poziom==BPosY)) 
			{
			cout<<"Odnalazles Siedlisko minibossa ! Brawo!"<<endl;
			system("pause");
			MiniBoss();
			}
            else if((pion==EPosX)&&(poziom==EPosY)) 
			{
			cout<<"Odnalazles Wyjœcie ! Brawo!"<<endl;
         	system("pause");			
			}

    
    
 	energy--;           
            
    return 0;
}
int main()
{
	intro();
	system("cls");
    cout<<" Zmierzajac przez pustkowia trafiasz na ruchome piaski... "<<endl;
    cout<<" Naszczescie okazalo sie ze wciagnely cie na twardy grunt , a czy na szczescie to sie zobaczy ..."<<endl;
    cout<<" Nagle slyszysz glos !"<<endl;
    b=a;
    cout<<b<<" Jak sie nazwasz ??? "<<b<<endl;
    cin>>Imie;
    system("cls");
    cout<<" Glos mowi: Pamietaj aby isc do dziesiatek... dziesiatki sa takie piekne ..."<<endl;
    cout<<" Po tym juz nic nie slyszysz jedynie czujesz wilgosc lochow..."<<endl;
    system("pause");
    system("cls");
    poczatek();
    CreatMap();
    energy=50;
    while((h==0)&&(zycieh>0))
    {
        ruchy();
        losowanie();
        system("cls");
        if((pion<=10)&&(poziom<=10)&&(pion>=0)&&(poziom>=0))

       {
    		if(energy==0)
           {
        cout<<"!Bitwa!"<<endl<<endl;
        Potwor();
        cout<<"                 "<<endl;
        dane_postaci();
        system("pause");
        bitwa();
        LvLup();
    	energy=5;

           }
       }
        if((pion==EPosX)&&(poziom==EPosY))
        {
            h=1234;
        }

    }
     if(zycieh>0)
     {
     cout<<" Brawo !!! Dotarles do schodow , ale spokojnie im nizej tym gorzej :D!!!"<<endl;
     system("pause");
     }
        h=0;
        pion=0;
        poziom=0;
        CreatMap();
    	energy=50;
        while((h==0)&&(zycieh>0))
    {
        ruchy();
        losowanie();
        PAtak=PAtak+13;
        PHP=PHP+14;
        PDef += 8;
        system("cls");
        
        if((pion<=10)&&(poziom<=10)&&(pion>=0)&&(poziom>=0))

       {
    		if(energy==0)
           {
        cout<<"!Bitwa!"<<endl<<endl;
        Potwor();
        cout<<"                 "<<endl;
        dane_postaci();
        system("pause");
        bitwa();
        LvLup();
    	energy=4;

           }
       }
        
        if((pion==EPosX)&&(poziom==EPosY))
        {
            h=1234;
        }
    }
if(zycieh>0)
{

cout<<" Brawo !!! Jeszcze jedne schody i koniec gry albo Ciebie :D!!!"<<endl;
system("pause");
}
        h=0;
        pion=0;
        poziom=0;
        CreatMap();
    	energy=50;
        while((h==0)&&(zycieh>0))
    {
        ruchy();
        losowanie();
        PAtak=PAtak+23;
        PHP=PHP+25;
        PDef += 13;
        system("cls");
        
    	if(energy==0)
        {
        cout<<"!Bitwa!"<<endl<<endl;
        Potwor();
        cout<<"                 "<<endl;
        dane_postaci();
        system("pause");
        bitwa();
        LvLup();
    	energy=3;

           }
                   if((pion==EPosX)&&(poziom==EPosY))
        {
            h=1234;
    	}
    }
        
    
    
    h=0;
    
    while(zycieh>0)
    {
    system("cls");
    cout<<"!Bitwa!"<<endl<<endl;
    Pnazwa="Smok";
    PLVL=8+rand()%LVL;
    PHP=67+(rand()%LVL)*3;
    PAtak=34+rand()%LVL;
    PDef=14+rand()%LVL;
    PMoc=13;
    Potwor();
    cout<<"                 "<<endl;
    dane_postaci();
    Sleep(2000);
    bitwa();
    LvLup();
    if(PHP<=0)
    {
        cout<<"wygrales"<<endl;
        system("pause");
        return 0;
    }
    }
    if(zycieh<=0)
    {
    cout<<"Umarles"<<endl;
    system("pause");
    }
    return 0;
}
