﻿#include <string>
#include <iostream>

#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"
#include "Quest.h"
#include "Entity.h"

using namespace std;

int main()
{
    quest FirstQuest = quest(1, "Begining", "You need to kill 2 zombie");
    NPC Valera = NPC("Valera", 32, "Stranger, pls, help me!", FirstQuest);

    warrior Misha = warrior(213223, "Misha", 100);

    weapon legend_bow = weapon("bow", "Legengary bow", 30, 20);
    weapon My_sword = weapon("sword", "Legengary sword", 45, 10);

    Misha.Talk_NPC(Valera);

    Misha.Swap_weapon(My_sword);
    Misha.Warrior_furios();
    Misha.Player_get_info();

    zombie Vanya;
    Vanya.Enemy_get_info();

    Misha.Player_attack(Vanya);

    Vanya.Enemy_get_info();
    
    return 0;
}