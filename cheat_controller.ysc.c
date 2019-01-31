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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("BMX");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_112();
	}
	Global_6469 = 0;
	Global_6468 = 0;
	Global_646A = 0;
	Global_646B = 0;
	Global_646D = 0;
	Global_646C = 0;
	func_111();
	while (true)
	{
		func_2();
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_180528) && Global_6373 == 0)
		{
			func_112();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)//Position - 0x127
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252F9E.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_2()//Position - 0x171
{
	func_87();
	func_67();
	func_21();
	func_3(iLocal_67);
}

void func_3(int iParam0)//Position - 0x18B
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (INTERIOR::IS_INTERIOR_SCENE())
			{
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_19(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)//Position - 0x1E0
{
	vector3 vVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_68, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_68, 0))
					{
						vVar0 = { unk_0x8000C77B5F336760(iLocal_68, true) };
						fVar1 = ENTITY::GET_ENTITY_HEADING(iLocal_68);
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, 0, 0, 1);
						bVar2 = true;
					}
				}
				VEHICLE::DELETE_VEHICLE(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("DUSTER") || iParam0 == joaat("STUNT"))
				{
					vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(AUDIO::_0x0626A247D2405330(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("BUZZARD"))
				{
					vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(AUDIO::_0x0626A247D2405330(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(AUDIO::_0x0626A247D2405330(), 0f, 3.5f, 1f) };
				}
				fVar1 = (ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()) + 90f);
			}
			if (func_17(iParam0, vVar0, fVar1))
			{
				iLocal_68 = VEHICLE::CREATE_VEHICLE(iParam0, vVar0, fVar1, 0, 1, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_68, 1084227584);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_68);
				func_15(iLocal_70);
				func_5(20);
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)//Position - 0x323
{
	if (!func_14(14) && !func_13(""))
	{
		MISC::SET_BIT(&Global_646A, iParam0);
		Global_646D = 1;
		func_6();
	}
}

