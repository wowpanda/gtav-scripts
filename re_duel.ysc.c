#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<5> Local_47[8];
	struct<4> Local_48[8];
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	float fLocal_56 = 0f;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 5 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 5;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = 4294967295;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_49 = { 0f, 0f, 0f };
	vLocal_51 = { 1064.871f, 2670.857f, 38.5511f };
	vLocal_52 = { 926.3422f, 2708.926f, 39.5394f };
	vLocal_53 = { 1140.03f, 2698.027f, 37.1568f };
	vLocal_54 = { vLocal_49 };
	fLocal_74 = 0f;
	iLocal_75 = joaat("DUKES2");
	iLocal_76 = joaat("PHANTOM");
	iLocal_77 = joaat("TRAILERS2");
	iLocal_78 = joaat("RANCHERXL");
	iLocal_79 = joaat("a_m_m_hillbilly_01");
	iLocal_80 = joaat("a_m_m_hillbilly_02");
	iLocal_83 = 3;
	vLocal_50 = { ScriptParam_84.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (func_224(Local_48[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
		}
		func_197(1, 0);
	}
	if (func_155(vLocal_50, 31, 0, 0, 0))
	{
		func_152(31);
	}
	else
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_151(1)) || iLocal_65 > 2)
		{
			if (func_151(13))
			{
				func_120();
			}
			switch (iLocal_45)
			{
				case 0:
					func_58();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_224(Local_48[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
			}
			func_197(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1AD
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_65)
			{
				case 0:
					iLocal_46 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1F1
{
	func_55(64, 1);
	func_55(65, 1);
	func_31(Local_48[0 /*4*/], 145);
	func_6(4294967295, 0);
	func_3();
	func_197(1, 0);
}

void func_3()//Position - 0x222
{
	func_4();
}

int func_4()//Position - 0x22F
{
	if (func_5(0))
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

bool func_5(bool bParam0)//Position - 0x27A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_6(int iParam0, int iParam1)//Position - 0x2A5
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_29();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_19E56.f_6187.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19E4A = iParam1;
		if (Global_19E48 == 0)
		{
			if (((Global_19E4B == 1 || Global_19E4B == 5) || Global_19E4B == 11) || Global_19E4B == 25)
			{
				func_7(2);
			}
			else if ((Global_19E4B == 26 || Global_19E4B == 8) || Global_19E4B == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)//Position - 0x3A7
{
	Global_19E48 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)//Position - 0x3B5
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
		func_12((891 + iParam0), 1, 4294967295, 1);
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
		Global_19E56.f_27B6[iParam0 /*12*/].f_A = uParam1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_B = uParam2;
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
		func_9();
	}
}

void func_9()//Position - 0x49D
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
		func_11(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()//Position - 0x95E
{
	return Global_6373;
}

int func_11(int iParam0, int iParam1)//Position - 0x969
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

int func_12(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x9BA
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
		iParam2 = func_13();
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

int func_13()//Position - 0xF16
{
	return Global_1407E0;
}

int func_14(int iParam0, int iParam1)//Position - 0xF22
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_15(int iParam0)//Position - 0x1296
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_16(int iParam0)//Position - 0x12C5
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

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1307
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1328
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
		func_19();
	}
}

void func_19()//Position - 0x14FB
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

int func_20()//Position - 0x161B
{
	func_21();
	switch (Global_19E56.f_933.f_21B.f_10CD)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_21()//Position - 0x1661
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_25(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_24(AUDIO::_0x0626A247D2405330());
			if (func_23(iVar0) && (!func_22(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_23(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_22(int iParam0)//Position - 0x175E
{
	return Global_8D15 == iParam0;
}

bool func_23(int iParam0)//Position - 0x176C
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0x1778
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0x17B5
{
	if (func_23(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x17DF
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

void func_27(int iParam0, int iParam1)//Position - 0x1822
{
	MISC::SET_BIT(&(Global_19E56.f_6187.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)//Position - 0x183D
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_29()//Position - 0x18EE
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_30(Var0);
	return uVar1;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x190B
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return 4294967295;
}

void func_31(int iParam0, int iParam1)//Position - 0x1AE5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, 4294967295);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19E56.f_933.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19E56.f_7F5D.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19E56.f_7F5D.f_15D6 = iParam1;
	Global_11511 = iParam0;
	Global_19E56.f_7F5D.f_15D4 = 1;
	func_32(iParam0, &(Global_19E56.f_7F5D.f_1586));
}

void func_32(int iParam0, var uParam1)//Position - 0x1CE7
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		func_36(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == 4294967295 && !func_35(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						MISC::SET_BIT(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 11);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 27);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 27);
		}
	}
}

int func_33(int iParam0)//Position - 0x1F90
{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2)//Position - 0x2040
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)//Position - 0x2233
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0)//Position - 0x2253
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_37(int iParam0)//Position - 0x2303
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || func_53(iParam0, 0, 0)) || func_53(iParam0, 1, 0)) || func_53(iParam0, 2, 0)) || func_52(iParam0) != 145) || func_51(iParam0)) || func_50(iParam0)) || func_49(iParam0)) || func_48(iParam0)) || !func_38(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_50(iParam0))
		{
		}
		if (func_50(iParam0))
		{
		}
		if (func_53(iParam0, 0, 0))
		{
		}
		if (func_53(iParam0, 1, 0))
		{
		}
		if (func_53(iParam0, 2, 0))
		{
		}
		if (func_52(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)//Position - 0x23E0
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return 0;
			break;
	}
	return 1;
}

