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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_19();
	}
	SET_MISSION_FLAG(1);
	func_18(0);
	func_17();
	_BEGIN_ENUMERATING_THREADS();
	while (!bVar1)
	{
		uVar0 = _GET_ID_OF_NEXT_THREAD_IN_ENUMERATION();
		if (ARE_STRINGS_EQUAL(_GET_NAME_OF_THREAD(uVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	_0x8D9DF6ECA8768583(uVar0);
	func_16();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_19();
}

void func_1(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_2(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_2(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, var uParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	var uVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	uVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (DOES_ENTITY_EXIST(uVar0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(uVar0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 0);
			iVar3 = 1;
		}
		if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (bParam18)
			{
				func_15(uVar0);
			}
			if (IS_ENTITY_IN_ANGLED_AREA(uVar0, vParam0, vParam3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar10 = { GET_ENTITY_COORDS(uVar0, 1) };
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_12(uVar0, vParam0, vParam3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (IS_VEHICLE_MODEL(uVar0, joaat("taxi")))
				{
					if (GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) != PLAYER_PED_ID() && GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) != 0)
					{
						if (GET_DISTANCE_BETWEEN_COORDS(vParam0 + vParam3 / Vector(2f, 2f, 2f), GET_ENTITY_COORDS(uVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_4(uVar0, func_6(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_3(vParam11))
				{
					if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
					{
						iVar13 = GET_ENTITY_MODEL(uVar0);
						_0xDF7E3EEB29642C38(uVar0, &vVar4, &vVar7);
						if (IS_THIS_MODEL_A_HELI(iVar13))
						{
							vParam11.x = (vParam11.x + 3f);
							vParam11.y = (vParam11.y + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							vParam11 = { vParam11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							vParam11 = { vParam11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar7.x - vVar4.x) > vParam11.x)
						{
							bVar2 = false;
						}
						else if ((vVar7.y - vVar4.y) > vParam11.y)
						{
							bVar2 = false;
						}
						else if ((vVar7.z - vVar4.z) > vParam11.z)
						{
							bVar2 = false;
						}
					}
				}
				if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (bVar2)
					{
						CLEAR_AREA_OF_VEHICLES(vParam7, 5f, 0, 0, 0, 0, 0, 0);
						SET_ENTITY_HEADING(uVar0, uParam10);
						SET_ENTITY_COORDS(uVar0, vParam7, 1, 0, 0, 1);
						SET_VEHICLE_ON_GROUND_PROPERLY(uVar0, 1084227584);
						if (bParam17)
						{
							SET_VEHICLE_ENGINE_ON(uVar0, 0, 1, 0);
							SET_VEHICLE_DOORS_SHUT(uVar0, 1);
						}
					}
					else
					{
						if (!IS_ENTITY_A_MISSION_ENTITY(uVar0) || !DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uVar0, 1))
						{
							SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 1);
						}
						if (IS_PED_IN_VEHICLE(PLAYER_PED_ID(), uVar0, 0))
						{
							SET_ENTITY_COORDS(PLAYER_PED_ID(), GET_ENTITY_COORDS(uVar0, 1), 1, 0, 0, 1);
						}
						DELETE_VEHICLE(&uVar0);
					}
				}
			}
			if (bParam14)
			{
				CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (DOES_ENTITY_EXIST(uVar0))
				{
					if (IS_ENTITY_A_MISSION_ENTITY(uVar0))
					{
						SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar0);
					}
				}
			}
		}
		else
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(uVar0))
			{
				SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 0);
			}
			uVar14 = GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0);
			if (DOES_ENTITY_EXIST(uVar14) && !IS_PED_INJURED(uVar14))
			{
				SET_ENTITY_COORDS(uVar14, GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = GET_VEHICLE_MODEL_NUMBER_OF_SEATS(GET_ENTITY_MODEL(uVar0));
			if (iVar15 <= 2)
			{
				uVar14 = GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0);
				if (DOES_ENTITY_EXIST(uVar14) && !IS_PED_INJURED(uVar14))
				{
					SET_ENTITY_COORDS(uVar14, GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				uVar14 = GET_PED_IN_VEHICLE_SEAT(uVar0, 1, 0);
				if (DOES_ENTITY_EXIST(uVar14) && !IS_PED_INJURED(uVar14))
				{
					SET_ENTITY_COORDS(uVar14, GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
				}
				uVar14 = GET_PED_IN_VEHICLE_SEAT(uVar0, 2, 0);
				if (DOES_ENTITY_EXIST(uVar14) && !IS_PED_INJURED(uVar14))
				{
					SET_ENTITY_COORDS(uVar14, GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
				}
			}
			DELETE_VEHICLE(&uVar0);
		}
	}
}

int func_3(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!DOES_ENTITY_EXIST(uParam0) || !IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_5(iParam1, iVar0, &sVar1, &iVar9))
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

int func_5(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_6()
{
	func_7();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_7()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_11(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER_PED_ID());
			if (func_9(iVar0) && (!func_8(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_9(Global_106565.f_2357.f_539.f_4321))
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

bool func_8(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = { func_14(vParam1 - vParam4) };
		vVar3 = { vVar0 };
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = { vParam1 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar9 = { vParam1 + vVar0 * FtoV((fParam7 / 2f)) };
		vVar12 = { vParam4 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar15 = { vParam4 + vVar0 * FtoV((fParam7 / 2f)) };
		GET_MODEL_DIMENSIONS(GET_ENTITY_MODEL(uParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var31, Var31.f_1, 0f) };
		vVar18[1 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var31, Var34.f_1, 0f) };
		vVar18[2 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var34, Var31.f_1, 0f) };
		vVar18[3 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var34, Var34.f_1, 0f) };
		if (((((((((((((((func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_13(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_13(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_13(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_13(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return 1;
		}
	}
	return 0;
}

int func_13(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_14(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_15(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (GET_VEHICLE_ENGINE_HEALTH(uParam0) <= 200f)
			{
				SET_VEHICLE_ENGINE_HEALTH(uParam0, 500f);
			}
			if (GET_VEHICLE_PETROL_TANK_HEALTH(uParam0) <= 700f)
			{
				SET_VEHICLE_ENGINE_HEALTH(uParam0, 900f);
			}
			if (GET_ENTITY_HEALTH(uParam0) < 200)
			{
				SET_VEHICLE_ENGINE_HEALTH(uParam0, 500f);
			}
		}
	}
}

void func_16()
{
	Global_105589 = 1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0:
			_REQUEST_CUTSCENE_EX("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			_REQUEST_CUTSCENE_EX("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			REQUEST_CUTSCENE("BS_2A_2B_INT", 8);
			break;
	}
	while (!HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
	{
		WAIT(0);
	}
}

void func_18(int iParam0)
{
	Global_70409.f_138 = iParam0;
}

void func_19()
{
	func_24(24, 1);
	func_20(1, 0);
	TERMINATE_THIS_THREAD();
}

void func_20(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_56496)
	{
		Global_56496 = iParam1;
	}
	if (bParam0)
	{
		if ((func_23(0) && Global_71836.f_1 == 1) && func_22(Global_71836))
		{
		}
		else
		{
			Global_56494 = 1;
		}
	}
	if (Global_106565.f_9079 || func_23(0))
	{
		iVar0 = func_21();
		iVar1 = Global_84464[iVar0 /*5*/];
		uVar2 = Global_71859.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_106565.f_9079)
			{
			}
			return;
		}
		if (IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 4);
		SET_BIT(&Global_71838, 1);
		Global_71854 = uVar2;
		Global_71855 = GET_GAME_TIMER();
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_23(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

void func_24(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106565.f_9079.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106565.f_9079.f_99.f_58[iParam0] = iParam1;
}

