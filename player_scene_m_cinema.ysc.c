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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68[4] = { 0, 0, 0, 0 };
	int iLocal_69[4] = { 0, 0, 0, 0 };
	int iLocal_70[4] = { 0, 0, 0, 0 };
	struct<4> Local_71[4];
	vector3 vLocal_72 = { 0f, 0f, 0f };
	float fLocal_73 = 0f;
	vector3 vLocal_74[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_75[4] = { 0f, 0f, 0f, 0f };
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
	sLocal_20 = "NULL";
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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_62 = { 0f, 0f, 0f };
	iLocal_63 = 4294967295;
	iLocal_66 = 318;
	iLocal_67 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_33();
	}
	SYSTEM::WAIT(0);
	func_21();
	func_20();
	func_16();
	while (iLocal_67 && func_7(1, iLocal_68[0]))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_65)
		{
			case 0:
				if (func_6())
				{
					iLocal_65 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_65 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_33();
}

void func_1()//Position - 0x101
{
	iLocal_67 = 0;
}

int func_2()//Position - 0x10C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		func_3(iLocal_68[iVar0], iVar0);
		iVar0++;
	}
	if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_72) > 100f)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0, int iParam1)//Position - 0x153
{
	char* sVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (iLocal_70[iParam1])
		{
			case 0:
				if (func_5())
				{
					return 0;
				}
				if (PED::IS_PED_INJURED(iParam0))
				{
					iLocal_70[iParam1] = 4294967295;
					return 0;
				}
				if (func_4(iParam0))
				{
					iLocal_70[iParam1] = 2;
					return 0;
				}
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 3148068810) != 1)
				{
					BRAIN::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
					PED::SET_PED_KEEP_TASK(iLocal_68[iParam1], true);
				}
				break;
			
			case 1:
				if (PED::IS_PED_INJURED(iParam0))
				{
					iLocal_70[iParam1] = 4294967295;
					return 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_71[iParam1 /*4*/])))
				{
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(Local_71[iParam1 /*4*/]), &(iLocal_68[iParam1]), 1, 1424);
					iLocal_70[iParam1] = 4;
					return 0;
				}
				if (func_4(iParam0))
				{
					iLocal_70[iParam1] = 2;
					return 0;
				}
				sVar0 = "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
				if (!BRAIN::PED_HAS_USE_SCENARIO_TASK(iParam0))
				{
					BRAIN::TASK_START_SCENARIO_IN_PLACE(iParam0, sVar0, 0, 1);
					PED::SET_PED_KEEP_TASK(iLocal_68[iParam1], true);
				}
				break;
			
			case 2:
				iVar1 = 0;
				while (iVar1 < iLocal_70)
				{
					if (iParam1 != iVar1)
					{
						if (iLocal_70[iVar1] < 2 && iLocal_70[iParam1] >= 0)
						{
							iLocal_70[iVar1] = 2;
						}
					}
					iVar1++;
				}
				iLocal_70[iParam1] = 3;
				return 0;
				break;
			
			case 3:
				if (PED::IS_PED_INJURED(iParam0))
				{
					iLocal_70[iParam1] = 4294967295;
					return 0;
				}
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857) != 1)
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(iParam0);
					BRAIN::TASK_SMART_FLEE_PED(iParam0, AUDIO::_0x0626A247D2405330(), 50f, 20000, 1, 0);
					return 1;
				}
				if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(iParam0, true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) > (50f * 50f))
				{
					iLocal_70[iParam1] = 0;
					return 1;
				}
				break;
			
			case 4:
				return 0;
				break;
			
			case 4294967295:
				return 0;
				break;
			
			default:
				return 0;
				break;
		}
		return 1;
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x33E
{
	int iVar0;
	
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, AUDIO::_0x0626A247D2405330(), 1))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, AUDIO::_0x0626A247D2405330()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		if (iParam0 != iLocal_68[iVar0])
		{
			if (iLocal_70[iVar0] < 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_5()//Position - 0x3A7
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		return 0;
	}
	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
		{
			return 0;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
		{
			if (STREAMING::SET_PLAYER_INVERTED_UP() > 0)
			{
				if (STREAMING::_0x5B48A06DD0E792A5() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_6()//Position - 0x3FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		func_3(iLocal_68[iVar0], iVar0);
		iVar0++;
	}
	if (!func_5())
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)//Position - 0x431
{
	vector3 vVar0;
	float fVar1;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_15(14))
		{
			return 0;
		}
		if (MISC::_0x9689123E3F213AA5())
		{
			return 0;
		}
		if (!func_9(iParam0, func_10()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			vVar0 = { unk_0x8000C77B5F336760(iParam1, false) };
			fVar1 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar0);
			if (fVar1 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(vVar0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_8(Global_16B5A) && iParam1 != 0)
		{
			Global_16B5A = 0;
		}
	}
	return 1;
}

int func_8(var uParam0)//Position - 0x515
{
	return uParam0;
}

bool func_9(var uParam0, var uParam1)//Position - 0x51F
{
	return (uParam0 && uParam1) != 0;
}

int func_10()//Position - 0x52E
{
	func_11();
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

void func_11()//Position - 0x574
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_14(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_13(AUDIO::_0x0626A247D2405330());
			if (func_12(iVar0) && (!func_15(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_12(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_12(int iParam0)//Position - 0x671
{
	return iParam0 < 3;
}

int func_13(int iParam0)//Position - 0x67D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)//Position - 0x6BA
{
	if (func_12(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)//Position - 0x6E4
{
	return Global_8D15 == iParam0;
}

void func_16()//Position - 0x6F2
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_19();
		}
		return;
	}
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		func_19();
		return;
	}
	func_17();
	if (Global_16B5C > 0)
	{
		return;
	}
	STREAMING::_0x74DE2E8739086740();
}

void func_17()//Position - 0x732
{
	func_18((Global_16B5C - 1));
}

void func_18(int iParam0)//Position - 0x744
{
	Global_16B5C = iParam0;
}

void func_19()//Position - 0x752
{
	func_18(0);
}

void func_20()//Position - 0x75F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_69)
		{
			if (iLocal_69[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_69[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_69[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_69[iVar0]);
					bVar2 = false;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_71[iVar0 /*4*/])))
			{
				SCRIPT::REQUEST_SCRIPT(&(Local_71[iVar0 /*4*/]));
				if (!SCRIPT::HAS_SCRIPT_LOADED(&(Local_71[iVar0 /*4*/])))
				{
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		if (iLocal_69[iVar0] != 0)
		{
			iLocal_68[iVar0] = PED::CREATE_PED(4, iLocal_69[iVar0], vLocal_72 + vLocal_74[iVar0 /*3*/], 0f, 1, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_68[iVar0], (fLocal_73 + fLocal_75[iVar0]));
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_68[iVar0], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 17, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_68[iVar0], true);
			PED::SET_PED_CAN_RAGDOLL(iLocal_68[iVar0], 0);
		}
		iVar0++;
	}
}

void func_21()//Position - 0x88C
{
	char[] cVar0[8];
	struct<109> Var1;
	struct<97> Var2;
	
	iLocal_66 = Global_16A1C;
	func_25(iLocal_66, &vLocal_72, &fLocal_73, &cVar0);
	Var1.f_1 = 4294967295;
	Var1.f_11 = 4;
	Var1.f_11.f_8 = 4;
	Var1.f_11.f_D = 4;
	Var1.f_11.f_12 = 4;
	Var1.f_11.f_18 = 4;
	Var1.f_11.f_1D = 4;
	Var1.f_11.f_22 = 4;
	Var1.f_3E = 8;
	Var1.f_60.f_7 = 21;
	Var1.f_60.f_8 = 6;
	Var2.f_1 = 4294967295;
	Var2.f_11 = 4;
	Var2.f_11.f_8 = 4;
	Var2.f_11.f_D = 4;
	Var2.f_11.f_12 = 4;
	Var2.f_11.f_18 = 4;
	Var2.f_11.f_1D = 4;
	Var2.f_11.f_22 = 4;
	Var2.f_3E = 8;
	Var2.f_60.f_7 = 21;
	Var2.f_60.f_8 = 6;
	Var1 = 0;
	Var1.f_2 = iLocal_66;
	Var1.f_3 = Global_162B5.f_2D;
	func_22(Var1, &Var2);
	switch (iLocal_66)
	{
		case 97:
			vLocal_74[0 /*3*/] = { Vector(45.5004f, -205.8167f, -1416.54f) - vLocal_72 };
			vLocal_74[1 /*3*/] = { Vector(45.5004f, -207.5375f, -1423.898f) - vLocal_72 };
			vLocal_74[2 /*3*/] = { Vector(45.5004f, -210.4254f, -1428.501f) - vLocal_72 };
			vLocal_74[3 /*3*/] = { Vector(45.5004f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-205.8167f, -210.4254f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1416.54f, -1428.501f)) - vLocal_72 };
			fLocal_75[0] = (5.8017f - fLocal_73);
			fLocal_75[1] = (2.582f - fLocal_73);
			fLocal_75[2] = (-47.7025f - fLocal_73);
			fLocal_75[3] = (65.2818f - fLocal_73);
			iLocal_69[0] = joaat("a_f_m_tourist_01");
			StringCopy(&(Local_71[0 /*4*/]), "", 16);
			iLocal_69[1] = joaat("a_m_y_hipster_01");
			StringCopy(&(Local_71[1 /*4*/]), "", 16);
			iLocal_69[2] = joaat("a_m_m_bevhills_01");
			StringCopy(&(Local_71[2 /*4*/]), "", 16);
			iLocal_69[3] = joaat("a_m_m_genfat_01");
			StringCopy(&(Local_71[3 /*4*/]), "", 16);
			iLocal_70[0] = 0;
			iLocal_70[1] = 0;
			iLocal_70[2] = 0;
			iLocal_70[3] = 0;
			break;
		
		case 158:
			vLocal_74[0 /*3*/] = { 1.2712f, 6.071f, -0.75f };
			vLocal_74[1 /*3*/] = { 3.8061f, 5.7599f, -0.5f };
			vLocal_74[2 /*3*/] = { 4.541f, 7.8487f, -0.4f };
			vLocal_74[3 /*3*/] = { 3.1051f, 13.7474f, -0.3463f };
			fLocal_75[0] = 123.059f;
			fLocal_75[1] = 134.0498f;
			fLocal_75[2] = 58.663f;
			fLocal_75[3] = 89.5592f;
			iLocal_69[0] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_71[0 /*4*/]), "pb_prostitute", 16);
			iLocal_69[1] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_71[1 /*4*/]), "pb_prostitute", 16);
			iLocal_69[2] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_71[2 /*4*/]), "pb_prostitute", 16);
			iLocal_69[3] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_71[3 /*4*/]), "pb_prostitute", 16);
			iLocal_70[0] = 1;
			iLocal_70[1] = 1;
			iLocal_70[2] = 1;
			iLocal_70[3] = 1;
			break;
		
		default:
			vLocal_74[0 /*3*/] = { 0f, 0f, 0f };
			vLocal_74[1 /*3*/] = { 0f, 0f, 0f };
			vLocal_74[2 /*3*/] = { 0f, 0f, 0f };
			vLocal_74[3 /*3*/] = { 0f, 0f, 0f };
			fLocal_75[0] = 0f;
			fLocal_75[1] = 0f;
			fLocal_75[2] = 0f;
			fLocal_75[3] = 0f;
			iLocal_69[0] = 0;
			iLocal_69[1] = 0;
			iLocal_69[2] = 0;
			iLocal_69[3] = 0;
			break;
	}
}

