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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_45(Global_14534, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14498 == 0)
	{
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else
	{
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}
	Global_3228[Global_14553 /*2811*/][2 /*281*/].f_259 = Global_106565.f_14045[Global_14553 /*20*/].f_6;
	Global_3228[Global_14553 /*2811*/][4 /*281*/].f_259 = Global_106565.f_14045[Global_14553 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_71590)
		{
			Global_3228[Global_14553 /*2811*/][1 /*281*/].f_259 = func_43(1198, -1, 0);
			Global_3228[Global_14553 /*2811*/][2 /*281*/].f_259 = func_43(2028, -1, 0);
			Global_3228[Global_14553 /*2811*/][4 /*281*/].f_259 = func_43(2027, -1, 0);
		}
		else if (ARE_STRINGS_EQUAL(&(Global_106565.f_14045[Global_14553 /*20*/].f_11), &(Global_3228[Global_14553 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3228[Global_14553 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_71590)
	{
		Global_106565.f_14045[3 /*20*/].f_10 = func_43(1197, -1, 0);
	}
	Global_3228[Global_14553 /*2811*/][3 /*281*/].f_259 = Global_106565.f_14045[Global_14553 /*20*/].f_10;
	func_42();
	if (Global_71590)
	{
		Global_3228[3 /*2811*/][0 /*281*/] = 190;
		Global_3228[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_3228[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_3228[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3228[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_3228[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_3228[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3228[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3228[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_3228[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_3228[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3228[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3228[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_3228[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3228[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3228[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3228[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2090, -1, 0) == 0)
		{
			Global_3228[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_3228[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		WAIT(0);
		if (iLocal_50)
		{
			if (TIMERB() > 3500)
			{
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					STOP_PED_RINGTONE(PLAYER_PED_ID());
				}
				iLocal_50 = 0;
			}
		}
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_56 || iLocal_57)
					{
						if (bLocal_56)
						{
							bLocal_56 = false;
							SETTIMERB(0);
							Global_106565.f_14045.f_82 = 1;
							iLocal_57 = 1;
						}
						else if (TIMERB() > 7500)
						{
							iLocal_57 = 0;
							CLEAR_HELP(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_53)
						{
							func_11();
						}
						if (func_10(2, Global_14521, 0))
						{
							if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
							{
								STOP_PED_RINGTONE(PLAYER_PED_ID());
							}
							iLocal_53 = 0;
							func_9();
							Global_14531 = 1;
							func_45(Global_14534, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_14553.f_1 > 3)
							{
								Global_14553.f_1 = 7;
							}
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
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		STOP_PED_RINGTONE(PLAYER_PED_ID());
	}
	if (bLocal_56)
	{
		CLEAR_HELP(1);
	}
	if (Global_106565.f_14045.f_83 == 0 || Global_106565.f_14045.f_82 == 0)
	{
		func_3();
	}
	SET_GAME_PAUSED(0);
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
	func_44();
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

void func_9()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
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

void func_11()
{
	int iVar0;
	
	iLocal_54 = GET_GAME_TIMER();
	iVar0 = (iLocal_54 - iLocal_55);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		SET_PAD_SHAKE(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;
	
	if (iLocal_43 == 1)
	{
		if (iLocal_52)
		{
			iLocal_54 = GET_GAME_TIMER();
			if ((iLocal_54 - iLocal_55) > 1000)
			{
				iLocal_51 = 1;
				iLocal_52 = 0;
			}
		}
		if (_IS_INPUT_DISABLED(2))
		{
			if (IS_CONTROL_JUST_PRESSED(2, 180))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
			if (IS_CONTROL_JUST_PRESSED(2, 181))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
		if ((((func_10(2, Global_14529, 0) || func_10(2, Global_14530, 0)) || iLocal_51) || iLocal_65 == 1) || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			iLocal_51 = 0;
			iLocal_52 = 0;
			SETTIMERB(0);
			iLocal_50 = 1;
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
			uLocal_41 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_41))
			{
				WAIT(0);
			}
			iLocal_47 = iLocal_18[GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_41)];
			if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
			{
				STOP_PED_RINGTONE(PLAYER_PED_ID());
				WAIT(100);
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					if (!IS_PED_RINGTONE_PLAYING(PLAYER_PED_ID()))
					{
						if (ARE_STRINGS_EQUAL(&(Global_3228[Global_14553 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							PLAY_PED_RINGTONE(&(Global_3228[Global_14553 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), PLAYER_PED_ID(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14531 == 0)
	{
		if (func_10(2, Global_14522, 0))
		{
			func_23();
			Global_14531 = 1;
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
			uLocal_41 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_41))
			{
				WAIT(0);
			}
			iLocal_46 = GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_41);
			if (iLocal_46 < 0)
			{
				iLocal_46 = 0;
			}
			Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
			if (iLocal_43 == 2)
			{
				iVar0 = Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_106565.f_14045[Global_14553 /*20*/].f_6 = Global_3228[Global_14553 /*2811*/][2 /*281*/].f_260[iVar0];
				func_45(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_71590)
				{
					Global_4269584 = Global_3228[3 /*2811*/][2 /*281*/].f_259;
					func_20(2028, Global_3228[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_45(Global_14534, "SET_THEME", TO_FLOAT(Global_4269584), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_45), TO_FLOAT(23), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_46), TO_FLOAT(48), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14534, "DISPLAY_VIEW", 22f, TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 4)
			{
				Global_106565.f_14045[Global_14553 /*20*/].f_9 = Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_71590)
				{
					Global_4269585 = Global_3228[3 /*2811*/][4 /*281*/].f_259;
					func_20(2027, Global_3228[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4269585 == 0)
					{
						Var17 = { func_17(PLAYER_ID()) };
						iVar30 = 0;
						if (_0x72D918C99BCACC54(0) == 0)
						{
						}
						if ((NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var17) && _0x72D918C99BCACC54(0)) && Global_4269588 == 0)
						{
							SETTIMERA(0);
							while (!_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var17, &uVar1) && TIMERA() < 3000)
							{
								WAIT(0);
								if (TIMERA() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_BACKGROUND_CREW_IMAGE");
								BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
								ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								END_TEXT_COMMAND_SCALEFORM_STRING();
								END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_45(Global_14534, "SET_BACKGROUND_IMAGE", TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_14534, "SET_BACKGROUND_IMAGE", TO_FLOAT(Global_4269585), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_14534, "SET_BACKGROUND_IMAGE", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_45), TO_FLOAT(23), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_46), TO_FLOAT(48), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14534, "DISPLAY_VIEW", 22f, TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 1)
			{
				Global_106565.f_14045[Global_14553 /*20*/].f_11 = { Global_3228[Global_14553 /*2811*/][1 /*281*/].f_144[Global_3228[Global_14553 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_71590)
				{
					func_20(1198, Global_3228[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_45), TO_FLOAT(18), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_46), TO_FLOAT(48), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_45(Global_14534, "DISPLAY_VIEW", 22f, TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 3)
			{
				Global_106565.f_14045[Global_14553 /*20*/].f_10 = Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_71590)
				{
					func_20(1197, Global_106565.f_14045[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_106565.f_14045[Global_14553 /*20*/].f_10 == 1)
				{
					iLocal_53 = 1;
					iLocal_55 = GET_GAME_TIMER();
				}
				else
				{
					iLocal_53 = 0;
				}
			}
			if (iLocal_43 == 0)
			{
				if (Global_71590 == 1)
				{
					Global_3228[3 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_45), TO_FLOAT(19), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
					func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iLocal_46), TO_FLOAT(48), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_45(Global_14534, "DISPLAY_VIEW", 22f, TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
					func_20(2090, Global_3228[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_3228[0 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3228[1 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3228[2 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_36425 == 15)
						{
							if (Global_106565.f_14045.f_82 == 0)
							{
								CLEAR_HELP(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
							else
							{
								func_45(Global_14534, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								SET_BIT(&Global_2423, 25);
								SET_BIT(&Global_2424, 11);
								if (Global_106565.f_14045.f_83 == 0)
								{
									CLEAR_HELP(1);
									func_15("CELL_7051", -1);
									Global_106565.f_14045.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_14534, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						CLEAR_BIT(&Global_2423, 25);
						SET_BIT(&Global_2424, 11);
					}
				}
			}
			func_13(Global_14534, "SET_HEADER", &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
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

void func_15(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_16(char* sParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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

void func_19()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

var func_22()
{
	return Global_1312745;
}

void func_23()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		_MOVE_FINGER(5);
	}
}

int func_25()
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

void func_26()
{
	if (Global_14531 == 0)
	{
		if (func_10(2, Global_14522, 0))
		{
			func_23();
			Global_14531 = 1;
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
			uLocal_41 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_41))
			{
				WAIT(0);
			}
			iLocal_44 = GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_41);
			iLocal_43 = iLocal_18[iLocal_44];
			switch (iLocal_43)
			{
				case 0:
					if (Global_71590 == 0)
					{
						if (Global_36425 == 15)
						{
							if (Global_106565.f_14045.f_82 == 0)
							{
								CLEAR_HELP(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_14553.f_1 > 3)
			{
				Global_14553.f_1 = 8;
			}
			func_27();
			iLocal_52 = 1;
			iLocal_55 = GET_GAME_TIMER();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;
	
	func_45(Global_14534, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	iVar20 = 0;
	if (Global_71590)
	{
		StringCopy(&(Global_3228[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { func_17(PLAYER_ID()) };
		if (!NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var21))
		{
			StringCopy(&(Global_3228[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_84[iVar34] < Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iVar20), TO_FLOAT(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_18[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (ARE_STRINGS_EQUAL(&(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_48 = iVar20;
			if (iLocal_48 < 0)
			{
				iLocal_48 = 0;
			}
			if ((iLocal_43 == 1 || iLocal_43 == 4) || iLocal_43 == 2)
			{
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iVar20), TO_FLOAT(48), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
			if (iLocal_43 == 0 && Global_71590 == 1)
			{
				func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(22), TO_FLOAT(iVar20), TO_FLOAT(48), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
		}
		if (Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_39++;
		}
		iVar20++;
	}
	func_45(Global_14534, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14534, "SET_HEADER", &(Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_7[Global_3228[Global_14553 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14541)
	{
		func_18(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_2423, 17);
}

void func_28()
{
	if (iLocal_62)
	{
		if (TIMERA() > 50)
		{
			iLocal_62 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
		}
	}
	if (iLocal_62 == 0)
	{
		if (func_10(2, Global_14529, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
			iLocal_62 = 1;
			SETTIMERA(0);
		}
		if (func_10(2, Global_14530, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
			iLocal_62 = 1;
			SETTIMERA(0);
		}
	}
}

void func_29()
{
	func_45(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_30();
}

void func_30()
{
	if (func_25())
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

void func_31()
{
	func_45(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_32();
}

void func_32()
{
	if (func_25())
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

void func_33()
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;
	
	iLocal_39 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_3228[Global_14553 /*2811*/][iVar23 /*281*/] = 5000;
		if (GET_PROFILE_SETTING(2) == 0)
		{
			Global_3228[Global_14553 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_3228[Global_14553 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_3228[Global_14553 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_3228[Global_14553 /*2811*/][iVar22 /*281*/] < Global_3228[Global_14553 /*2811*/][iVar23 /*281*/])
					{
						if (Global_71590)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(iVar21), TO_FLOAT(iLocal_49), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(iVar21), TO_FLOAT(iLocal_49), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(iVar21), TO_FLOAT(iLocal_49), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_41(iVar22, iVar23);
							func_18(Global_14534, "SET_DATA_SLOT", TO_FLOAT(13), TO_FLOAT(iVar21), TO_FLOAT(iLocal_49), -1f, -1f, &(Global_3228[Global_14553 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_18[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_3228[Global_14553 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_39++;
		}
		iVar21++;
	}
	func_45(Global_14534, "DISPLAY_VIEW", 13f, TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_14534, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14541)
	{
		func_18(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_2423, 17);
}

int func_34()
{
	if (Global_71590)
	{
		Global_14553 = 3;
	}
	else
	{
		Global_14553 = func_35();
	}
	if (Global_14553 > 3)
	{
		Global_14553 = 3;
	}
	return Global_106565.f_14045[Global_14553 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_40(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_37(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_38(Global_106565.f_2357.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_71590)
			{
				iLocal_49 = 19;
			}
			else if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_49 = 26;
			}
			else
			{
				iLocal_49 = 25;
			}
			break;
		
		case 3:
			if (Global_3228[Global_14553 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_49 = 20;
			}
			else
			{
				iLocal_49 = 21;
			}
			break;
		
		default:
			iLocal_49 = Global_3228[Global_14553 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()
{
	if (Global_36425 != 15)
	{
		func_44();
		Global_3228[Global_14553 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_21(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()
{
	if (func_37(14))
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
		Global_14553 = func_35();
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

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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
