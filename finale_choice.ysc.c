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
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	iLocal_28 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_39();
	}
	func_38(20);
	func_37();
	func_36(1);
	func_36(0);
	func_36(2);
	func_36(13);
	func_36(12);
	Global_954 = 1;
	func_35();
	if (!func_34(2679881212))
	{
		func_33(2679881212, 2, 2, 2, 1, 4294967295, 5);
	}
	if (!func_34(2324041861))
	{
		func_33(2324041861, 2, 0, 0, 1, 4294967295, 5);
	}
	if (!func_34(2477485519))
	{
		func_33(2477485519, 2, 12, 3, 1, 4294967295, 5);
	}
	bVar0 = false;
	while (func_32(23) && !func_31(134))
	{
		if (func_27() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if ((!PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330()) && !ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330())) && !FIRE::IS_ENTITY_ON_FIRE(AUDIO::_0x0626A247D2405330()))
					{
						if (!bVar0)
						{
							if (!((func_26() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_25()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 384);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(AUDIO::_0x0626A247D2405330(), 0f);
								PAD::ENABLE_CONTROL_ACTION(0, 173, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 172, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 174, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 175, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 176, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 177, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 178, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 179, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
							}
							switch (func_12())
							{
								case 2679881212:
									if (!func_34(2305659232))
									{
										func_8(2305659232, 0, 1, 0, 1, 6000, 6000, 4294967295, 0, 4294967295, 68);
									}
									break;
								
								case 2305659232:
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 2, 1);
									break;
								
								case 2324041861:
									if (!func_34(3234036991))
									{
										func_8(3234036991, 0, 1, 2, 2, 6000, 6000, 4294967295, 0, 4294967295, 68);
									}
									break;
								
								case 3234036991:
									func_7(12, 1);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 1, 1);
									break;
								
								case 2477485519:
									func_7(12, 2);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_28)
									{
										if (func_4())
										{
											iLocal_28 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0);
	}
	func_3(20);
	Global_16C57 = 0;
	func_1();
	func_39();
}

int func_1()//Position - 0x2F3
{
	if (func_2(0))
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

bool func_2(bool bParam0)//Position - 0x33E
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_3(int iParam0)//Position - 0x369
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
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2361.f_63.f_DB[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x3C3
{
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x3EC
{
	if (iParam0 == 1)
	{
		if (Global_38B1.f_1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0, int iParam1)//Position - 0x446
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_19E56.f_2361.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_19E56.f_2361.f_63.f_3A[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)//Position - 0x48B
{
	if (iParam0 == 13 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_19E56.f_2361.f_63.f_CD[iParam0] == iParam1)
	{
		return;
	}
	Global_19E56.f_2361.f_63.f_CD[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4D0
{
	struct<15> Var0;
	int iVar1;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_19E56.f_1DEC.f_88 < 9)
	{
		Var0 = iParam0;
		if (Global_19E56.f_1DEC.f_38F == Var0)
		{
			Global_19E56.f_1DEC.f_38F = 4294967295;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = 4294967295;
		Var0.f_B = 4294967295;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_19E56.f_1DEC[Global_19E56.f_1DEC.f_88 /*15*/] = { Var0 };
		Global_19E56.f_1DEC.f_88++;
		func_9(iParam2);
		return 1;
	}
	return 0;
}

void func_9(int iParam0)//Position - 0x621
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_88)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1DEC[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_19E56.f_1DEC[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_19E56.f_1DEC[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_19E56.f_1DEC.f_2FC)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1DEC.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_19E56.f_1DEC.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_19E56.f_1DEC.f_397[iParam0] = iVar1;
}

bool func_10(int iParam0)//Position - 0x6E5
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x6F1
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_12()//Position - 0x75B
{
	return Global_19E56.f_1DEC.f_38F;
}

int func_13()//Position - 0x76D
{
	if (Global_38B1.f_1 > 3)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 0);
		func_21(0);
		return 0;
	}
	MISC::SET_BIT(&Global_950, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 0);
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7B2
{
	if (Global_11625)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_41212A, 14);
				MISC::SET_BIT(&Global_41212A, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_41212A, 14);
				MISC::SET_BIT(&Global_41212A, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_41212A, 14);
				MISC::SET_BIT(&Global_41212A, 27);
			}
		}
		if (Global_956[iParam0 /*15*/].f_9 == 0)
		{
			func_20();
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[iParam0 /*15*/].f_9) > 0)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 14);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 16);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 15);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_38B1.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
		{
			return 0;
		}
	}
	if (Global_388F == 1)
	{
		return 0;
	}
	if (Global_38B1.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_38AE))
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_38B1.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_38AE = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_389F)
	{
		SYSTEM::WAIT(0);
	}
	func_20();
	func_15();
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[iParam0 /*15*/].f_9) == 0)
	{
		Global_BAD = 0;
		Global_38B1.f_1 = 7;
		func_18(&(Global_956[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[iParam0 /*15*/].f_9) == 0)
			{
				Global_38AF = SYSTEM::START_NEW_SCRIPT(&(Global_956[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[iParam0 /*15*/].f_9) == 0)
		{
			Global_38AF = SYSTEM::START_NEW_SCRIPT(&(Global_956[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_956[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()//Position - 0x9C3
{
	if (Global_11625 == 0)
	{
		Global_956[14 /*15*/].f_4 = 4294967197;
		Global_956[4 /*15*/].f_4 = 4294967197;
		if (Global_25824A)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA47
{
	StringCopy(&(Global_956[iParam0 /*15*/]), sParam1, 16);
	Global_956[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_956[iParam0 /*15*/].f_5), sParam3, 16);
	Global_956[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_956[iParam0 /*15*/].f_A = iParam4;
	Global_956[iParam0 /*15*/].f_B = iParam5;
	Global_956[iParam0 /*15*/].f_C = iParam6;
	Global_956[iParam0 /*15*/].f_D = iParam7;
	Global_956[iParam0 /*15*/].f_E = iParam8;
	if (Global_956[iParam0 /*15*/].f_C == 0)
	{
		Global_956[iParam0 /*15*/].f_C = 0;
	}
	if (Global_956[iParam0 /*15*/].f_D == 0)
	{
		Global_956[iParam0 /*15*/].f_D = 0;
	}
	if (Global_956[iParam0 /*15*/].f_E == 0)
	{
		Global_956[iParam0 /*15*/].f_E = 0;
	}
}

bool func_17(int iParam0)//Position - 0xAFD
{
	return Global_8D15 == iParam0;
}

void func_18(char* sParam0)//Position - 0xB0B
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()//Position - 0xB2B
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/])
			{
				Global_38B1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/])
			{
				Global_38B1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
			{
				Global_38B1 = 2;
			}
			else
			{
				Global_38B1 = 0;
			}
		}
	}
	else
	{
		Global_38B1 = func_27();
		if (Global_38B1 == 145)
		{
			Global_38B1 = 3;
		}
		if (Global_11625)
		{
			Global_38B1 = 3;
		}
		if (Global_38B1 > 3)
		{
			Global_38B1 = 3;
		}
	}
}

void func_20()//Position - 0xBCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_956[iVar0 /*15*/].f_4 = 4294967197;
		iVar0++;
	}
	if (Global_11625 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 157)
		{
			if (Global_19E56.f_6D76[iVar2 /*29*/].f_13[Global_38B1] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_8D15 == 15 && func_2(0) == 0) && Global_954 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_395C = 0;
			Global_955 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_395C = 1;
			Global_955 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_19E56.f_36C7.f_59 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_19E56.f_36C7.f_58 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", 4294967197, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", 4294967197, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 4294967197, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 4294967197, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", 4294967197, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", 4294967197, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", 4294967197, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", 4294967197, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", 4294967197, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 1)
		{
			if (Global_180416)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 26) == 1)
			{
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 0 && Global_180416 == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20) == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 22) == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 26) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_21(int iParam0)//Position - 0x10E9
{
	if (func_24())
	{
		return;
	}
	if (Global_3959)
	{
		func_23(0, 0);
	}
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		MISC::SET_BIT(&Global_950, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_3DCE = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 30);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
	}
	if (!func_22())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_22()//Position - 0x1163
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_23(bool bParam0, bool bParam1)//Position - 0x118A
{
	if (bParam0)
	{
		if (func_5(0))
		{
			Global_3959 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_3872);
			}
			Global_3869 = { Global_387B[Global_387A /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
	else if (Global_3959 == 1)
	{
		Global_3959 = 0;
		Global_3869 = { Global_3882[Global_387A /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3872);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
}

bool func_24()//Position - 0x11FE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_25()//Position - 0x1210
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_26()//Position - 0x122C
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0x1246
{
	func_28();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_28()//Position - 0x125F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_30(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_29(AUDIO::_0x0626A247D2405330());
			if (func_10(iVar0) && (!func_17(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_10(Global_19E56.f_933.f_21B.f_10CD))
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

int func_29(int iParam0)//Position - 0x135C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x1399
{
	if (func_10(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x13C3
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

int func_32(int iParam0)//Position - 0x13F0
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x141C
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam2 < 3)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam1, iParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_19E56.f_1DEC.f_28A < 30)
	{
		Var0 = iParam0;
		if (Global_19E56.f_1DEC.f_38F == Var0)
		{
			Global_19E56.f_1DEC.f_38F = 4294967295;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_E = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = 4294967295;
		Var0.f_8 = 0;
		Var0.f_9 = 4294967295;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_A = 4294967295;
		Var0.f_B = 4294967295;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 6);
		Global_19E56.f_1DEC.f_C7[Global_19E56.f_1DEC.f_28A /*15*/] = { Var0 };
		Global_19E56.f_1DEC.f_28A++;
		return 1;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x1522
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_88)
	{
		if (Global_19E56.f_1DEC[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_28A)
	{
		if (Global_19E56.f_1DEC.f_C7[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_C6)
	{
		if (Global_19E56.f_1DEC.f_89[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_2FC)
	{
		if (Global_19E56.f_1DEC.f_28B[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_362)
	{
		if (Global_19E56.f_1DEC.f_2FD[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_35()//Position - 0x161E
{
	Global_16C57 = 1;
}

void func_36(int iParam0)//Position - 0x162B
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 157) || iParam0 == 158)
	{
		return;
	}
	Global_8F3D[iParam0] = MISC::GET_GAME_TIMER();
}

void func_37()//Position - 0x166A
{
	Global_8F3C = MISC::GET_GAME_TIMER();
}

int func_38(int iParam0)//Position - 0x1679
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

void func_39()//Position - 0x16D3
{
	func_40(2679881212);
	func_40(2305659232);
	func_40(2324041861);
	func_40(3234036991);
	func_40(2477485519);
	Global_954 = 0;
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_40(int iParam0)//Position - 0x171F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_88)
	{
		if (Global_19E56.f_1DEC[iVar0 /*15*/] == iParam0)
		{
			if (Global_8F38 != iVar0)
			{
				func_47(iVar0);
				func_44(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_C6)
	{
		if (Global_19E56.f_1DEC.f_89[iVar0 /*15*/] == iParam0)
		{
			func_44(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_28A)
	{
		if (Global_19E56.f_1DEC.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_43(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_2FC)
	{
		if (Global_19E56.f_1DEC.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_42(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_362)
	{
		if (Global_19E56.f_1DEC.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_41(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_41(int iParam0)//Position - 0x1846
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_19E56.f_1DEC.f_362)
	{
		return;
	}
	if (Global_19E56.f_1DEC.f_362 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19E56.f_1DEC.f_362 - 2))
		{
			Global_19E56.f_1DEC.f_2FD[iVar0 /*10*/] = { Global_19E56.f_1DEC.f_2FD[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_19E56.f_1DEC.f_362 > 0)
	{
		Global_19E56.f_1DEC.f_2FD[(Global_19E56.f_1DEC.f_362 - 1) /*10*/] = { Var1 };
		Global_19E56.f_1DEC.f_362 = (Global_19E56.f_1DEC.f_362 - 1);
	}
}

void func_42(int iParam0)//Position - 0x18FF
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_19E56.f_1DEC.f_2FC)
	{
		return;
	}
	if (Global_19E56.f_1DEC.f_2FC > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19E56.f_1DEC.f_2FC - 2))
		{
			Global_19E56.f_1DEC.f_28B[iVar0 /*14*/] = { Global_19E56.f_1DEC.f_28B[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_19E56.f_1DEC.f_2FC > 0)
	{
		Global_19E56.f_1DEC.f_28B[(Global_19E56.f_1DEC.f_2FC - 1) /*14*/] = { Var1 };
		Global_19E56.f_1DEC.f_2FC = (Global_19E56.f_1DEC.f_2FC - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_43(int iParam0)//Position - 0x19C7
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_19E56.f_1DEC.f_28A)
	{
		if (Global_19E56.f_1DEC.f_C7[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_19E56.f_1DEC.f_28A - 2))
			{
				Global_19E56.f_1DEC.f_C7[iVar2 /*15*/] = { Global_19E56.f_1DEC.f_C7[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_19E56.f_1DEC.f_C7[(Global_19E56.f_1DEC.f_28A - 1) /*15*/] = { Var0 };
			Global_19E56.f_1DEC.f_28A = (Global_19E56.f_1DEC.f_28A - 1);
			return;
		}
		iVar1++;
	}
}

void func_44(int iParam0)//Position - 0x1A74
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_19E56.f_1DEC.f_C6)
	{
		if (Global_19E56.f_1DEC.f_89[iVar1 /*15*/] == iParam0)
		{
			func_45(Global_19E56.f_1DEC.f_89[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_19E56.f_1DEC.f_C6 - 2))
			{
				Global_19E56.f_1DEC.f_89[iVar2 /*15*/] = { Global_19E56.f_1DEC.f_89[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_19E56.f_1DEC.f_89[(Global_19E56.f_1DEC.f_C6 - 1) /*15*/] = { Var0 };
			Global_19E56.f_1DEC.f_C6 = (Global_19E56.f_1DEC.f_C6 - 1);
			return;
		}
		iVar1++;
	}
}

int func_45(int iParam0)//Position - 0x1B30
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_19E56.f_6D76[iParam0 /*29*/].f_13[Global_38B1] == 1)
		{
			Global_19E56.f_6D76[iParam0 /*29*/].f_13[Global_38B1] = 0;
			if (Global_19E56.f_6D76[iParam0 /*29*/].f_18[Global_38B1] == 0)
			{
				iVar0 = Global_38B1;
				func_46(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_46(int iParam0, int iParam1)//Position - 0x1BA1
{
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

void func_47(int iParam0)//Position - 0x1BE4
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_19E56.f_1DEC.f_88)
	{
		return;
	}
	iVar1 = Global_19E56.f_1DEC[iParam0 /*15*/].f_2;
	if (Global_19E56.f_1DEC.f_88 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19E56.f_1DEC.f_88 - 2))
		{
			Global_19E56.f_1DEC[iVar0 /*15*/] = { Global_19E56.f_1DEC[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_19E56.f_1DEC.f_88 > 0)
	{
		Global_19E56.f_1DEC[(Global_19E56.f_1DEC.f_88 - 1) /*15*/] = { Var2 };
		Global_19E56.f_1DEC.f_88 = (Global_19E56.f_1DEC.f_88 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

