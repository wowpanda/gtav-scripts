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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_61 = 1000;
	iLocal_62 = 3333;
	fLocal_63 = 0f;
	bLocal_70 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	iLocal_56 = MISC::GET_GAME_TIMER();
	iLocal_65 = 0;
	func_167(iLocal_66);
	func_166();
	func_164(&Global_412216);
	func_163(&Global_412216, 1);
	func_161(&uLocal_67);
	while (true)
	{
		if (Global_646A != iLocal_65)
		{
			if (iLocal_65 == 0 && Global_646A != 0)
			{
				if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
				{
					func_160("CHEAT_TROPHIE", 4294967295);
				}
				else
				{
					func_160("CHEAT_ACHIEVE", 4294967295);
				}
			}
			if (iLocal_65 != 0 && Global_646A == 0)
			{
			}
		}
		iLocal_65 = Global_646A;
		if (!func_159(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				func_150();
			}
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
			{
				func_148();
			}
			if (Global_637C)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					iVar0 = func_133(1);
					if (iVar0 > 0)
					{
						func_132(12, iVar0);
						STATS::STAT_SET_INT(joaat("num_gold_medals_obtained"), iVar0, 1);
					}
					if (iVar0 >= 70)
					{
						func_126(12, 1);
					}
				}
				Global_637C = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					iLocal_66++;
					if (MISC::GET_GAME_TIMER() > iLocal_56)
					{
						func_115(0);
						iLocal_56 = (MISC::GET_GAME_TIMER() + iLocal_61);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_57)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || iLocal_64 == 1)
						{
							if (func_114(53))
							{
								func_113();
							}
						}
						iLocal_57 = (MISC::GET_GAME_TIMER() + iLocal_62);
					}
				}
			}
			func_105(&Global_412216);
			func_1();
		}
		else
		{
			func_105(&Global_412216);
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x20A
{
	var uVar0;
	int iVar1;
	
	if (!func_104(&Global_412216))
	{
		return;
	}
	if (!Global_11625)
	{
		if (iLocal_72)
		{
			iLocal_72 = 0;
		}
		return;
	}
	if (!func_101())
	{
		return;
	}
	if (bLocal_70)
	{
		if (!func_99(3, 4294967295))
		{
			return;
		}
		if (!func_99(5, 4294967295))
		{
			return;
		}
	}
	if (iLocal_72)
	{
		return;
	}
	uVar0 = SOCIALCLUB::_0x225798743970412B(&iVar1);
	if (iVar1 == 4294967295 && iLocal_71 == 0)
	{
	}
	if (uVar0 && iVar1 == 0)
	{
		func_98();
		iLocal_72 = 1;
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x29A
{
	int iVar0;
	
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
	{
		if (func_95())
		{
			func_126(33, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_91(&uLocal_67) > 5f)
		{
			func_19(AUDIO::_0x0626A247D2405330());
			func_161(&uLocal_67);
		}
	}
	iVar0 = func_17(func_18(4294967295), 0);
	if (iVar0 >= 100)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
		{
			func_126(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
		{
			func_126(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
		{
			func_126(34, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		func_15(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
	{
		if (func_14(joaat("mpply_total_custom_races_won")) >= 5)
		{
			func_126(38, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
	{
		if (func_13(48, 4294967295) >= 10)
		{
			func_126(39, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
	{
		if (func_13(52, 4294967295) > 0)
		{
			func_126(40, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_8A4.f_12, 1))
		{
			func_126(41, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
	{
		if (func_12(755, 4294967295, 0) >= 30)
		{
			func_126(43, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
	{
		if (func_13(14, 4294967295) >= 20)
		{
			func_126(44, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		func_10(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
	{
		if (func_7(11, 4294967295, 4294967295))
		{
			func_126(48, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		func_3(0);
	}
}

int func_3(bool bParam0)//Position - 0x43D
{
	if (!func_101())
	{
		return 0;
	}
	if (!Global_11625)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		return 0;
	}
	if (bParam0 == 1)
	{
	}
	if (!func_4(100, 4294967295))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(102, 4294967295))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(101, 4294967295))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	func_126(49, 1);
	return 1;
}

int func_4(int iParam0, int iParam1)//Position - 0x4B8
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_5(var uParam0)//Position - 0x4E4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_6();
		if (iVar1 > 4294967295)
		{
			Global_26AF40 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26AF40 = 1;
		}
	}
	return iVar0;
}

int func_6()//Position - 0x518
{
	return Global_1407E0;
}

int func_7(int iParam0, int iParam1, int iParam2)//Position - 0x524
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_6();
	}
	iVar1 = func_9(iParam0, iParam1);
	uVar2 = func_8(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_8(int iParam0)//Position - 0x561
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_9(int iParam0, int iParam1)//Position - 0x879
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_10(bool bParam0)//Position - 0xB65
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!func_101())
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!Global_11625)
	{
		return 0;
	}
	uVar2 = func_12(756, 4294967295, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_11(uVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_126(45, 1);
		return 1;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, bool bParam2)//Position - 0xBD7
{
	bool bVar0;
	
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0, iParam1);
	if (!bParam2)
	{
		return bVar0;
	}
	switch (iParam1)
	{
		case 0:
			return bVar0;
		
		case 1:
			return bVar0;
		
		case 2:
			return bVar0;
		
		case 3:
			return bVar0;
		
		case 4:
			return bVar0;
		
		case 5:
			return bVar0;
		
		case 6:
			return bVar0;
		
		case 7:
			return bVar0;
		
		case 8:
			return bVar0;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)//Position - 0xC5F
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_13(int iParam0, int iParam1)//Position - 0xC91
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xCBD
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_15(bool bParam0)//Position - 0xCDB
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		return 0;
	}
	if (!func_101())
	{
		return 0;
	}
	if (!Global_11625)
	{
		return 0;
	}
	if (bParam0)
	{
		iVar0 = func_13(21, 4294967295);
		iVar0 = (iVar0 - func_13(58, 4294967295));
		iVar0 = (iVar0 - func_13(57, 4294967295));
	}
	if (func_16(8, 4294967295))
	{
		func_126(37, 1);
		return 1;
	}
	return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0xD45
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_272EAE[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1)//Position - 0xD71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_4646A[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4646A[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_18(int iParam0)//Position - 0xE30
{
	return Global_150A81[func_5(iParam0)];
}

void func_19(int iParam0)//Position - 0xE44
{
	int iVar0;
	struct<222> Var1;
	
	Var1 = 44;
	Var1.f_DD = 50;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		return;
	}
	func_87(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1)
	{
		if (func_20(iParam0, Var1[iVar0 /*5*/]))
		{
			func_126(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_DD)
	{
		if (func_20(iParam0, Var1.f_DD[iVar0 /*5*/]))
		{
			func_126(29, 1);
			return;
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1)//Position - 0xED3
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	
	if (iParam1 == 4233137715)
	{
		return 0;
	}
	if (iParam1 == joaat("weapon_knuckle"))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		return 0;
	}
	iVar1 = func_86(iParam1, &uVar0);
	if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != 3722617468) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != 3347935668) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar1 == 4294967295 || FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1) < 3))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	while (func_21(&Var7, iParam1, iVar6, 0))
	{
		if (Var7.f_4 == joaat("WAPClip"))
		{
			iVar3++;
		}
		if (Var7.f_4 == joaat("WAPScop"))
		{
			iVar2++;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, Var7))
		{
			if (Var7.f_4 == joaat("WAPClip"))
			{
				iVar5 = Var7.f_6;
			}
			else if (Var7.f_4 == joaat("WAPScop"))
			{
				iVar4 = Var7.f_6;
			}
		}
		else if ((((Var7.f_4 == joaat("WAPClip") || Var7.f_4 == joaat("WAPScop")) || Var7.f_4 == joaat("WAPRail")) || Var7.f_4 == joaat("gun_root")) || Var7.f_4 == 4263393586)
		{
		}
		else
		{
			return 0;
		}
		iVar6++;
	}
	if (iVar2 > iVar4)
	{
		return 0;
	}
	if (iVar3 > iVar5)
	{
		return 0;
	}
	if (WEAPON::GET_WEAPON_TINT_COUNT(iParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1160
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
	var uVar15;
	struct<4> Var16;
	
	func_85(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_pistol"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_85(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_smg"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_85(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_85(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_assaultrifle"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_85(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_85(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_85(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_carbinerifle"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_85(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_85(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_85(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_combatmg"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_heavysniper"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_85(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_85(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 2249208895, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 3509242479, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 4012669121, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 4218476627, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 2816286296, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 1675665560, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, 2640679034, joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_85(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_85(uParam0, 77277509, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_85(uParam0, 3328927042, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_85(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_85(uParam0, 3113485012, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_85(uParam0, 3362234491, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_85(uParam0, 3725708239, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_85(uParam0, 3968886988, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_85(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_85(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_85(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_85(uParam0, 1134861606, 2982890265, 1, 1);
					break;
				
				case 24:
					func_85(uParam0, 1447477866, 2982890265, 2, 0);
					break;
				
				case 25:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(uParam0, 2434475183, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(uParam0, 937772107, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(uParam0, 1401650071, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(uParam0, 628662130, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(uParam0, 3309920045, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(uParam0, 3482022833, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(uParam0, 2847614993, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(uParam0, 4234628436, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(uParam0, 2088750491, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(uParam0, 2781053842, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(uParam0, 3115408816, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 4208062921:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 1283078430, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 1574296533, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 391640422, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 1025884839, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 626875735, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 1141059345, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, 2640679034, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_85(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_85(uParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_85(uParam0, 3328927042, joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_85(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_85(uParam0, 3113485012, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_85(uParam0, 3362234491, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_85(uParam0, 3725708239, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_85(uParam0, 3968886988, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_85(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_85(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_85(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_85(uParam0, 2201368575, 2982890265, 1, 1);
					break;
				
				case 24:
					func_85(uParam0, 2335983627, 2982890265, 2, 0);
					break;
				
				case 25:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(uParam0, 1272803094, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(uParam0, 1080719624, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(uParam0, 792221348, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(uParam0, 3842785869, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(uParam0, 3548192559, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(uParam0, 2250671235, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(uParam0, 4095795318, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(uParam0, 2866892280, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(uParam0, 2559813981, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(uParam0, 1796459838, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(uParam0, 3663056191, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 3686625920:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 1227564412, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 400507625, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 4133787461, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 3274096058, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 696788003, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 1475288264, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, 2640679034, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 1060929921, joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_85(uParam0, 3328927042, joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_85(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_85(uParam0, 3113485012, joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_85(uParam0, 3362234491, joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_85(uParam0, 3725708239, joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_85(uParam0, 3968886988, joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_85(uParam0, 48731514, joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_85(uParam0, 880736428, joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_85(uParam0, 1303784126, joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_85(uParam0, 3276730932, 2982890265, 1, 1);
					break;
				
				case 21:
					func_85(uParam0, 3051509595, 2982890265, 2, 0);
					break;
				
				case 22:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_85(uParam0, 1249283253, joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_85(uParam0, 3437259709, joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_85(uParam0, 3197423398, joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_85(uParam0, 1980349969, joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_85(uParam0, 1219453777, joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_85(uParam0, 2441508106, joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_85(uParam0, 2220186280, joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_85(uParam0, 457967755, joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_85(uParam0, 235171324, joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_85(uParam0, 42685294, joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_85(uParam0, 3607349581, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 4196276776, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 752418717, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 247526935, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 4164277972, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 1005144310, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 2313935527, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 2193687427, joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_85(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_85(uParam0, 3061846192, joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_85(uParam0, 776198721, joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_85(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_85(uParam0, 2890063729, joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_85(uParam0, 1602080333, joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_85(uParam0, 1764221345, joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_85(uParam0, 2425761975, 2982890265, 1, 1);
					break;
				
				case 15:
					func_85(uParam0, 277524638, 2982890265, 2, 0);
					break;
				
				case 16:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_85(uParam0, 4164123906, joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_85(uParam0, 3317620069, joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_85(uParam0, 3916506229, joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_85(uParam0, 329939175, joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_85(uParam0, 643374672, joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_85(uParam0, 807875052, joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_85(uParam0, 2893163128, joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_85(uParam0, 3198471901, joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_85(uParam0, 3447155842, joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_85(uParam0, 2881858759, joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_85(uParam0, 1815270123, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 3219281620:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 2499030370, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 1591132456, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 634039983, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 733837882, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 2248057097, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 1329061674, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, 2396306288, joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, 1140676955, joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_85(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_85(uParam0, 568543123, joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_85(uParam0, 1550611612, joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_85(uParam0, 368550800, joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_85(uParam0, 2525897947, joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_85(uParam0, 24902297, joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_85(uParam0, 4066925682, joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_85(uParam0, 3710005734, joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_85(uParam0, 3141791350, joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_85(uParam0, 1301287696, joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_85(uParam0, 1597093459, joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_85(uParam0, 1769871776, joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_85(uParam0, 2467084625, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 1277460590, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 3112393518, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 2146055916, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 3650233061, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 974903034, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 190476639, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, 2681951826, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 3842157419, joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_85(uParam0, 1038927834, joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_85(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_85(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_85(uParam0, 3113485012, joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_85(uParam0, 3362234491, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_85(uParam0, 3725708239, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_85(uParam0, 3968886988, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_85(uParam0, 48731514, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_85(uParam0, 880736428, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_85(uParam0, 1303784126, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_85(uParam0, 3641720545, 2982890265, 1, 1);
					break;
				
				case 22:
					func_85(uParam0, 2774849419, 2982890265, 2, 0);
					break;
				
				case 23:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_85(uParam0, 3298267239, joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_85(uParam0, 940943685, joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_85(uParam0, 1263226800, joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_85(uParam0, 3966931456, joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_85(uParam0, 1224100642, joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_85(uParam0, 899228776, joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_85(uParam0, 616006309, joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_85(uParam0, 2733014785, joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_85(uParam0, 572063080, joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_85(uParam0, 1170588613, joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_85(uParam0, 966612367, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_pumpshotgun"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_specialcarbine"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_85(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_85(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_snspistol"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_marksmanrifle"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_85(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_revolver"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_84(iLocal_54))
			{
				if (!func_74(1623028892, joaat("weapon_bullpuprifle"), 4294967295))
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_85(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_85(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_85(uParam0, 1623028892, 4263393586, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_85(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_85(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_85(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 3449028929, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 2676628469, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 3914869031, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 1315288101, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 1004815965, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_85(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_85(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_85(uParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_85(uParam0, 1060929921, joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_85(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_85(uParam0, 2890063729, joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_85(uParam0, 1602080333, joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_85(uParam0, 3820854852, joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_85(uParam0, 387223451, joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_85(uParam0, 617753366, joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_85(uParam0, 4072589040, joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_85(uParam0, 8741501, joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_85(uParam0, 3693681093, joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_85(uParam0, 3783533691, joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_85(uParam0, 3639579478, joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_85(uParam0, 4012490698, joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_85(uParam0, 1739501925, joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_85(uParam0, 1178671645, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 2526821735:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 382112385, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 3726614828, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 2271594122, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 3724612230, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 1362433589, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 1346235024, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 77277509, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_85(uParam0, 3328927042, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_85(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_85(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_85(uParam0, 3113485012, joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_85(uParam0, 3362234491, joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_85(uParam0, 3725708239, joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_85(uParam0, 3968886988, joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_85(uParam0, 48731514, joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_85(uParam0, 880736428, joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_85(uParam0, 1303784126, joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_85(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_85(uParam0, 2640679034, joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_85(uParam0, 3879097257, 2982890265, 1, 1);
					break;
				
				case 24:
					func_85(uParam0, 4185880635, 2982890265, 2, 0);
					break;
				
				case 25:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(uParam0, 3557537083, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(uParam0, 1125852043, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(uParam0, 886015732, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(uParam0, 3032680157, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(uParam0, 3999758885, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(uParam0, 3750812792, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(uParam0, 172765678, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(uParam0, 2312089847, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(uParam0, 2072122460, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(uParam0, 2308747125, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(uParam0, 1377355801, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 2285322324:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 21392614, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 3465283442, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 2418909806, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 3870121849, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 2366665730, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 3239176998, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, 1246324211, joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, 1205768792, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_85(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_85(uParam0, 2860680127, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_85(uParam0, 259780317, joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_85(uParam0, 2321624822, joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_85(uParam0, 1996130345, joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_85(uParam0, 2839309484, joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_85(uParam0, 2626704212, joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_85(uParam0, 1308243489, joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_85(uParam0, 1122574335, joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_85(uParam0, 1420313469, joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_85(uParam0, 109848390, joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_85(uParam0, 593945703, joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_85(uParam0, 1142457062, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 2497785294, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 3872379306, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 3615105746, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 1842849902, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 4100968569, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 3779763923, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_85(uParam0, 3328927042, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_85(uParam0, 1528590652, joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_85(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_85(uParam0, 3113485012, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_85(uParam0, 3362234491, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_85(uParam0, 3725708239, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_85(uParam0, 3968886988, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_85(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_85(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_85(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_85(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_85(uParam0, 2640679034, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_85(uParam0, 941317513, 2982890265, 1, 1);
					break;
				
				case 23:
					func_85(uParam0, 1748450780, 2982890265, 2, 0);
					break;
				
				case 24:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_85(uParam0, 2425682848, joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_85(uParam0, 1931539634, joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_85(uParam0, 1624199183, joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_85(uParam0, 4268133183, joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_85(uParam0, 4084561241, joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_85(uParam0, 423313640, joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_85(uParam0, 276639596, joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_85(uParam0, 3303610433, joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_85(uParam0, 2612118995, joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_85(uParam0, 996213771, joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_85(uParam0, 3080918746, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 3415619887:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 3122911422, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 3336103030, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 15712037, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 284438159, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 231258687, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_85(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_85(uParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_85(uParam0, 654802123, joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_85(uParam0, 3225415071, joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_85(uParam0, 11918884, joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_85(uParam0, 176157112, joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_85(uParam0, 4074914441, joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_85(uParam0, 288456487, joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_85(uParam0, 398658626, joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_85(uParam0, 628697006, joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_85(uParam0, 925911836, joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_85(uParam0, 1222307441, joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_85(uParam0, 552442715, joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_85(uParam0, 3646023783, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 2228681469:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 25766362, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(uParam0, 4021290536, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(uParam0, 2183159977, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(uParam0, 2845636954, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(uParam0, 4205311469, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(uParam0, 1130501904, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_85(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_85(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_85(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_85(uParam0, 3350057221, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_85(uParam0, 1060929921, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_85(uParam0, 1704640795, 2982890265, 1, 1);
					break;
				
				case 13:
					func_85(uParam0, 1005743559, 2982890265, 2, 0);
					break;
				
				case 14:
					func_85(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_85(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_85(uParam0, 3113485012, joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_85(uParam0, 3362234491, joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_85(uParam0, 3725708239, joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_85(uParam0, 3968886988, joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_85(uParam0, 48731514, joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_85(uParam0, 880736428, joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_85(uParam0, 1303784126, joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_85(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_85(uParam0, 2640679034, joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_85(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(uParam0, 2923451831, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(uParam0, 3104173419, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(uParam0, 2797881576, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(uParam0, 2491819116, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(uParam0, 2318995410, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(uParam0, 36929477, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(uParam0, 4026522462, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(uParam0, 3720197850, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(uParam0, 3412267557, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(uParam0, 2826785822, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(uParam0, 3320426066, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 2939590305:
			switch (iParam2)
			{
				case 0:
					func_85(uParam0, 3621517063, joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_86(iParam1, &uVar15);
			if (iVar12 != 4294967295)
			{
				iVar13 = 0;
				while (iVar13 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar12))
				{
					if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar12, iVar13, &Var16))
					{
						if (!func_73(Var16.f_3))
						{
							if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16 == 1731751835)
							{
								iVar7++;
							}
							else if (Var16 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16 == 4263393586)
							{
								iVar9++;
							}
							else if (Var16 == 2982890265)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var16 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16 == 4263393586)
								{
									iVar0 = iVar9;
								}
								else if (Var16 == 2982890265)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_85(uParam0, Var16.f_3, Var16, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_22(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_22(int iParam0, int iParam1)//Position - 0x5D8B
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = 4294967295;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_72() && (func_71() || func_70()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_72() && (func_71() || func_70()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_72() && (func_71() || func_70()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_86(iParam0, &uVar4);
				if (iVar2 != 4294967295)
				{
					iVar3 = 0;
					while (iVar3 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var5))
						{
							if (!func_73(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_68(iParam1))
									{
										Var5.f_5 = 4294967295;
									}
									if (Var5.f_5 == 4294967295)
									{
										iVar0 = 4294967295;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_72() && (func_71() || func_70()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B44));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F0));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F1));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_40001.f_28DB;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113E));
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_506A;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_40001.f_4FFB;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B45));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F2));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_4FFC;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F3));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_40001.f_2E43;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1139));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B47));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F4));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F5));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_40001.f_28DA;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1133));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B48));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F8));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FA));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F9));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_40001.f_28DE;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113D));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B49));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_40001.f_3E80;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FB));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FD));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FC));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_40001.f_28DD;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1142));
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_506B;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4B));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_40001.f_3E7B;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1105));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1102));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1104));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1103));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_40001.f_28D7;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1134));
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_506D;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4C));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_40001.f_3E7A;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110D));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110A));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110C));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110B));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_40001.f_28D9;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1137));
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_506E;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4E));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110F));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1111));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1110));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_40001.f_28D8;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1132));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4F));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1112));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_40001.f_2E44;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113C));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B50));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1128));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1129));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_40001.f_2E45;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1138));
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_506C;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1116));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1117));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_40001.f_2E40;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1140));
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_5719;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B52));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111A));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111B));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111C));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111D));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111E));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111F));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_40001.f_28E0;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1143));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = 4294967295;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1120));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1121));
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_506F;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_112A));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1126));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1127));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = 4294967295;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4A));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FE));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1101));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FF));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_40001.f_2E41;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1100));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_40001.f_195A;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_40001.f_1B9D;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_40001.f_2E42;
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_571E;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_40001.f_1BA2;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_40001.f_3E7D;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1BA5;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_40001.f_1BA1;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_1B9F;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1BA4;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_40001.f_2E46;
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_571A;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_40001.f_1BA3;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_40001.f_1BA7;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_1BA0;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_40001.f_1BBB;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_40001.f_1BAA;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1BAD;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_1BA8;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_40001.f_1BA9;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1BAB;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_40001.f_2E47;
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_571D;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_40001.f_1D83;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_1D84;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_40001.f_2057;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_40001.f_3E81;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_2058;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_2059;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_205A;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_40001.f_205D;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_205E;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_2060;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_2061;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2062;
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_571B;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_389F));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1118));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1119));
						break;
				}
				if (func_72() && (func_71() || func_70()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B46));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F6));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F7));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_40001.f_28DC;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113F));
						break;
				}
				if (func_72() && (func_71() || func_70()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_40001.f_28DF;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1141));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_40001.f_2A1C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1146));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_40001.f_2A1D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1147));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_40001.f_2A1E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1148));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_40001.f_2A1F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1149));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_40001.f_2A20;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114A));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_40001.f_2A21;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114B));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_40001.f_2A22;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114C));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_40001.f_2A23;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114D));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_40001.f_2A24;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114E));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_40001.f_2A35;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1150));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_40001.f_3E7F;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_2A36;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1151));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_40001.f_3190;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_40001.f_3191;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_40001.f_31CA;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_40001.f_318F;
						break;
					
					case 1623028892:
						iVar0 = Global_40001.f_571C;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_40001.f_3859;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_40001.f_3E7C;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case 3173288789:
				switch (iParam1)
				{
					case 2227745491:
						iVar0 = 0;
						break;
					
					case 2474561719:
						iVar0 = Global_40001.f_4807;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_40001.f_4FF7;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_40001.f_3E7E;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_4FF8;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_40001.f_4FFA;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_4FF9;
						break;
				}
				break;
			
			case 961495388:
				switch (iParam1)
				{
					case 2249208895:
						iVar0 = 0;
						break;
					
					case 3509242479:
						iVar0 = Global_40001.f_5070;
						break;
					
					case 2816286296:
						iVar0 = Global_40001.f_5071;
						break;
					
					case 1675665560:
						iVar0 = Global_40001.f_5072;
						break;
					
					case 4218476627:
						iVar0 = Global_40001.f_5073;
						break;
					
					case 4012669121:
						iVar0 = Global_40001.f_5074;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_5075;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_5076;
						break;
					
					case 77277509:
						iVar0 = Global_40001.f_5077;
						break;
					
					case 1060929921:
						iVar0 = Global_40001.f_5078;
						break;
					
					case 3328927042:
						iVar0 = Global_40001.f_5079;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_507A;
						break;
					
					case 3113485012:
						iVar0 = Global_40001.f_507B;
						break;
					
					case 3362234491:
						iVar0 = Global_40001.f_507C;
						break;
					
					case 3725708239:
						iVar0 = Global_40001.f_507D;
						break;
					
					case 3968886988:
						iVar0 = Global_40001.f_507E;
						break;
					
					case 48731514:
						iVar0 = Global_40001.f_507F;
						break;
					
					case 880736428:
						iVar0 = Global_40001.f_5080;
						break;
					
					case 1303784126:
						iVar0 = Global_40001.f_5081;
						break;
					
					case 2640679034:
						iVar0 = Global_40001.f_5082;
						break;
					
					case 1134861606:
						iVar0 = 0;
						break;
					
					case 1447477866:
						iVar0 = Global_40001.f_5083;
						break;
					
					case 2434475183:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 937772107:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 1401650071:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 628662130:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 3309920045:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 3482022833:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 2847614993:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 4234628436:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 2088750491:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 2781053842:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 3115408816:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 4208062921:
				switch (iParam1)
				{
					case 1283078430:
						iVar0 = 0;
						break;
					
					case 1574296533:
						iVar0 = Global_40001.f_5084;
						break;
					
					case 626875735:
						iVar0 = Global_40001.f_5085;
						break;
					
					case 1141059345:
						iVar0 = Global_40001.f_5086;
						break;
					
					case 1025884839:
						iVar0 = Global_40001.f_5087;
						break;
					
					case 391640422:
						iVar0 = Global_40001.f_5088;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_5089;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_508A;
						break;
					
					case 77277509:
						iVar0 = Global_40001.f_508B;
						break;
					
					case 1060929921:
						iVar0 = Global_40001.f_508C;
						break;
					
					case 3328927042:
						iVar0 = Global_40001.f_508D;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_508E;
						break;
					
					case 3113485012:
						iVar0 = Global_40001.f_508F;
						break;
					
					case 3362234491:
						iVar0 = Global_40001.f_5090;
						break;
					
					case 3725708239:
						iVar0 = Global_40001.f_5091;
						break;
					
					case 3968886988:
						iVar0 = Global_40001.f_5092;
						break;
					
					case 48731514:
						iVar0 = Global_40001.f_5093;
						break;
					
					case 880736428:
						iVar0 = Global_40001.f_5094;
						break;
					
					case 1303784126:
						iVar0 = Global_40001.f_5095;
						break;
					
					case 2640679034:
						iVar0 = Global_40001.f_5096;
						break;
					
					case 2201368575:
						iVar0 = 0;
						break;
					
					case 2335983627:
						iVar0 = Global_40001.f_5097;
						break;
					
					case 1272803094:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 1080719624:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 792221348:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 3842785869:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 3548192559:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 2250671235:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 4095795318:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 2866892280:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 2559813981:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 1796459838:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 3663056191:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 3686625920:
				switch (iParam1)
				{
					case 1227564412:
						iVar0 = 0;
						break;
					
					case 400507625:
						iVar0 = Global_40001.f_5098;
						break;
					
					case 696788003:
						iVar0 = Global_40001.f_5099;
						break;
					
					case 1475288264:
						iVar0 = Global_40001.f_509A;
						break;
					
					case 3274096058:
						iVar0 = Global_40001.f_509B;
						break;
					
					case 4133787461:
						iVar0 = Global_40001.f_509C;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_509D;
						break;
					
					case 77277509:
						iVar0 = Global_40001.f_509E;
						break;
					
					case 1060929921:
						iVar0 = Global_40001.f_509F;
						break;
					
					case 3328927042:
						iVar0 = Global_40001.f_50A0;
						break;
					
					case 3113485012:
						iVar0 = Global_40001.f_50A1;
						break;
					
					case 3362234491:
						iVar0 = Global_40001.f_50A2;
						break;
					
					case 3725708239:
						iVar0 = Global_40001.f_50A3;
						break;
					
					case 3968886988:
						iVar0 = Global_40001.f_50A4;
						break;
					
					case 48731514:
						iVar0 = Global_40001.f_50A5;
						break;
					
					case 880736428:
						iVar0 = Global_40001.f_50A6;
						break;
					
					case 1303784126:
						iVar0 = Global_40001.f_50A7;
						break;
					
					case 2640679034:
						iVar0 = Global_40001.f_50A8;
						break;
					
					case 3276730932:
						iVar0 = 0;
						break;
					
					case 3051509595:
						iVar0 = Global_40001.f_50A9;
						break;
					
					case 1249283253:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 3437259709:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 3197423398:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 1980349969:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 1219453777:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 2441508106:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 2220186280:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 457967755:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 235171324:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 42685294:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 3607349581:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 177293209:
				switch (iParam1)
				{
					case 4196276776:
						iVar0 = 0;
						break;
					
					case 752418717:
						iVar0 = Global_40001.f_50AA;
						break;
					
					case 4164277972:
						iVar0 = Global_40001.f_50AB;
						break;
					
					case 1005144310:
						iVar0 = Global_40001.f_50AD;
						break;
					
					case 247526935:
						iVar0 = Global_40001.f_50AE;
						break;
					
					case 2313935527:
						iVar0 = Global_40001.f_50AC;
						break;
					
					case 2193687427:
						iVar0 = Global_40001.f_50AF;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0;
						break;
					
					case 3061846192:
						iVar0 = Global_40001.f_50B0;
						break;
					
					case 776198721:
						iVar0 = Global_40001.f_50B1;
						break;
					
					case 2890063729:
						iVar0 = Global_40001.f_50B2;
						break;
					
					case 1602080333:
						iVar0 = Global_40001.f_50B3;
						break;
					
					case 1764221345:
						iVar0 = Global_40001.f_50B4;
						break;
					
					case 2425761975:
						iVar0 = 0;
						break;
					
					case 277524638:
						iVar0 = Global_40001.f_50B5;
						break;
					
					case 4164123906:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 3317620069:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 3916506229:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 329939175:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 643374672:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 807875052:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 2893163128:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 3198471901:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 3447155842:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 2881858759:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 1815270123:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 3219281620:
				switch (iParam1)
				{
					case 2499030370:
						iVar0 = 0;
						break;
					
					case 1591132456:
						iVar0 = Global_40001.f_50B6;
						break;
					
					case 2248057097:
						iVar0 = Global_40001.f_50B8;
						break;
					
					case 1329061674:
						iVar0 = Global_40001.f_50B7;
						break;
					
					case 733837882:
						iVar0 = Global_40001.f_50B9;
						break;
					
					case 634039983:
						iVar0 = Global_40001.f_50BA;
						break;
					
					case 1140676955:
						iVar0 = Global_40001.f_50BB;
						break;
					
					case 2396306288:
						iVar0 = Global_40001.f_50BC;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_40001.f_50BD;
						break;
					
					case 568543123:
						iVar0 = Global_40001.f_50BE;
						break;
					
					case 1550611612:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 368550800:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 2525897947:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 24902297:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 4066925682:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 3710005734:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 3141791350:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 1301287696:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 1597093459:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 1769871776:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 2467084625:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 2024373456:
				switch (iParam1)
				{
					case 1277460590:
						iVar0 = 0;
						break;
					
					case 3112393518:
						iVar0 = Global_40001.f_50BF;
						break;
					
					case 974903034:
						iVar0 = Global_40001.f_50C1;
						break;
					
					case 190476639:
						iVar0 = Global_40001.f_50C0;
						break;
					
					case 3650233061:
						iVar0 = Global_40001.f_50C2;
						break;
					
					case 2146055916:
						iVar0 = Global_40001.f_50C3;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_50C4;
						break;
					
					case 2681951826:
						iVar0 = Global_40001.f_50C5;
						break;
					
					case 3842157419:
						iVar0 = Global_40001.f_50C6;
						break;
					
					case 1038927834:
						iVar0 = Global_40001.f_50C7;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_50C8;
						break;
					
					case 3113485012:
						iVar0 = Global_40001.f_50C9;
						break;
					
					case 3362234491:
						iVar0 = Global_40001.f_50CA;
						break;
					
					case 3725708239:
						iVar0 = Global_40001.f_50CB;
						break;
					
					case 3968886988:
						iVar0 = Global_40001.f_50CC;
						break;
					
					case 48731514:
						iVar0 = Global_40001.f_50CD;
						break;
					
					case 880736428:
						iVar0 = Global_40001.f_50CE;
						break;
					
					case 1303784126:
						iVar0 = Global_40001.f_50CF;
						break;
					
					case 3641720545:
						iVar0 = 0;
						break;
					
					case 2774849419:
						iVar0 = Global_40001.f_50D0;
						break;
					
					case 3298267239:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 940943685:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 1263226800:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 3966931456:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 1224100642:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 899228776:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 616006309:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 2733014785:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 572063080:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 1170588613:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 966612367:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 1432025498:
				switch (iParam1)
				{
					case 3449028929:
						iVar0 = 0;
						break;
					
					case 1315288101:
						iVar0 = Global_40001.f_5739;
						break;
					
					case 1004815965:
						iVar0 = Global_40001.f_573A;
						break;
					
					case 3914869031:
						iVar0 = Global_40001.f_5738;
						break;
					
					case 2676628469:
						iVar0 = Global_40001.f_5737;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_5754;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_5755;
						break;
					
					case 77277509:
						iVar0 = Global_40001.f_5756;
						break;
					
					case 1060929921:
						iVar0 = Global_40001.f_5757;
						break;
					
					case 2890063729:
						iVar0 = Global_40001.f_5758;
						break;
					
					case 1602080333:
						iVar0 = Global_40001.f_5759;
						break;
					
					case 3820854852:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 387223451:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 617753366:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 4072589040:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 8741501:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 3693681093:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 3783533691:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 3639579478:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 4012490698:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 1739501925:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 1178671645:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 2526821735:
				switch (iParam1)
				{
					case 382112385:
						iVar0 = 0;
						break;
					
					case 3726614828:
						iVar0 = Global_40001.f_573B;
						break;
					
					case 1362433589:
						iVar0 = Global_40001.f_573F;
						break;
					
					case 1346235024:
						iVar0 = Global_40001.f_573D;
						break;
					
					case 3724612230:
						iVar0 = Global_40001.f_573E;
						break;
					
					case 2271594122:
						iVar0 = Global_40001.f_573C;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_575A;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_575B;
						break;
					
					case 77277509:
						iVar0 = Global_40001.f_575C;
						break;
					
					case 3328927042:
						iVar0 = Global_40001.f_575D;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_575E;
						break;
					
					case 3113485012:
						iVar0 = Global_40001.f_575F;
						break;
					
					case 3362234491:
						iVar0 = Global_40001.f_5760;
						break;
					
					case 3725708239:
						iVar0 = Global_40001.f_5761;
						break;
					
					case 3968886988:
						iVar0 = Global_40001.f_5762;
						break;
					
					case 48731514:
						iVar0 = Global_40001.f_5763;
						break;
					
					case 880736428:
						iVar0 = Global_40001.f_5764;
						break;
					
					case 1303784126:
						iVar0 = Global_40001.f_5765;
						break;
					
					case 2640679034:
						iVar0 = Global_40001.f_5766;
						break;
					
					case 3879097257:
						iVar0 = 0;
						break;
					
					case 4185880635:
						iVar0 = Global_40001.f_5767;
						break;
					
					case 3557537083:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 1125852043:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 886015732:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 3032680157:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 3999758885:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 3750812792:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 172765678:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 2312089847:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 2072122460:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 2308747125:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 1377355801:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 2285322324:
				switch (iParam1)
				{
					case 21392614:
						iVar0 = 0;
						break;
					
					case 3465283442:
						iVar0 = Global_40001.f_5AC1;
						break;
					
					case 3239176998:
						iVar0 = Global_40001.f_574F;
						break;
					
					case 2366665730:
						iVar0 = Global_40001.f_5751;
						break;
					
					case 3870121849:
						iVar0 = Global_40001.f_5750;
						break;
					
					case 2418909806:
						iVar0 = Global_40001.f_574E;
						break;
					
					case 1246324211:
						iVar0 = Global_40001.f_5787;
						break;
					
					case 1205768792:
						iVar0 = Global_40001.f_5788;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_40001.f_5789;
						break;
					
					case 2860680127:
						iVar0 = Global_40001.f_578A;
						break;
					
					case 259780317:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 2321624822:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 1996130345:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 2839309484:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 2626704212:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 1308243489:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 1122574335:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 1420313469:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 109848390:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 593945703:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 1142457062:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 1785463520:
				switch (iParam1)
				{
					case 2497785294:
						iVar0 = 0;
						break;
					
					case 3872379306:
						iVar0 = Global_40001.f_5740;
						break;
					
					case 4100968569:
						iVar0 = Global_40001.f_5744;
						break;
					
					case 3779763923:
						iVar0 = Global_40001.f_5742;
						break;
					
					case 1842849902:
						iVar0 = Global_40001.f_5743;
						break;
					
					case 3615105746:
						iVar0 = Global_40001.f_5741;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_5768;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_5769;
						break;
					
					case 3328927042:
						iVar0 = Global_40001.f_576A;
						break;
					
					case 1528590652:
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_576B;
						break;
					
					case 3113485012:
						iVar0 = Global_40001.f_576C;
						break;
					
					case 3362234491:
						iVar0 = Global_40001.f_576D;
						break;
					
					case 3725708239:
						iVar0 = Global_40001.f_576E;
						break;
					
					case 3968886988:
						iVar0 = Global_40001.f_576F;
						break;
					
					case 48731514:
						iVar0 = Global_40001.f_5770;
						break;
					
					case 880736428:
						iVar0 = Global_40001.f_5771;
						break;
					
					case 1303784126:
						iVar0 = Global_40001.f_5772;
						break;
					
					case 2640679034:
						iVar0 = Global_40001.f_5773;
						break;
					
					case 941317513:
						iVar0 = 0;
						break;
					
					case 1748450780:
						iVar0 = Global_40001.f_5774;
						break;
					
					case 2425682848:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 1931539634:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 1624199183:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 4268133183:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 4084561241:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 423313640:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 276639596:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 3303610433:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 2612118995:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 996213771:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 3080918746:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 3415619887:
				switch (iParam1)
				{
					case 3122911422:
						iVar0 = 0;
						break;
					
					case 3336103030:
						iVar0 = Global_40001.f_5745;
						break;
					
					case 231258687:
						iVar0 = Global_40001.f_5746;
						break;
					
					case 284438159:
						iVar0 = Global_40001.f_5748;
						break;
					
					case 15712037:
						iVar0 = Global_40001.f_5747;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_5775;
						break;
					
					case 77277509:
						iVar0 = Global_40001.f_5776;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_40001.f_5777;
						break;
					
					case 654802123:
						iVar0 = Global_40001.f_5778;
						break;
					
					case 3225415071:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 11918884:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 176157112:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 4074914441:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 288456487:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 398658626:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 628697006:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 925911836:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 1222307441:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 552442715:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 3646023783:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 2228681469:
				switch (iParam1)
				{
					case 25766362:
						iVar0 = 0;
						break;
					
					case 4021290536:
						iVar0 = Global_40001.f_5749;
						break;
					
					case 4205311469:
						iVar0 = Global_40001.f_574D;
						break;
					
					case 1130501904:
						iVar0 = Global_40001.f_574B;
						break;
					
					case 2845636954:
						iVar0 = Global_40001.f_574C;
						break;
					
					case 2183159977:
						iVar0 = Global_40001.f_574A;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_5779;
						break;
					
					case 1108334355:
						iVar0 = Global_40001.f_577A;
						break;
					
					case 3350057221:
						iVar0 = Global_40001.f_577B;
						break;
					
					case 1060929921:
						iVar0 = Global_40001.f_577C;
						break;
					
					case 1704640795:
						iVar0 = 0;
						break;
					
					case 1005743559:
						iVar0 = Global_40001.f_5786;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_577D;
						break;
					
					case 3113485012:
						iVar0 = Global_40001.f_577E;
						break;
					
					case 3362234491:
						iVar0 = Global_40001.f_577F;
						break;
					
					case 3725708239:
						iVar0 = Global_40001.f_5780;
						break;
					
					case 3968886988:
						iVar0 = Global_40001.f_5781;
						break;
					
					case 48731514:
						iVar0 = Global_40001.f_5782;
						break;
					
					case 880736428:
						iVar0 = Global_40001.f_5783;
						break;
					
					case 1303784126:
						iVar0 = Global_40001.f_5784;
						break;
					
					case 2640679034:
						iVar0 = Global_40001.f_5785;
						break;
					
					case 2923451831:
						iVar0 = Global_40001.f_50F0;
						break;
					
					case 3104173419:
						iVar0 = Global_40001.f_50F1;
						break;
					
					case 2797881576:
						iVar0 = Global_40001.f_50F2;
						break;
					
					case 2491819116:
						iVar0 = Global_40001.f_50F3;
						break;
					
					case 2318995410:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 36929477:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 4026522462:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 3720197850:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 3412267557:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case 2826785822:
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 3320426066:
						iVar0 = Global_40001.f_50FA;
						break;
				}
				break;
			
			case 2939590305:
				switch (iParam1)
				{
					case 3621517063:
						iVar0 = 0;
						break;
				}
				break;
			
			default:
				iVar6 = func_86(iParam0, &uVar8);
				if (iVar6 != 4294967295)
				{
					iVar7 = 0;
					while (iVar7 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar6))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar6, iVar7, &Var9))
						{
							if (!func_73(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == 4294967295)
									{
										iVar0 = 4294967295;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_66())
	{
		StringCopy(&Var11, func_64(iParam1, iParam0), 16);
		func_60(&sVar10, Var11, ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()), 3, 1, func_62(iParam0), func_61(iParam0), 4294967295, 0, 0);
		if (unk_0x3B6DCE62F381F366(&sVar10))
		{
			iVar0 = unk_0x9F672A3614564F11(MISC::GET_HASH_KEY(&sVar10), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_23(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)//Position - 0x944B
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_66())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_11625)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_52(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_53 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4C));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_79) / 100f));
		}
	}
	if (iLocal_53 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4C));
			if (func_24())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_79) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = 4294967295;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_24()//Position - 0x9561
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_101())
	{
		if (func_27())
		{
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_40001.f_78) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25()//Position - 0x95BF
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_150A0E);
	iVar0 = (iVar0 + Global_150A11);
	return iVar0;
}

int func_26()//Position - 0x95DB
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_150A0F);
	iVar0 = (iVar0 + Global_150A10);
	iVar0 = (iVar0 + Global_150A0E);
	iVar0 = (iVar0 + Global_150A11);
	iVar0 = (iVar0 + Global_150A13);
	iVar0 = (iVar0 + Global_150A12);
	iVar0 = (iVar0 + func_14(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_14(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_14(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_14(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_14(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_27()//Position - 0x9699
{
	struct<7> Var0;
	struct<7> Var1;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_51(joaat("mpply_started_mp")) };
	if (func_28(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_28(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x96DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_49(Param1);
	iVar1 = func_39(Param0, iParam2);
	if (iVar1 == 4294967281)
	{
		return 0;
	}
	if (func_29(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)//Position - 0x9718
{
	int iVar0;
	int iVar1;
	
	if (!func_37(iParam1) || !func_37(iParam0))
	{
		return 1;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_31(iParam0);
	iVar1 = func_31(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x9824
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_31(int iParam0)//Position - 0x9837
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_32(int iParam0)//Position - 0x984A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_33(int iParam0)//Position - 0x985D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_34(int iParam0)//Position - 0x986F
{
	return iParam0 & 15;
}

var func_35(int iParam0)//Position - 0x987C
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_36(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_36(bool bParam0, int iParam1, int iParam2)//Position - 0x98A1
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_37(int iParam0)//Position - 0x98B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 4294967281)
	{
		return 0;
	}
	iVar0 = func_30(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_31(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_32(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_35(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_34(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_33(iParam0);
	if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_38(int iParam0, int iParam1)//Position - 0x9994
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_39(struct<7> Param0, int iParam1)//Position - 0x9A36
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_48(Param0) == 0)
	{
		uVar0 = func_49(Param0);
		uVar1 = uVar0;
		func_40(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9A76
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_35(*uParam0);
	iVar1 = func_34(*uParam0);
	iVar2 = func_33(*uParam0);
	iVar3 = func_32(*uParam0);
	iVar4 = func_31(*uParam0);
	iVar5 = func_30(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9BF8
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam5);
	func_43(uParam0, iParam4);
	func_42(uParam0, iParam6);
}

void func_42(var uParam0, int iParam1)//Position - 0x9C30
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_43(var uParam0, int iParam1)//Position - 0x9CB6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_35(*uParam0);
	if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_44(var uParam0, int iParam1)//Position - 0x9D07
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_45(var uParam0, int iParam1)//Position - 0x9D3A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_46(var uParam0, int iParam1)//Position - 0x9D74
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_47(var uParam0, int iParam1)//Position - 0x9DAF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_48(struct<7> Param0)//Position - 0x9DEB
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_49(struct<6> Param0, var uParam1)//Position - 0x9E41
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_42(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_44(&uVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_43(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_45(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_46(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_47(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_50(int iParam0)//Position - 0x9EB7
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_51(int iParam0)//Position - 0x9F7C
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_DATE(uVar0, &Var2, 7, 4294967295))
	{
		return Var2;
	}
	return Var1;
}

int func_52(int iParam0)//Position - 0x9FA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_56();
	if (iParam0 == 0 || !func_55(iVar0))
	{
		return 4294967295;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_53(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_53(1, iVar0);
		iVar3[1] = func_53(3, iVar0);
		iVar3[2] = func_53(2, iVar0);
		iVar3[3] = func_53(4, iVar0);
		iVar3[4] = func_53(5, iVar0);
		iVar3[5] = func_53(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return 4294967295;
}

int func_53(int iParam0, int iParam1)//Position - 0xA1FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = 4294967295;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = 4294967295;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = 4294967295;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = 4294967295;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = 4294967295;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = 4294967295;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != 4294967295)
	{
		if (func_54(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_54(int iParam0, int iParam1)//Position - 0xA300
{
	return Global_19E56.f_4AAF[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_55(int iParam0)//Position - 0xA31C
{
	return iParam0 < 3;
}

int func_56()//Position - 0xA328
{
	func_57();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_57()//Position - 0xA341
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_59(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_58(AUDIO::_0x0626A247D2405330());
			if (func_55(iVar0) && (!func_159(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_55(Global_19E56.f_933.f_21B.f_10CD))
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

int func_58(int iParam0)//Position - 0xA43E
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)//Position - 0xA47B
{
	if (func_55(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_60(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xA4A5
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case 2278772179:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case 3880438217:
		case 3041962113:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case 3175771472:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case 3622742813:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case 4076133005:
		case 3435911031:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != 4294967295)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != 4294967295)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != 4294967295)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_10B79)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_10B7A)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_10B7B)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_10B7C)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_10B7D)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = 4294967295;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != 4294967295)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == 3779704296)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				if (iParam4 == joaat("FCR2"))
				{
					StringCopy(&cParam1, "FCR2", 16);
				}
				else if (iParam4 == joaat("DIABLOUS2"))
				{
					StringCopy(&cParam1, "DIABLOUS2", 16);
				}
				else if (iParam4 == joaat("COMET3"))
				{
					StringCopy(&cParam1, "COMET3", 16);
				}
				else
				{
					StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
					{
						return;
					}
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("DUBSTA2"):
						case joaat("CAVALCADE2"):
						case joaat("MESA2"):
						case joaat("RAPIDGT2"):
						case joaat("EMPEROR2"):
						case joaat("CARGOBOB2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("MESA3"):
						case joaat("EMPEROR3"):
						case joaat("BURRITO3"):
						case joaat("MULE3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("TORNADO4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != 4294967295)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != 4294967295)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_61(int iParam0)//Position - 0xAA7D
{
	switch (iParam0)
	{
		case 3219281620:
		case 2024373456:
		case 961495388:
		case 4208062921:
		case 3686625920:
		case 177293209:
		case 1432025498:
		case 2526821735:
		case 2285322324:
		case 1785463520:
		case 3415619887:
		case 2228681469:
			return 2;
			break;
	}
	return 4294967295;
}

int func_62(int iParam0)//Position - 0xAADC
{
	return func_63(iParam0);
}

int func_63(int iParam0)//Position - 0xAAEA
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case 3347935668:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case 3722617468:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case 3950483272:
			return 29;
			break;
		
		case 2407100105:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case 3457817165:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case 3173288789:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case 3441901897:
			return 75;
			break;
		
		case 3125143736:
			return 76;
			break;
		
		case 2484171525:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case 4208062921:
			return 9;
			break;
		
		case 3686625920:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case 3219281620:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case 2526821735:
			return 46;
			break;
		
		case 2285322324:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case 3415619887:
			return 70;
			break;
		
		case 2228681469:
			return 48;
			break;
		
		case 2548703416:
			return 79;
			break;
		
		case 940833800:
			return 80;
			break;
		
		case 2939590305:
			return 81;
			break;
		
		case 1198256469:
			return 82;
			break;
		
		case 3056410471:
			return 83;
			break;
	}
	return 0;
}

char* func_64(int iParam0, int iParam1)//Position - 0xB030
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case 3404452422:
			return "WCT_CLIP1";
			break;
		
		case 3787849722:
			return "WCT_CLIP2";
			break;
		
		case 4170538377:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case 3080918746:
			return "WCT_CAMO_IND";
			break;
		
		case 1142457062:
			return "WCT_CAMO_IND";
			break;
		
		case 3465283442:
			return "WCT_CLIP2";
			break;
		
		case 3350057221:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 1060929921:
			return "WCT_SCOPE_SML2";
			break;
		
		case 3621517063:
			return "WCT_VAR_RAY18";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_86(iParam1, &uVar2);
				if (iVar0 != 4294967295)
				{
					iVar1 = 0;
					while (iVar1 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_65(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_65(var uParam0)//Position - 0xB7C5
{
	return uParam0;
}

int func_66()//Position - 0xB7CF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_67())
	{
		return 1;
	}
	return 0;
}

int func_67()//Position - 0xB7EC
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_68(int iParam0)//Position - 0xB803
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_69(iParam0))
	{
		return Global_40001.f_5065;
	}
	return 1;
}

int func_69(int iParam0)//Position - 0xB865
{
	switch (iParam0)
	{
		case 2467084625:
		case 966612367:
		case 1815270123:
		case 3607349581:
		case 3115408816:
		case 3663056191:
		case 1178671645:
		case 1377355801:
		case 1142457062:
		case 3080918746:
		case 3646023783:
		case 3320426066:
			return 1;
			break;
	}
	return 0;
}

int func_70()//Position - 0xB8C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 6))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 6))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_2357E.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, 4294967295))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_71()//Position - 0xB995
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 5))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 5))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_2357E.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, 4294967295))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, 4294967295);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_19, 1);
				MISC::SET_BIT(&Global_19, 3);
				MISC::SET_BIT(&Global_19, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_72()//Position - 0xBAE9
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_73(int iParam0)//Position - 0xBBA4
{
	switch (iParam0)
	{
		case 3036451504:
		case 438243936:
		case 3839888240:
		case 740920107:
		case 3753350949:
		case 1809261196:
		case 2648428428:
		case 3004802348:
		case 3330502162:
		case 1135718771:
		case 1253942266:
		case 3891161322:
		case 691432737:
		case 987648331:
		case 3863286761:
		case 3447384986:
		case 4202375078:
		case 3800418970:
		case 730876697:
		case 583159708:
		case 2366463693:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

bool func_74(int iParam0, int iParam1, int iParam2)//Position - 0xBC3F
{
	int iVar0;
	int iVar1;
	
	if (func_83())
	{
		return 0;
	}
	iVar0 = func_78(iParam0, iParam1, iParam2);
	iVar1 = func_76(iParam0, iParam1);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_75(iVar1));
}

int func_75(int iParam0)//Position - 0xBC74
{
	return (iParam0 % 32);
}

int func_76(int iParam0, int iParam1)//Position - 0xBC81
{
	return func_77(iParam0, iParam1);
}

int func_77(int iParam0, int iParam1)//Position - 0xBC91
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case 3347935668:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case 3722617468:
			switch (iParam0)
			{
				case 3404452422:
					return 105;
					break;
				
				case 3787849722:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case 2407100105:
			switch (iParam0)
			{
				case 4170538377:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case 3173288789:
			switch (iParam0)
			{
				case 2227745491:
					return 209;
					break;
				
				case 2474561719:
					return 210;
					break;
			}
			break;
		
		case 3219281620:
			switch (iParam0)
			{
				case 2499030370:
					return 217;
					break;
				
				case 1591132456:
					return 218;
					break;
				
				case 1329061674:
					return 219;
					break;
				
				case 2248057097:
					return 220;
					break;
				
				case 733837882:
					return 221;
					break;
				
				case 634039983:
					return 222;
					break;
				
				case 1140676955:
					return 223;
					break;
				
				case 2396306288:
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case 568543123:
					return 226;
					break;
				
				case 1550611612:
					return 367;
					break;
				
				case 368550800:
					return 368;
					break;
				
				case 2525897947:
					return 369;
					break;
				
				case 24902297:
					return 370;
					break;
				
				case 4066925682:
					return 371;
					break;
				
				case 3710005734:
					return 372;
					break;
				
				case 3141791350:
					return 373;
					break;
				
				case 1301287696:
					return 374;
					break;
				
				case 1597093459:
					return 375;
					break;
				
				case 1769871776:
					return 376;
					break;
				
				case 2467084625:
					return 377;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
					break;
				
				case 3112393518:
					return 228;
					break;
				
				case 190476639:
					return 229;
					break;
				
				case 974903034:
					return 230;
					break;
				
				case 3650233061:
					return 231;
					break;
				
				case 2146055916:
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case 2681951826:
					return 234;
					break;
				
				case 3842157419:
					return 235;
					break;
				
				case 1038927834:
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case 3113485012:
					return 238;
					break;
				
				case 3362234491:
					return 239;
					break;
				
				case 3725708239:
					return 240;
					break;
				
				case 3968886988:
					return 241;
					break;
				
				case 48731514:
					return 242;
					break;
				
				case 880736428:
					return 243;
					break;
				
				case 1303784126:
					return 244;
					break;
				
				case 3641720545:
					return 245;
					break;
				
				case 2774849419:
					return 246;
					break;
				
				case 3298267239:
					return 378;
					break;
				
				case 940943685:
					return 379;
					break;
				
				case 1263226800:
					return 380;
					break;
				
				case 3966931456:
					return 381;
					break;
				
				case 1224100642:
					return 382;
					break;
				
				case 899228776:
					return 383;
					break;
				
				case 616006309:
					return 384;
					break;
				
				case 2733014785:
					return 385;
					break;
				
				case 572063080:
					return 386;
					break;
				
				case 1170588613:
					return 387;
					break;
				
				case 966612367:
					return 388;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case 4196276776:
					return 247;
					break;
				
				case 752418717:
					return 248;
					break;
				
				case 4164277972:
					return 249;
					break;
				
				case 2313935527:
					return 250;
					break;
				
				case 1005144310:
					return 251;
					break;
				
				case 247526935:
					return 252;
					break;
				
				case 2193687427:
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case 3061846192:
					return 255;
					break;
				
				case 776198721:
					return 256;
					break;
				
				case 2890063729:
					return 257;
					break;
				
				case 1602080333:
					return 258;
					break;
				
				case 1764221345:
					return 259;
					break;
				
				case 2425761975:
					return 260;
					break;
				
				case 277524638:
					return 261;
					break;
				
				case 4164123906:
					return 356;
					break;
				
				case 3317620069:
					return 357;
					break;
				
				case 3916506229:
					return 358;
					break;
				
				case 329939175:
					return 359;
					break;
				
				case 643374672:
					return 360;
					break;
				
				case 807875052:
					return 361;
					break;
				
				case 2893163128:
					return 362;
					break;
				
				case 3198471901:
					return 363;
					break;
				
				case 3447155842:
					return 364;
					break;
				
				case 2881858759:
					return 365;
					break;
				
				case 1815270123:
					return 366;
					break;
			}
			break;
		
		case 3686625920:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
					break;
				
				case 400507625:
					return 263;
					break;
				
				case 696788003:
					return 264;
					break;
				
				case 1475288264:
					return 265;
					break;
				
				case 3274096058:
					return 266;
					break;
				
				case 4133787461:
					return 267;
					break;
				
				case 2640679034:
					return 268;
					break;
				
				case 1108334355:
					return 269;
					break;
				
				case 1060929921:
					return 270;
					break;
				
				case 3328927042:
					return 271;
					break;
				
				case 3113485012:
					return 272;
					break;
				
				case 3362234491:
					return 273;
					break;
				
				case 3725708239:
					return 274;
					break;
				
				case 3968886988:
					return 275;
					break;
				
				case 48731514:
					return 276;
					break;
				
				case 880736428:
					return 277;
					break;
				
				case 1303784126:
					return 278;
					break;
				
				case 3276730932:
					return 279;
					break;
				
				case 3051509595:
					return 280;
					break;
				
				case 1249283253:
					return 345;
					break;
				
				case 3437259709:
					return 346;
					break;
				
				case 3197423398:
					return 347;
					break;
				
				case 1980349969:
					return 348;
					break;
				
				case 1219453777:
					return 349;
					break;
				
				case 2441508106:
					return 350;
					break;
				
				case 2220186280:
					return 351;
					break;
				
				case 457967755:
					return 352;
					break;
				
				case 235171324:
					return 353;
					break;
				
				case 42685294:
					return 354;
					break;
				
				case 3607349581:
					return 355;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case 2249208895:
					return 281;
					break;
				
				case 3509242479:
					return 282;
					break;
				
				case 2816286296:
					return 283;
					break;
				
				case 1675665560:
					return 284;
					break;
				
				case 4218476627:
					return 285;
					break;
				
				case 4012669121:
					return 286;
					break;
				
				case 2640679034:
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case 1108334355:
					return 289;
					break;
				
				case 77277509:
					return 290;
					break;
				
				case 3328927042:
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case 3113485012:
					return 293;
					break;
				
				case 3362234491:
					return 294;
					break;
				
				case 3725708239:
					return 295;
					break;
				
				case 3968886988:
					return 296;
					break;
				
				case 48731514:
					return 297;
					break;
				
				case 880736428:
					return 298;
					break;
				
				case 1303784126:
					return 299;
					break;
				
				case 1134861606:
					return 300;
					break;
				
				case 1447477866:
					return 301;
					break;
				
				case 2434475183:
					return 323;
					break;
				
				case 937772107:
					return 324;
					break;
				
				case 1401650071:
					return 325;
					break;
				
				case 628662130:
					return 326;
					break;
				
				case 3309920045:
					return 327;
					break;
				
				case 3482022833:
					return 328;
					break;
				
				case 2847614993:
					return 329;
					break;
				
				case 4234628436:
					return 330;
					break;
				
				case 2088750491:
					return 331;
					break;
				
				case 2781053842:
					return 332;
					break;
				
				case 3115408816:
					return 333;
					break;
			}
			break;
		
		case 4208062921:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
					break;
				
				case 1574296533:
					return 303;
					break;
				
				case 626875735:
					return 304;
					break;
				
				case 1141059345:
					return 305;
					break;
				
				case 1025884839:
					return 306;
					break;
				
				case 391640422:
					return 307;
					break;
				
				case 2640679034:
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case 1108334355:
					return 310;
					break;
				
				case 77277509:
					return 311;
					break;
				
				case 3328927042:
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case 3113485012:
					return 314;
					break;
				
				case 3362234491:
					return 315;
					break;
				
				case 3725708239:
					return 316;
					break;
				
				case 3968886988:
					return 317;
					break;
				
				case 48731514:
					return 318;
					break;
				
				case 880736428:
					return 319;
					break;
				
				case 1303784126:
					return 320;
					break;
				
				case 2201368575:
					return 321;
					break;
				
				case 2335983627:
					return 322;
					break;
				
				case 1272803094:
					return 334;
					break;
				
				case 1080719624:
					return 335;
					break;
				
				case 792221348:
					return 336;
					break;
				
				case 3842785869:
					return 337;
					break;
				
				case 3548192559:
					return 338;
					break;
				
				case 2250671235:
					return 339;
					break;
				
				case 4095795318:
					return 340;
					break;
				
				case 2866892280:
					return 341;
					break;
				
				case 2559813981:
					return 342;
					break;
				
				case 1796459838:
					return 343;
					break;
				
				case 3663056191:
					return 344;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case 3449028929:
					return 395;
					break;
				
				case 1315288101:
					return 396;
					break;
				
				case 1004815965:
					return 397;
					break;
				
				case 3914869031:
					return 398;
					break;
				
				case 2676628469:
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case 1108334355:
					return 401;
					break;
				
				case 77277509:
					return 402;
					break;
				
				case 1060929921:
					return 403;
					break;
				
				case 2890063729:
					return 404;
					break;
				
				case 1602080333:
					return 405;
					break;
				
				case 3820854852:
					return 488;
					break;
				
				case 387223451:
					return 489;
					break;
				
				case 617753366:
					return 490;
					break;
				
				case 4072589040:
					return 491;
					break;
				
				case 8741501:
					return 492;
					break;
				
				case 3693681093:
					return 493;
					break;
				
				case 3783533691:
					return 494;
					break;
				
				case 3639579478:
					return 495;
					break;
				
				case 4012490698:
					return 496;
					break;
				
				case 1739501925:
					return 497;
					break;
				
				case 1178671645:
					return 498;
					break;
			}
			break;
		
		case 2526821735:
			switch (iParam0)
			{
				case 382112385:
					return 406;
					break;
				
				case 3726614828:
					return 407;
					break;
				
				case 1362433589:
					return 408;
					break;
				
				case 1346235024:
					return 409;
					break;
				
				case 3724612230:
					return 410;
					break;
				
				case 2271594122:
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case 1108334355:
					return 413;
					break;
				
				case 77277509:
					return 414;
					break;
				
				case 3328927042:
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case 3113485012:
					return 417;
					break;
				
				case 3362234491:
					return 418;
					break;
				
				case 3725708239:
					return 419;
					break;
				
				case 3968886988:
					return 420;
					break;
				
				case 48731514:
					return 421;
					break;
				
				case 880736428:
					return 422;
					break;
				
				case 1303784126:
					return 423;
					break;
				
				case 2640679034:
					return 424;
					break;
				
				case 3879097257:
					return 425;
					break;
				
				case 4185880635:
					return 426;
					break;
				
				case 3557537083:
					return 532;
					break;
				
				case 1125852043:
					return 533;
					break;
				
				case 886015732:
					return 534;
					break;
				
				case 3032680157:
					return 535;
					break;
				
				case 3999758885:
					return 536;
					break;
				
				case 3750812792:
					return 537;
					break;
				
				case 172765678:
					return 538;
					break;
				
				case 2312089847:
					return 539;
					break;
				
				case 2072122460:
					return 540;
					break;
				
				case 2308747125:
					return 541;
					break;
				
				case 1377355801:
					return 542;
					break;
			}
			break;
		
		case 2285322324:
			switch (iParam0)
			{
				case 21392614:
					return 427;
					break;
				
				case 3465283442:
					return 428;
					break;
				
				case 3239176998:
					return 429;
					break;
				
				case 2366665730:
					return 430;
					break;
				
				case 3870121849:
					return 431;
					break;
				
				case 2418909806:
					return 432;
					break;
				
				case 1246324211:
					return 433;
					break;
				
				case 1205768792:
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case 2860680127:
					return 436;
					break;
				
				case 259780317:
					return 510;
					break;
				
				case 2321624822:
					return 511;
					break;
				
				case 1996130345:
					return 512;
					break;
				
				case 2839309484:
					return 513;
					break;
				
				case 2626704212:
					return 514;
					break;
				
				case 1308243489:
					return 515;
					break;
				
				case 1122574335:
					return 516;
					break;
				
				case 1420313469:
					return 517;
					break;
				
				case 109848390:
					return 518;
					break;
				
				case 593945703:
					return 519;
					break;
				
				case 1142457062:
					return 520;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case 2497785294:
					return 437;
					break;
				
				case 3872379306:
					return 438;
					break;
				
				case 4100968569:
					return 439;
					break;
				
				case 3779763923:
					return 440;
					break;
				
				case 1842849902:
					return 441;
					break;
				
				case 3615105746:
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case 1108334355:
					return 444;
					break;
				
				case 3328927042:
					return 445;
					break;
				
				case 1528590652:
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case 3113485012:
					return 448;
					break;
				
				case 3362234491:
					return 449;
					break;
				
				case 3725708239:
					return 450;
					break;
				
				case 3968886988:
					return 451;
					break;
				
				case 48731514:
					return 452;
					break;
				
				case 880736428:
					return 453;
					break;
				
				case 1303784126:
					return 454;
					break;
				
				case 2640679034:
					return 455;
					break;
				
				case 941317513:
					return 456;
					break;
				
				case 1748450780:
					return 457;
					break;
				
				case 2425682848:
					return 521;
					break;
				
				case 1931539634:
					return 522;
					break;
				
				case 1624199183:
					return 523;
					break;
				
				case 4268133183:
					return 524;
					break;
				
				case 4084561241:
					return 525;
					break;
				
				case 423313640:
					return 526;
					break;
				
				case 276639596:
					return 527;
					break;
				
				case 3303610433:
					return 528;
					break;
				
				case 2612118995:
					return 529;
					break;
				
				case 996213771:
					return 530;
					break;
				
				case 3080918746:
					return 531;
					break;
			}
			break;
		
		case 3415619887:
			switch (iParam0)
			{
				case 3122911422:
					return 458;
					break;
				
				case 231258687:
					return 459;
					break;
				
				case 284438159:
					return 460;
					break;
				
				case 15712037:
					return 461;
					break;
				
				case 3336103030:
					return 462;
					break;
				
				case 1108334355:
					return 463;
					break;
				
				case 77277509:
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case 654802123:
					return 466;
					break;
				
				case 3225415071:
					return 499;
					break;
				
				case 11918884:
					return 500;
					break;
				
				case 176157112:
					return 501;
					break;
				
				case 4074914441:
					return 502;
					break;
				
				case 288456487:
					return 503;
					break;
				
				case 398658626:
					return 504;
					break;
				
				case 628697006:
					return 505;
					break;
				
				case 925911836:
					return 506;
					break;
				
				case 1222307441:
					return 507;
					break;
				
				case 552442715:
					return 508;
					break;
				
				case 3646023783:
					return 509;
					break;
			}
			break;
		
		case 2228681469:
			switch (iParam0)
			{
				case 25766362:
					return 467;
					break;
				
				case 4021290536:
					return 468;
					break;
				
				case 4205311469:
					return 469;
					break;
				
				case 1130501904:
					return 470;
					break;
				
				case 2845636954:
					return 471;
					break;
				
				case 2183159977:
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case 1108334355:
					return 474;
					break;
				
				case 3350057221:
					return 475;
					break;
				
				case 1060929921:
					return 476;
					break;
				
				case 1704640795:
					return 477;
					break;
				
				case 1005743559:
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case 3113485012:
					return 480;
					break;
				
				case 3362234491:
					return 481;
					break;
				
				case 3725708239:
					return 482;
					break;
				
				case 3968886988:
					return 483;
					break;
				
				case 48731514:
					return 484;
					break;
				
				case 880736428:
					return 485;
					break;
				
				case 1303784126:
					return 486;
					break;
				
				case 2640679034:
					return 487;
					break;
				
				case 2923451831:
					return 543;
					break;
				
				case 3104173419:
					return 544;
					break;
				
				case 2797881576:
					return 545;
					break;
				
				case 2491819116:
					return 546;
					break;
				
				case 2318995410:
					return 547;
					break;
				
				case 36929477:
					return 548;
					break;
				
				case 4026522462:
					return 549;
					break;
				
				case 3720197850:
					return 550;
					break;
				
				case 3412267557:
					return 551;
					break;
				
				case 2826785822:
					return 552;
					break;
				
				case 3320426066:
					return 553;
					break;
			}
			break;
		
		case 2939590305:
			switch (iParam0)
			{
				case 3621517063:
					return 554;
					break;
			}
			break;
	}
	return 0;
}

var func_78(int iParam0, int iParam1, int iParam2)//Position - 0xDDF6
{
	var uVar0;
	
	uVar0 = func_12(func_79(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_79(int iParam0, int iParam1)//Position - 0xDE11
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_76(iParam0, iParam1);
	iVar1 = func_82(iVar0);
	if ((func_81() == 0 || func_80() == 0) || (func_81() == 999 && func_80() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
			}
	}
	return 1753;
}

int func_80()//Position - 0xDF73
{
	return Global_6374;
}

int func_81()//Position - 0xDF7E
{
	return Global_6373;
}

int func_82(int iParam0)//Position - 0xDF89
{
	return (iParam0 / 32);
}

bool func_83()//Position - 0xDF96
{
	return Global_140844;
}

int func_84(int iParam0)//Position - 0xDFA2
{
	if (iParam0 != 4294967295)
	{
		if (iParam0 == 46)
		{
			return 1;
		}
		if (iParam0 == 47)
		{
			return 1;
		}
		if (iParam0 == 48)
		{
			return 1;
		}
		if (iParam0 == 49)
		{
			return 1;
		}
	}
	return 0;
}

void func_85(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDFDD
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_86(int iParam0, var uParam1)//Position - 0xDFFC
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILE::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILE::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_87(int iParam0, var uParam1)//Position - 0xE037
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_90(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_90(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					if (Var4.f_1 == 4294967295)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_89(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_89(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILE::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILE::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_88(Var7.f_1)) && iVar9 < 50)
			{
				if (!FILE::_IS_DLC_DATA_EMPTY(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					}
					if (Var4.f_1 == 4294967295)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (!func_73(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_88(int iParam0)//Position - 0xE2C1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case 3347935668:
			case 3722617468:
			case 392730790:
			case 2771265879:
			case 2182141141:
			case 3630607569:
			case 2407100105:
			case 3457817165:
			case 3950483272:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case 3173288789:
			case 125959754:
			case 3441901897:
			case 3125143736:
			case 2484171525:
			case 419712736:
			case 2548703416:
			case 1198256469:
			case 3056410471:
			case 2939590305:
				return 1;
				break;
			}
	}
	return 0;
}

int func_89(int iParam0, int iParam1)//Position - 0xE447
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 3173288789:
			switch (iParam1)
			{
				case 0:
					iVar0 = 2227745491;
					break;
				
				case 1:
					iVar0 = 2474561719;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_86(iParam0, &uVar4);
				if (iVar1 != 4294967295)
				{
					iVar2 = 0;
					while (iVar2 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_73(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_90(int iParam0)//Position - 0xEFB8
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = 3604312705;
			break;
		
		case 4:
			iVar0 = 2835769091;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = 3856169965;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = 3139438981;
			break;
		
		case 10:
			iVar0 = 3779330807;
			break;
		
		case 11:
			iVar0 = 3423053997;
			break;
		
		case 12:
			iVar0 = 2942208264;
			break;
		
		case 13:
			iVar0 = 3752008335;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = 3435497134;
			break;
		
		case 16:
			iVar0 = 2169540894;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = 3756794440;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = 4270137969;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = 2353736415;
			break;
		
		case 24:
			iVar0 = 3261412848;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = 3599801321;
			break;
		
		case 27:
			iVar0 = 4013938849;
			break;
		
		case 28:
			iVar0 = 3608253524;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = 4137754934;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = 4247009927;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

float func_91(var uParam0)//Position - 0xF22C
{
	if (func_94(uParam0))
	{
		if (func_93(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_92(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_92(bool bParam0)//Position - 0xF26B
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = HUD::_0x13C4B962653A5280();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_93(var uParam0)//Position - 0xF2C3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_94(var uParam0)//Position - 0xF2D3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

int func_95()//Position - 0xF2E3
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	return func_4(124, 4294967295);
}

bool func_96()//Position - 0xF313
{
	return Global_14084D;
}

bool func_97()//Position - 0xF31F
{
	return Global_14084F;
}

void func_98()//Position - 0xF32B
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_0x418DC16FAE452C1C(iVar0))
			{
				func_126(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_0x418DC16FAE452C1C(iVar0))
			{
				func_126(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 70;
	while (iVar0 <= 77)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_0x418DC16FAE452C1C(iVar0))
			{
				func_126(iVar0, 1);
			}
		}
		iVar0++;
	}
}

bool func_99(int iParam0, int iParam1)//Position - 0xF3BF
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_6();
	}
	iVar0 = func_100(iParam1);
	uVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uVar1, iParam0);
}

int func_100(int iParam0)//Position - 0xF3EB
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

int func_101()//Position - 0xF44E
{
	if (func_103() && func_102(0))
	{
		return 1;
	}
	return 0;
}

var func_102(int iParam0)//Position - 0xF46C
{
	return Global_140675[iParam0];
}

var func_103()//Position - 0xF47C
{
	return func_102(func_6() + 1);
}

bool func_104(var uParam0)//Position - 0xF48E
{
	return uParam0->f_4F == 1;
}

void func_105(var uParam0)//Position - 0xF49C
{
	float fVar0;
	
	fVar0 = Global_412215;
	uParam0->f_50 = (uParam0->f_50 + MISC::GET_FRAME_TIME());
	if (!func_104(uParam0))
	{
		return;
	}
	if (func_112(uParam0) < 0f)
	{
		func_111(uParam0, 0);
		return;
	}
	if (func_159(14))
	{
		fVar0 = 10f;
	}
	if (func_112(uParam0) < fVar0)
	{
		return;
	}
	if (func_110(uParam0, 0))
	{
		return;
	}
	if (func_108((*uParam0)[0]))
	{
		func_107(uParam0);
		func_106(uParam0);
		func_111(uParam0, 0);
	}
}

void func_106(var uParam0)//Position - 0xF524
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_110(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_107(var uParam0)//Position - 0xF555
{
	int iVar0;
	
	iVar0 = 1;
	if (func_110(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

int func_108(int iParam0)//Position - 0xF58C
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
	{
		return 0;
	}
	if (func_159(14) && !func_109(iParam0))
	{
		return 0;
	}
	if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)//Position - 0xF5D6
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_110(var uParam0, int iParam1)//Position - 0xF626
{
	return (*uParam0)[iParam1] == 78;
}

void func_111(var uParam0, float fParam1)//Position - 0xF637
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_112(var uParam0)//Position - 0xF654
{
	return uParam0->f_50;
}

int func_113()//Position - 0xF660
{
	float fVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_11625)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			fVar0 = HUD::_0xE0130B41D3CF4574();
			if (fVar0 > 0.01f && MISC::IS_PC_VERSION())
			{
				func_132(14, SYSTEM::FLOOR((fVar0 * 100f)));
			}
			if (fVar0 >= 0.975f)
			{
				func_126(14, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)//Position - 0xF6D8
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

void func_115(bool bParam0)//Position - 0xF704
{
	if (Global_11625)
	{
		if (bParam0)
		{
			func_10(bParam0);
		}
		func_3(bParam0);
		func_15(bParam0);
		if (bParam0)
		{
		}
	}
	func_125(bParam0);
	func_118(bParam0);
	func_117();
	func_116();
	if (bParam0)
	{
		if (func_94(&uLocal_58))
		{
		}
	}
}

int func_116()//Position - 0xF758
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("first_person_cam_time")) * 24);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("first_person_cam_time")));
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("mp_first_person_cam_time")) * 24);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("mp_first_person_cam_time")));
	if ((iVar0 + iVar1) >= 15)
	{
		func_126(50, 1);
		return 1;
	}
	return 0;
}

int func_117()//Position - 0xF7C6
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
	{
		return 0;
	}
	iVar0 = MISC::_0x996DD1E1E02F1008();
	if (iVar0 > 0)
	{
		if (Global_6479 < iVar0)
		{
			if (Global_6479 >= 0)
			{
				func_132(22, iVar0);
			}
			Global_6479 = iVar0;
		}
	}
	if (MISC::_0x996DD1E1E02F1008() >= 50)
	{
		func_126(22, 1);
		return 1;
	}
	return 0;
}

int func_118(bool bParam0)//Position - 0xF81D
{
	var uVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		return 0;
	}
	uVar0[0] = func_124();
	uVar0[1] = func_123();
	uVar0[2] = func_122();
	uVar0[3] = func_121();
	uVar0[4] = func_120();
	uVar0[5] = func_119();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (uVar0[iVar2])
		{
			iVar1++;
		}
		iVar2++;
	}
	STATS::STAT_GET_INT(joaat("num_discipline_gold_earned"), &iVar3, 4294967295);
	if (iVar1 > iVar3 && iVar1 > 0)
	{
		STATS::STAT_SET_INT(joaat("num_discipline_gold_earned"), iVar1, 1);
		func_132(17, iVar1);
	}
	if (bParam0)
	{
	}
	if (!uVar0[0])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[1])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[2])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[3])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[4])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[5])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	func_126(17, 1);
	return 1;
}

int func_119()//Position - 0xF93F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_19E56.f_7BC[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_19E56.f_7BC[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_19E56.f_7BC[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120()//Position - 0xF9AC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_19E56.f_4AAF[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_19E56.f_4AAF[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_19E56.f_4AAF[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_121()//Position - 0xFA22
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6174.f_1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_122()//Position - 0xFA56
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_2, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_123()//Position - 0xFA8A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_19E56.f_4A2C.f_13[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_124()//Position - 0xFABD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_19E56.f_4E0F[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_125(bool bParam0)//Position - 0xFAEE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, 4294967295);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_132(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_126(27, 1);
	return 1;
}

int func_126(int iParam0, int iParam1)//Position - 0xFBA5
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_127(iParam0, iParam1);
}

int func_127(int iParam0, int iParam1)//Position - 0xFBC0
{
	if (func_159(14) && !func_109(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_646A != 0 && !Global_11625)
	{
		return 0;
	}
	if (func_104(&Global_412216))
	{
		if (func_130(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_128(&Global_412216, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_128(var uParam0, int iParam1)//Position - 0xFC5D
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_159(14) && !func_109(iParam1))
	{
		return 0;
	}
	if (func_130(uParam0, iParam1))
	{
		return 0;
	}
	if (func_112(uParam0) < 0f)
	{
		func_111(uParam0, 0);
	}
	func_164(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_129(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_129(var uParam0, int iParam1)//Position - 0xFD0E
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_159(14) && !func_109(iParam1))
	{
		return 0;
	}
	if (func_130(uParam0, iParam1))
	{
		return 0;
	}
	if (func_112(uParam0) < 0f)
	{
		func_111(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_110(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_130(var uParam0, int iParam1)//Position - 0xFD89
{
	return func_131(uParam0, iParam1) != 4294967295;
}

int func_131(var uParam0, int iParam1)//Position - 0xFD9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_132(int iParam0, int iParam1)//Position - 0xFDC8
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

int func_133(bool bParam0)//Position - 0xFE19
{
	int iVar0;
	
	iVar0 = (func_146(bParam0) + func_134(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_134(bool bParam0)//Position - 0xFE37
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4872)
	{
		if (Global_19E56.f_4872[iVar0 /*6*/].f_3 != 4294967295 && func_144(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_142(iVar0, 7))
			{
				iVar7 = func_140(iVar0, 7, iVar5);
				if (!Global_DC56[iVar7 /*13*/].f_7)
				{
					if (func_137(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_136(iVar4, iVar3, 0);
			iVar2 = func_135(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_19E56.f_928[(iVar0 - 52) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_135(float fParam0)//Position - 0xFF2B
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_136(int iParam0, int iParam1, bool bParam2)//Position - 0xFF60
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_137(int iParam0)//Position - 0xFFBF
{
	if (func_138(iParam0, func_139(Global_DC56[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1)//Position - 0xFFE2
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_DC56[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_19E56.f_612C[4 /*4*/] == func_56())
	{
		Global_DC56[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_DC56[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_DC56[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_DC56[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x100B4
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	if (STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295))
	{
		return (iVar0 - 1);
	}
	return 4294967295;
}

int func_140(int iParam0, int iParam1, int iParam2)//Position - 0x100DD
{
	switch (iParam1)
	{
		case 1:
			return Global_14893[iParam0 /*34*/].f_11[iParam2];
			break;
		
		case 7:
			return func_141(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_141(int iParam0, int iParam1)//Position - 0x10120
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return 4294967295;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return 4294967295;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return 4294967295;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return 4294967295;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return 4294967295;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return 4294967295;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return 4294967295;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return 4294967295;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return 4294967295;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return 4294967295;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return 4294967295;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return 4294967295;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return 4294967295;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return 4294967295;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return 4294967295;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return 4294967295;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return 4294967295;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return 4294967295;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return 4294967295;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return 4294967295;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return 4294967295;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return 4294967295;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return 4294967295;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return 4294967295;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return 4294967295;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return 4294967295;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return 4294967295;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return 4294967295;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return 4294967295;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return 4294967295;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return 4294967295;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return 4294967295;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return 4294967295;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return 4294967295;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return 4294967295;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return 4294967295;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return 4294967295;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return 4294967295;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return 4294967295;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return 4294967295;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return 4294967295;
		
		default:
	}
	return 4294967295;
}

int func_142(int iParam0, int iParam1)//Position - 0x10804
{
	switch (iParam1)
	{
		case 1:
			return Global_14893[iParam0 /*34*/].f_10;
			break;
		
		case 7:
			return func_143(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x1083F
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}

int func_144(int iParam0, int iParam1)//Position - 0x109F0
{
	switch (iParam1)
	{
		case 1:
			return !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[iParam0 /*34*/].f_F, 5);
			break;
		
		case 7:
			return func_145(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_145(int iParam0)//Position - 0x10A31
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_146(bool bParam0)//Position - 0x10D77
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_2361.f_14A)
	{
		if (Global_19E56.f_2361.f_14A[iVar0 /*6*/].f_3 != 4294967295 && func_144(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = 4294967295;
			iVar5 = 0;
			while (iVar5 < func_142(iVar0, 1))
			{
				iVar7 = func_140(iVar0, 1, iVar5);
				if (!Global_DC56[iVar7 /*13*/].f_7)
				{
					if (func_137(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_147(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_136(iVar4, iVar3, 0);
			iVar2 = func_135(fVar6);
			if (iVar8 > 4294967295)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_147(int iParam0)//Position - 0x10E91
{
	int iVar0;
	
	iVar0 = func_139(Global_DC56[iParam0 /*13*/].f_4);
	if (iVar0 > 4294967294)
	{
		return iVar0;
	}
	return 0;
}

void func_148()//Position - 0x10EB6
{
	var uVar0;
	int iVar1;
	
	ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0);
	if (!ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "creatures@shark@move", "attack_player", 3))
	{
		func_126(25, 1);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		uVar0 = PED::GET_PED_SOURCE_OF_DEATH(AUDIO::_0x0626A247D2405330());
		if (ENTITY::IS_ENTITY_A_PED(uVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (func_149(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("a_c_sharktiger"))
				{
					func_126(25, 1);
					return;
				}
			}
		}
	}
}

bool func_149(int iParam0)//Position - 0x10F3F
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_150()//Position - 0x10F5D
{
	switch (iLocal_55)
	{
		case 0:
			fLocal_63 = 0f;
			if (!ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) >= 3 && MISC::GET_MISSION_FLAG() == 0)
			{
				if (func_155() == 2)
				{
					func_161(&uLocal_58);
					iLocal_55++;
				}
			}
			break;
		
		case 1:
			if (func_154() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 3)
			{
				func_153(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (MISC::GET_MISSION_FLAG() == 1)
			{
				func_153(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (func_155() < 2)
			{
				func_153(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				func_153(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			fLocal_63 = func_152(&uLocal_58);
			if (fLocal_63 >= 180f)
			{
				func_126(24, 1);
				func_151(&uLocal_58);
				iLocal_55++;
			}
			break;
		
		case 2:
			iLocal_55++;
			break;
	}
}

void func_151(var uParam0)//Position - 0x1106D
{
	if (func_94(uParam0))
	{
		if (!func_93(uParam0))
		{
			uParam0->f_2 = (func_92(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

float func_152(var uParam0)//Position - 0x110A7
{
	if (func_94(uParam0))
	{
		if (func_93(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_92(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_153(var uParam0)//Position - 0x110E3
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_154()//Position - 0x110F9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_155()//Position - 0x11115
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_157(2);
	if (func_156(iVar1, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5A, 2))
	{
		iVar0++;
	}
	iVar1 = func_157(1);
	if (func_156(iVar1, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5A, 1))
	{
		iVar0++;
	}
	iVar1 = func_157(0);
	if (func_156(iVar1, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5A, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_156(int iParam0, int iParam1)//Position - 0x11194
{
	int iVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_58(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_157(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == AUDIO::_0x0626A247D2405330())
			{
				return 0;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15C5C, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x111F0
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_56())
	{
		return AUDIO::_0x0626A247D2405330();
	}
	return Global_162B5[func_158(iParam0)];
}

int func_158(int iParam0)//Position - 0x11221
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_159(int iParam0)//Position - 0x1125C
{
	return Global_8D15 == iParam0;
}

void func_160(char* sParam0, int iParam1)//Position - 0x1126A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_161(var uParam0)//Position - 0x11281
{
	func_162(uParam0, 0f);
}

void func_162(var uParam0, float fParam1)//Position - 0x11290
{
	uParam0->f_1 = (func_92(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_163(var uParam0, int iParam1)//Position - 0x112BE
{
	uParam0->f_4F = iParam1;
	if (uParam0->f_4F)
	{
		func_111(uParam0, 0);
	}
}

void func_164(var uParam0)//Position - 0x112DA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_165(uParam0, iVar0);
		iVar0++;
	}
	func_111(uParam0, (Global_412215 - 0.5f));
}

void func_165(var uParam0, int iParam1)//Position - 0x1130E
{
	(*uParam0)[iParam1] = 78;
}

void func_166()//Position - 0x1131E
{
	int iVar0;
	int iVar1;
	
	iVar1 = 78;
	iVar0 = 1;
	while (iVar0 <= (iVar1 - 1))
	{
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
		}
		iVar0++;
	}
}

void func_167(int iParam0)//Position - 0x11348
{
	if (iParam0 > 0)
	{
	}
}