int func_22(struct<109> Param0, var uParam1)//Position - 0xBDC
{
	uParam1->f_77 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1435919172;
			uParam1->f_6E = 1435919172;
			func_24(uParam1);
			uParam1->f_76 = 0;
			return 0;
			break;
		
		case 1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
		
		case 2:
			*uParam1 = { Global_16510[0 /*109*/] };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = Global_16B44[0];
			return 1;
			break;
		
		case 3:
			*uParam1 = { Global_16510[1 /*109*/] };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = Global_16B44[1];
			return 1;
			break;
		
		case 4:
			*uParam1 = { Global_16510[2 /*109*/] };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = Global_16B44[2];
			return 1;
			break;
		
		case 5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = Global_16B44[Param0.f_3];
			return 1;
			break;
		
		case 6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = Global_16B44[Param0.f_3];
			return 1;
			break;
		
		case 7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = Global_16B44[Param0.f_3];
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
			*uParam1 = { Param0 };
			uParam1->f_6D = 936589729;
			uParam1->f_6E = 936589729;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 11:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 14:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 13:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 15:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 54:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 55:
			*uParam1 = { Param0 };
			uParam1->f_6D = 936589729;
			uParam1->f_6E = 936589729;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 56:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 57:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 12:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 451360105;
			func_23(uParam1, 144, 3312640106, 3312640106, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 16:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 17:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 18:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 19:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 20:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 22:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 74:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 67:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 58:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 59:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 60:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 25:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 26:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 27:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 28:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 38:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 40:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2335118350;
			uParam1->f_6E = 2335118350;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 47:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 49:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 48:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 2500551826;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 50:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 51:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 52:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 66:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 61:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 62:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 63:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 69:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 64:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 65:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 234:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 316:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 315:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 75:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_23(uParam1, 30, 3312640106, 3312640106, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 76:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 77:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, -0.7035f, -0.0282f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 78:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 79:
		case 80:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 2277090178, 2277090178, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_24(uParam1);
			}
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 124:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 82:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 84:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 83:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 85:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 291:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 86:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 87:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 88:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			if (Param0.f_2 == 92)
			{
				uParam1->f_76 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam1->f_76 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_24(uParam1);
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 94:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_23(uParam1, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			}
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 95:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 96:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 134:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 108:
		case 109:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 150:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 20, 1785177548, 1785177548, 0.98f, 0.8017f, -0.42f, -180f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 118:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 119:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 120:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 114:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 105:
		case 106:
		case 107:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 2277090178;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 98:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 99:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_23(uParam1, 15, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 100:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_23(uParam1, 15, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 101:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_23(uParam1, 14, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 102:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_23(uParam1, 14, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 103:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 121:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 122:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, -2.04f, -0.15f, 0f, 14.4f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 125:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 110:
		case 111:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 131:
		case 132:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 126:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 128:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 129:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 130:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 133:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 151:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 152:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 153:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 154:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 155:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 156:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 14, 1785177548, 1785177548, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 157:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 158:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 159:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 160:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 161:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 163:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 164:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 165:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 166:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 167:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 14, 3312640106, 1785177548, -0.8472f, 0.155f, 0f, 152.556f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 168:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 169:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 14, 1785177548, 1785177548, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 170:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 171:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 172:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 173:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 174:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 177:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 178:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 179:
		case 180:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 192:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 193:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 3312640106, 1785177548, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 194:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_24(uParam1);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 195:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_24(uParam1);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 198:
		case 199:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 200:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 201:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 202:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 184:
		case 185:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 186:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 187:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 188:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 189:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 190:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 191:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 196:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 43, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 197:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				uParam1->f_70 = { 3.4381f, -0.8269f, 0f };
				uParam1->f_73 = -87.6612f;
			}
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 24:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 212:
		case 214:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
			break;
		
		case 215:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 221:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, -0.7949f, -0.508f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 222:
		case 223:
		case 224:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 218:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 219:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 220:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 19, 1785177548, 1785177548, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 225:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 19, 1785177548, 1785177548, 1.23f, 0.6f, -1f, 34.56f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 231:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
		
		case 232:
		case 233:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 235:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 236:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 237:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 238:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 239:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 240:
		case 241:
		case 242:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 273:
		case 274:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 245:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 243:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 244:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 271:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 280:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_24(uParam1);
			return 1;
			break;
		
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			uParam1->f_76 = 1;
			func_24(uParam1);
			if (Param0.f_2 == 265)
			{
				uParam1->f_76 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam1->f_76 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_23(uParam1, 144, 3312640106, 2106541073, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_23(uParam1, 144, 2106541073, 2106541073, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 1;
			break;
		
		case 246:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 247:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 263:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 278:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 279:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 264:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 255:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 248:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 249:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 275:
		case 276:
		case 277:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 254:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 285:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 256:
		case 257:
		case 258:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 259:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 260:
		case 261:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 286:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 287:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 288:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 262:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 289:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 144, 2277090178, 2277090178, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 290:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 292:
		case 295:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 293:
		case 294:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 299:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 296:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 32, 1785177548, 1785177548, 1.41f, 1.35f, 0f, 168f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 297:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 32, 1785177548, 1785177548, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 298:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_23(uParam1, 32, 1785177548, 1785177548, 0.72f, -0.69f, 0f, 172.44f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 304:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 305:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 306:
		case 307:
		case 308:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 309:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 310:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 311:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_24(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 312:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1630799643;
			uParam1->f_6E = 1630799643;
			func_23(uParam1, 144, 474215631, 2775823996, -9.5443f, -3.191f, -0.3f, 180f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 313:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 3312640106;
			func_24(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
		
		case 314:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_24(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
	}
	*uParam1 = { Param0 };
	uParam1->f_6D = 1435919172;
	uParam1->f_6E = 1435919172;
	func_24(uParam1);
	uParam1->f_76 = 0;
	return 0;
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam5)//Position - 0x3F56
{
	uParam0->f_6F = iParam1;
	uParam0->f_74 = iParam2;
	uParam0->f_75 = iParam3;
	uParam0->f_70 = { vParam4 };
	uParam0->f_73 = fParam5;
}

void func_24(var uParam0)//Position - 0x3F80
{
	func_23(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_25(int iParam0, var uParam1, var uParam2, char* sParam3)//Position - 0x3F9E
{
	int iVar0;
	
	if (func_28(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				func_26(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_159D2[iVar0 /*9*/].f_3 };
					*uParam2 = Global_159D2[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_159D2[0 /*9*/].f_3 };
					*uParam2 = Global_159D2[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_16510[0 /*109*/].f_4 };
				*uParam2 = Global_16510[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_16510[1 /*109*/].f_4 };
				*uParam2 = Global_16510[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_16510[2 /*109*/].f_4 };
				*uParam2 = Global_16510[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_19E56.f_933.f_21B.f_8E8[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_19E56.f_933.f_21B.f_8F2[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_19E56.f_933.f_21B.f_8E8[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_19E56.f_933.f_21B.f_8F2[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_19E56.f_933.f_21B.f_8E8[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_19E56.f_933.f_21B.f_8F2[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_16658[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_26(var uParam0)//Position - 0x4193
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = Global_19E56.f_933.f_21B.f_10CF;
	vVar1 = { Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/] };
	if (func_27(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false) };
	}
	*uParam0 = 5;
	fVar2 = 9999999f;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21.f_B[iVar3], 0))
		{
			vVar4 = { Global_159D2[iVar3 /*9*/].f_3 };
			fVar5 = SYSTEM::VDIST(vVar1, vVar4);
			if (fVar5 > 150f)
			{
				if (fVar5 < fVar2)
				{
					*uParam0 = iVar3;
					fVar2 = fVar5;
				}
			}
		}
		iVar3++;
	}
	return *uParam0 != 5;
}

bool func_27(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x424E
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_28(int iParam0, var uParam1, char* sParam2)//Position - 0x4295
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_26(&iVar1);
			if (iVar1 < 5)
			{
				*uParam1 = Global_159D2[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_159D2[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_16510[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_16510[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_16510[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_19E56.f_933.f_21B.f_8F2[0];
			StringCopy(sParam2, func_32(Global_19E56.f_933.f_21B.f_8F6[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_19E56.f_933.f_21B.f_8F2[1];
			StringCopy(sParam2, func_32(Global_19E56.f_933.f_21B.f_8F6[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_19E56.f_933.f_21B.f_8F2[2];
			StringCopy(sParam2, func_32(Global_19E56.f_933.f_21B.f_8F6[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_28(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_28(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_28(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_31(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_29(0, 25, &uVar2, &fVar3))
			{
				*uParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_28(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_28(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_28(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_28(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_28(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_28(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			vVar4 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar4.x, -vVar4.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			vVar5 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar5.x, -vVar5.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			vVar6 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar6.x, -vVar6.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			vVar7 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-vVar7.x, -vVar7.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_29(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x6765
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_29(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 1;
					break;
				
				case 1:
					if (func_29(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_29(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_29(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_29(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_29(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_29(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_29(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_19E56.f_4849[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_19E56.f_4849[2] == 300 || Global_19E56.f_4849[2] == 301) || Global_19E56.f_4849[2] == 302) || Global_19E56.f_4849[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (func_30())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_29(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_30()//Position - 0x86B4
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_31(int iParam0, var uParam1, var uParam2)//Position - 0x86D5
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*uParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_31(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_31(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*uParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*uParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*uParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*uParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*uParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*uParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*uParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*uParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*uParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*uParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*uParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_32(int iParam0)//Position - 0x9044
{
	switch (iParam0)
	{
		case 2014101067:
			return "v_chopshop";
			break;
		
		case 551019620:
			return "v_franklins";
			break;
		
		case 223682799:
			return "v_franklinshouse";
			break;
		
		case 2081281344:
			return "v_methlab";
			break;
		
		case 3273555063:
			return "v_michael";
			break;
		
		case 1314234446:
			return "v_strip3";
			break;
		
		case 1681413451:
			return "v_trailer";
			break;
		
		case 1724779208:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_33()//Position - 0x90CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_69)
	{
		if (iLocal_69[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69[iVar0]);
		}
		iVar0++;
	}
	MISC::SET_GAME_PAUSED(0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}