int func_39(int iParam0, bool bParam1)//Position - 0x2591
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_47())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILE::GET_NUM_DLC_VEHICLES())
		{
			if (FILE::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILE::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_46() && !func_45()) && !func_44()) && !func_43()) && !func_47())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_44())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x2711
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()//Position - 0x27DB
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x27F2
{
	int iVar0;
	int iVar1;
	
	if (Global_263409)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_40001.f_1958 && !Global_40001.f_31FD) && iVar1 < Global_40001.f_31FE)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_40001.f_370F && iVar1 < Global_40001.f_371B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_40001.f_370B && iVar1 < Global_40001.f_3717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_40001.f_370C && iVar1 < Global_40001.f_3718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_40001.f_370D && iVar1 < Global_40001.f_3719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_40001.f_370E && iVar1 < Global_40001.f_371A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_40001.f_3710 && iVar1 < Global_40001.f_371C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_40001.f_3711 && iVar1 < Global_40001.f_3714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_40001.f_3712 && iVar1 < Global_40001.f_3715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_40001.f_3713 && iVar1 < Global_40001.f_3716)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_40001.f_4157 && iVar1 < Global_40001.f_4133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_40001.f_4152 && iVar1 < Global_40001.f_412E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_40001.f_4156 && iVar1 < Global_40001.f_4132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_40001.f_4155 && iVar1 < Global_40001.f_4131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_40001.f_414F && iVar1 < Global_40001.f_412B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_40001.f_4150 && iVar1 < Global_40001.f_412C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_40001.f_4153 && iVar1 < Global_40001.f_412F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_40001.f_4154 && iVar1 < Global_40001.f_4130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_40001.f_4151 && iVar1 < Global_40001.f_412D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_40001.f_4159 && iVar1 < Global_40001.f_4135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_40001.f_415A && iVar1 < Global_40001.f_4136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_40001.f_414E && iVar1 < Global_40001.f_412A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_40001.f_414D && iVar1 < Global_40001.f_4129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_40001.f_414C && iVar1 < Global_40001.f_4128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_40001.f_4158 && iVar1 < Global_40001.f_4134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_40001.f_415B && iVar1 < Global_40001.f_4137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_40001.f_415C && iVar1 < Global_40001.f_4138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_40001.f_415D && iVar1 < Global_40001.f_4139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_40001.f_415E && iVar1 < Global_40001.f_413A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_40001.f_41EF && iVar1 < Global_40001.f_4205)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_40001.f_41F0 && iVar1 < Global_40001.f_4206)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_40001.f_41F1 && iVar1 < Global_40001.f_4207)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_40001.f_41F2 && iVar1 < Global_40001.f_4208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_40001.f_41F3 && iVar1 < Global_40001.f_4209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_40001.f_41F4 && iVar1 < Global_40001.f_420A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_40001.f_41F6 && iVar1 < Global_40001.f_420B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_40001.f_41F7 && iVar1 < Global_40001.f_420C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_40001.f_41F8 && iVar1 < Global_40001.f_420D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_40001.f_41F9 && iVar1 < Global_40001.f_420E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_40001.f_41FA && iVar1 < Global_40001.f_420F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_40001.f_41FB && iVar1 < Global_40001.f_4210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_40001.f_41FC && iVar1 < Global_40001.f_4211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_40001.f_4202 && iVar1 < Global_40001.f_4218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_40001.f_41FF && iVar1 < Global_40001.f_4214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_40001.f_4200 && iVar1 < Global_40001.f_4215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_40001.f_4201 && iVar1 < Global_40001.f_4216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_40001.f_41F5 && iVar1 < Global_40001.f_4217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_40001.f_4203 && iVar1 < Global_40001.f_4219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_40001.f_41FD && iVar1 < Global_40001.f_4212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_40001.f_41FE && iVar1 < Global_40001.f_4213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_40001.f_4204 && iVar1 < Global_40001.f_421A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_40001.f_4860 && iVar1 < Global_40001.f_48C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_40001.f_4861 && iVar1 < Global_40001.f_48C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_40001.f_4862 && iVar1 < Global_40001.f_48C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_40001.f_4863 && iVar1 < Global_40001.f_48C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_40001.f_4864 && iVar1 < Global_40001.f_48C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_40001.f_4865 && iVar1 < Global_40001.f_48C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_40001.f_4866 && iVar1 < Global_40001.f_48C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_40001.f_4867 && iVar1 < Global_40001.f_48C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_40001.f_4868 && iVar1 < Global_40001.f_48C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_40001.f_4869 && iVar1 < Global_40001.f_48CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_40001.f_486A && iVar1 < Global_40001.f_48CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_40001.f_486B && iVar1 < Global_40001.f_48CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_40001.f_486C && iVar1 < Global_40001.f_48CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_40001.f_486D && iVar1 < Global_40001.f_48CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_40001.f_486E && iVar1 < Global_40001.f_48CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_40001.f_486F && iVar1 < Global_40001.f_48D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_40001.f_4870 && iVar1 < Global_40001.f_48D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_40001.f_4871 && iVar1 < Global_40001.f_48D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_40001.f_4872 && iVar1 < Global_40001.f_48D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_40001.f_4873 && iVar1 < Global_40001.f_48D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_40001.f_4874 && iVar1 < Global_40001.f_48D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_40001.f_4875 && iVar1 < Global_40001.f_48D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_40001.f_4876 && iVar1 < Global_40001.f_48D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_40001.f_4877 && iVar1 < Global_40001.f_48D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_40001.f_4878 && iVar1 < Global_40001.f_48D9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_40001.f_4C98 && iVar1 < Global_40001.f_4C94)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_40001.f_4C99 && iVar1 < Global_40001.f_4C95)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_40001.f_4C9A && iVar1 < Global_40001.f_4C96)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_40001.f_4C9B && iVar1 < Global_40001.f_4C97)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_40001.f_5007 && iVar1 < Global_40001.f_500F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_40001.f_5008 && iVar1 < Global_40001.f_5010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_40001.f_5009 && iVar1 < Global_40001.f_5011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_40001.f_500A && iVar1 < Global_40001.f_5012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_40001.f_500B && iVar1 < Global_40001.f_5013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_40001.f_500C && iVar1 < Global_40001.f_5014)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_40001.f_5310 && iVar1 < Global_40001.f_5324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_40001.f_531C && iVar1 < Global_40001.f_5330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_40001.f_5313 && iVar1 < Global_40001.f_5327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_40001.f_531D && iVar1 < Global_40001.f_5331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_40001.f_5311 && iVar1 < Global_40001.f_5325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_40001.f_5321 && iVar1 < Global_40001.f_5335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_40001.f_531F && iVar1 < Global_40001.f_5333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_40001.f_5320 && iVar1 < Global_40001.f_5334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_40001.f_531B && iVar1 < Global_40001.f_532F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_40001.f_5322 && iVar1 < Global_40001.f_5336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_40001.f_531E && iVar1 < Global_40001.f_5332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_40001.f_531A && iVar1 < Global_40001.f_532E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_40001.f_5312 && iVar1 < Global_40001.f_5326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_40001.f_5314 && iVar1 < Global_40001.f_5328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_40001.f_5315 && iVar1 < Global_40001.f_5329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_40001.f_5316 && iVar1 < Global_40001.f_532A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_40001.f_5317 && iVar1 < Global_40001.f_532B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_40001.f_5318 && iVar1 < Global_40001.f_532C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_40001.f_5319 && iVar1 < Global_40001.f_532D)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_40001.f_56D1 && iVar1 < Global_40001.f_56ED)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_40001.f_56D2 && iVar1 < Global_40001.f_56EE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_40001.f_56D3 && iVar1 < Global_40001.f_56EF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_40001.f_56D4 && iVar1 < Global_40001.f_56F0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_40001.f_56D5 && iVar1 < Global_40001.f_56F1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_40001.f_56D6 && iVar1 < Global_40001.f_56F2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_40001.f_56D7 && iVar1 < Global_40001.f_56F3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_40001.f_56D8 && iVar1 < Global_40001.f_56F4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_40001.f_56D9 && iVar1 < Global_40001.f_56F5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_40001.f_56DA && iVar1 < Global_40001.f_56F6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_56DB && iVar1 < Global_40001.f_56F7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_56DC && iVar1 < Global_40001.f_56F8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_40001.f_56DD && iVar1 < Global_40001.f_56F9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_40001.f_56DE && iVar1 < Global_40001.f_56FA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_40001.f_56DF && iVar1 < Global_40001.f_56FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_40001.f_56E0 && iVar1 < Global_40001.f_56FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_40001.f_56E1 && iVar1 < Global_40001.f_56FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_40001.f_56E2 && iVar1 < Global_40001.f_56FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_40001.f_56E3 && iVar1 < Global_40001.f_56FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_40001.f_56E4 && iVar1 < Global_40001.f_5700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_40001.f_56E5 && iVar1 < Global_40001.f_5701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_40001.f_56E6 && iVar1 < Global_40001.f_5702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_40001.f_56E7 && iVar1 < Global_40001.f_5703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_40001.f_56E8 && iVar1 < Global_40001.f_5704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_40001.f_56E9 && iVar1 < Global_40001.f_5705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_40001.f_56EA && iVar1 < Global_40001.f_5706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_40001.f_56EB && iVar1 < Global_40001.f_5707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_40001.f_56EC && iVar1 < Global_40001.f_5708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_40001.f_5B88 && iVar1 < Global_40001.f_5B98)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_40001.f_5B89 && iVar1 < Global_40001.f_5B99)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_40001.f_5B8D && iVar1 < Global_40001.f_5B9D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_40001.f_5B90 && iVar1 < Global_40001.f_5BA0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_40001.f_5B95 && iVar1 < Global_40001.f_5BA5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_40001.f_5B8F && iVar1 < Global_40001.f_5B9F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_40001.f_5B87 && iVar1 < Global_40001.f_5B97)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_40001.f_5B8E && iVar1 < Global_40001.f_5B9E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_40001.f_5B94 && iVar1 < Global_40001.f_5BA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_40001.f_5B93 && iVar1 < Global_40001.f_5BA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_40001.f_5B8A && iVar1 < Global_40001.f_5B9A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_40001.f_5B8C && iVar1 < Global_40001.f_5B9C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_40001.f_5B96 && iVar1 < Global_40001.f_5BA6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_40001.f_5B92 && iVar1 < Global_40001.f_5BA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_40001.f_5B8B && iVar1 < Global_40001.f_5B9B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_40001.f_5B91 && iVar1 < Global_40001.f_5BA1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_40001.f_5BE2 && iVar1 < Global_40001.f_5BD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_40001.f_5BE3 && iVar1 < Global_40001.f_5BD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_40001.f_5BE8 && iVar1 < Global_40001.f_5BDB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_40001.f_5BE7 && iVar1 < Global_40001.f_5BDA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_40001.f_5BE5 && iVar1 < Global_40001.f_5BD8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_40001.f_5BEB && iVar1 < Global_40001.f_5BDE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_40001.f_5BED && iVar1 < Global_40001.f_5BE0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_40001.f_5BEE && iVar1 < Global_40001.f_5BE1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_40001.f_5BEC && iVar1 < Global_40001.f_5BDF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_40001.f_5BE4 && iVar1 < Global_40001.f_5BD7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_40001.f_5BE6 && iVar1 < Global_40001.f_5BD9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_40001.f_5BEA && iVar1 < Global_40001.f_5BDD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_40001.f_5BE9 && iVar1 < Global_40001.f_5BDC)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_40001.f_641C && iVar1 < Global_40001.f_641E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_40001.f_606B && iVar1 < Global_40001.f_6064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_40001.f_606C && iVar1 < Global_40001.f_6065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_40001.f_606D && iVar1 < Global_40001.f_6066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_40001.f_606E && iVar1 < Global_40001.f_6067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_40001.f_641D && iVar1 < Global_40001.f_641F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_40001.f_606F && iVar1 < Global_40001.f_6068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_40001.f_6070 && iVar1 < Global_40001.f_6069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_40001.f_6071 && iVar1 < Global_40001.f_606A)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_43()//Position - 0x44F1
{
	return 0;
}

int func_44()//Position - 0x44FA
{
	return 1;
}

int func_45()//Position - 0x4503
{
	return 1;
}

int func_46()//Position - 0x450C
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_47()//Position - 0x4525
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

int func_48(int iParam0)//Position - 0x45E0
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x4626
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16240[iVar0]))
		{
			if (Global_16240[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x4661
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar0], 0))
			{
				if (Global_16222[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_16222[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_51(int iParam0)//Position - 0x46DD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[24]))
	{
		if (iParam0 == Global_11188.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_11188.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x47C5
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			if (Global_16222[iVar0] == iParam0)
			{
				return Global_1622C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_53(int iParam0, int iParam1, bool bParam2)//Position - 0x4828
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_54(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x4899
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_55(int iParam0, bool bParam1)//Position - 0x4971
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_57(iParam0, 0))
		{
			func_56(iParam0, 1, 0);
			func_56(iParam0, 2, 0);
			func_56(iParam0, 3, 0);
			func_56(iParam0, 4, 0);
			func_56(iParam0, 0, 1);
			Global_11188[iParam0] = 1;
		}
	}
	else
	{
		func_56(iParam0, 0, 0);
	}
}

void func_56(int iParam0, int iParam1, bool bParam2)//Position - 0x49CE
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
}

bool func_57(int iParam0, int iParam1)//Position - 0x4A09
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

void func_58()//Position - 0x4A2C
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	switch (iLocal_46)
	{
		case 0:
			func_109();
			func_108(13);
			STREAMING::REQUEST_MODEL(iLocal_75);
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_65)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_75))
					{
						func_104(0, vLocal_49, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
						STREAMING::REQUEST_MODEL(iLocal_76);
						STREAMING::REQUEST_MODEL(iLocal_79);
						STREAMING::REQUEST_MODEL(iLocal_77);
						func_94(1);
						iLocal_65++;
					}
					break;
				
				case 1:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_76) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && STREAMING::HAS_MODEL_LOADED(iLocal_77))
					{
						func_108(9);
						iLocal_65++;
					}
					break;
				
				case 2:
					if ((func_224(Local_48[3 /*4*/]) && func_224(Local_47[0 /*5*/])) && func_93())
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[3 /*4*/], unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) };
						if (vVar0.x <= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 953.5052f, 2665.587f, 38.61237f, 955.0941f, 2716.872f, 50.67046f, 71f, 0, true, 0))
						{
							if ((((func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_87(3, 0, 4, 1);
								iLocal_65 = 4;
							}
						}
					}
					if (((!func_151(8) && func_224(Local_48[4 /*4*/])) && func_224(Local_47[1 /*5*/])) && func_93())
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[4 /*4*/], unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) };
						if (vVar0.x >= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 1110.712f, 2695.67f, 36.77993f, 1109.166f, 2665.531f, 48.50355f, 71f, 0, true, 0))
						{
							if ((((func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 15f, 0f), 2f)) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_92(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_87(4, 1, 3, 0);
								iLocal_65 = 4;
							}
						}
					}
					if (!func_151(8) && func_85())
					{
						func_108(6);
						if (func_224(Local_47[0 /*5*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_47[0 /*5*/], false);
							BRAIN::TASK_COMBAT_PED(Local_47[0 /*5*/], AUDIO::_0x0626A247D2405330(), 0, 16);
							Local_47[0 /*5*/].f_3 = 3;
						}
						if (func_224(Local_47[1 /*5*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_47[1 /*5*/], false);
							BRAIN::TASK_COMBAT_PED(Local_47[1 /*5*/], AUDIO::_0x0626A247D2405330(), 0, 16);
							Local_47[1 /*5*/].f_3 = 3;
						}
						if (func_224(Local_48[3 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[3 /*4*/], 1);
						}
						if (func_224(Local_48[4 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[4 /*4*/], 1);
						}
						iLocal_65++;
					}
					break;
				
				case 3:
					if ((!func_224(Local_47[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1)) && (!func_224(Local_47[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1)))
					{
						iLocal_65++;
					}
					break;
				
				case 4:
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_81);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_81, 1862763509);
					if (func_224(Local_48[3 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[3 /*4*/], 1);
					}
					if (func_224(Local_48[4 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[4 /*4*/], 1);
					}
					STREAMING::REQUEST_MODEL(iLocal_78);
					SYSTEM::SETTIMERA(0);
					iLocal_65++;
					break;
				
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_78))
					{
						STREAMING::REQUEST_MODEL(iLocal_79);
						iLocal_65++;
					}
					break;
				
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_79))
					{
						STREAMING::REQUEST_MODEL(iLocal_80);
						iLocal_65++;
					}
					break;
				
				case 7:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_78) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && STREAMING::HAS_MODEL_LOADED(iLocal_80))
					{
						func_104(5, vLocal_49, 3212836864, 0);
						func_104(6, vLocal_49, 3212836864, 0);
						func_104(7, vLocal_49, 3212836864, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
						func_80(2, 0, vLocal_49, 3212836864);
						func_80(3, 0, vLocal_49, 3212836864);
						func_80(4, 0, vLocal_49, 3212836864);
						func_80(5, 0, vLocal_49, 3212836864);
						func_80(6, 0, vLocal_49, 3212836864);
						func_80(7, 0, vLocal_49, 3212836864);
						if (func_151(10) && func_151(11))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_80);
						iLocal_65++;
					}
					break;
				
				case 8:
					if (!func_224(Local_47[0 /*5*/]) && !func_224(Local_47[1 /*5*/]))
					{
						if (SYSTEM::TIMERA() < 16000)
						{
							SYSTEM::SETTIMERA(16000);
						}
					}
					if (SYSTEM::TIMERA() > 20000 && func_79(AUDIO::_0x0626A247D2405330(), vLocal_51, 1) >= 150f)
					{
						iLocal_65++;
					}
					break;
				
				case 9:
					if (func_93() || (func_224(Local_48[0 /*4*/]) && func_78(AUDIO::_0x0626A247D2405330(), Local_48[0 /*4*/], 1) <= 35f))
					{
						vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar1, iVar5, &vVar2, 1, 5f, 0f))
						{
							PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar2, &uVar7, &uVar8);
							if (((uVar8 & 4 == 0 && (!func_77() || uVar8 & 8 == 0)) && (func_76() || uVar8 & 1 == 0)) && !func_75(vVar2, 1084227584))
							{
								fVar6 = func_74(vVar2, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true));
								vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, fVar6, 6f, -6f, 0f) };
								vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, fVar6, -6f, -6f, 0f) };
								if ((((!CAM::IS_SPHERE_VISIBLE(vVar2, 7f) && !CAM::IS_SPHERE_VISIBLE(vVar3, 7f)) && !CAM::IS_SPHERE_VISIBLE(vVar4, 7f)) && !func_75(vVar3, 1084227584)) && !func_75(vVar4, 1084227584))
								{
									func_73(Local_48[5 /*4*/], vVar2);
									func_73(Local_48[6 /*4*/], vVar3);
									func_73(Local_48[7 /*4*/], vVar4);
									iLocal_59 = MISC::GET_GAME_TIMER();
									iVar9 = 2;
									while (iVar9 <= 7)
									{
										if (func_224(Local_47[iVar9 /*5*/]))
										{
											Local_47[iVar9 /*5*/].f_1 = func_70(Local_47[iVar9 /*5*/], 1, 145);
											if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar9 /*5*/], 0))
											{
												if (func_69(Local_47[iVar9 /*5*/], 0) == 4294967295)
												{
													HUD::SET_BLIP_SCALE(Local_47[iVar9 /*5*/].f_1, 1f);
												}
												else
												{
													HUD::SET_BLIP_ALPHA(Local_47[iVar9 /*5*/].f_1, 0);
													HUD::_0x54318C915D27E4CE(Local_47[iVar9 /*5*/].f_1, 1);
												}
											}
										}
										iVar9++;
									}
									func_108(2);
									func_108(7);
									iLocal_69 = (MISC::GET_GAME_TIMER() + 60000);
									func_68(6);
									iLocal_65++;
								}
							}
						}
					}
					break;
				
				case 10:
					if (((((func_224(Local_47[2 /*5*/]) || func_224(Local_47[3 /*5*/])) || func_224(Local_47[4 /*5*/])) || func_224(Local_47[5 /*5*/])) || func_224(Local_47[6 /*5*/])) || func_224(Local_47[7 /*5*/]))
					{
						if (func_151(7))
						{
							if (func_224(Local_48[5 /*4*/]))
							{
								func_61(5, PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), &uLocal_60);
							}
							if (func_224(Local_48[6 /*4*/]))
							{
								func_61(6, PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), &uLocal_61);
							}
							if (func_224(Local_48[7 /*4*/]))
							{
								func_61(7, PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), &uLocal_62);
							}
						}
					}
					else if (!func_224(Local_47[0 /*5*/]) && !func_224(Local_47[1 /*5*/]))
					{
						if (func_224(Local_48[0 /*4*/]))
						{
							iLocal_46 = 2;
						}
						else
						{
							func_60();
						}
					}
					break;
			}
			break;
		
		case 2:
			func_59(1);
			break;
	}
}

