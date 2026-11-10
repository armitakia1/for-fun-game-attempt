#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "painpeko.h"
#define STR_CAP 300

// Source for all ascii art: https://www.asciiart.eu/buildings-and-places

void clearScreen(void){

    system("cls");
}

char getName(struct Player player) {

    int i;
    int valid = 0;


    while (valid == 0) {
        printf("Please enter a name: ");
        scanf("%s", player.playerName);
        for (i = 0; player.playerName[i] != '\0'; i++) {

            if (!((player.playerName[i] >= 'A' && player.playerName[i] <= 'Z') ||
                (player.playerName[i] >= 'a' && player.playerName[i] <= 'z'))) {
                putchar('\n');
                printf("That's very funny of you, but you're pretty sure your name doesn't have numbers in it!\n");
                printf("Now give an actual name, bucko.\n\n");

                printf("Please enter a name: ");
                scanf("%s", player.playerName);
            }
        }
    }
    printf("+ ***************************   +\n\n"
        "|   Destination: Port PAZULA     |\n"
        "|  ***************************   |\n"
        "|   From: The Edge of Time       |\n"
        "| Date: 2999 12 31 Time: 00: 00  |\n"
        "| Fare: Paid For.                |\n"
        "----------------------------------\n"
        "Name: % s     Reason: You Must Live  \n", player.playerName
    );

    return player.playerName;
}

void introMenu(void)
{
    printf("-----\n"
        "-----------------\n\n"      
"                                                             ___\n"
"                                             ___..--'  .`.\n"
"                                    ___...--'     -  .` `.`.\n"
"                           ___...--' _      -  _   .` -   `.`.\n"
"                  ___...--'  -       _   -       .`  `. - _ `.`.\n"
"           __..--'_______________ -         _  .`  _   `.   - `.`.\n"
"        .`    _ /\    -        .`      _     .`__________`. _  -`.`.\n"
"      .` -   _ /  \_     -   .`  _         .` |Train Depot|`.   - `.`.\n"
"    .`-    _  /   /\   -   .`        _   .`   |___________|  `. _   `.`.\n"
"  .`________ /__ /_ \____.`____________.`     ___       ___  - `._____`|\n"
"    |   -  __  -|    | - |  ____  |   | | _  |   |  _  |   |  _ |\n"
"    | _   |  |  | -  |   | |.--.| |___| |    |___|     |___|    |\n"
"    |     |--|  |    | _ | |'--'| |---| |   _|---|     |---|_   |\n"
"    |   - |__| _|  - |   | |.--.| |   | |    |   |_  _ |   |    |\n"
" ---``--._      |    |   |=|'--'|=|___|=|====|___|=====|___|====|\n"
" -- . ''  ``--._| _  |  -|_|.--.|_______|_______________________|\n"
"`--._           '--- |_  |:|'--'|:::::::|:::::::::::::::::::::::|\n"
"_____`--._ ''      . '---'``--._|:::::::|:::::::::::::::::::::::|\n"
"----------`--._          ''      ``--.._|:::::::::::::::::::::::|\n"
"`--._ _________`--._'        --     .   ''-----..............LGB'\n"
"     `--._----------`--._.  _           -- . :''           -    ''\n"
"          `--._ _________`--._ :'              -- . :''      -- . ''\n"
" -- . ''       `--._ ---------`--._   -- . :''\n"
"          :'        `--._ _________`--._:'  -- . ''      -- . ''\n"
"  -- . ''     -- . ''    `--._----------`--._      -- . ''     -- . ''\n"
"                              `--._ _________`--._\n"
" -- . ''           :'              `--._ ---------`--._-- . ''    -- . ''\n"
"          -- . ''       -- . ''         `--._ _________`--._   -- . ''\n"
":'                 -- . ''          -- . ''  `--._----------`--._\n"

    );
    putchar('\n');
    printf("\n\"You find yourself waking up somewhere you don't entirely recognise,\n"
        "\"You're not sure why, but you feel as though you have been here before...\n"
        "\"You look up. There are no stars deep in the sky. The moon shines down upon you, as if questioning you back just as much as you question it.\n"
        "\"Squinting, you try to figure out what is going on around you. Why are you here? Who brought you here?\n"
        "\"Closing your eyes, you realise you cannot remember...\n"
        "\"The loud alarm of a train approaching catches your attention. You look down at your hand to see you are holding\n" 
        "a ticket.\n"
        "\"You board the train once it stops.\"\n\n\n\n");

    printf("Press any button to continue...");
    while (getchar() != '\n') {
        ;
    }
    clearScreen();
}

void trainScene(void) {

    struct Player player = { 0 };

    printf("-------------\n\n"
        "               o x o x o x o . . .\n"
        "         o      _____            _______________ ___==== = __T___\n"
        "       .][__n_n_ | DD[====_____  |    |.\ / .|   | |   |_|     |_\n"
        "      >(________ | __ | _[_________]_ | ____ | _ / \_ | ___ | _ | ___________ | _ |\n"
        "      _ / oo OOOOO oo`  ooo   ooo   o ^ o       o ^ o   o ^ o     o ^ o\n"
        "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n\n"
    ); 

    printf("\"The train cabin is empty as you step inside.\n"
        "\"Looking around, you see that the cabin is rather extravagant and expensive.\n"
        "\"You sit down on one of the chairs. The ticket in your hand glimmers with gold glitter under the cabin lights.\n"
        "\"Curiosity takes over. You finally look at your ticket. Maybe you'll get your name?\n"
        "\"You look down and see...\"\n"
    );
    while (getchar() != '\n') {
        ;
    }
    clearScreen();

    getName(player);

    printf("\"Your brow furrows at the end of the ticket.\n"
         "\"'Reason to live'? That is very ominous.\n"
        "\"As well, the edge of time? How in the world did you end up here?\n"
        "\"You swore that earlier you were somewhere completely different. Weren't you with other people?\n"
        "\"At some point, you swore you were part of a group of 4 (you included)...\n"
        "\"How strange. \bWhat happened to you?\n\n");

    printf("Press any button to continue...");
    while (getchar() != '\n') {
        ;
    }
    clearScreen();
}