void func_6()//Position - 0x356
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)//Position - 0x3A4
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_8()//Position - 0x3C7
{
	func_9();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_9()//Position - 0x3E0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_12(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_11(AUDIO::_0x0626A247D2405330());
			if (func_10(iVar0) && (!func_14(14) || Global_19A3D))
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

bool func_10(int iParam0)//Position - 0x4DD
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x4E9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x526
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

int func_13(char* sParam0)//Position - 0x550
{
	if (iLocal_84 != 0)
	{
		if (func_14(14) && CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP") && INTERIOR::IS_INTERIOR_SCENE())
			{
				return 0;
			}
			if ((MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON") && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0)) && ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_14(int iParam0)//Position - 0x5BA
{
	return Global_8D15 == iParam0;
}

void func_15(int iParam0)//Position - 0x5C8
{
	if (func_13(""))
	{
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_ACTIVATED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam0);
		func_16(HUD::_DRAW_NOTIFICATION(0, 1));
		STATS::PLAYSTATS_CHEAT_APPLIED(iParam0);
	}
}

void func_16(int iParam0)//Position - 0x5FA
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_17(int iParam0, vector3 vParam1, float fParam2)//Position - 0x61A
{
	vector3 vVar0[9];
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	MISC::GET_MODEL_DIMENSIONS(iParam0, &vVar1, &vVar2);
	vVar3.x = (MISC::ABSF((vVar2.x - vVar1.x)) / 2f);
	vVar3.y = (MISC::ABSF((vVar2.y - vVar1.y)) / 2f);
	vVar3.z = (MISC::ABSF((vVar2.z - vVar1.z)) / 2f);
	vVar0[0 /*3*/] = { vParam1 };
	vVar0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[4 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[5 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[6 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[7 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, vVar3.y, vVar3.z) };
	vVar0[8 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, vVar3.y, vVar3.z) };
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam1))
	{
		return 0;
	}
	iVar13 = unk_0x2CE52CF124DA4A6A(func_18(CAM::_0xDC9DA9E8789F5246()) + Vector(1f, 0f, 0f), vParam1, 87, AUDIO::_0x0626A247D2405330(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = unk_0x2CE52CF124DA4A6A(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, AUDIO::_0x0626A247D2405330(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = unk_0x2CE52CF124DA4A6A(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, AUDIO::_0x0626A247D2405330(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = unk_0x2CE52CF124DA4A6A(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, AUDIO::_0x0626A247D2405330(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = unk_0x2CE52CF124DA4A6A(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, AUDIO::_0x0626A247D2405330(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = unk_0x2CE52CF124DA4A6A(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, AUDIO::_0x0626A247D2405330(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = unk_0x2CE52CF124DA4A6A(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, AUDIO::_0x0626A247D2405330(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_18(int iParam0)//Position - 0x8D6
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_19(int iParam0)//Position - 0x8E9
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_20(int iParam0)//Position - 0x90C
{
	if (!func_14(14))
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_DENIED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam0);
		func_16(HUD::_DRAW_NOTIFICATION(0, 1));
	}
}

void func_21()//Position - 0x938
{
	func_64();
	func_63();
	func_44();
	func_43();
	func_42();
	func_38();
	func_35();
	func_31();
	func_22();
}

void func_22()//Position - 0x964
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_30(19, 1);
			func_29();
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_27()) || func_26(23)) || func_26(21)) || func_26(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_24();
			break;
		
		case 9:
			func_23("CHEAT_AIM_SLOW_MO");
			func_30(19, 0);
			MISC::SET_TIME_SCALE(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_23(char* sParam0)//Position - 0xA03
{
	if (func_13(sParam0))
	{
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_DEACTIVATED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_16(HUD::_DRAW_NOTIFICATION(0, 1));
	}
}

void func_24()//Position - 0xA2E
{
	if (PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
	{
		if (PAD::IS_CONTROL_PRESSED(2, 25))
		{
			if (func_25(AUDIO::_0x0626A247D2405330()) != joaat("weapon_unarmed") && func_25(AUDIO::_0x0626A247D2405330()) != joaat("object"))
			{
				MISC::SET_TIME_SCALE(fLocal_78);
			}
			else
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		else
		{
			MISC::SET_TIME_SCALE(1f);
		}
	}
}

int func_25(int iParam0)//Position - 0xA85
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26(int iParam0)//Position - 0xA99
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_6468, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0xAB2
{
	if (((((((func_14(0) || func_14(11)) || func_14(4)) || func_14(9)) || func_14(10)) || func_14(3)) || func_14(2)) || func_28(35))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xB18
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_29()//Position - 0xB45
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_15("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_15("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_15("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_30(int iParam0, bool bParam1)//Position - 0xBB5
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6469, iParam0);
		func_5(iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_6469, iParam0);
	}
}

void func_31()//Position - 0xBDD
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_30(16, 1);
			func_34();
			break;
		
		case 5:
			PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
			if ((((((((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_27()) || func_33()) || func_32(1)) || NETWORK::_0x5C497525F803486B(2, 37)) || NETWORK::_0x5C497525F803486B(2, 19)) || func_26(23)) || func_26(21)) || func_26(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
			func_23("CHEAT_SLOW_MO");
			func_30(16, 0);
			iLocal_76 = 0;
			MISC::SET_TIME_SCALE(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_32(bool bParam0)//Position - 0xCC4
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

int func_33()//Position - 0xCED
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

void func_34()//Position - 0xD09
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_15("CHEAT_SLOW_MO1");
			MISC::SET_TIME_SCALE(0.6f);
			break;
		
		case 2:
			func_15("CHEAT_SLOW_MO2");
			MISC::SET_TIME_SCALE(0.4f);
			break;
		
		case 3:
			func_15("CHEAT_SLOW_MO3");
			MISC::SET_TIME_SCALE(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_35()//Position - 0xD7C
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_30(17, 1);
			unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 1);
			ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), true, true, true, true, true, 0, 0, 0);
			WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"), 1, false, true);
			vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			fVar1 = ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330());
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar0.x, vVar0.y, fVar2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), fVar1);
			iLocal_72 = MISC::GET_GAME_TIMER();
			CAM::DO_SCREEN_FADE_OUT(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_37(1000, iLocal_72))
			{
				unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
				iLocal_72 = MISC::GET_GAME_TIMER();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_37(1000, iLocal_72))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 149, 1);
				if (func_8() == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 9, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 8, 0, 0, 0);
				}
				CAM::DO_SCREEN_FADE_IN(250);
				iLocal_72 = MISC::GET_GAME_TIMER();
				func_15("CHEAT_SKYFALL");
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_27()) || func_26(23)) || func_26(21)) || func_26(17))
			{
				iLocal_64 = 9;
				break;
			}
			PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(AUDIO::_0x0626A247D2405330(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(AUDIO::_0x0626A247D2405330()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_36();
			func_23("CHEAT_SKYFALL");
			func_30(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_36()//Position - 0xF7C
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 0);
		ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), false, false, false, false, false, 0, 0, 0);
	}
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME(0);
}

int func_37(int iParam0, int iParam1)//Position - 0xFC1
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_38()//Position - 0xFE2
{
	vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_INVINCIBILITY");
			func_30(15, 1);
			iLocal_62 = 5;
			iLocal_74 = MISC::GET_GAME_TIMER();
			PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 1);
			ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), true, true, true, true, true, 0, 0, 0);
			break;
		
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_18(CAM::_0xDC9DA9E8789F5246()) };
			if (((((func_27() || func_33()) || func_26(23)) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (MISC::GET_GAME_TIMER() - iLocal_74);
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) == 0)
			{
				func_39((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 1);
			ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), true, true, true, true, true, 0, 0, 0);
			STATS::_0x047CBED6F6F8B63C();
			break;
		
		case 9:
			func_23("CHEAT_INVINCIBILITY_OFF");
			func_30(15, 0);
			iLocal_62 = 1;
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 0);
				ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), false, false, false, false, false, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x115C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_40(7, iVar0);
		Global_14E696.f_112F[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_112F.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_112F.f_AC[iVar0] = iParam2;
		Global_14E696.f_112F.f_D8[iVar0] = iParam3;
		Global_14E696.f_112F.f_B7[iVar0] = iParam4;
		Global_14E696.f_112F.f_C2[iVar0] = iParam5;
		Global_14E696.f_112F.f_F9[iVar0] = iParam6;
		Global_14E696.f_112F.f_104[iVar0] = iParam7;
		Global_14E696.f_112F.f_CD[iVar0] = iParam8;
		Global_14E696.f_112F.f_13A[iVar0] = iParam9;
		Global_14E696.f_112F.f_145[iVar0] = iParam10;
		Global_14E696.f_112F.f_165[iVar0] = iParam11;
		Global_14E696.f_112F.f_EE[iVar0] = iParam12;
		Global_14E696.f_112F.f_10F[iVar0] = iParam13;
		Global_14E696.f_112F.f_170[iVar0] = iParam14;
		Global_14E696.f_112F.f_17B[iVar0] = iParam15;
		Global_14E696.f_112F.f_186[iVar0] = iParam16;
	}
}

void func_40(int iParam0, int iParam1)//Position - 0x12AA
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_41(int iParam0, int iParam1)//Position - 0x12C3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

void func_42()//Position - 0x12DC
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FLAMING_BULLETS");
			func_30(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_26(23)) || func_26(21)) || func_26(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_59 = 9;
				return;
			}
			MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(CAM::_0xDC9DA9E8789F5246());
			break;
		
		case 9:
			func_23("CHEAT_FLAMING_BULLETS");
			func_30(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()//Position - 0x1383
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_26(23)) || func_26(21)) || func_26(13)) || func_27())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0xA61D93B1E6DCC7AF(CAM::_0xDC9DA9E8789F5246());
			break;
		
		case 9:
			func_23("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()//Position - 0x1426
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_DRUNK");
			func_30(18, 1);
			func_59(AUDIO::_0x0626A247D2405330());
			func_57(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_27() || !PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246())) || func_26(23)) || func_26(21)) || func_26(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_DRUNK");
			func_30(18, 0);
			func_48(AUDIO::_0x0626A247D2405330());
			func_47(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_45(1);
			func_30(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_45(bool bParam0)//Position - 0x1500
{
	CAM::CUSTOM_MENU_COORDINATES(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	unk_0x3B35C0FF76598EE9(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_9181))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_9181))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_9181);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_9176))
	{
		if (CAM::IS_CAM_SHAKING(Global_9176))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_9176, 0f);
			CAM::STOP_CAM_SHAKING(Global_9176, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != 4294967295 || GRAPHICS::_0x459FD2C8D0AB78BC() != 4294967295)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
	StringCopy(&Global_9181, "", 64);
	StringCopy(&Global_9191, "", 16);
	func_46();
}