void func_59(int iParam0)//Position - 0x52F1
{
	iLocal_65 = 0;
	iLocal_46 = 0;
	iLocal_45 = iParam0;
}

void func_60()//Position - 0x5303
{
	if (func_224(Local_48[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[0 /*4*/], 2);
	}
	func_197(1, 0);
}

void func_61(int iParam0, int iParam1, var uParam2)//Position - 0x5327
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_48[iParam0 /*4*/], 0))
	{
		if ((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_48[iParam0 /*4*/] != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_67(Local_48[iParam0 /*4*/]))
		{
			if (iParam0 == 3 || iParam0 == 4)
			{
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else
			{
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (func_79(iParam1, vLocal_55, 1) >= fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1))
			{
				vLocal_57 = { vLocal_55 };
				fLocal_58 = fLocal_56;
				vLocal_55 = { unk_0x8000C77B5F336760(iParam1, true) };
				fLocal_56 = ENTITY::GET_ENTITY_HEADING(iParam1);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_48[iParam0 /*4*/]))
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_59) > 1500) && func_78(Local_48[iParam0 /*4*/], iParam1, 1) > func_79(iParam1, vLocal_57, 1)) && func_66(iParam0)) && func_79(iParam1, vLocal_57, 1) >= fVar0) && func_78(Local_48[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_65(Local_48[iParam0 /*4*/], vLocal_57, 1153138688)) && func_64(Local_48[iParam0 /*4*/], iParam1, vLocal_57)) && !func_63(vLocal_57)) && !CAM::IS_SPHERE_VISIBLE(vLocal_57, 4f)) && !func_75(vLocal_57, 1084227584))
			{
				MISC::CLEAR_AREA_OF_PEDS(vLocal_57, 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(vLocal_57, 5f, 0, 0, 0, 0, false, 0);
				if (iParam0 == 3 || iParam0 == 4)
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_48[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_62(0, 3);
					}
					else
					{
						func_62(1, 3);
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_48[iParam0 /*4*/], vLocal_57, 1, false, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[iParam0 /*4*/], 1084227584);
				ENTITY::SET_ENTITY_HEADING(Local_48[iParam0 /*4*/], fLocal_58);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iParam0 /*4*/], true, true, 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
				*uParam2 = MISC::GET_GAME_TIMER();
				Local_48[iParam0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				iLocal_59 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*uParam2 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_62(int iParam0, int iParam1)//Position - 0x55BD
{
	MISC::SET_BIT(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_63(vector3 vParam0)//Position - 0x55D3
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1, vector3 vParam2)//Position - 0x55FD
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, unk_0x8000C77B5F336760(iParam0, true)) };
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, vParam2) };
	if ((vVar0.y > 0f && vVar1.y > 0f) || (vVar0.y < 0f && vVar1.y < 0f))
	{
		return 1;
	}
	if (iParam0 == Local_48[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_48[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0, vector3 vParam1, float fParam2)//Position - 0x5694
{
	if (func_79(iParam0, vParam1, 1) <= fParam2)
	{
		return 1;
	}
	if (iParam0 == Local_48[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_48[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_47[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x56F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	if (func_151(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_151(7))
	{
		iVar1 = 7;
	}
	else if (func_151(6))
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar3 = 4294967295;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (func_224(Local_48[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || (MISC::GET_GAME_TIMER() - Local_48[iVar2 /*4*/].f_2) > iVar3)
			{
				iVar3 = (MISC::GET_GAME_TIMER() - Local_48[iVar2 /*4*/].f_2);
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || func_78(Local_48[iVar2 /*4*/], AUDIO::_0x0626A247D2405330(), 1) > fVar5)
			{
				fVar5 = func_78(Local_48[iVar2 /*4*/], AUDIO::_0x0626A247D2405330(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x57D1
{
	int iVar0;
	
	if (func_224(iParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 4294967295, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (func_224(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)//Position - 0x5808
{
	GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_66, iParam0);
}

int func_69(int iParam0, int iParam1)//Position - 0x5818
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = 4294967295;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_70(int iParam0, bool bParam1, int iParam2)//Position - 0x589D
{
	int iVar0;
	
	iVar0 = func_71(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_19E56.f_6D76[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_19E56.f_6D76[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_71(int iParam0, bool bParam1, bool bParam2)//Position - 0x58EF
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_72(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_72(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_72(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_72(bool bParam0, float fParam1, float fParam2)//Position - 0x5993
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_73(int iParam0, vector3 vParam1)//Position - 0x59AA
{
	if (func_224(iParam0))
	{
		unk_0x346478B12F69D4E3(iParam0, false);
		MISC::CLEAR_AREA_OF_PEDS(vParam1, 1.5f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(vParam1, 3f, 0, 0, 0, 0, false, 0);
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
		ENTITY::SET_ENTITY_HEADING(iParam0, func_74(unk_0x8000C77B5F336760(iParam0, true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)));
		if (func_224(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0)))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				BRAIN::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0), AUDIO::_0x0626A247D2405330());
			}
			else
			{
				BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0), iParam0, AUDIO::_0x0626A247D2405330(), 2, 100f, 786469, -1f, -1f, 1);
			}
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) * 1.2f));
	}
}

float func_74(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x5A74
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_75(vector3 vParam0, float fParam1)//Position - 0x5A8E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar1 /*4*/], vParam0, fParam1, fParam1, fParam1, false, true, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_76()//Position - 0x5ADA
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), &vVar0, 1, 1077936128, 0))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar0, &uVar2, &uVar1))
		{
			return uVar1 & 1 == 1;
		}
	}
	return 0;
}

int func_77()//Position - 0x5B14
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), &vVar0, 1, 1077936128, 0))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar0, &uVar2, &uVar1))
		{
			return uVar1 & 8 == 0;
		}
	}
	return 0;
}

float func_78(int iParam0, int iParam1, bool bParam2)//Position - 0x5B4F
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

float func_79(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x5BAD
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

int func_80(int iParam0, bool bParam1, vector3 vParam2, float fParam3)//Position - 0x5BE7
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	int iVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	char* sVar65;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		iVar3 = joaat("weapon_unarmed");
		iVar4 = 0;
		iVar5 = 4294967295;
		vVar7 = { vLocal_49 };
		vVar8 = { vLocal_49 };
		iVar9 = 0;
		iVar10 = 1;
		iVar11 = 0;
		iVar12 = 0;
		iVar13 = 10;
		fVar14 = 0f;
		fVar15 = 0f;
		fVar16 = 60f;
		fVar17 = 5f;
		fVar18 = 120f;
		fVar19 = -90f;
		fVar20 = 90f;
		iVar21 = iLocal_81;
		bVar22 = true;
		bVar23 = true;
		bVar24 = false;
		bVar25 = true;
		bVar26 = true;
		bVar27 = true;
		bVar28 = false;
		bVar29 = true;
		bVar30 = false;
		bVar31 = true;
		bVar32 = true;
		bVar33 = false;
		bVar34 = false;
		bVar35 = true;
		bVar36 = false;
		bVar37 = true;
		bVar38 = true;
		bVar39 = false;
		iVar40 = 1;
		bVar41 = true;
		bVar42 = true;
		bVar43 = false;
		bVar44 = false;
		bVar45 = false;
		bVar46 = false;
		bVar47 = false;
		bVar48 = false;
		bVar49 = true;
		iVar50 = 0;
		bVar51 = false;
		bVar52 = false;
		iVar53 = 1;
		bVar54 = true;
		iVar55 = 0;
		bVar56 = false;
		bVar57 = false;
		bVar58 = false;
		bVar59 = false;
		bVar60 = false;
		bVar61 = false;
		bVar62 = true;
		bVar63 = true;
		bVar64 = false;
		switch (iParam0)
		{
			case 0:
				iVar2 = iLocal_79;
				iVar4 = Local_48[3 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				bVar28 = true;
				bVar64 = true;
				break;
			
			case 1:
				iVar2 = iLocal_79;
				iVar4 = Local_48[4 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				bVar28 = true;
				bVar64 = true;
				break;
			
			case 2:
				iVar2 = iLocal_80;
				iVar4 = Local_48[5 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 3:
				iVar2 = iLocal_79;
				iVar4 = Local_48[5 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 4:
				iVar2 = iLocal_79;
				iVar4 = Local_48[6 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 5:
				iVar2 = iLocal_80;
				iVar4 = Local_48[6 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 6:
				iVar2 = iLocal_80;
				iVar4 = Local_48[7 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			case 7:
				iVar2 = iLocal_80;
				iVar4 = Local_48[7 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_pistol");
				bVar30 = true;
				bVar27 = false;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		if (!func_84(vParam2, vLocal_49, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				vVar0 = { vParam2 };
			}
			else
			{
				vVar7 = { vParam2 };
			}
		}
		if (fParam3 != -1f)
		{
			fVar1 = fParam3;
		}
		if (func_224(iVar4))
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar4, 26, iVar2, iVar5, 1, true);
		}
		else
		{
			Local_47[iParam0 /*5*/] = PED::CREATE_PED(26, iVar2, vVar0, fVar1, 1, true);
			ENTITY::SET_ENTITY_COLLISION(Local_47[iParam0 /*5*/], bVar35, 0);
			ENTITY::_SET_ENTITY_COLLISION_2(Local_47[iParam0 /*5*/], !bVar59, 0);
		}
		if (bVar34)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_47[iParam0 /*5*/], vVar0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (iVar21 == iLocal_81)
			{
				Local_47[iParam0 /*5*/].f_1 = func_70(Local_47[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_47[iParam0 /*5*/].f_1 = func_70(Local_47[iParam0 /*5*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_47[iParam0 /*5*/], iVar53);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 213, bVar22);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 212, bVar23);
		ENTITY::SET_ENTITY_HEALTH(Local_47[iParam0 /*5*/], bVar24);
		PED::SET_PED_KEEP_TASK(Local_47[iParam0 /*5*/], bVar25);
		PED::SET_PED_DIES_WHEN_INJURED(Local_47[iParam0 /*5*/], bVar26);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 188, bVar49);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 42, !bVar27);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 9, bVar29);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 3, bVar31);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 342, bVar51);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_47[iParam0 /*5*/], bVar30, 1);
		PED::SET_PED_ARMOUR(Local_47[iParam0 /*5*/], iVar12);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 8, bVar33);
		ENTITY::SET_ENTITY_VISIBLE(Local_47[iParam0 /*5*/], bVar32, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_47[iParam0 /*5*/], bVar36);
		WEAPON::GIVE_WEAPON_TO_PED(Local_47[iParam0 /*5*/], iVar3, 4294967295, bVar28, bVar28);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 2, bVar37);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 1, bVar38);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 52, bVar39);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 13, bVar62);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_47[iParam0 /*5*/], iVar40);
		PED::SET_PED_CAN_BE_TARGETTED(Local_47[iParam0 /*5*/], bVar41);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 118, bVar42);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 115, bVar43);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 12, bVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 36, bVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 35, bVar46);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 29, bVar47);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 185, bVar48);
		PED::SET_PED_TO_LOAD_COVER(Local_47[iParam0 /*5*/], iVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_47[iParam0 /*5*/], 17, bVar56);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_47[iParam0 /*5*/], bVar57);
		AUDIO::STOP_PED_SPEAKING(Local_47[iParam0 /*5*/], bVar52);
		func_83(Local_47[iParam0 /*5*/], fVar16, fVar17, fVar18, fVar19, fVar20);
		unk_0x346478B12F69D4E3(Local_47[iParam0 /*5*/], bVar60);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 203, bVar61);
		PED::_0xA9B61A329BFDCBEA(Local_47[iParam0 /*5*/], !bVar61);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 366, bVar63);
		PED::SET_PED_CONFIG_FLAG(Local_47[iParam0 /*5*/], 134, bVar64);
		if (!bVar54)
		{
			func_62(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar65))
		{
			BRAIN::TASK_START_SCENARIO_IN_PLACE(Local_47[iParam0 /*5*/], sVar65, 4294967295, 0);
		}
		if (iVar11 > 0)
		{
			if (iVar11 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/]) || iVar55)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_47[iParam0 /*5*/], iVar11);
			}
			unk_0x65E471E4A2D56226(Local_47[iParam0 /*5*/], iVar11, 0);
		}
		if (iVar13 > 0)
		{
			PED::SET_PED_ACCURACY(Local_47[iParam0 /*5*/], iVar13);
		}
		if (fVar14 > 0f || fVar15 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_47[iParam0 /*5*/], fVar14, fVar15);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_47[iParam0 /*5*/], iVar21);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_47[iParam0 /*5*/], iVar6, 4294967295, vVar7, vVar8, 1, 1, 1, 0, 2, 1);
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], 0);
			func_62(iParam0, 1);
		}
		func_82(iParam0);
		func_81(iParam0);
		if (iVar9 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_47[iParam0 /*5*/], iVar3, iVar9);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_47[iParam0 /*5*/], iVar3, true);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_47[iParam0 /*5*/], iVar10);
		if (bVar58)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_47[iParam0 /*5*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_81(int iParam0)//Position - 0x6221
{
	if (func_224(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
			}
	}
}

void func_82(int iParam0)//Position - 0x6246
{
	if (func_224(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 1, 1, 0);
				break;
			
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_47[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			}
	}
}

void func_83(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x646A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

bool func_84(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x64A6
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_85()//Position - 0x64ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((func_224(Local_47[0 /*5*/]) && func_78(AUDIO::_0x0626A247D2405330(), Local_47[0 /*5*/], 1) >= 200f) && (func_224(Local_47[1 /*5*/]) && func_78(AUDIO::_0x0626A247D2405330(), Local_47[1 /*5*/], 1) >= 200f))
	{
		return 1;
	}
	if ((func_151(10) && !func_224(Local_47[0 /*5*/])) || (func_151(11) && !func_224(Local_47[1 /*5*/])))
	{
		return 1;
	}
	if ((func_224(Local_47[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[0 /*5*/], AUDIO::_0x0626A247D2405330()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[0 /*5*/], 0))) || (func_224(Local_47[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_47[1 /*5*/], AUDIO::_0x0626A247D2405330()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_47[1 /*5*/], 0))))
	{
		return 1;
	}
	if ((func_224(Local_48[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48[1 /*4*/], AUDIO::_0x0626A247D2405330(), 1)) || (func_224(Local_48[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48[2 /*4*/], AUDIO::_0x0626A247D2405330(), 1)))
	{
		return 1;
	}
	if (func_86(Local_48[3 /*4*/]) || func_86(Local_48[4 /*4*/]))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (func_224(iVar0))
	{
		fLocal_74 = ENTITY::GET_ENTITY_SPEED(iVar0);
	}
	else
	{
		fLocal_74 = 0f;
	}
	if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(AUDIO::_0x0626A247D2405330()))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(AUDIO::_0x0626A247D2405330());
		iVar1 = iVar2;
		if ((iVar1 == Local_48[3 /*4*/] && func_224(Local_47[0 /*5*/])) || (iVar1 == Local_48[4 /*4*/] && func_224(Local_47[1 /*5*/])))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x66B5
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((func_224(iParam0) && func_224(iVar0)) && fLocal_74 != 0f) && fLocal_74 >= 9f)
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <= (fLocal_74 * 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6715
{
	func_108(8);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], 5f);
	Local_47[iParam1 /*5*/].f_1 = func_70(Local_47[iParam1 /*5*/], 1, 145);
	ENTITY::SET_ENTITY_HEALTH(Local_47[iParam1 /*5*/], true);
	func_91();
	BRAIN::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_48[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_48[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
	BRAIN::TASK_SWAP_WEAPON(0, 0);
	BRAIN::TASK_COMBAT_PED(0, AUDIO::_0x0626A247D2405330(), 0, 16);
	func_90(Local_47[iParam1 /*5*/]);
	func_88(Local_47[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_47[iParam1 /*5*/].f_3 = 3;
	if (func_224(Local_48[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			vLocal_54 = { 1031.986f, 2693.441f, 38.6861f };
		}
		else
		{
			vLocal_54 = { 1027.001f, 2686.89f, 37.8987f };
		}
		iLocal_71 = MISC::GET_GAME_TIMER() + 1000;
		if (func_224(Local_47[iParam3 /*5*/]))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_47[iParam3 /*5*/], true);
			BRAIN::TASK_VEHICLE_MISSION(Local_47[iParam3 /*5*/], Local_48[iParam2 /*4*/], Local_48[0 /*4*/], 2, 30f, 262144, -1f, -1f, 1);
		}
		Local_47[iParam3 /*5*/].f_3++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_81, 1862763509);
}

void func_88(int iParam0, char* sParam1, int iParam2)//Position - 0x6859
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_89(iParam2), 1);
}

