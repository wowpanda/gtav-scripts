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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		SYSTEM::SETTIMERA(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_38B1.f_1 != 9)
		{
			switch (Global_38B1.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_3891, 0))
					{
						func_4();
						Global_389B = 1;
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

int func_1()//Position - 0xE5
{
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 3) || Global_38B1.f_1 == 0) || Global_3879 == 1)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x128
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_3()//Position - 0x134
{
	if (Global_BAD == 1 || Global_38B1.f_1 < 7)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x15D
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x17D
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

void func_6()//Position - 0x1EF
{
	func_7();
}

void func_7()//Position - 0x1FB
{
	func_9(Global_389E, "SET_DATA_SLOT_EMPTY", 24f, 3212836864, 3212836864, 3212836864, 3212836864);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(24);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 23))
	{
		GRAPHICS::SET_SEETHROUGH(false);
		func_8("CELL_EXTBYOU");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212B);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412203));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212C);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412203.f_1));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212D);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412203.f_2));
		func_8("CELL_BODYG");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212E);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412206));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212F);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412206.f_1));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_412130);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412206.f_2));
	}
	else
	{
		GRAPHICS::SET_SEETHROUGH(false);
		func_8("CELL_EXTBYOU");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212E);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412206));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212F);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412206.f_1));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_412130);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412206.f_2));
		func_8("CELL_EXTBTARG");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212B);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412203));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212C);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412203.f_1));
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_41212D);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::FLOOR(Global_412203.f_2));
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_9(Global_389E, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864);
}

void func_8(char* sParam0)//Position - 0x399
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3AB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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

void func_10()//Position - 0x40E
{
	func_7();
}

void func_11()//Position - 0x41A
{
	if (Global_38A5)
	{
		func_12(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x4AC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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
		func_8(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_8(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_8(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_8(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_8(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