void func_46()//Position - 0x15DC
{
	Global_9175 = 0;
	Global_9176 = 0;
	Global_9177 = 0;
	Global_9178 = 30000;
	Global_9179 = 0f;
	Global_917B = 0f;
	Global_917A = 0f;
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
}

void func_47(int iParam0)//Position - 0x160E
{
	int iVar0;
	
	if (!Global_9175)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	Global_9177 = (iVar0 + iParam0);
	Global_9178 = iParam0;
}

void func_48(int iParam0)//Position - 0x1633
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_56(iParam0);
	if (!iVar0 == 4294967295)
	{
		iVar1 = Global_90C2[iVar0 /*5*/];
		func_51(1, iVar1, 1);
		return;
	}
	iVar2 = func_50(iParam0);
	if (iVar2 == 4294967295)
	{
		return;
	}
	func_49(iVar2);
}

void func_49(int iParam0)//Position - 0x168C
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_90A8[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_90A8[iParam0 /*5*/].f_1 == AUDIO::_0x0626A247D2405330())
		{
			Global_9195 = 0;
		}
	}
	Global_90A8[iParam0 /*5*/] = 13;
	Global_90A8[iParam0 /*5*/].f_1 = 0;
	Global_90A8[iParam0 /*5*/].f_2 = 0;
	Global_90A8[iParam0 /*5*/].f_3 = 0;
	Global_90A8[iParam0 /*5*/].f_4 = 0;
	Global_90A7 = (Global_90A7 - 1);
	if (Global_90A7 < 0)
	{
		Global_90A7 = 0;
	}
}