int func_89(int iParam0)//Position - 0x6870
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0)//Position - 0x6A65
{
	if (func_151(0))
	{
		CUTSCENE::_0x8D9DF6ECA8768583(iLocal_82);
		func_68(0);
	}
	BRAIN::TASK_PERFORM_SEQUENCE(iParam0, iLocal_82);
	BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_82);
}

void func_91()//Position - 0x6A8E
{
	if (!func_151(0))
	{
		BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_82);
		BRAIN::OPEN_SEQUENCE_TASK(&iLocal_82);
		func_108(0);
	}
}

int func_92(vector3 vParam0, float fParam1)//Position - 0x6AB0
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330());
	fVar1 = func_79(AUDIO::_0x0626A247D2405330(), vParam0, 1);
	vVar2 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
	vVar3 = { vVar2 + ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330()) };
	if ((fVar1 / fVar0) <= fParam1 && MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vParam0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vParam0, true))
	{
		return 1;
	}
	return 0;
}

bool func_93()//Position - 0x6B22
{
	return (func_224(Local_48[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_48[0 /*4*/], 0));
}

int func_94(int iParam0)//Position - 0x6B46
{
	if (func_98())
	{
		Global_19E4C = 1;
		Global_19E49 = MISC::GET_GAME_TIMER();
		if (func_15(Global_19E4B))
		{
			func_95(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_15(Global_19E4B))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_95(int iParam0)//Position - 0x6B99
{
	switch (iParam0)
	{
		case 0:
			if (Global_19E56.f_6187.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_96(func_97(iParam0), 4294967295);
					Global_19E56.f_6187.f_2++;
					MISC::SET_BIT(&Global_19E52, 0);
				}
			}
			break;
		
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_96(func_97(iParam0), 4294967295);
					Global_19E56.f_6187.f_3++;
					MISC::SET_BIT(&Global_19E52, 1);
				}
			}
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_96(func_97(iParam0), 4294967295);
					Global_19E56.f_6187.f_4++;
					MISC::SET_BIT(&Global_19E52, 2);
				}
			}
			break;
	}
}

