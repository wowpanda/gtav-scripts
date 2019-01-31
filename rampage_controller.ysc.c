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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
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
	iLocal_17 = 4294967295;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 77;
	iLocal_29 = 194;
	iLocal_30 = 52;
	iLocal_28 = 77;
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("rampage_controller")) > 1)
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_36();
	}
	if (!func_35(108))
	{
		func_36();
	}
	func_34(23);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_26((iLocal_29 + iVar0), 0, 0);
		MISC::SET_BIT(&(Global_19E56.f_4872[(iLocal_30 + iVar0) /*6*/]), 3);
		iVar0++;
	}
	func_18(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_17(40))
		{
			switch (func_15("RAMP_NEW_ALL"))
			{
				case 2:
					func_12("RAMP_NEW_ALL", 1, 0, 2000, 10000, 4, 0, 0, 0);
					break;
				
				case 1:
					func_11(40);
					break;
				}
		}
		if (func_1())
		{
			func_18(0);
			while (func_1())
			{
				SYSTEM::WAIT(0);
			}
			while (MISC::IS_AUTO_SAVE_IN_PROGRESS())
			{
				SYSTEM::WAIT(0);
			}
			func_18(1);
		}
	}
}

bool func_1()//Position - 0x13C
{
	return (((func_8(9) || Global_6375) || func_2() != 2) || Global_19AC5[56 /*10*/].f_3);
}

int func_2()//Position - 0x16F
{
	func_3();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_3()//Position - 0x188
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_7(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_6(AUDIO::_0x0626A247D2405330());
			if (func_5(iVar0) && (!func_4(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_5(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_4(int iParam0)//Position - 0x285
{
	return Global_8D15 == iParam0;
}

bool func_5(int iParam0)//Position - 0x293
{
	return iParam0 < 3;
}

int func_6(int iParam0)//Position - 0x29F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_7(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_7(int iParam0)//Position - 0x2DC
{
	if (func_5(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x306
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_9(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)//Position - 0x328
{
	return func_10(iParam0, Global_8D15);
}

int func_10(int iParam0, int iParam1)//Position - 0x339
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

void func_11(int iParam0)//Position - 0x51A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_19E56.f_4F9E.f_96[iVar1]), iVar0);
	}
}

void func_12(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x55C
{
	func_13(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_13(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x57D
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
		func_14();
	}
}

void func_14()//Position - 0x750
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

int func_15(char* sParam0)//Position - 0x870
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_19909))
	{
		return 1;
	}
	if (func_16(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_16(char* sParam0)//Position - 0x897
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_19E56.f_4F9E[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x8D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E.f_96[iVar1], iVar0);
	}
	return 0;
}

void func_18(bool bParam0)//Position - 0x915
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = (iLocal_28 + iVar0);
		func_25(iVar1, bParam0, 0);
		func_23(iVar1, 1, 2, 0);
		func_22(iVar1, 1);
		func_21(iVar1, 44);
		if (((Global_19E56.f_928[iVar0 /*2*/] >= 1 || func_35(108) == 1) || func_20((iLocal_29 + iVar0), 0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[(iLocal_30 + iVar0) /*6*/], 3))
		{
			func_19(iVar1, 1);
		}
		iVar0++;
	}
}

void func_19(int iParam0, bool bParam1)//Position - 0x9A5
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 20))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 20);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 20);
	}
	if (Global_64E7 == 1)
	{
		Global_64E8 = 1;
	}
	Global_64E7 = 1;
	MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 20);
}

int func_20(int iParam0, int iParam1)//Position - 0xA2E
{
	if (Global_19E56.f_27B6[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)//Position - 0xA55
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	MISC::SET_BITS_IN_RANGE(&(Global_64EA[iVar0 /*23*/].f_B), 21, 26, iParam1);
	if (Global_64E7 == 1)
	{
		Global_64E8 = 1;
	}
	Global_64E7 = 1;
	MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
}

void func_22(int iParam0, bool bParam1)//Position - 0xAB3
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 7))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 7);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 7);
	}
	if (Global_64E7 == 1)
	{
		Global_64E8 = 1;
	}
	Global_64E7 = 1;
	MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
}

void func_23(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xB39
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1)
	{
		if (!bParam3)
		{
			Global_64EA[iVar0 /*23*/].f_11 = iParam2;
			if (bParam1 != INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 8))
			{
				MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
			}
			MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 8);
		}
		else
		{
			Global_64EA[iVar0 /*23*/].f_12 = iParam2;
			if (bParam1 != INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 10))
			{
				MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
			}
			MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 10);
		}
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
	}
	else
	{
		func_24(iParam0);
	}
}

