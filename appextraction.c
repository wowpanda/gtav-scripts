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
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()
{
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
	iLocal_17 = -1;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		SETTIMERA(0);
	}
	while (true)
	{
		WAIT(0);
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && TIMERA() > 1500)
					{
						func_6();
						SETTIMERA(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14521, 0))
					{
						func_4();
						Global_14531 = 1;
						if (Global_14553.f_1 > 3)
						{
							Global_14553.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14555 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1)))
	{
		if (IS_PC_VERSION())
		{
			if (UPDATE_ONSCREEN_KEYBOARD() == 0 || (_NETWORK_IS_TEXT_CHAT_ACTIVE() && _IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (IS_PAUSE_MENU_ACTIVE() || IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_14534, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (IS_BIT_SET(Global_4269308, 23))
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		func_8("CELL_EXTBYOU");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269309);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269589));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269310);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269589.f_1));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269311);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269589.f_2));
		func_8("CELL_BODYG");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269312);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269592));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269313);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269592.f_1));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269314);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269592.f_2));
	}
	else
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		func_8("CELL_EXTBYOU");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269312);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269592));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269313);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269592.f_1));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269314);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269592.f_2));
		func_8("CELL_EXTBTARG");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269309);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269589));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269310);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269589.f_1));
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269311);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(Global_4269589.f_2));
	}
	END_SCALEFORM_MOVIE_METHOD();
	func_9(Global_14534, "DISPLAY_VIEW", 24f, TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam2));
	if (fParam3 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam6));
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14541)
	{
		func_12(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_2423, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam2));
	if (fParam3 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam6));
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_8(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_8(iParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_8(iParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_8(iParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_8(iParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