void func_96(char* sParam0, int iParam1)//Position - 0x6C7A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_97(int iParam0)//Position - 0x6C91
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_98()//Position - 0x6CD4
{
	switch (func_99(&Global_63AE, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_99(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6D0A
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_162B5.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_103(0))
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *uParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*uParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *uParam0)
		{
			return 1;
		}
		*uParam0 = 4294967295;
	}
	if (*uParam0 == 4294967295)
	{
		if (!func_101(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_100(uParam0, iParam4);
		}
	}
	return 2;
}

void func_100(var uParam0, int iParam1)//Position - 0x6E41
{
	int iVar0;
	
	if (Global_8CEE == 0)
	{
		return;
	}
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8CEE)
	{
		if (Global_8CF4[iVar0 /*4*/] == *uParam0)
		{
			Global_8CF4[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 4294967295;
}

bool func_101(int iParam0)//Position - 0x6E90
{
	return func_102(iParam0, Global_8D15);
}

int func_102(int iParam0, int iParam1)//Position - 0x6EA1
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

int func_103(int iParam0)//Position - 0x7082
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_101(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_104(int iParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x70A4
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	vector3 vVar26;
	char* sVar27;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*4*/]))
	{
		iVar3 = 0;
		bVar4 = true;
		bVar5 = true;
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = true;
		bVar11 = false;
		bVar12 = false;
		iVar13 = 0;
		iVar14 = 0;
		iVar15 = 0;
		bVar16 = true;
		bVar17 = false;
		bVar18 = true;
		iVar19 = 0;
		bVar20 = false;
		fVar22 = -1f;
		fVar23 = -1f;
		switch (iParam0)
		{
			case 0:
				vVar0 = { vLocal_51 };
				fVar1 = 89.7263f;
				iVar2 = iLocal_75;
				bVar10 = false;
				iVar15 = 1;
				bVar16 = false;
				iVar19 = 1;
				bVar6 = true;
				bVar18 = false;
				iVar3 = 7;
				break;
			
			case 3:
				vVar0 = { vLocal_52 };
				fVar1 = 175.3714f;
				iVar2 = iLocal_76;
				bVar8 = true;
				iVar15 = 1;
				bVar16 = false;
				sVar27 = "96NWO218";
				iVar3 = 2;
				break;
			
			case 4:
				vVar0 = { vLocal_53 };
				fVar1 = 171f;
				iVar2 = iLocal_76;
				bVar8 = true;
				iVar15 = 1;
				bVar16 = false;
				sVar27 = "01DTS039";
				iVar3 = 2;
				break;
			
			case 1:
				vVar0 = { 930.46f, 2719.65f, 42.41f };
				fVar1 = 180.53f;
				iVar2 = iLocal_77;
				break;
			
			case 2:
				vVar0 = { 1141.17f, 2711.97f, 40.04f };
				fVar1 = 176.67f;
				iVar2 = iLocal_77;
				break;
			
			case 5:
				vVar0 = { 514.5844f, -649.9937f, 23.7512f };
				fVar1 = 182.0097f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "18NJM316";
				break;
			
			case 6:
				vVar0 = { 507.3959f, -653.6174f, 23.7512f };
				fVar1 = 177.8055f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "28HDT291";
				break;
			
			case 7:
				vVar0 = { 1200.547f, -1553.607f, 38.4019f };
				fVar1 = 0.0001f;
				iVar2 = iLocal_78;
				bVar7 = true;
				bVar8 = true;
				bVar18 = false;
				sVar27 = "23DJT162";
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		if (!func_84(vParam1, vLocal_49, 0))
		{
			vVar0 = { vParam1 };
		}
		if (fParam2 != -1f)
		{
			fVar1 = fParam2;
		}
		Local_48[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar2, vVar0, fVar1, true, true, false);
		func_107(iParam0);
		func_106(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_48[iParam0 /*4*/], bVar5, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar24))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_48[iParam0 /*4*/], iVar24, 4294967295, vVar25, vVar26, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_48[iParam0 /*4*/], bVar4, 0);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_48[iParam0 /*4*/], bVar6);
		unk_0x346478B12F69D4E3(Local_48[iParam0 /*4*/], bVar7);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iParam0 /*4*/], bVar8, true, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_48[iParam0 /*4*/], bVar11);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[iParam0 /*4*/], bVar12, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_48[iParam0 /*4*/], iVar13);
		VEHICLE::_0x4D9D109F63FEE1D4(Local_48[iParam0 /*4*/], iVar14);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_48[iParam0 /*4*/], bVar16, 0);
		VEHICLE::_0x2B6747FAA9DB9D6B(Local_48[iParam0 /*4*/], iVar15);
		unk_0xF82197F205B9D8FD(Local_48[iParam0 /*4*/], bVar17);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_48[iParam0 /*4*/], bVar18);
		VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_48[iParam0 /*4*/], iVar19);
		ENTITY::_SET_ENTITY_COLLISION_2(Local_48[iParam0 /*4*/], !bVar20, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar27))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_48[iParam0 /*4*/], sVar27);
		}
		if (fVar21 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iParam0 /*4*/], fVar21);
		}
		if (bVar9)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_48[iParam0 /*4*/]);
		}
		if (fVar22 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_48[iParam0 /*4*/], fVar22);
		}
		if (fVar23 >= 0f)
		{
			VEHICLE::_0xE6F13851780394DA(Local_48[iParam0 /*4*/], fVar23);
		}
		if (iVar3 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_48[iParam0 /*4*/], iVar3);
		}
		if (bParam3)
		{
			Local_48[iParam0 /*4*/].f_1 = func_105(Local_48[iParam0 /*4*/], bVar10, 0);
		}
	}
	return 1;
}

int func_105(int iParam0, bool bParam1, bool bParam2)//Position - 0x743F
{
	return func_71(iParam0, !bParam1, bParam2);
}

void func_106(int iParam0)//Position - 0x7452
{
	if (func_224(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_48[iParam0 /*4*/], 15f);
				break;
			}
	}
}

void func_107(int iParam0)//Position - 0x749E
{
	if (func_224(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 48, 48);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			
			case 6:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 58, 58);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			
			case 7:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 94, 94);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 8, 156);
				break;
			
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_48[iParam0 /*4*/], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_48[iParam0 /*4*/], 61, 156);
				break;
			}
	}
}

void func_108(int iParam0)//Position - 0x754B
{
	MISC::SET_BIT(&iLocal_66, iParam0);
}

void func_109()//Position - 0x755B
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	}
	func_119(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_81, iLocal_81);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_81, 1862763509);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330(), 1862763509);
	func_110(1);
}

void func_110(bool bParam0)//Position - 0x75D1
{
	func_111(39, bParam0);
	func_111(40, bParam0);
	func_111(41, bParam0);
	func_111(42, bParam0);
	func_111(43, bParam0);
	func_111(44, bParam0);
}

void func_111(int iParam0, bool bParam1)//Position - 0x7609
{
	if (bParam1)
	{
		if (!func_118(iParam0, 2, 1))
		{
			func_117(iParam0, 2, 1);
		}
	}
	else if (func_118(iParam0, 2, 1))
	{
		func_112(iParam0, 2, 1);
	}
}

