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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	int iLocal_31 = 0;
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
	fLocal_27 = 9.99f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_10();
	func_7();
	SETTIMERA(0);
	SETTIMERB(0);
	while (true)
	{
		WAIT(0);
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					if (TIMERA() > 125)
					{
						func_10();
						SETTIMERA(0);
					}
					if (TIMERB() > FLOOR(fLocal_29) * 30 && TIMERB() > 150)
					{
						BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "APP_FUNCTION");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						END_SCALEFORM_MOVIE_METHOD();
						SETTIMERB(0);
					}
					if (TIMERB() > 2000)
					{
						BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "APP_FUNCTION");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						END_SCALEFORM_MOVIE_METHOD();
						SETTIMERB(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_14521, 0))
					{
						func_5();
						Global_14531 = 1;
						func_10();
						func_7();
						if (Global_14553.f_1 > 3)
						{
							Global_14553.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	CLEAR_BIT(&Global_2424, 22);
	TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, int iParam1)
{
	Global_4269561[iParam0] = iParam1;
}

int func_4()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_6(int iParam0, var uParam1, int iParam2)
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

void func_7()
{
	if (Global_14541)
	{
		func_8(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_2423, 17);
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_9(iParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_9(iParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_9(iParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_9(iParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_9(var uParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			vLocal_20 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
			fLocal_23 = GET_ENTITY_HEADING(PLAYER_PED_ID());
			func_17();
			func_16();
			func_15();
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (IS_BIT_SET(Global_2424, 30))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(fLocal_27));
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(fLocal_28));
				}
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (IS_BIT_SET(Global_2424, 22))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				if (IS_BIT_SET(Global_2424, 29))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (IS_BIT_SET(Global_2425, 1))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_30);
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14534, "DISPLAY_VIEW", 23f, TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		vLocal_20 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
		fLocal_23 = GET_ENTITY_HEADING(PLAYER_PED_ID());
		if (Global_4269583 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4269583)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (IS_BIT_SET(Global_4269308, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (IS_BIT_SET(Global_4269308, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (IS_BIT_SET(Global_4269308, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (IS_BIT_SET(Global_4269308, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(fLocal_27));
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(FLOOR(fLocal_28));
				}
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (IS_BIT_SET(Global_2424, 22))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (IS_BIT_SET(Global_2424, 29))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_30);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4269561[iVar0]);
				END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14534, "DISPLAY_VIEW", 23f, TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_25 = (Global_4269497[iParam0 /*3*/] - vLocal_20.x);
	fLocal_26 = (COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_4269497[iParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_27 = ATAN2(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_12(int iParam0)
{
	fLocal_29 = SQRT(VDIST2(Global_4269497[iParam0 /*3*/], vLocal_20));
	fLocal_30 = (Global_4269497[iParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_29;
}

float func_13(int iParam0)
{
	fLocal_28 = SQRT((((Global_4269497[iParam0 /*3*/] - vLocal_20.x) * (Global_4269497[iParam0 /*3*/] - vLocal_20.x)) + ((Global_4269497[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_4269497[iParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_28;
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_25 = (Global_16972 - vLocal_20.x);
	fLocal_26 = (COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_16972.f_1 - vLocal_20.y));
	fLocal_27 = ATAN2(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_16()
{
	fLocal_29 = SQRT(VDIST2(Global_16972, vLocal_20));
	fLocal_30 = (Global_16972.f_2 - vLocal_20.z);
	return fLocal_29;
}

float func_17()
{
	fLocal_28 = SQRT((((Global_16972 - vLocal_20.x) * (Global_16972 - vLocal_20.x)) + ((Global_16972.f_1 - vLocal_20.y) * (Global_16972.f_1 - vLocal_20.y))));
	return fLocal_28;
}

int func_18()
{
	if (Global_71590 == 1)
	{
		return 1;
	}
	return 0;
}