void func_24(int iParam0)//Position - 0xC07
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 8) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 10))
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 8);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 10);
	MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
}

void func_25(int iParam0, bool bParam1, bool bParam2)//Position - 0xC98
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
		if (Global_64E7 == 1)
		{
			Global_64E8 = 1;
		}
		Global_64E7 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 15);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			HUD::REMOVE_BLIP(&(Global_64EA[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

void func_26(int iParam0, int iParam1, int iParam2)//Position - 0xDA1
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_32((891 + iParam0), 1, 4294967295, 1);
	}
	bVar0 = true;
	if (Global_19E56.f_27B6[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 11 || Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19E56.f_27B6[iParam0 /*12*/].f_5 = 1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_A = iParam1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_27();
	}
}

void func_27()//Position - 0xE89
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_19D4E = 0;
	Global_19D4F = 0;
	Global_19D50 = 0;
	Global_19D51 = 0;
	Global_19D52 = 0;
	Global_19D53 = 0;
	Global_19D54 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19E56.f_27B6.f_F0D;
	Global_19E56.f_27B6.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19E56.f_27B6[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19E56.f_27B6[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_19D4E++;
					fVar1 = (fVar1 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_19D4F++;
					fVar2 = (fVar2 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_19D50++;
					fVar3 = (fVar3 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_19D51++;
					fVar4 = (fVar4 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19D52++;
					fVar5 = (fVar5 + (Global_19E56.f_27B6[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19D53++;
					fVar6 = (fVar6 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19D54++;
					fVar7 = (fVar7 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_19D3D > 0)
	{
		if (Global_19D4E == Global_19D3D)
		{
			fVar1 = 55f;
		}
	}
	if (Global_19D3E > 0)
	{
		if (Global_19D4F == Global_19D3E)
		{
			fVar2 = 10f;
		}
	}
	if (Global_19D3F > 0)
	{
		if (Global_19D50 == Global_19D3F)
		{
			fVar3 = 0f;
		}
	}
	if (Global_19D40 > 0)
	{
		if (Global_19D51 == Global_19D40)
		{
			fVar4 = 10f;
		}
	}
	if (Global_19D41 > 0)
	{
		if (((Global_19D52 == Global_19D41 || (Global_19D41 * 10 / Global_19D52) < 41) || Global_19D52 > Global_19D44) || Global_19D52 == Global_19D44)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_27B6.f_F10, 14))
			{
				if (Global_19D52 == Global_19D41)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_19D41, 0);
					MISC::SET_BIT(&(Global_19E56.f_27B6.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_19D42 > 0)
	{
		if (Global_19D53 == Global_19D42)
		{
			fVar6 = 15f;
		}
	}
	if (Global_19D43 > 0)
	{
		if (Global_19D54 == Global_19D43)
		{
			fVar7 = 5f;
		}
	}
	Global_19E56.f_27B6.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19D52 > Global_19D44 || Global_19D52 == Global_19D44)
	{
		iVar9 = Global_19D44;
	}
	else
	{
		iVar9 = Global_19D52;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_19D4E, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_19D3D, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_19D4F, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_19D3E, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_19D50, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_19D3F, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_19D51, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_19D40, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_19D44, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_19D54 + Global_19D53), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_19D43 + Global_19D42), 1);
	Global_19D55 = (Global_19D4E * 100 / Global_19D3D);
	Global_19D57 = ((Global_19D50 + Global_19D4F) * 100 / (Global_19D3F + Global_19D3E));
	Global_19D56 = ((Global_19D51 + iVar9) * 100 / (Global_19D40 + Global_19D44));
	Global_19D58 = ((Global_19D53 + Global_19D54) * 100 / (Global_19D42 + Global_19D43));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_19E56.f_27B6.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_19D55, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_19D56, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_19D57, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D))
	{
		func_31(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_30() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_28();
				}
			}
		}
	}
}

int func_28()//Position - 0x134A
{
	if (func_29(0))
	{
		return 0;
	}
	if (Global_16C57.f_8)
	{
		if (Global_16C57.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16C57.f_A > 1)
	{
		return 0;
	}
	Global_16C57.f_A++;
	return 1;
}

bool func_29(bool bParam0)//Position - 0x1395
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_30()//Position - 0x13C0
{
	return Global_6373;
}

int func_31(int iParam0, int iParam1)//Position - 0x13CB
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

int func_32(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x141C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_33();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_33()//Position - 0x1978
{
	return Global_1407E0;
}

int func_34(int iParam0)//Position - 0x1984
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_19E56.f_2361.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

int func_35(int iParam0)//Position - 0x19DE
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_36()//Position - 0x1A0B
{
	func_18(0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