void func_112(int iParam0, int iParam1, bool bParam2)//Position - 0x7640
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C64.f_538[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_115(func_116(iParam0), 4294967295, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam1);
			func_113(func_116(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x76B2
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_114(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_114(var uParam0)//Position - 0x76E2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_13();
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

int func_115(int iParam0, int iParam1, int iParam2)//Position - 0x7716
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_114(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_116(int iParam0)//Position - 0x7748
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

void func_117(int iParam0, int iParam1, bool bParam2)//Position - 0x7A4B
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_16C64.f_538[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_115(func_116(iParam0), 4294967295, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_113(func_116(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

int func_118(int iParam0, int iParam1, bool bParam2)//Position - 0x7ABD
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	if (bParam2)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C64.f_538[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_115(func_116(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_119(bool bParam0)//Position - 0x7B27
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_78, bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_76, bParam0);
}

void func_120()//Position - 0x7B3F
{
	if (!func_150())
	{
		if (func_137())
		{
			func_197(1, 0);
		}
	}
	RECORDING::_0x208784099002BC30("RE_DUEL", 0);
	func_135();
	func_130();
	func_126();
	func_121();
	if ((func_151(5) && func_224(Local_48[iLocal_83 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_67)
	{
		AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(Local_48[iLocal_83 /*4*/]);
	}
	if (func_151(6))
	{
		if (iLocal_68 == 0)
		{
			if (func_79(AUDIO::_0x0626A247D2405330(), vLocal_51, 1) >= 150f)
			{
				iLocal_68 = MISC::GET_GAME_TIMER() + 30000;
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_68)
		{
			func_68(6);
		}
	}
	if (func_151(7))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_69)
		{
			func_68(7);
		}
	}
	if ((func_151(9) && func_224(Local_48[0 /*4*/])) && func_78(AUDIO::_0x0626A247D2405330(), Local_48[0 /*4*/], 1) <= 35f)
	{
		if (!func_151(10))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_52, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_72) >= 1000 && !func_75(vLocal_52, 7f)) && func_79(AUDIO::_0x0626A247D2405330(), vLocal_52, 1) >= 50f)
				{
					MISC::CLEAR_AREA(vLocal_52, 7f, 1, 0, 0, false);
					func_104(3, vLocal_49, 3212836864, 0);
					func_104(1, vLocal_49, 3212836864, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_48[3 /*4*/], Local_48[1 /*4*/], 1065353216);
					func_80(0, 0, vLocal_49, 3212836864);
					func_108(10);
					if (iLocal_65 > 2)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_47[0 /*5*/], false);
						BRAIN::TASK_COMBAT_PED(Local_47[0 /*5*/], AUDIO::_0x0626A247D2405330(), 0, 16);
						Local_47[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_72 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_151(11))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_53, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_73) >= 1000 && !func_75(vLocal_53, 7f)) && func_79(AUDIO::_0x0626A247D2405330(), vLocal_53, 1) >= 50f)
				{
					MISC::CLEAR_AREA(vLocal_53, 7f, 1, 0, 0, false);
					func_104(4, vLocal_49, 3212836864, 0);
					func_104(2, vLocal_49, 3212836864, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_48[4 /*4*/], Local_48[2 /*4*/], 1065353216);
					func_80(1, 0, vLocal_49, 3212836864);
					func_108(11);
					if (iLocal_65 > 2)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_47[1 /*5*/], false);
						BRAIN::TASK_COMBAT_PED(Local_47[1 /*5*/], AUDIO::_0x0626A247D2405330(), 0, 16);
						Local_47[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_73 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_151(10) && func_151(11))
		{
			func_68(9);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
		}
	}
	if (func_151(8))
	{
		if (iLocal_70 == 0)
		{
			iLocal_70 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_70)
		{
			func_68(8);
			func_108(6);
		}
	}
}

void func_121()//Position - 0x7E27
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar0 /*5*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iVar0 /*5*/], 0))
			{
				if (!func_125(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 1f);
					func_62(iVar0, 0);
				}
				if (func_69(Local_47[iVar0 /*5*/], 0) != 4294967295)
				{
					if (func_124(iVar0))
					{
						if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 0);
							HUD::_0x54318C915D27E4CE(Local_47[iVar0 /*5*/].f_1, 1);
						}
					}
					else if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) == 0)
					{
						HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 255);
						HUD::_0x54318C915D27E4CE(Local_47[iVar0 /*5*/].f_1, 0);
					}
				}
			}
			else if (func_125(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_47[iVar0 /*5*/].f_1, 0.7f);
				func_123(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_47[iVar0 /*5*/].f_1, 255);
					HUD::_0x54318C915D27E4CE(Local_47[iVar0 /*5*/].f_1, 0);
				}
			}
			if (PED::IS_PED_INJURED(Local_47[iVar0 /*5*/]))
			{
				func_122(&(Local_47[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_48[iVar0 /*4*/].f_1))
		{
			if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_48[iVar0 /*4*/], 0))
			{
				func_122(&(Local_48[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_122(int iParam0)//Position - 0x7FB2
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_123(int iParam0, int iParam1)//Position - 0x7FD2
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_47[iParam0 /*5*/].f_2), iParam1);
}

int func_124(int iParam0)//Position - 0x7FE8
{
	if (iParam0 == 3)
	{
		if (!func_224(Local_47[2 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 5)
	{
		if (!func_224(Local_47[4 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 7)
	{
		if (!func_224(Local_47[6 /*5*/]))
		{
			return 0;
		}
	}
	return 1;
}

bool func_125(int iParam0, int iParam1)//Position - 0x8036
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_47[iParam0 /*5*/].f_2, iParam1);
}

void func_126()//Position - 0x804C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*4*/]))
		{
			func_127(iVar0);
		}
		iVar0++;
	}
}

void func_127(int iParam0)//Position - 0x807A
{
	if (func_224(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!func_224(Local_47[2 /*5*/]) && !func_224(Local_47[3 /*5*/])) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_48[iParam0 /*4*/], 0))
				{
					func_128(iParam0, 0);
				}
				break;
			
			case 6:
				if ((!func_224(Local_47[4 /*5*/]) && !func_224(Local_47[5 /*5*/])) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_48[iParam0 /*4*/], 0))
				{
					func_128(iParam0, 0);
				}
				break;
			
			case 7:
				if ((!func_224(Local_47[6 /*5*/]) && !func_224(Local_47[7 /*5*/])) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_48[iParam0 /*4*/], 0))
				{
					func_128(iParam0, 0);
				}
				break;
			
			case 3:
				if (!func_224(Local_47[0 /*5*/]) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_48[iParam0 /*4*/], 0))
				{
					if (func_78(AUDIO::_0x0626A247D2405330(), Local_48[iParam0 /*4*/], 1) >= 50f)
					{
						func_128(iParam0, 0);
					}
				}
				if (func_151(6))
				{
					func_61(iParam0, PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), &uLocal_63);
				}
				break;
			
			case 4:
				if (!func_224(Local_47[1 /*5*/]) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_48[iParam0 /*4*/], 0))
				{
					if (func_78(AUDIO::_0x0626A247D2405330(), Local_48[iParam0 /*4*/], 1) >= 50f)
					{
						func_128(iParam0, 0);
					}
				}
				if (func_151(6))
				{
					func_61(iParam0, PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), &uLocal_64);
				}
				break;
			
			case 1:
				if (!func_224(Local_48[3 /*4*/]) || func_78(Local_48[3 /*4*/], Local_48[iParam0 /*4*/], 1) >= 150f)
				{
					func_128(iParam0, 0);
				}
				break;
			
			case 2:
				if (!func_224(Local_48[4 /*4*/]) || func_78(Local_48[4 /*4*/], Local_48[iParam0 /*4*/], 1) >= 150f)
				{
					func_128(iParam0, 0);
				}
				break;
			
			case 0:
				switch (Local_48[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_93())
						{
							func_108(1);
							func_122(&(Local_48[iParam0 /*4*/].f_1));
							Local_48[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_48[iParam0 /*4*/]))
	{
		func_128(iParam0, 0);
	}
	else
	{
		func_128(iParam0, 1);
	}
}

void func_128(int iParam0, bool bParam1)//Position - 0x82EA
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*4*/]))
	{
		func_122(&(Local_48[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_48[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_48[iParam0 /*4*/]);
		}
		if (func_129(&(Local_48[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_48[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_48[iParam0 /*4*/]));
			}
		}
		Local_48[iParam0 /*4*/] = 0;
		Local_48[iParam0 /*4*/].f_2 = 0;
		Local_48[iParam0 /*4*/].f_3 = 0;
	}
}

int func_129(var uParam0)//Position - 0x8364
{
	if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_130()//Position - 0x8380
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_47[iVar0 /*5*/]))
		{
			func_131(iVar0);
		}
		iVar0++;
	}
}

void func_131(int iParam0)//Position - 0x83AE
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	if (func_224(Local_47[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (iParam0 == 0)
				{
					iVar0 = 3;
					iVar1 = 4;
				}
				else
				{
					iVar0 = 4;
					iVar1 = 3;
				}
				switch (Local_47[iParam0 /*5*/].f_3)
				{
					case 0:
						Local_47[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
						if (func_78(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 1) <= 15f)
						{
							PED::SET_IK_TARGET(Local_47[iParam0 /*5*/], 1, AUDIO::_0x0626A247D2405330(), 31086, vLocal_49, 0, 4294967295, 4294967295);
						}
						break;
					
					case 1:
						if (func_224(Local_48[iVar0 /*4*/]))
						{
							VEHICLE::_0x88BC673CA9E0AE99(Local_48[iVar0 /*4*/], 1);
							if (func_224(Local_48[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_48[iVar0 /*4*/], Local_48[0 /*4*/]))
							{
								if ((((((MISC::GET_GAME_TIMER() >= iLocal_71 && !func_151(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar0 /*4*/], vLocal_54, 7f, 7f, 7f, false, true, 0)) && func_79(AUDIO::_0x0626A247D2405330(), vLocal_54, 1) < func_78(Local_48[iVar0 /*4*/], AUDIO::_0x0626A247D2405330(), 1)) && !CAM::IS_SPHERE_VISIBLE(vLocal_54, 7f)) && !CAM::IS_SPHERE_VISIBLE(unk_0x8000C77B5F336760(Local_48[iVar0 /*4*/], true), 7f)) && !func_75(vLocal_54, 8f))
								{
									fVar3 = func_74(vLocal_54, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true));
									MISC::CLEAR_AREA_OF_VEHICLES(vLocal_54, 8f, 0, 0, 0, 0, false, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_54, fVar3, 0f, -8f, 0f), 8f, 0, 0, 0, 0, false, 0);
									ENTITY::SET_ENTITY_COORDS(Local_48[iVar0 /*4*/], vLocal_54, 1, false, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_48[iVar0 /*4*/], 1084227584);
									ENTITY::SET_ENTITY_HEADING(Local_48[iVar0 /*4*/], fVar3);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_48[iVar0 /*4*/], true, true, 0);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iVar0 /*4*/], 30f);
									func_108(5);
									iLocal_83 = iVar0;
									iLocal_67 = MISC::GET_GAME_TIMER() + 5000;
								}
								if (!func_151(12) && ENTITY::IS_ENTITY_AT_COORD(Local_48[iVar0 /*4*/], vLocal_54, 7f, 7f, 7f, false, true, 0))
								{
									func_108(12);
								}
								if (((MISC::GET_GAME_TIMER() >= iLocal_71 && ENTITY::IS_ENTITY_OCCLUDED(Local_48[iVar0 /*4*/])) && func_224(Local_48[iVar1 /*4*/])) && func_78(Local_48[iVar0 /*4*/], Local_48[iVar1 /*4*/], 1) >= 20f)
								{
									vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_48[iVar0 /*4*/], unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) };
									if (vVar2.x < -3.5f || vVar2.x > 3.5f)
									{
										fVar4 = ENTITY::GET_ENTITY_SPEED(Local_48[iVar0 /*4*/]);
										fVar4 = func_134(fVar4, 20f, 50f);
										ENTITY::SET_ENTITY_HEADING(Local_48[iVar0 /*4*/], func_74(unk_0x8000C77B5F336760(Local_48[iVar0 /*4*/], true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)));
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_48[iVar0 /*4*/], fVar4);
									}
								}
								if ((func_125(iParam0, 3) || func_78(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 1) <= 15f) || (func_224(Local_48[iVar1 /*4*/]) && func_78(Local_48[iVar0 /*4*/], Local_48[iVar1 /*4*/], 1) <= 15f))
								{
									if (func_78(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 1) <= 15f)
									{
										if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
										{
											Local_47[iParam0 /*5*/].f_1 = func_70(Local_47[iParam0 /*5*/], 1, 145);
											func_88(Local_47[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
										}
									}
									Local_47[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
								{
									Local_47[iParam0 /*5*/].f_1 = func_70(Local_47[iParam0 /*5*/], 1, 145);
									func_88(Local_47[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
								Local_47[iParam0 /*5*/].f_3++;
							}
						}
						break;
					
					case 2:
						if (func_224(Local_48[iVar0 /*4*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_47[iParam0 /*5*/], false);
							BRAIN::TASK_COMBAT_PED(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 0, 16);
							Local_47[iParam0 /*5*/].f_3++;
						}
						break;
					
					case 3:
						if (!HUD::DOES_BLIP_EXIST(Local_47[iParam0 /*5*/].f_1))
						{
							if (func_78(AUDIO::_0x0626A247D2405330(), Local_47[iParam0 /*5*/], 1) <= 85f)
							{
								Local_47[iParam0 /*5*/].f_1 = func_70(Local_47[iParam0 /*5*/], 1, 145);
							}
						}
						if (func_151(6) || func_151(8))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], 0) && func_78(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 1) >= 250f)
							{
								func_133(iParam0, 0);
							}
						}
						else if (func_78(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 1) >= 250f)
						{
							func_133(iParam0, 0);
						}
						break;
				}
				break;
			
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_151(7))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330()) && !func_132(Local_47[iParam0 /*5*/], 579380604, 1))
					{
						BRAIN::TASK_COMBAT_PED(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 0, 16);
					}
				}
				if (func_151(7))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], 0) && func_78(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 1) >= 250f)
					{
						func_133(iParam0, 0);
					}
				}
				else if (func_151(2) && func_78(Local_47[iParam0 /*5*/], AUDIO::_0x0626A247D2405330(), 1) >= 250f)
				{
					func_133(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_125(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_47[iParam0 /*5*/], 1);
			ENTITY::DETACH_ENTITY(Local_47[iParam0 /*5*/], 1, false);
			func_123(iParam0, 1);
		}
		if (!func_125(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_47[iParam0 /*5*/]))
			{
				func_133(iParam0, 0);
			}
			else
			{
				func_133(iParam0, 1);
			}
		}
	}
}

