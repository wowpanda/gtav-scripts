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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char cLocal_30[16] = "";
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	char cLocal_34[16] = "";
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	char cLocal_38[16] = "";
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[16] = "";
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[16] = "";
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[16] = "";
	var uLocal_52 = 0;
	var uLocal_53 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	StringCopy(&cLocal_30, "CELL_212", 16);
	StringCopy(&cLocal_34, "CELL_213", 16);
	StringCopy(&cLocal_38, "CELL_39", 16);
	StringCopy(&cLocal_42, "CELL_MP_300", 16);
	StringCopy(&cLocal_46, "CELL_MP_301", 16);
	StringCopy(&cLocal_50, "CELL_MP_302", 16);
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_42(&uLocal_28);
	func_33();
	while (true)
	{
		WAIT(0);
		if (!NETWORK_IS_IN_SESSION())
		{
			func_31(1);
			func_30();
		}
		if (!Global_14553.f_1 == 9 && Global_14553.f_1 > 3)
		{
			func_3();
			if (Global_14553.f_1 != 8)
			{
				if (func_2())
				{
					func_30();
				}
			}
		}
		if (func_1())
		{
			func_30();
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

int func_2()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_26(&uLocal_28))
	{
		if (func_15())
		{
			if (Global_2458538)
			{
				_NETWORK_CHAT_MUTE(0);
				func_9(220270007, func_10(1, 1));
				Global_2458538 = 0;
			}
			else
			{
				_NETWORK_CHAT_MUTE(1);
				func_9(1992047087, func_10(1, 1));
				Global_2458538 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_14725)
	{
		func_6(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_5())
	{
		Global_14553.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_9(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = -42615386;
	Var0.f_1 = PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = GET_RANDOM_INT_IN_RANGE(0, 9999);
	if (!iParam1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			_0xA40CC53DF8E50837(1, &Var0, 4, iParam1);
		}
	}
}

int func_10(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					SET_BIT(&uVar0, iVar1);
				}
				else if (!func_11(iVar2, 0))
				{
					SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_11(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_12(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_12(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_13();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_13()
{
	return Global_1312745;
}

int func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(uParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	if (!func_21(PLAYER_ID(), 1) && func_16())
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19())
	{
		return 1;
	}
	return func_17(120, -1);
}

int func_17(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_18(iParam1)];
	if (STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

bool func_19()
{
	return Global_1312855;
}

bool func_20()
{
	return Global_1312857;
}

bool func_21(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_25(iParam0) != 0;
	}
	return func_22(iParam0, bParam1);
}

int func_22(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_23(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_23(int iParam0)
{
	return func_24(iParam0);
}

var func_24(int iParam0)
{
	return IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_25(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

int func_26(var uParam0)
{
	if (!IS_BIT_SET(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14531)
	{
		return 0;
	}
	if (!IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!IS_CONTROL_JUST_PRESSED(2, Global_14522))
	{
		return 0;
	}
	func_27();
	Global_14531 = 1;
	return 1;
}

void func_27()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_28();
	}
}

void func_28()
{
	if (func_29())
	{
		_MOVE_FINGER(5);
	}
}

int func_29()
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

void func_30()
{
	TERMINATE_THIS_THREAD();
}

void func_31(bool bParam0)
{
	if (bParam0)
	{
		func_32();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_32()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_33()
{
	if (!Global_14553.f_1 == 7)
	{
		Global_14553.f_1 = 7;
	}
	func_41(Global_14534, "SET_DATA_SLOT_EMPTY", TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_15())
	{
		if (Global_2458538)
		{
			func_40(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(0), TO_FLOAT(12), -1f, -1f, &cLocal_46, 0, 0, 0, 0);
		}
		else
		{
			func_40(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(0), TO_FLOAT(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
		}
	}
	else
	{
		func_40(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(0), TO_FLOAT(12), -1f, -1f, &cLocal_50, 0, 0, 0, 0);
	}
	func_41(Global_14534, "DISPLAY_VIEW", TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_37(&cLocal_38);
	if (func_15())
	{
		func_34(13, &cLocal_30, 1, "", 4, &cLocal_34, &uLocal_28);
	}
	else
	{
		func_34(1, "", 1, "", 4, &cLocal_34, &uLocal_28);
	}
}

void func_34(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6)
{
	func_35(2, iParam0, cParam1, 0, uParam6, -1);
	func_35(1, iParam2, cParam3, 1, uParam6, 17);
	func_35(3, iParam4, cParam5, 2, uParam6, -1);
}

void func_35(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_40(Global_14534, "SET_SOFT_KEYS", TO_FLOAT(iParam0), 0f, TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(uParam4, iParam3);
		func_36(iParam5, 0);
		return;
	}
	if (Global_14541)
	{
		func_40(Global_14534, "SET_SOFT_KEYS", TO_FLOAT(iParam0), 1f, TO_FLOAT(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		SET_BIT(uParam4, iParam3);
		func_36(iParam5, 1);
		return;
	}
	func_40(Global_14534, "SET_SOFT_KEYS", TO_FLOAT(iParam0), 1f, TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	SET_BIT(uParam4, iParam3);
	func_36(iParam5, 1);
}

void func_36(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		SET_BIT(&Global_2423, iParam0);
		return;
	}
	CLEAR_BIT(&Global_2423, iParam0);
}

void func_37(char[4] cParam0)
{
	func_38(Global_14534, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_38(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_39(uParam2);
	if (!IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		func_39(iParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		func_39(iParam4);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		func_39(iParam5);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		func_39(iParam6);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_39(var uParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_40(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(uParam2));
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
	if (!IS_STRING_NULL_OR_EMPTY(cParam7))
	{
		func_39(cParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_39(iParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_39(iParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_39(iParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_39(iParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_41(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(uParam2));
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

void func_42(var uParam0)
{
	*uParam0 = 0;
}