int func_50(int iParam0)//Position - 0x170F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_90A8[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1740
{
	func_52(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1755
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_54(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_53();
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_9113[iVar0 /*6*/] = iParam0;
	Global_9113[iVar0 /*6*/].f_1 = iParam1;
	Global_9113[iVar0 /*6*/].f_2 = iParam2;
	Global_9113[iVar0 /*6*/].f_3 = iParam3;
	Global_9113[iVar0 /*6*/].f_4 = iParam4;
	Global_9113[iVar0 /*6*/].f_5 = iParam5;
}

int func_53()//Position - 0x17D7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_9113[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_54(int iParam0, int iParam1, int iParam2)//Position - 0x1808
{
	if (func_55(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x1823
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_9113[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_9113[iVar0 /*6*/])
			{
				if (iParam1 == Global_9113[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_56(int iParam0)//Position - 0x186F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_90C2[iVar0 /*5*/] == 4294967295)
		{
			if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_57(int iParam0, float fParam1, float fParam2, int iParam3)//Position - 0x18B8
{
	func_58(4294967295, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_58(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x18CE
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_9175)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_9174));
	}
	if (CAM::DOES_CAM_EXIST(iParam4))
	{
		CAM::SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_9176 = iParam4;
	}
	else
	{
		Global_9176 = 0;
	}
	Global_9175 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_9177 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == 4294967295)
		{
			Global_9177 = 4294967295;
		}
	}
	Global_9178 = uParam1;
	Global_9179 = fParam2;
	Global_917B = fParam3;
	Global_917A = fParam3;
}

int func_59(int iParam0)//Position - 0x1989
{
	return func_60(iParam0, 4294967295, 1);
}

int func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x1999
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	if (!iVar0 == 4294967295)
	{
		return 1;
	}
	iVar1 = func_50(iParam0);
	if (!iVar1 == 4294967295)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_61();
	if (iVar2 == 4294967295)
	{
		return 0;
	}
	Global_90A8[iVar2 /*5*/] = 0;
	Global_90A8[iVar2 /*5*/].f_1 = iParam0;
	Global_90A8[iVar2 /*5*/].f_2 = iParam1;
	Global_90A8[iVar2 /*5*/].f_3 = iParam1;
	Global_90A8[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == AUDIO::_0x0626A247D2405330())
	{
		Global_9195 = 1;
	}
	Global_90A7++;
	return 1;
}

int func_61()//Position - 0x1A55
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_90A8[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_62(int iParam0)//Position - 0x1A84
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
		{
			return Global_90C2[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 4294967295;
}

void func_63()//Position - 0x1AC5
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_BANG_BANG");
			func_30(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_26(23)) || func_26(21)) || func_26(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xE69786B04E234230(CAM::_0xDC9DA9E8789F5246());
			break;
		
		case 9:
			func_23("CHEAT_BANG_BANG");
			func_30(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_64()//Position - 0x1B6C
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_30(14, 1);
			func_66();
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if ((((((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_27()) || func_26(23)) || func_26(21)) || func_26(14)) || func_65(17)) || ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_GRAVITY_MOON");
			func_30(14, 0);
			MISC::SET_GRAVITY_LEVEL(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_65(int iParam0)//Position - 0x1C37
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_6469, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_66()//Position - 0x1C50
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_15("CHEAT_GRAVITY_MOON");
			MISC::SET_GRAVITY_LEVEL(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_67()//Position - 0x1C8D
{
	func_86();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_73();
	func_72();
	func_71();
	func_68();
}

void func_68()//Position - 0x1CC1
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_26(23) || func_26(22)) || func_26(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			func_15("CHEAT_GIVE_PARACHUTE");
			WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_69()//Position - 0x1D39
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_70(0))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x1D5A
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

void func_71()//Position - 0x1DB4
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_26(23) || func_26(22)) || func_26(9))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
			if (iVar0 > 0)
			{
				func_15("CHEAT_WANTED_DOWN");
				PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_20("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_72()//Position - 0x1E57
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_26(23) || func_26(22)) || func_26(8))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
			if (iVar0 < PLAYER::GET_MAX_WANTED_LEVEL())
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), iVar0 + 1, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				func_15("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_20("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_73()//Position - 0x1F06
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_26(23) || func_26(22)) || func_26(7)) || func_14(9)) || func_14(10)) || !PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(func_74())) || !PLAYER::IS_SPECIAL_ABILITY_ENABLED(CAM::_0xDC9DA9E8789F5246()))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(CAM::_0xDC9DA9E8789F5246(), 1);
			func_15("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_74()//Position - 0x1FAB
{
	return ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330());
}

void func_75()//Position - 0x1FBB
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_26(23) || func_26(22)) || func_26(6)) || func_14(9)) || func_14(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			func_15("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0x65E471E4A2D56226(AUDIO::_0x0626A247D2405330(), ENTITY::GET_ENTITY_MAX_HEALTH(AUDIO::_0x0626A247D2405330()), 0);
			PED::ADD_ARMOUR_TO_PED(AUDIO::_0x0626A247D2405330(), (PLAYER::GET_PLAYER_MAX_ARMOUR(CAM::_0xDC9DA9E8789F5246()) - PED::GET_PED_ARMOUR(AUDIO::_0x0626A247D2405330())));
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						VEHICLE::SET_VEHICLE_FIXED(iVar0);
					}
				}
			}
		}
	}
}