int func_132(int iParam0, int iParam1, bool bParam2)//Position - 0x89A2
{
	int iVar0;
	
	iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_133(int iParam0, bool bParam1)//Position - 0x89E8
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_47[iParam0 /*5*/]))
	{
		func_122(&(Local_47[iParam0 /*5*/].f_1));
		if ((((func_224(Local_47[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_47[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/], 1)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_47[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_47[iParam0 /*5*/]))
		{
			ENTITY::DETACH_ENTITY(Local_47[iParam0 /*5*/], 1, true);
		}
		if (bParam1)
		{
			PED::DELETE_PED(&(Local_47[iParam0 /*5*/]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_47[iParam0 /*5*/]));
		}
		Local_47[iParam0 /*5*/].f_2 = 0;
	}
}

float func_134(float fParam0, float fParam1, float fParam2)//Position - 0x8A87
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_135()//Position - 0x8AAE
{
	if ((func_151(1) || iLocal_65 > 2) && func_136())
	{
		if (func_224(Local_48[0 /*4*/]) && func_78(AUDIO::_0x0626A247D2405330(), Local_48[0 /*4*/], 1) >= 250f)
		{
			func_60();
		}
	}
	if (func_136())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[0 /*4*/]) && !func_224(Local_48[0 /*4*/]))
		{
			func_60();
		}
	}
}

