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
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
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
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
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
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_112();
	}
	Global_26011 = 0;
	Global_26010 = 0;
	Global_26012 = 0;
	Global_26013 = 0;
	Global_26015 = 0;
	Global_26014 = 0;
	func_111();
	while (true)
	{
		func_2();
		if (((NETWORK_IS_GAME_IN_PROGRESS() && func_1(PLAYER_ID(), 1, 1)) && !Global_1574191) && Global_25765 == 0)
		{
			func_112();
		}
		WAIT(0);
	}
}

int func_1(var uParam0, bool bParam1, bool bParam2)
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

void func_2()
{
	func_87();
	func_67();
	func_21();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (IS_INTERIOR_SCENE())
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

void func_4(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	
	bVar4 = false;
	if (HAS_MODEL_LOADED(iParam0))
	{
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if (DOES_ENTITY_EXIST(uLocal_68))
			{
				if (!IS_ENTITY_DEAD(uLocal_68, 0))
				{
					if (IS_PED_IN_VEHICLE(PLAYER_PED_ID(), uLocal_68, 0))
					{
						vVar0 = { GET_ENTITY_COORDS(uLocal_68, 1) };
						fVar3 = GET_ENTITY_HEADING(uLocal_68);
						SET_ENTITY_COORDS(PLAYER_PED_ID(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				DELETE_VEHICLE(&uLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER_PED_ID(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER_PED_ID(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER_PED_ID(), 0f, 3.5f, 1f) };
				}
				fVar3 = (GET_ENTITY_HEADING(PLAYER_PED_ID()) + 90f);
			}
			if (func_17(iParam0, vVar0, fVar3))
			{
				uLocal_68 = CREATE_VEHICLE(iParam0, vVar0, fVar3, 0, 1, 0);
				SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_68, 1084227584);
				SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_68);
				func_15(sLocal_70);
				func_5(20);
			}
			else
			{
				SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_14(14) && !func_13(""))
	{
		SET_BIT(&Global_26012, iParam0);
		Global_26015 = 1;
		func_6();
	}
}

void func_6()
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

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_9()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_12(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_14(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_10(Global_106565.f_2357.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
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

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(char* sParam0)
{
	if (iLocal_94 != 0)
	{
		if (func_14(14) && IS_SCREEN_FADED_IN())
		{
			if (ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP") && IS_INTERIOR_SCENE())
			{
				return 0;
			}
			if ((ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON") && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0)) && IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_14(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_15(char* sParam0)
{
	if (func_13(""))
	{
	}
	else
	{
		_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_ACTIVATED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_16(_DRAW_NOTIFICATION(0, 1));
		PLAYSTATS_CHEAT_APPLIED(sParam0);
	}
}

void func_16(int iParam0)
{
	iLocal_80[iLocal_91] = iParam0;
	iLocal_91++;
	if (iLocal_91 >= 10)
	{
		iLocal_91 = 0;
	}
}

int func_17(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0[9];
	vector3 vVar28;
	vector3 vVar31;
	vector3 vVar34;
	var uVar37;
	var uVar40;
	int iVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	
	GET_MODEL_DIMENSIONS(iParam0, &vVar28, &vVar31);
	vVar34.x = (ABSF((vVar31.x - vVar28.x)) / 2f);
	vVar34.y = (ABSF((vVar31.y - vVar28.y)) / 2f);
	vVar34.z = (ABSF((vVar31.z - vVar28.z)) / 2f);
	vVar0[0 /*3*/] = { vParam1 };
	vVar0[1 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, -vVar34.x, -vVar34.y, -vVar34.z) };
	vVar0[2 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar34.x, -vVar34.y, -vVar34.z) };
	vVar0[3 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar34.x, vVar34.y, -vVar34.z) };
	vVar0[4 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, -vVar34.x, vVar34.y, -vVar34.z) };
	vVar0[5 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, -vVar34.x, -vVar34.y, vVar34.z) };
	vVar0[6 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar34.x, -vVar34.y, vVar34.z) };
	vVar0[7 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar34.x, vVar34.y, vVar34.z) };
	vVar0[8 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, -vVar34.x, vVar34.y, vVar34.z) };
	if (!_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam1))
	{
		return 0;
	}
	uVar50 = _START_SHAPE_TEST_RAY(func_18(PLAYER_ID()) + Vector(1f, 0f, 0f), vParam1, 87, PLAYER_PED_ID(), 0);
	GET_SHAPE_TEST_RESULT(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = _START_SHAPE_TEST_RAY(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, PLAYER_PED_ID(), 0);
	GET_SHAPE_TEST_RESULT(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = _START_SHAPE_TEST_RAY(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, PLAYER_PED_ID(), 0);
	GET_SHAPE_TEST_RESULT(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = _START_SHAPE_TEST_RAY(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, PLAYER_PED_ID(), 0);
	GET_SHAPE_TEST_RESULT(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = _START_SHAPE_TEST_RAY(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, PLAYER_PED_ID(), 0);
	GET_SHAPE_TEST_RESULT(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = _START_SHAPE_TEST_RAY(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, PLAYER_PED_ID(), 0);
	GET_SHAPE_TEST_RESULT(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = _START_SHAPE_TEST_RAY(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, PLAYER_PED_ID(), 0);
	GET_SHAPE_TEST_RESULT(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_18(var uParam0)
{
	return GET_ENTITY_COORDS(GET_PLAYER_PED(uParam0), 0);
}

void func_19(var uParam0)
{
	if (IS_MODEL_IN_CDIMAGE(uParam0))
	{
		REQUEST_MODEL(uParam0);
		if (HAS_MODEL_LOADED(uParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_20(char* sParam0)
{
	if (!func_14(14))
	{
		_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_DENIED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_16(_DRAW_NOTIFICATION(0, 1));
	}
}

void func_21()
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

void func_22()
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
			if ((((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_27()) || func_26(23)) || func_26(21)) || func_26(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_24();
			break;
		
		case 9:
			func_23("CHEAT_AIM_SLOW_MO");
			func_30(19, 0);
			SET_TIME_SCALE(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_23(char* sParam0)
{
	if (func_13(sParam0))
	{
	}
	else
	{
		_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_DEACTIVATED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_16(_DRAW_NOTIFICATION(0, 1));
	}
}

void func_24()
{
	if (IS_PED_ON_FOOT(PLAYER_PED_ID()))
	{
		if (IS_CONTROL_PRESSED(2, 25))
		{
			if (func_25(PLAYER_PED_ID()) != joaat("weapon_unarmed") && func_25(PLAYER_PED_ID()) != joaat("object"))
			{
				SET_TIME_SCALE(fLocal_78);
			}
			else
			{
				SET_TIME_SCALE(1f);
			}
		}
		else
		{
			SET_TIME_SCALE(1f);
		}
	}
}

int func_25(var uParam0)
{
	var uVar0;
	
	GET_CURRENT_PED_WEAPON(uParam0, &uVar0, 1);
	return uVar0;
}

int func_26(int iParam0)
{
	if (IS_BIT_SET(Global_26010, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	if (((((((func_14(0) || func_14(11)) || func_14(4)) || func_14(9)) || func_14(10)) || func_14(3)) || func_14(2)) || func_28(35))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

void func_29()
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

void func_30(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		SET_BIT(&Global_26011, iParam0);
		func_5(iParam0);
	}
	else
	{
		CLEAR_BIT(&Global_26011, iParam0);
	}
}

void func_31()
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
			DISABLE_CONTROL_ACTION(2, 37, 1);
			DISABLE_CONTROL_ACTION(2, 19, 1);
			if ((((((((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_27()) || func_33()) || func_32(1)) || IS_DISABLED_CONTROL_JUST_PRESSED(2, 37)) || IS_DISABLED_CONTROL_JUST_PRESSED(2, 19)) || func_26(23)) || func_26(21)) || func_26(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			DISABLE_CONTROL_ACTION(2, 37, 1);
			DISABLE_CONTROL_ACTION(2, 19, 1);
			func_23("CHEAT_SLOW_MO");
			func_30(16, 0);
			iLocal_76 = 0;
			SET_TIME_SCALE(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_32(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_33()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

void func_34()
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
			SET_TIME_SCALE(0.6f);
			break;
		
		case 2:
			func_15("CHEAT_SLOW_MO2");
			SET_TIME_SCALE(0.4f);
			break;
		
		case 3:
			func_15("CHEAT_SLOW_MO3");
			SET_TIME_SCALE(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_35()
{
	vector3 vVar0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_30(17, 1);
			FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 1);
			SET_PLAYER_INVINCIBLE(PLAYER_ID(), 1);
			SET_ENTITY_PROOFS(PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 1);
			vVar0 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
			uVar3 = GET_ENTITY_HEADING(PLAYER_PED_ID());
			GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar4, 0, 0);
			fVar4 = (fVar4 + 500f);
			SET_ENTITY_COORDS(PLAYER_PED_ID(), vVar0.x, vVar0.y, fVar4, 1, 0, 0, 1);
			SET_ENTITY_HEADING(PLAYER_PED_ID(), uVar3);
			iLocal_72 = GET_GAME_TIMER();
			DO_SCREEN_FADE_OUT(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_37(1000, iLocal_72))
			{
				FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
				SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
				iLocal_72 = GET_GAME_TIMER();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_37(1000, iLocal_72))
			{
				DISABLE_CONTROL_ACTION(0, 144, 1);
				DISABLE_CONTROL_ACTION(0, 149, 1);
				if (func_8() == 0)
				{
					SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 9, 0, 0, 0);
				}
				else
				{
					SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 8, 0, 0, 0);
				}
				DO_SCREEN_FADE_IN(250);
				iLocal_72 = GET_GAME_TIMER();
				func_15("CHEAT_SKYFALL");
				_SET_UNK_MAP_FLAG(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_27()) || func_26(23)) || func_26(21)) || func_26(17))
			{
				iLocal_64 = 9;
				break;
			}
			DISABLE_CONTROL_ACTION(0, 144, 1);
			HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER_PED_ID()))
			{
				APPLY_FORCE_TO_ENTITY(PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER_PED_ID()))
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

void func_36()
{
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		REMOVE_WEAPON_FROM_PED(PLAYER_PED_ID(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		SET_PLAYER_INVINCIBLE(PLAYER_ID(), 0);
		SET_ENTITY_PROOFS(PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	_SET_UNK_MAP_FLAG(0);
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_38()
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
			iLocal_74 = GET_GAME_TIMER();
			SET_PLAYER_INVINCIBLE(PLAYER_ID(), 1);
			SET_ENTITY_PROOFS(PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!IS_PLAYER_PLAYING(PLAYER_ID()) || IS_PED_INJURED(PLAYER_PED_ID()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_18(PLAYER_ID()) };
			if (((((func_27() || func_33()) || func_26(23)) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (GET_GAME_TIMER() - iLocal_74);
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) == 0)
			{
				func_39((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			SET_PLAYER_INVINCIBLE(PLAYER_ID(), 1);
			SET_ENTITY_PROOFS(PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			_0x047CBED6F6F8B63C();
			break;
		
		case 9:
			func_23("CHEAT_INVINCIBILITY_OFF");
			func_30(15, 0);
			iLocal_62 = 1;
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				SET_PLAYER_INVINCIBLE(PLAYER_ID(), 0);
				SET_ENTITY_PROOFS(PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_40(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_40(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

int func_41(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

void func_42()
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
			if (((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_26(23)) || func_26(21)) || func_26(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_59 = 9;
				return;
			}
			SET_FIRE_AMMO_THIS_FRAME(PLAYER_ID());
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

void func_43()
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
			if ((((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_26(23)) || func_26(21)) || func_26(13)) || func_27())
			{
				iLocal_60 = 9;
				return;
			}
			SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER_ID());
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

void func_44()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_DRUNK");
			func_30(18, 1);
			func_59(PLAYER_PED_ID());
			func_57(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_27() || !IS_PLAYER_PLAYING(PLAYER_ID())) || func_26(23)) || func_26(21)) || func_26(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_DRUNK");
			func_30(18, 0);
			func_48(PLAYER_PED_ID());
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

void func_45(bool bParam0)
{
	CUSTOM_MENU_COORDINATES(0f);
	_0x0225778816FDC28C(0f);
	SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	STOP_GAMEPLAY_CAM_SHAKING(1);
	SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	STOP_CINEMATIC_CAM_SHAKING(1);
	_0x12561FCBB62D5B9C(0);
	if (IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!IS_STRING_NULL_OR_EMPTY(&Global_37562))
	{
		if (IS_AUDIO_SCENE_ACTIVE(&Global_37562))
		{
			STOP_AUDIO_SCENE(&Global_37562);
		}
	}
	if (DOES_CAM_EXIST(Global_37551))
	{
		if (IS_CAM_SHAKING(Global_37551))
		{
			SET_CAM_SHAKE_AMPLITUDE(Global_37551, 0f);
			STOP_CAM_SHAKING(Global_37551, 1);
		}
	}
	if (IS_SCRIPT_GLOBAL_SHAKING())
	{
		STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GET_TIMECYCLE_MODIFIER_INDEX() != -1 || _0x459FD2C8D0AB78BC() != -1)
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
	StringCopy(&Global_37562, "", 64);
	StringCopy(&Global_37578, "", 16);
	func_46();
}

void func_46()
{
	Global_37550 = 0;
	Global_37551 = 0;
	Global_37552 = 0;
	Global_37553 = 30000;
	Global_37554 = 0f;
	Global_37556 = 0f;
	Global_37555 = 0f;
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
}

void func_47(int iParam0)
{
	int iVar0;
	
	if (!Global_37550)
	{
		return;
	}
	iVar0 = GET_GAME_TIMER();
	Global_37552 = (iVar0 + iParam0);
	Global_37553 = iParam0;
}

void func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_56(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		func_51(1, iVar1, 1);
		return;
	}
	iVar2 = func_50(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_49(iVar2);
}

void func_49(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == PLAYER_PED_ID())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	func_52(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
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
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_53()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	if (func_55(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37371[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_57(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_58(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_58(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_37550)
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
	if (!IS_GAMEPLAY_CAM_SHAKING())
	{
		SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!IS_CINEMATIC_CAM_SHAKING())
	{
		SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_37549));
	}
	if (DOES_CAM_EXIST(uParam4))
	{
		SHAKE_CAM(uParam4, "DRUNK_SHAKE", fParam3);
		Global_37551 = uParam4;
	}
	else
	{
		Global_37551 = 0;
	}
	Global_37550 = 1;
	iVar0 = GET_GAME_TIMER();
	Global_37552 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_37552 = -1;
		}
	}
	Global_37553 = uParam1;
	Global_37554 = fParam2;
	Global_37556 = fParam3;
	Global_37555 = fParam3;
}

int func_59(int iParam0)
{
	return func_60(iParam0, -1, 1);
}

int func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_50(iParam0);
	if (!iVar1 == -1)
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
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_37345[iVar2 /*5*/] = 0;
	Global_37345[iVar2 /*5*/].f_1 = iParam0;
	Global_37345[iVar2 /*5*/].f_2 = iParam1;
	Global_37345[iVar2 /*5*/].f_3 = iParam1;
	Global_37345[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER_PED_ID())
	{
		Global_37582 = 1;
	}
	Global_37343++;
	return 1;
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
		{
			return Global_37371[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_63()
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
			if (((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_26(23)) || func_26(21)) || func_26(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_58 = 9;
				return;
			}
			SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER_ID());
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

void func_64()
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
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				if ((((((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_27()) || func_26(23)) || func_26(21)) || func_26(14)) || func_65(17)) || IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
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
			SET_GRAVITY_LEVEL(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_65(int iParam0)
{
	if (IS_BIT_SET(Global_26011, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_66()
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
			SET_GRAVITY_LEVEL(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_67()
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

void func_68()
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
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			func_15("CHEAT_GIVE_PARACHUTE");
			GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 1, 1);
			func_5(10);
		}
	}
}

int func_69()
{
	if (iLocal_93)
	{
		iLocal_93 = 0;
		return 0;
	}
	if (func_70(0))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
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

void func_71()
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
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if (GET_MAX_WANTED_LEVEL() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = GET_PLAYER_WANTED_LEVEL(PLAYER_ID());
			if (iVar0 > 0)
			{
				func_15("CHEAT_WANTED_DOWN");
				SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_20("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_72()
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
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if (GET_MAX_WANTED_LEVEL() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = GET_PLAYER_WANTED_LEVEL(PLAYER_ID());
			if (iVar0 < GET_MAX_WANTED_LEVEL())
			{
				SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), iVar0 + 1, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
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

void func_73()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_26(23) || func_26(22)) || func_26(7)) || func_14(9)) || func_14(10)) || !IS_SPECIAL_ABILITY_UNLOCKED(func_74())) || !IS_SPECIAL_ABILITY_ENABLED(PLAYER_ID()))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			SPECIAL_ABILITY_FILL_METER(PLAYER_ID(), 1);
			func_15("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

var func_74()
{
	return GET_ENTITY_MODEL(PLAYER_PED_ID());
}

void func_75()
{
	var uVar0;
	
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
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			func_15("CHEAT_HEALTH_ARMOR");
			func_5(6);
			SET_ENTITY_HEALTH(PLAYER_PED_ID(), GET_ENTITY_MAX_HEALTH(PLAYER_PED_ID()), 0);
			ADD_ARMOUR_TO_PED(PLAYER_PED_ID(), (GET_PLAYER_MAX_ARMOUR(PLAYER_ID()) - GET_PED_ARMOUR(PLAYER_PED_ID())));
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				uVar0 = GET_VEHICLE_PED_IS_USING(PLAYER_PED_ID());
				if (DOES_ENTITY_EXIST(uVar0))
				{
					if (!IS_ENTITY_DEAD(uVar0, 0))
					{
						SET_VEHICLE_FIXED(uVar0);
					}
				}
			}
		}
	}
}

void func_76()
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
				SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_RAIN");
				func_30(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_15("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_77()
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
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			GIVE_DELAYED_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_knife"), -1, 0);
			GIVE_DELAYED_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_smg"), 300, 0);
			GIVE_DELAYED_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 300, 1);
			GIVE_DELAYED_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 150, 0);
			GIVE_DELAYED_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 30, 0);
			GIVE_DELAYED_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_grenade"), 5, 0);
			GIVE_DELAYED_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_78()
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
			if (((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_26(23)) || func_26(22)) || func_26(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER_ID(), 1.49f);
				_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER_ID(), 1f);
			func_23("CHEAT_FAST_SWIM");
			func_30(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()
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
			if ((((!IS_PLAYER_PLAYING(PLAYER_ID()) || IS_PED_INJURED(PLAYER_PED_ID())) || func_26(23)) || func_26(22)) || func_26(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (IS_PED_RUNNING(PLAYER_PED_ID()) || (IS_PED_SPRINTING(PLAYER_PED_ID()) && !IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())))
				{
					SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER_ID(), 1.49f);
				}
				else
				{
					SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER_ID(), 1f);
				}
				_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER_ID(), 1f);
			func_23("CHEAT_FAST_RUN");
			func_30(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
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
			if (((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_26(23)) || func_26(22)) || func_26(1))
			{
				iLocal_48 = 9;
			}
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
				if (!IS_ENTITY_DEAD(iVar0, 0))
				{
					if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER_PED_ID())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!IS_ENTITY_DEAD(iLocal_69, 0))
							{
								if (func_81(1))
								{
									SET_VEHICLE_REDUCE_GRIP(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!IS_ENTITY_DEAD(iLocal_69, 0))
							{
								SET_VEHICLE_REDUCE_GRIP(iLocal_69, 0);
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
			if (!IS_ENTITY_DEAD(iLocal_69, 0))
			{
				SET_VEHICLE_REDUCE_GRIP(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_30(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		uVar0 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(uVar0))
		{
			if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				iVar1 = GET_ENTITY_MODEL(uVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!IS_THIS_MODEL_A_CAR(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!IS_THIS_MODEL_A_HELI(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!IS_THIS_MODEL_A_BOAT(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_dside_r") != -1 || GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_dside_r") == -1 || GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (IS_THIS_MODEL_A_BIKE(iVar1))
					{
						if (GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_dside_r") != -1 || GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_dside_r") == -1 || GET_ENTITY_BONE_INDEX_BY_NAME(uVar0, "seat_pside_r") == -1)
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
					if (!IS_THIS_MODEL_A_CAR(iVar1) && !IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
					if (IS_BIG_VEHICLE(uVar0))
					{
						return 0;
					}
					uVar4 = GET_ENTITY_SCRIPT(uVar0, &uVar3);
					if (!IS_STRING_NULL_OR_EMPTY(uVar4))
					{
						if (GET_HASH_KEY(uVar4) == GET_HASH_KEY("taxiService"))
						{
							return 0;
						}
					}
					if (func_82(uVar0, iVar2, 0))
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

int func_82(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!DOES_ENTITY_EXIST(uParam0) || !IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_83(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || IS_BIT_SET(Global_106565.f_7223[iVar9], 0))
		{
			if (IS_VEHICLE_IN_GARAGE_AREA(&sVar1, uParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_84(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_85(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_85(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106565.f_9079.f_99.f_58[128] && !Global_106565.f_9079.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106565.f_9079.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106565.f_9079.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_86()
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
			if ((((!IS_PLAYER_PLAYING(PLAYER_ID()) || func_26(23)) || func_26(22)) || func_26(0)) || IS_INTERIOR_SCENE())
			{
				iLocal_47 = 9;
				return;
			}
			SET_SUPER_JUMP_THIS_FRAME(PLAYER_ID());
			SET_PED_RESET_FLAG(PLAYER_PED_ID(), 217, 1);
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

void func_87()
{
	if ((func_110() || iLocal_94 != 0) || func_14(14))
	{
		DISABLE_CONTROL_ACTION(2, 243, 1);
	}
	func_109();
	if (IS_PED_INJURED(PLAYER_PED_ID()))
	{
		return;
	}
	if (IS_PED_BEING_ARRESTED(PLAYER_PED_ID()))
	{
		return;
	}
	if (!IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		return;
	}
	if (!IS_PLAYER_CONTROL_ON(PLAYER_ID()))
	{
		return;
	}
	if (func_33() || IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_92)
		{
			func_107();
			iLocal_92 = 1;
		}
		return;
	}
	iLocal_92 = 0;
	iLocal_93 = 0;
	if ((func_106(988027572, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("buzzoff"))) || func_105(20, joaat("buzzard")))
	{
		func_102(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_106(-1134279030, 11) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bandit"))) || func_105(20, joaat("bmx")))
	{
		func_102(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_106(971352167, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("holein1"))) || func_105(20, joaat("caddy")))
	{
		func_102(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_106(-269863225, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("comet"))) || func_105(20, joaat("comet2")))
	{
		func_102(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_106(458579068, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("flyspray"))) || func_105(20, joaat("duster")))
	{
		func_102(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_106(-666513193, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rocket"))) || func_105(20, joaat("pcj")))
	{
		func_102(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_106(-1245984749, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rapidgt"))) || func_105(20, joaat("rapidgt")))
	{
		func_102(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_106(2076774618, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("offroad"))) || func_105(20, joaat("sanchez")))
	{
		func_102(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_106(855685457, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("vinewood"))) || func_105(20, joaat("stretch")))
	{
		func_102(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_106(-591395876, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("barnstorm"))) || func_105(20, joaat("stunt")))
	{
		func_102(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_106(-1399217582, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("trashed"))) || func_105(20, joaat("trash")))
	{
		func_102(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_101())
	{
		if ((func_106(-375917581, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("extinct"))) || func_105(20, joaat("dodo")))
		{
			func_102(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_106(-2124307881, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deathcar"))) || func_105(20, joaat("dukes2")))
		{
			func_102(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_106(1028964594, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bubbles"))) || func_105(20, joaat("submersible2")))
		{
			func_102(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_106(-393416581, 11) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hoptoit"))) || func_105(0, 0))
	{
		func_100();
	}
	if ((func_106(-296509791, 8) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("snowday"))) || func_105(1, 0))
	{
		func_99();
	}
	if ((func_106(1120820643, 7) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("catchme"))) || func_105(2, 0))
	{
		func_98();
	}
	if ((func_106(-421458016, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("gotgills"))) || func_105(3, 0))
	{
		func_97();
	}
	if ((func_106(372390926, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("toolup"))) || func_105(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_106(606506837, 8) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("makeitrain"))) || func_105(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_106(453014206, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("turtle"))) || func_105(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_106(1773187142, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("powerup"))) || func_105(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_106(1173296014, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("fugitive"))) || func_105(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_106(-381269753, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("lawyerup"))) || func_105(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_106(-2023988698, 11) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skydive"))) || func_105(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_106(-835863906, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("highex"))) || func_105(11, 0))
	{
		func_96();
	}
	if ((func_106(1958387485, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("incendiary"))) || func_105(12, 0))
	{
		func_95();
	}
	if ((func_106(-903985180, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hothands"))) || func_105(13, 0))
	{
		func_94();
	}
	if ((func_106(2087642905, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("floater"))) || func_105(14, 0))
	{
		func_93();
	}
	if ((func_106(1257820019, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("painkiller"))) || func_105(15, 0))
	{
		func_92();
	}
	if ((func_106(1540206179, 7) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("slowmo"))) || func_105(16, 0))
	{
		func_91();
	}
	if ((func_106(115565392, 16) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skyfall"))) || func_105(17, 0))
	{
		func_90();
	}
	if ((func_106(-1276513277, 8) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("liquor"))) || func_105(18, 0))
	{
		func_89();
	}
	if ((func_106(2040433593, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deadeye"))) || func_105(19, 0))
	{
		func_88();
	}
}

void func_88()
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

void func_89()
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

void func_90()
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
	if (IS_INTERIOR_SCENE())
	{
		func_20("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_20("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_26(23) || func_26(21)) || func_26(17)) || func_65(0)) || IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0)) || !IS_GAMEPLAY_CAM_RENDERING())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if ((IS_PED_INJURED(PLAYER_PED_ID()) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 0)) || _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_91()
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

void func_92()
{
	vector3 vVar0;
	
	vVar0 = { func_18(PLAYER_ID()) };
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

void func_93()
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
	if ((((func_26(23) || func_26(21)) || func_26(14)) || func_65(17)) || IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_94()
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

void func_95()
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

void func_96()
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

void func_97()
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

void func_98()
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

void func_99()
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

void func_100()
{
	if (((func_26(23) || func_26(22)) || func_26(0)) || IS_INTERIOR_SCENE())
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

int func_101()
{
	var uVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		if (_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (_0x91B87C55093DE351())
			{
				STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				SET_BIT(&uVar0, 2);
				SET_BIT(&uVar0, 4);
				SET_BIT(&uVar0, 6);
				SET_BIT(&Global_25, 2);
				SET_BIT(&Global_25, 4);
				SET_BIT(&Global_25, 6);
				STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GET_PROFILE_SETTING(866);
					SET_BIT(&uVar0, 0);
					_0xDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (IS_BIT_SET(GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_102(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_14(9) || _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("barry1")) > 0) || _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) > 0) || func_26(23)) || func_26(22)) || func_26(20))
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
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_104(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_104(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_104(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_104(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_106565.f_32743[iParam0], iParam1);
}

int func_105(int iParam0, int iParam1)
{
	if (IS_BIT_SET(Global_26013, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_26014)
			{
				CLEAR_BIT(&Global_26013, iParam0);
				iLocal_93 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			CLEAR_BIT(&Global_26013, iParam0);
			iLocal_93 = 1;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	if (!func_14(14))
	{
		return _HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(iParam0, iParam1);
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			_REMOVE_NOTIFICATION(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_108()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

void func_109()
{
	if (func_14(14) || (!IS_SCREEN_FADED_IN() && iLocal_94 != 0))
	{
		iLocal_94 = GET_GAME_TIMER();
	}
	if (iLocal_94 != 0)
	{
		if (!func_14(14))
		{
			if ((GET_GAME_TIMER() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_110()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
}

void func_112()
{
	_0x2587A48BC88DFADF(0);
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
		SET_TIME_SCALE(1f);
	}
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (iLocal_62 == 5)
		{
			SET_PLAYER_INVINCIBLE(PLAYER_ID(), 0);
			SET_ENTITY_PROOFS(PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER_ID(), 1f);
		SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER_ID(), 1f);
	}
	SET_GRAVITY_LEVEL(0);
	Global_26011 = 0;
	Global_26010 = 0;
	Global_26012 = 0;
	Global_26013 = 0;
	Global_26015 = 0;
	Global_26014 = 0;
	TERMINATE_THIS_THREAD();
}

