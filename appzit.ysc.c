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
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	char cLocal_27[32] = "";
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
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
	iLocal_17 = 4294967295;
	iLocal_26 = 4294967197;
	StringCopy(&cLocal_27, "TRACKID", 32);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::REQUEST_ADDITIONAL_TEXT(&cLocal_27, 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}
	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_33)
		{
			if (iLocal_35 < 101)
			{
				if (SYSTEM::TIMERA() > 30)
				{
					iLocal_35++;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(23);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					func_10("CELL_4005");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iLocal_35);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					func_9(Global_389E, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(23);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				func_9(Global_389E, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864);
				iLocal_34 = 1;
				iLocal_33 = 0;
			}
		}
		if (Global_38B1.f_1 != 9)
		{
			switch (Global_38B1.f_1)
			{
				case 7:
					func_8();
					if (iLocal_32 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_3891, 0))
					{
						func_4();
						iLocal_33 = 0;
						iLocal_34 = 0;
						Global_389B = 1;
						func_14();
						if (Global_38B1.f_1 > 3)
						{
							Global_38B1.f_1 = 7;
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
			Global_38B3 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x1C6
{
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 3) || Global_38B1.f_1 == 0) || Global_3879 == 1)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x209
{
	iLocal_33 = 0;
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_3()//Position - 0x218
{
	if (Global_BAD == 1 || Global_38B1.f_1 < 7)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x241
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x262
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && NETWORK::_0x5C497525F803486B(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
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

void func_6()//Position - 0x2D4
{
	if (SYSTEM::TIMERA() > 2200)
	{
		if (Global_38A5)
		{
			func_7(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_32 = 1;
	}
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x324
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_10(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_10(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_10(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_10(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_10(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_8()//Position - 0x3D7
{
	if (Global_389B == 0)
	{
		if (func_5(2, Global_3892, 0))
		{
			if ((iLocal_32 && iLocal_34 == 0) && iLocal_33 == 0)
			{
				iLocal_35 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(23);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
				func_10("CELL_4005");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iLocal_35);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				func_9(Global_389E, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864);
				if (Global_38A5)
				{
					func_7(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
				iLocal_33 = 1;
				SYSTEM::SETTIMERA(0);
			}
		}
	}
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x4ED
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_10(char* sParam0)//Position - 0x550
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_11()//Position - 0x562
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)//Position - 0x5AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)//Position - 0x638
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_CAD3[iParam0 /*7*/].f_1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_CAD3[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()//Position - 0x695
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(23);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_10));
	func_10("CELL_4002");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Local_20.f_18);
	func_10("CELL_4003");
	func_10(&(Local_20.f_19));
	func_10("CELL_4004");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_9(Global_389E, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864);
	if (Global_38A5)
	{
		if (iLocal_32)
		{
			func_7(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_32)
		{
			func_7(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
}

void func_15()//Position - 0x7E5
{
	iLocal_26 = AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_26, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_10), "", 32);
	StringIntConCat(&(Local_20.f_10), iLocal_26, 32);
	StringConCat(&(Local_20.f_10), "A", 32);
	StringCopy(&(Local_20.f_19), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 24);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(&(Local_20.f_10)))
	{
		StringCopy(&(Local_20.f_10), "CELL_195", 32);
		StringCopy(&(Local_20.f_19), "CELL_195", 24);
	}
}