int func_136()//Position - 0x8B20
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_224(Local_47[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_47[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

int func_137()//Position - 0x8B65
{
	if (!func_101(5))
	{
		return 1;
	}
	if (func_146())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_145())
		{
			return 0;
		}
	}
	if (func_138(100f, 1) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_138(float fParam0, bool bParam1)//Position - 0x8BC7
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 4294967295;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_23(func_144()))
		{
			iVar5 = func_20();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 2) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[iVar1 /*6*/], 3))
				{
					func_139(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_139(int iParam0, var uParam1)//Position - 0x8C7E
{
	switch (iParam0)
	{
		case 0:
			func_140(uParam1, "Abigail1", func_142(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 1:
			func_140(uParam1, "Abigail2", func_142(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, 4294967295, 4, 1, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 2:
			func_140(uParam1, "Barry1", func_142(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 3:
			func_140(uParam1, "Barry2", func_142(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 1, 1);
			break;
		
		case 4:
			func_140(uParam1, "Barry3", func_142(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", 4294967295, 0, "", 164, 1, 4294967295, 0, 2, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 5:
			func_140(uParam1, "Barry3A", func_142(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 6:
			func_140(uParam1, "Barry3C", func_142(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 7:
			func_140(uParam1, "Barry4", func_142(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, 4294967295, 4, 2, 800, 2000, func_141(iParam0), 0, 0);
			break;
		
		case 8:
			func_140(uParam1, "Dreyfuss1", func_142(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 9:
			func_140(uParam1, "Epsilon1", func_142(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 10:
			func_140(uParam1, "Epsilon2", func_142(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 11:
			func_140(uParam1, "Epsilon3", func_142(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 12:
			func_140(uParam1, "Epsilon4", func_142(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 13:
			func_140(uParam1, "Epsilon5", func_142(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 14:
			func_140(uParam1, "Epsilon6", func_142(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 15:
			func_140(uParam1, "Epsilon7", func_142(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", 4294967295, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 16:
			func_140(uParam1, "Epsilon8", func_142(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, 4294967295, 4, 1, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 17:
			func_140(uParam1, "Extreme1", func_142(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", 4294967295, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 18:
			func_140(uParam1, "Extreme2", func_142(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 19:
			func_140(uParam1, "Extreme3", func_142(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 20:
			func_140(uParam1, "Extreme4", func_142(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 21:
			func_140(uParam1, "Fanatic1", func_142(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 700, 2000, func_141(iParam0), 1, 0);
			break;
		
		case 22:
			func_140(uParam1, "Fanatic2", func_142(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 700, 2000, func_141(iParam0), 1, 0);
			break;
		
		case 23:
			func_140(uParam1, "Fanatic3", func_142(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 2, 700, 2000, func_141(iParam0), 0, 1);
			break;
		
		case 24:
			func_140(uParam1, "Hao1", func_142(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", 4294967295, 0, "controller_Races", 13, 1, 4294967295, 4, 2, 2000, 500, func_141(iParam0), 0, 1);
			break;
		
		case 25:
			func_140(uParam1, "Hunting1", func_142(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", 4294967295, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 26:
			func_140(uParam1, "Hunting2", func_142(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 27:
			func_140(uParam1, "Josh1", func_142(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", 4294967295, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 28:
			func_140(uParam1, "Josh2", func_142(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_141(iParam0), 1, 1);
			break;
		
		case 29:
			func_140(uParam1, "Josh3", func_142(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 4294967295, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_141(iParam0), 1, 1);
			break;
		
		case 30:
			func_140(uParam1, "Josh4", func_142(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", 4294967295, 36, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 31:
			func_140(uParam1, "Maude1", func_142(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", 4294967295, 0, "BailBond_Launcher", 0, 1, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 32:
			func_140(uParam1, "Minute1", func_142(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", 4294967295, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 33:
			func_140(uParam1, "Minute2", func_142(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", 4294967295, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 34:
			func_140(uParam1, "Minute3", func_142(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", 4294967295, 10, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 35:
			func_140(uParam1, "MrsPhilips1", func_142(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", 4294967295, 0, "ambient_MrsPhilips", 0, 1, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 36:
			func_140(uParam1, "MrsPhilips2", func_142(iParam0), 0, 11, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 37:
			func_140(uParam1, "Nigel1", func_142(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", 4294967295, 0, "", 177, 1, 4294967295, 1, 4, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 38:
			func_140(uParam1, "Nigel1A", func_142(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_141(iParam0), 1, 1);
			break;
		
		case 39:
			func_140(uParam1, "Nigel1B", func_142(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_141(iParam0), 1, 1);
			break;
		
		case 40:
			func_140(uParam1, "Nigel1C", func_142(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_141(iParam0), 1, 1);
			break;
		
		case 41:
			func_140(uParam1, "Nigel1D", func_142(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_141(iParam0), 1, 1);
			break;
		
		case 42:
			func_140(uParam1, "Nigel2", func_142(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", 4294967295, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_141(iParam0), 1, 1);
			break;
		
		case 43:
			func_140(uParam1, "Nigel3", func_142(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", 4294967295, 16, "postRC_Nigel3", 0, 0, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 1, 1);
			break;
		
		case 44:
			func_140(uParam1, "Omega1", func_142(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", 4294967295, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 45:
			func_140(uParam1, "Omega2", func_142(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 46:
			func_140(uParam1, "Paparazzo1", func_142(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", 4294967295, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 47:
			func_140(uParam1, "Paparazzo2", func_142(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", 4294967295, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 48:
			func_140(uParam1, "Paparazzo3", func_142(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", 4294967295, 8, "", 183, 1, 4294967295, 2, 2, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 49:
			func_140(uParam1, "Paparazzo3A", func_142(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 50:
			func_140(uParam1, "Paparazzo3B", func_142(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 51:
			func_140(uParam1, "Paparazzo4", func_142(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", 4294967295, 8, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 52:
			func_140(uParam1, "Rampage1", func_142(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", 4294967295, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 54:
			func_140(uParam1, "Rampage3", func_142(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", 4294967295, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 55:
			func_140(uParam1, "Rampage4", func_142(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", 4294967295, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 56:
			func_140(uParam1, "Rampage5", func_142(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", 4294967295, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_141(iParam0), 0, 0);
			break;
		
		case 53:
			func_140(uParam1, "Rampage2", func_142(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", 4294967295, 0, "rampage_controller", 0, 0, 4294967295, 4, 4, 0, 2359, func_141(iParam0), 1, 0);
			break;
		
		case 57:
			func_140(uParam1, "TheLastOne", func_142(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 58:
			func_140(uParam1, "Tonya1", func_142(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", 4294967295, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 59:
			func_140(uParam1, "Tonya2", func_142(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 60:
			func_140(uParam1, "Tonya3", func_142(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 61:
			func_140(uParam1, "Tonya4", func_142(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		case 62:
			func_140(uParam1, "Tonya5", func_142(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_141(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_140(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9E33
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_141(int iParam0)//Position - 0x9EC4
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

struct<2> func_142(int iParam0)//Position - 0xA20A
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_143(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_143(int iParam0)//Position - 0xA241
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_144()//Position - 0xA68D
{
	func_21();
	return Global_19E56.f_933.f_21B.f_10CD;
}

int func_145()//Position - 0xA6A6
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_146()//Position - 0xA6C3
{
	if (func_149() && !func_145())
	{
		return 1;
	}
	if (func_148() && func_147())
	{
		return 1;
	}
	return 0;
}

bool func_147()//Position - 0xA6F5
{
	return Global_19D3C > 0;
}

int func_148()//Position - 0xA703
{
	if (Global_16089 != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_149()//Position - 0xA718
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

int func_150()//Position - 0xA73E
{
	if ((Global_19E4B == func_29() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_19E4C)
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)//Position - 0xA769
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_66, iParam0);
}

void func_152(int iParam0)//Position - 0xA779
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_29();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	func_154(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_19E48 = 0;
	func_153();
}

void func_153()//Position - 0xA7AF
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, false);
	}
}

void func_154(int iParam0)//Position - 0xA7EC
{
	Global_19E4B = iParam0;
}

int func_155(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xA7FA
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_2347E)
	{
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = func_29();
	}
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_47())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(AUDIO::_0x0626A247D2405330())) > 1369f && !func_145())
			{
				return 0;
			}
		}
		if (!Global_19E56.f_2361)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_146())
		{
			return 0;
		}
		if (func_196())
		{
			return 0;
		}
		if (Global_19E4B != 4294967295)
		{
			return 0;
		}
		if (func_23(func_144()))
		{
			if (func_138(100f, 1) != 4294967295)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_195(iParam1))
		{
			return 0;
		}
		if (func_23(func_144()))
		{
			if (func_194(func_144()) == 4 || func_194(func_144()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_144()))
		{
			if (!func_193(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_192(Global_19E56.f_6187.f_2B[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_19E4D) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_190())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_180(4))
		{
			return 0;
		}
		if (!func_101(5))
		{
			return 0;
		}
		if (func_179(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_179(0, 0))
		{
			return 0;
		}
		if (Global_6405)
		{
			return 0;
		}
		if (func_195(30) && !func_179(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_144()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19E56.f_933.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19E56.f_933.f_21B.f_8E4[iVar2];
				if (func_178(iVar4))
				{
					if (func_156(iVar2))
					{
						if (!func_84(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar3) < (210f * 210f))
							{
								if (func_144() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_156(int iParam0)//Position - 0xAB94
{
	int iVar0;
	
	iVar0 = Global_19E56.f_933.f_21B.f_8E4[iParam0];
	return func_157(iVar0);
}

int func_157(int iParam0)//Position - 0xABB5
{
	return func_158(iParam0, 1);
}

int func_158(int iParam0, int iParam1)//Position - 0xABC4
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_178(iParam0))
	{
		return 0;
	}
	func_159(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_159(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xAC17
{
	func_160(func_171(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_160(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xAC35
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_170(iParam0, iParam1))
	{
		iVar0 = func_169(iParam1);
		iVar1 = func_167(iParam0);
		iVar2 = (func_167(iParam0) - func_167(iParam1));
		iVar3 = (func_169(iParam0) - func_169(iParam1));
		iVar4 = (func_166(iParam0) - func_166(iParam1));
		iVar5 = (func_165(iParam0) - func_165(iParam1));
		iVar6 = (func_164(iParam0) - func_164(iParam1));
		iVar7 = (func_163(iParam0) - func_163(iParam1));
	}
	else
	{
		iVar0 = func_169(iParam0);
		iVar1 = func_167(iParam1);
		iVar2 = (func_167(iParam1) - func_167(iParam0));
		iVar3 = (func_169(iParam1) - func_169(iParam0));
		iVar4 = (func_166(iParam1) - func_166(iParam0));
		iVar5 = (func_165(iParam1) - func_165(iParam0));
		iVar6 = (func_164(iParam1) - func_164(iParam0));
		iVar7 = (func_163(iParam1) - func_163(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_162(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_161(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_161(float fParam0, float fParam1, float fParam2)//Position - 0xAE36
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_162(int iParam0, int iParam1)//Position - 0xAE78
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

int func_163(int iParam0)//Position - 0xAF1A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_164(int iParam0)//Position - 0xAF2D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_165(int iParam0)//Position - 0xAF40
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_166(int iParam0)//Position - 0xAF53
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_167(int iParam0)//Position - 0xAF65
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_168(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_168(bool bParam0, int iParam1, int iParam2)//Position - 0xAF8A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_169(int iParam0)//Position - 0xAFA1
{
	return iParam0 & 15;
}

int func_170(int iParam0, int iParam1)//Position - 0xAFAE
{
	int iVar0;
	int iVar1;
	
	if (!func_178(iParam1) || !func_178(iParam0))
	{
		return 1;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_167(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_169(iParam0);
	iVar1 = func_169(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	iVar1 = func_165(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_163(iParam0);
	iVar1 = func_163(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0xB0BA
{
	var uVar0;
	
	func_177(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_176(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_175(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_174(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_173(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_172(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_172(var uParam0, int iParam1)//Position - 0xB100
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

void func_173(var uParam0, int iParam1)//Position - 0xB186
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)//Position - 0xB1B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_169(*uParam0);
	iVar1 = func_167(*uParam0);
	if (iParam1 < 1 || iParam1 > func_162(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_175(var uParam0, int iParam1)//Position - 0xB20A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_176(var uParam0, int iParam1)//Position - 0xB244
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_177(var uParam0, int iParam1)//Position - 0xB27F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_178(int iParam0)//Position - 0xB2BB
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
	iVar0 = func_163(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_164(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_165(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_167(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_169(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_166(iParam0);
	if (iVar5 < 1 || iVar5 > func_162(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_179(int iParam0, int iParam1)//Position - 0xB397
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0)//Position - 0xB3BA
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_144();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_189()) || Global_19A9D) || Global_6375) || func_188()) || func_187(8, 4294967295)) || func_186()) || func_185()) || func_184()) || func_183()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_189()) || Global_6375) || func_188()) || func_187(8, 4294967295)) || func_184()) || func_186()) || func_185()) || func_183()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_189()) || Global_19A9D) || Global_6375) || func_188()) || func_187(8, 4294967295)) || func_184()) || func_186()) || func_185()) || func_183()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_189()) || Global_19A9D) || Global_6375) || func_188()) || func_187(8, 4294967295)) || func_186()) || func_185()) || func_183()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_189() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_187(8, 4294967295)) || func_183()) || func_182()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_187(8, 4294967295) || func_186()) || func_185()) || func_182()) || func_181())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_189()) || Global_6375) || func_188()) || func_187(8, 4294967295)) || func_185()) || func_184()) || func_183()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_189()) || func_185()) || Global_19A9D) || Global_6375) || func_188()) || Global_9197) || func_187(8, 4294967295)) || func_184()) || func_182()) || func_183()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_189()) || Global_19A9D) || Global_6375) || func_188()) || func_187(8, 4294967295)) || func_184()) || func_182()) || func_186()) || func_185()) || func_183())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_181()//Position - 0xBAD7
{
	return Global_16C57.f_1;
}

int func_182()//Position - 0xBAE5
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_183()//Position - 0xBB0B
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_184()//Position - 0xBB25
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

bool func_185()//Position - 0xBB4F
{
	return Global_16C64.f_148 > 0;
}

bool func_186()//Position - 0xBB60
{
	return Global_16C64.f_147 > 0;
}

bool func_187(int iParam0, int iParam1)//Position - 0xBB71
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_14E0B5.f_CB[iParam1];
			}
			break;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_418, iParam0);
}

var func_188()//Position - 0xBBAC
{
	return Global_140859;
}

int func_189()//Position - 0xBBB8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_190()//Position - 0xBBD4
{
	func_191();
	if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

void func_191()//Position - 0xBBFC
{
	if (func_22(14))
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
		Global_38B1 = func_144();
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

bool func_192(int iParam0)//Position - 0xBC9E
{
	return func_170(func_171(), iParam0);
}

int func_193(int iParam0, int iParam1, int iParam2)//Position - 0xBCB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_144();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_194(int iParam0)//Position - 0xBD94
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_19E56.f_1DEC.f_397[iParam0];
}

bool func_195(int iParam0)//Position - 0xBDB8
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_47())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_1, iVar0);
	}
	return bVar1;
}

int func_196()//Position - 0xBE16
{
	int iVar0;
	
	if (Global_6409)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_197(bool bParam0, bool bParam1)//Position - 0xBE5A
{
	func_223();
	func_222();
	func_119(0);
	func_220(1, 1, 1, 0);
	func_218(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(true);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	func_217();
	func_216();
	func_215();
	if (func_224(Local_48[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_48[0 /*4*/], true);
	}
	func_214(bParam1);
	func_213(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_81);
	func_211();
	func_209();
	func_110(0);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	VEHICLE::SET_RANDOM_TRAINS(1);
	if (bParam0)
	{
		func_198(4294967295);
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
}

void func_198(int iParam0)//Position - 0xBEEF
{
	char cVar0[64];
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_29();
	}
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_150())
	{
		func_202(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_19E4D = MISC::GET_GAME_TIMER();
		func_201(30000);
		StringCopy(&cVar0, func_200(Global_19E4B, 1), 64);
		if (func_28(Global_19E4B) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_19E4A, 64);
		}
		STATS::_0x71862B1D855F32E1(&cVar0, Global_19E48, (MISC::GET_GAME_TIMER() - Global_19E49), 0);
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E52, 0) && Global_19E56.f_6187.f_2 < 3)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_19E52, 0);
	}
	func_199(&Global_63AE);
	Global_19E4C = 0;
	func_154(4294967295);
}

void func_199(var uParam0)//Position - 0xBFA4
{
	if (*uParam0 == 4294967295)
	{
		return;
	}
	if (!*uParam0 == Global_8CEF)
	{
		*uParam0 = 4294967295;
		return;
	}
	*uParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

char* func_200(int iParam0, bool bParam1)//Position - 0xBFE1
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case 4294967295:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_201(int iParam0)//Position - 0xC242
{
	Global_8F3C = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_202(int iParam0)//Position - 0xC254
{
	func_203(iParam0, 0, func_208(iParam0));
}

void func_203(int iParam0, int iParam1, int iParam2)//Position - 0xC269
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_171();
	func_206(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_205(iParam0, &uVar0);
	Var1 = { func_204(&uVar0) };
}

struct<16> func_204(var uParam0)//Position - 0xC298
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_165(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_164(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_163(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_166(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_169(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_167(*uParam0), 64);
	return Var0;
}

void func_205(int iParam0, var uParam1)//Position - 0xC368
{
	Global_19E56.f_6187.f_2B[iParam0] = *uParam1;
}

void func_206(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC380
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_167(*uParam0);
	iVar1 = func_169(*uParam0);
	iVar2 = func_166(*uParam0);
	iVar3 = func_165(*uParam0);
	iVar4 = func_164(*uParam0);
	iVar5 = func_163(*uParam0);
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
	iVar6 = func_162(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_162(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_207(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_207(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC502
{
	func_177(uParam0, iParam1);
	func_176(uParam0, iParam2);
	func_175(uParam0, iParam3);
	func_173(uParam0, iParam5);
	func_174(uParam0, iParam4);
	func_172(uParam0, iParam6);
}

int func_208(int iParam0)//Position - 0xC53A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_209()//Position - 0xC6DD
{
	Global_3960 = 0;
	func_210();
}

void func_210()//Position - 0xC6ED
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_38B1.f_1 == 9) || Global_38B0 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		Global_38B1.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

void func_211()//Position - 0xC744
{
	Global_3960 = 0;
	func_212();
}

void func_212()//Position - 0xC754
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_213(bool bParam0)//Position - 0xC775
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_128(iVar0, bParam0);
		iVar0++;
	}
}

void func_214(bool bParam0)//Position - 0xC798
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_133(iVar0, bParam0);
		iVar0++;
	}
}

void func_215()//Position - 0xC7BB
{
}

void func_216()//Position - 0xC7C3
{
}

void func_217()//Position - 0xC7CB
{
}

void func_218(bool bParam0)//Position - 0xC7D3
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 0);
		HUD::_0x14621BB1DF14E2B2(0);
		HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
		GRAPHICS::_0x54E22EA2C1956A8D(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		GRAPHICS::_0xA356990E161C9E65(0);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(8, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(6, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(12, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		func_219(9, 1);
		func_219(8, 1);
	}
	else
	{
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		GRAPHICS::_0xA356990E161C9E65(1);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(8, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(6, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(12, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_219(9, 0);
		func_219(8, 0);
	}
}

void func_219(int iParam0, bool bParam1)//Position - 0xC8A6
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6468, iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_6468, iParam0);
	}
}

void func_220(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xC8C8
{
	if (bParam0)
	{
		func_209();
	}
	if (bParam1)
	{
		if (!func_221() || (bParam0 && !bParam3))
		{
			HUD::CLEAR_PRINTS();
		}
		HUD::CLEAR_REMINDER_MESSAGE();
	}
	if (bParam2)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
}

int func_221()//Position - 0xC908
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_222()//Position - 0xC92A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_122(&(Local_47[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_122(&(Local_48[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_223()//Position - 0xC970
{
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
}

int func_224(int iParam0)//Position - 0xC984
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