void func_76()//Position - 0x2093
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_26(23) || func_26(22)) || func_26(5))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_RAIN");
				func_30(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_77()//Position - 0x2222
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_26(23) || func_26(22)) || func_26(4))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_15("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_knife"), 4294967295, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_smg"), 300, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_assaultrifle"), 300, true);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_pumpshotgun"), 150, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_sniperrifle"), 30, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_grenade"), 5, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_78()//Position - 0x22F7
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_SWIM");
			func_30(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_26(23)) || func_26(22)) || func_26(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1.49f);
				STATS::_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1f);
			func_23("CHEAT_FAST_SWIM");
			func_30(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()//Position - 0x239F
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_RUN");
			func_30(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) || func_26(23)) || func_26(22)) || func_26(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (BRAIN::IS_PED_RUNNING(AUDIO::_0x0626A247D2405330()) || (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())))
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1.49f);
				}
				else
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1f);
				}
				STATS::_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1f);
			func_23("CHEAT_FAST_RUN");
			func_30(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()//Position - 0x2488
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SLIDEY_CARS");
			func_30(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_26(23)) || func_26(22)) || func_26(1))
			{
				iLocal_48 = 9;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
							{
								if (func_81(1))
								{
									VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
							{
								VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_23("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
			{
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_30(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)//Position - 0x25AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") != 4294967295 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") != 4294967295)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") == 4294967295 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") == 4294967295)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_r") == 4294967295)
						{
							return 0;
						}
					}
					else if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") != 4294967295 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") != 4294967295)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") == 4294967295 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") == 4294967295)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_84(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
					if (VEHICLE::IS_BIG_VEHICLE(iVar0))
					{
						return 0;
					}
					sVar4 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar3);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						if (MISC::GET_HASH_KEY(sVar4) == MISC::GET_HASH_KEY("taxiService"))
						{
							return 0;
						}
					}
					if (func_82(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, bool bParam2)//Position - 0x27B0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_83(iParam1, iVar0, &sVar1, &iVar2))
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

int func_83(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x2821
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

int func_84(int iParam0, int iParam1)//Position - 0x28F9
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_85(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_85(int iParam0, var uParam1, int iParam2)//Position - 0x293B
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_19E56.f_2361.f_63.f_3A[128] && !Global_19E56.f_2361.f_63.f_3A[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19E56.f_2361.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_19E56.f_2361.f_63.f_3A[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_86()//Position - 0x2B97
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SUPER_JUMP");
			func_30(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || func_26(23)) || func_26(22)) || func_26(0)) || INTERIOR::IS_INTERIOR_SCENE())
			{
				iLocal_47 = 9;
				return;
			}
			MISC::SET_SUPER_JUMP_THIS_FRAME(CAM::_0xDC9DA9E8789F5246());
			PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 217, 1);
			break;
		
		case 9:
			func_23("CHEAT_SUPER_JUMP");
			func_30(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_87()//Position - 0x2C40
{
	if ((func_110() || iLocal_84 != 0) || func_14(14))
	{
		PAD::DISABLE_CONTROL_ACTION(2, 243, 1);
	}
	func_109();
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	if (BRAIN::IS_PED_BEING_ARRESTED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
	{
		return;
	}
	if (func_33() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_82)
		{
			func_107();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_106(988027572, 12) || unk_0x3D30E714ACBA663F(joaat("buzzoff"))) || func_105(20, joaat("BUZZARD")))
	{
		func_102(joaat("BUZZARD"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_106(3160688266, 11) || unk_0x3D30E714ACBA663F(joaat("bandit"))) || func_105(20, joaat("BMX")))
	{
		func_102(joaat("BMX"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_106(971352167, 10) || unk_0x3D30E714ACBA663F(joaat("holein1"))) || func_105(20, joaat("CADDY")))
	{
		func_102(joaat("CADDY"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_106(4025104071, 10) || unk_0x3D30E714ACBA663F(joaat("comet"))) || func_105(20, joaat("COMET2")))
	{
		func_102(joaat("COMET2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_106(458579068, 12) || unk_0x3D30E714ACBA663F(joaat("flyspray"))) || func_105(20, joaat("DUSTER")))
	{
		func_102(joaat("DUSTER"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_106(3628454103, 12) || unk_0x3D30E714ACBA663F(joaat("rocket"))) || func_105(20, joaat("PCJ")))
	{
		func_102(joaat("PCJ"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_106(3048982547, 10) || unk_0x3D30E714ACBA663F(joaat("RAPIDGT"))) || func_105(20, joaat("RAPIDGT")))
	{
		func_102(joaat("RAPIDGT"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_106(2076774618, 12) || unk_0x3D30E714ACBA663F(joaat("offroad"))) || func_105(20, joaat("SANCHEZ")))
	{
		func_102(joaat("SANCHEZ"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_106(855685457, 9) || unk_0x3D30E714ACBA663F(joaat("vinewood"))) || func_105(20, joaat("STRETCH")))
	{
		func_102(joaat("STRETCH"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_106(3703571420, 12) || unk_0x3D30E714ACBA663F(joaat("barnstorm"))) || func_105(20, joaat("STUNT")))
	{
		func_102(joaat("STUNT"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_106(2895749714, 10) || unk_0x3D30E714ACBA663F(joaat("trashed"))) || func_105(20, joaat("TRASH")))
	{
		func_102(joaat("TRASH"), "CHEAT_SPAWN_VEH11");
	}
	if (func_101())
	{
		if ((func_106(3919049715, 10) || unk_0x3D30E714ACBA663F(joaat("extinct"))) || func_105(20, joaat("DODO")))
		{
			func_102(joaat("DODO"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_106(2170659415, 10) || unk_0x3D30E714ACBA663F(joaat("deathcar"))) || func_105(20, joaat("DUKES2")))
		{
			func_102(joaat("DUKES2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_106(1028964594, 9) || unk_0x3D30E714ACBA663F(joaat("bubbles"))) || func_105(20, joaat("SUBMERSIBLE2")))
		{
			func_102(joaat("SUBMERSIBLE2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_106(3901550715, 11) || unk_0x3D30E714ACBA663F(joaat("hoptoit"))) || func_105(0, 0))
	{
		func_100();
	}
	if ((func_106(3998457505, 8) || unk_0x3D30E714ACBA663F(joaat("snowday"))) || func_105(1, 0))
	{
		func_99();
	}
	if ((func_106(1120820643, 7) || unk_0x3D30E714ACBA663F(joaat("catchme"))) || func_105(2, 0))
	{
		func_98();
	}
	if ((func_106(3873509280, 9) || unk_0x3D30E714ACBA663F(joaat("gotgills"))) || func_105(3, 0))
	{
		func_97();
	}
	if ((func_106(372390926, 12) || unk_0x3D30E714ACBA663F(joaat("toolup"))) || func_105(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_106(606506837, 8) || unk_0x3D30E714ACBA663F(joaat("makeitrain"))) || func_105(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_106(453014206, 12) || unk_0x3D30E714ACBA663F(joaat("turtle"))) || func_105(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_106(1773187142, 9) || unk_0x3D30E714ACBA663F(joaat("powerup"))) || func_105(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_106(1173296014, 10) || unk_0x3D30E714ACBA663F(joaat("FUGITIVE"))) || func_105(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_106(3913697543, 10) || unk_0x3D30E714ACBA663F(joaat("lawyerup"))) || func_105(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_106(2270978598, 11) || unk_0x3D30E714ACBA663F(joaat("skydive"))) || func_105(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_106(3459103390, 12) || unk_0x3D30E714ACBA663F(joaat("highex"))) || func_105(11, 0))
	{
		func_96();
	}
	if ((func_106(1958387485, 12) || unk_0x3D30E714ACBA663F(joaat("incendiary"))) || func_105(12, 0))
	{
		func_95();
	}
	if ((func_106(3390982116, 9) || unk_0x3D30E714ACBA663F(joaat("hothands"))) || func_105(13, 0))
	{
		func_94();
	}
	if ((func_106(2087642905, 9) || unk_0x3D30E714ACBA663F(joaat("floater"))) || func_105(14, 0))
	{
		func_93();
	}
	if ((func_106(1257820019, 10) || unk_0x3D30E714ACBA663F(joaat("painkiller"))) || func_105(15, 0))
	{
		func_92();
	}
	if ((func_106(1540206179, 7) || unk_0x3D30E714ACBA663F(joaat("slowmo"))) || func_105(16, 0))
	{
		func_91();
	}
	if ((func_106(115565392, 16) || unk_0x3D30E714ACBA663F(joaat("skyfall"))) || func_105(17, 0))
	{
		func_90();
	}
	if ((func_106(3018454019, 8) || unk_0x3D30E714ACBA663F(joaat("liquor"))) || func_105(18, 0))
	{
		func_89();
	}
	if ((func_106(2040433593, 9) || unk_0x3D30E714ACBA663F(joaat("deadeye"))) || func_105(19, 0))
	{
		func_88();
	}
}

void func_88()//Position - 0x33A4
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_89()//Position - 0x3410
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(18))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_90()//Position - 0x3487
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		func_20("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_20("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_26(23) || func_26(21)) || func_26(17)) || func_65(0)) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0)) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if ((PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 0)) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_91()//Position - 0x3560
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_92()//Position - 0x35CC
{
	vector3 vVar0;
	
	vVar0 = { func_18(CAM::_0xDC9DA9E8789F5246()) };
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_26(23) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_93()//Position - 0x3656
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_26(23) || func_26(21)) || func_26(14)) || func_65(17)) || ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_94()//Position - 0x36CB
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(13))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_95()//Position - 0x3742
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(12))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_96()//Position - 0x37B9
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(11))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_97()//Position - 0x3830
{
	if ((((func_26(23) || func_26(22)) || func_26(3)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_98()//Position - 0x38A3
{
	if ((((func_26(23) || func_26(22)) || func_26(2)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_99()//Position - 0x3916
{
	if ((func_26(23) || func_26(22)) || func_26(1))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_100()//Position - 0x3971
{
	if (((func_26(23) || func_26(22)) || func_26(0)) || INTERIOR::IS_INTERIOR_SCENE())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_101()//Position - 0x39D6
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

void func_102(int iParam0, char* sParam1)//Position - 0x3A91
{
	if (iLocal_46 == 1)
	{
		if (((((func_14(9) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("barry1")) > 0) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) > 0) || func_26(23)) || func_26(22)) || func_26(20))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_103(iParam0))
		{
			func_20("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		iLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_103(int iParam0)//Position - 0x3B2B
{
	switch (iParam0)
	{
		case joaat("DODO"):
			if (func_104(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("DUKES2"):
			if (func_104(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("SUBMERSIBLE2"):
			if (func_104(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_104(int iParam0, int iParam1)//Position - 0x3B83
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

int func_105(int iParam0, int iParam1)//Position - 0x3BA6
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_646B, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_646C)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_646B, iParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_646B, iParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1)//Position - 0x3BF3
{
	if (!func_14(14))
	{
		return MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(iParam0, iParam1);
	}
	return 0;
}

void func_107()//Position - 0x3C11
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != 4294967295)
		{
			HUD::_REMOVE_NOTIFICATION(iLocal_80[iVar0]);
			iLocal_80[iVar0] = 4294967295;
		}
		iVar0++;
	}
}

int func_108()//Position - 0x3C47
{
	if (((Global_16C30 == 13 || Global_16C30 == 10) || Global_16C30 == 11) || Global_16C30 == 12)
	{
		return 0;
	}
	return 1;
}

void func_109()//Position - 0x3C85
{
	if (func_14(14) || (!CAM::IS_SCREEN_FADED_IN() && iLocal_84 != 0))
	{
		iLocal_84 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_84 != 0)
	{
		if (!func_14(14))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_110()//Position - 0x3CD0
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

void func_111()//Position - 0x3CFA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = 4294967295;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_112()//Position - 0x3D22
{
	MISC::_0x2587A48BC88DFADF(0);
	if (iLocal_64 == 5)
	{
		func_36();
	}
	if (iLocal_65 == 5)
	{
		func_45(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (iLocal_62 == 5)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 0);
			ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), false, false, false, false, false, 0, 0, 0);
		}
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1f);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1f);
	}
	MISC::SET_GRAVITY_LEVEL(0);
	Global_6469 = 0;
	Global_6468 = 0;
	Global_646A = 0;
	Global_646B = 0;
	Global_646D = 0;
	Global_646C = 0;
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

