#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = 4294967295;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_19E56.f_4F9E.f_91 > 0 || Global_19906)
		{
			if (!Global_19906)
			{
				if ((Global_8D15 != 6 && Global_8D15 != 15) && !Global_15CF6)
				{
					func_22();
				}
				if (!Global_19905)
				{
					if (Global_19E56.f_4F9E.f_91 > 0)
					{
						if (func_19(&(Global_19E56.f_4F9E[iLocal_21 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iLocal_21 /*16*/].f_B, func_12()))
								{
									if (Global_19E56.f_4F9E[iLocal_21 /*16*/].f_C == Global_19E56.f_4F9E.f_92[func_12()])
									{
										if (MISC::GET_GAME_TIMER() > Global_19908)
										{
											if (MISC::GET_GAME_TIMER() > Global_19E56.f_4F9E[iLocal_21 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iLocal_21 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_11(&(Global_19E56.f_4F9E[iLocal_21 /*16*/]));
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_10(&(Global_19E56.f_4F9E[iLocal_21 /*16*/]), &(Global_19E56.f_4F9E[iLocal_21 /*16*/].f_4));
												}
												if (Global_19E56.f_4F9E[iLocal_21 /*16*/].f_D != 0)
												{
													func_9(Global_19E56.f_4F9E[iLocal_21 /*16*/].f_D, 0);
												}
												Local_20 = { Global_19E56.f_4F9E[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_19E56.f_4F9E[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_8;
												Local_20.f_A = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_A;
												Local_20.f_9 = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_9;
												Local_20.f_B = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_B;
												Local_20.f_C = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_C;
												Local_20.f_D = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_D;
												Local_20.f_E = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_E;
												Local_20.f_F = Global_19E56.f_4F9E[iLocal_21 /*16*/].f_F;
												Local_20.f_10 = 0;
												Global_19909 = { Global_19E56.f_4F9E[iLocal_21 /*16*/] };
												Global_19907 = MISC::GET_GAME_TIMER();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_19E56.f_4F9E.f_91 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_19E56.f_4F9E.f_91 - 1));
												Global_19E56.f_4F9E.f_91 = (Global_19E56.f_4F9E.f_91 - 1);
												func_6();
												Global_19906 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
				}
				if ((MISC::GET_GAME_TIMER() - Global_19907) > 4000 || Local_20.f_10)
				{
					if (Local_20.f_E != 0)
					{
						func_9(Local_20.f_E, 0);
					}
					Global_19908 = MISC::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Local_20.f_A != 4294967295)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = 4294967295;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_C, 1000, iVar1, Local_20.f_9, Local_20.f_B, Local_20.f_D, Local_20.f_E, Local_20.f_F);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_A = 4294967295;
				Local_20.f_B = 0;
				Local_20.f_C = 0;
				Local_20.f_D = 0;
				Local_20.f_E = 0;
				Local_20.f_F = 0;
				Local_20.f_10 = 0;
				Global_19907 = 0;
				Global_19906 = 0;
			}
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iLocal_21 /*16*/]), &Local_20) && !MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iLocal_21 /*16*/]), ""))
			{
				if (Global_19E56.f_4F9E[iLocal_21 /*16*/].f_A != 4294967295)
				{
					if (MISC::GET_GAME_TIMER() > Global_19E56.f_4F9E[iLocal_21 /*16*/].f_A)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_19E56.f_4F9E.f_91 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_19E56.f_4F9E.f_91 - 1));
						Global_19E56.f_4F9E.f_91 = (Global_19E56.f_4F9E.f_91 - 1);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_19E56.f_4F9E.f_91)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_8D15 != 6 && Global_8D15 != 15) && !Global_15CF6)
		{
			func_22();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x475
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19E56.f_4F9E.f_91 < 9)
	{
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_4), sParam1, 16);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_9 = iParam5;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_B = iParam6;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_C = uParam2;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_D = iParam7;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_E = iParam8;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = 4294967295;
		}
		Global_19E56.f_4F9E.f_91++;
		func_6();
	}
}

int func_2(char* sParam0, int iParam1)//Position - 0x647
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_3(char* sParam0)//Position - 0x660
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_4()//Position - 0x673
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != 4294967295 && (MISC::GET_GAME_TIMER() - Global_19907) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_19905)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_10 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_10 = 1;
		return 0;
	}
	return 1;
}

int func_5()//Position - 0x702
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x71C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19E56.f_4F9E.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[0])
			{
				Global_19E56.f_4F9E.f_92[0] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[1])
			{
				Global_19E56.f_4F9E.f_92[1] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[2])
			{
				Global_19E56.f_4F9E.f_92[2] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)//Position - 0x83C
{
	StringCopy(&(Global_19E56.f_4F9E[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_19E56.f_4F9E[iParam0 /*16*/].f_4), "", 16);
	Global_19E56.f_4F9E[iParam0 /*16*/].f_8 = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_9 = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_B = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_A = 4294967295;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_C = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_D = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_E = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_F = 0;
}

void func_8(int iParam0, int iParam1)//Position - 0x8D4
{
	Global_19E56.f_4F9E[iParam0 /*16*/] = { Global_19E56.f_4F9E[iParam1 /*16*/] };
	Global_19E56.f_4F9E[iParam0 /*16*/].f_4 = { Global_19E56.f_4F9E[iParam1 /*16*/].f_4 };
	Global_19E56.f_4F9E[iParam0 /*16*/].f_8 = Global_19E56.f_4F9E[iParam1 /*16*/].f_8;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_A = Global_19E56.f_4F9E[iParam1 /*16*/].f_A;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_9 = Global_19E56.f_4F9E[iParam1 /*16*/].f_9;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_B = Global_19E56.f_4F9E[iParam1 /*16*/].f_B;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_C = Global_19E56.f_4F9E[iParam1 /*16*/].f_C;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_D = Global_19E56.f_4F9E[iParam1 /*16*/].f_D;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_E = Global_19E56.f_4F9E[iParam1 /*16*/].f_E;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_F = Global_19E56.f_4F9E[iParam1 /*16*/].f_F;
}

void func_9(int iParam0, int iParam1)//Position - 0x9E4
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_19E56.f_2189[iParam0] = 1;
	Global_19E56.f_2189.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_10(char* sParam0, int iParam1)//Position - 0xA21
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

void func_11(char* sParam0)//Position - 0xA3D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_12()//Position - 0xA53
{
	func_13();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_13()//Position - 0xA6C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_16(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_15(AUDIO::_0x0626A247D2405330());
			if (func_17(iVar0) && (!func_14(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_17(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

bool func_14(int iParam0)//Position - 0xB69
{
	return Global_8D15 == iParam0;
}

int func_15(int iParam0)//Position - 0xB77
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0xBB4
{
	if (func_17(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)//Position - 0xBDE
{
	return iParam0 < 3;
}

int func_18()//Position - 0xBEA
{
	func_13();
	return Global_19E56.f_933.f_21B.f_10CD;
}

int func_19(var uParam0)//Position - 0xC03
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_C < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_11623)
		{
			return 0;
		}
		if (Global_16087)
		{
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_F, 1))
		{
			if (Global_1608F)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()//Position - 0xC90
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xCBA
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

void func_22()//Position - 0xCD6
{
	if (Global_19906)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
	Global_19907 = 0;
	Global_19906 = 0;
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

