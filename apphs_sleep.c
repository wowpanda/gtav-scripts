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
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
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
	fLocal_40 = 0.82f;
	fLocal_41 = 0.42f;
	fLocal_42 = 0f;
	fLocal_43 = 0f;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_28();
	iLocal_39 = 1;
	func_27();
	func_26();
	while (true)
	{
		WAIT(0);
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					func_21();
					if (iLocal_39)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_14521, 0))
					{
						func_10();
						Global_14531 = 1;
						func_9(Global_14534, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_14553.f_1 > 3)
						{
							Global_14553.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
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
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (Global_3228[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	CLEAR_BIT(&Global_2423, 25);
	SET_BIT(&Global_2424, 11);
}

int func_4(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_36425);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_28();
	Global_3228[Global_14553 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
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
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
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

void func_12()
{
	if (Global_14531 == 0)
	{
		if (func_11(2, Global_14522, 0))
		{
			func_15();
			Global_14531 = 1;
			func_28();
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
			uLocal_36 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_36))
			{
				WAIT(0);
			}
			Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_259 = iLocal_18[GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_36)];
			func_13(Global_14534, "SET_HEADER", &(Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_7[Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_14534, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_14534, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_14(sParam2);
	if (!IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		func_14(iParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		func_14(iParam4);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		func_14(iParam5);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		func_14(iParam6);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_14(var uParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		_MOVE_FINGER(5);
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	Global_14531 = 1;
	iLocal_38 = 0;
	iLocal_39 = 0;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	func_9(Global_14534, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_34 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_84[iVar18] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_124[iVar17] == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_84[iVar17] < Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(iVar16), TO_FLOAT(Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_104[iVar18]), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_7[iVar18 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_124[iVar16] == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_14534, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14534, "SET_HEADER", &(Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_7[Global_3228[Global_14553 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14541)
	{
		func_20(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_2423, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_14(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_14(iParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_14(iParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_14(iParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_14(iParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_21()
{
	if (iLocal_44)
	{
		if (TIMERA() > 50)
		{
			iLocal_44 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
		}
	}
	if (iLocal_44 == 0)
	{
		if (func_11(2, Global_14529, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
			iLocal_44 = 1;
			SETTIMERA(0);
		}
		if (func_11(2, Global_14530, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
			iLocal_44 = 1;
			SETTIMERA(0);
		}
	}
}

void func_22()
{
	func_9(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_23();
}

void func_23()
{
	if (func_17())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(2);
		}
		else
		{
			_MOVE_FINGER(1);
		}
	}
}

void func_24()
{
	func_9(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_25();
}

void func_25()
{
	if (func_17())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(1);
		}
		else
		{
			_MOVE_FINGER(2);
		}
	}
}

void func_26()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	iLocal_34 = 0;
	iVar16 = 0;
	func_28();
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3228[Global_14553 /*2811*/][iVar18 /*281*/] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3228[Global_14553 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_3228[Global_14553 /*2811*/][iVar17 /*281*/] < Global_3228[Global_14553 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(2), TO_FLOAT(iVar16), -1f, -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3228[Global_14553 /*2811*/][iVar16 /*281*/].f_280 == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_14534, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14534, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14541)
	{
		func_20(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_2423, 17);
}

void func_27()
{
	if (Global_36425 != 15)
	{
		func_28();
		Global_3228[Global_14553 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_34(14))
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_29();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_29()
{
	func_30();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_33(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_34(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_31(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_36425 == iParam0;
}

