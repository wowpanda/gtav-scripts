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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[30];
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_54 = 4294967295;
	iLocal_55 = 5;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_120();
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_sonar")) > 1)
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	func_119(13);
	func_118(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_117(AUDIO::_0x0626A247D2405330());
		switch (iLocal_51)
		{
			case 0:
				func_111();
				break;
			
			case 1:
				func_103();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				func_120();
				break;
		}
	}
}

void func_1()//Position - 0xEB
{
	iLocal_52 = 0;
	if (func_102(AUDIO::_0x0626A247D2405330()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (func_70(&Local_42, &Local_48))
			{
				func_28();
			}
			else if (PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
			{
				iLocal_49 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				func_118(1);
				func_13(0);
				if (func_102(AUDIO::_0x0626A247D2405330()))
				{
					if (func_11(&Local_42, &Local_48, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), &iLocal_54))
					{
						func_8();
					}
				}
				HUD::_0x14621BB1DF14E2B2(0);
				func_7();
				func_6(1);
			}
			else if (func_102(iLocal_49))
			{
				if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(iLocal_49, 1)) > 62500f)
				{
					func_5();
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_50))
				{
					iLocal_50 = func_2(iLocal_49, 0, 0);
					HUD::SET_BLIP_SPRITE(iLocal_50, 308);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

int func_2(int iParam0, bool bParam1, bool bParam2)//Position - 0x1CF
{
	return func_3(iParam0, !bParam1, bParam2);
}

int func_3(int iParam0, bool bParam1, bool bParam2)//Position - 0x1E2
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_4(bool bParam0, float fParam1, float fParam2)//Position - 0x286
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5()//Position - 0x29D
{
	func_7();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_49);
	}
}

void func_6(int iParam0)//Position - 0x2BA
{
	iLocal_51 = iParam0;
}

void func_7()//Position - 0x2C7
{
	if (HUD::DOES_BLIP_EXIST(iLocal_50))
	{
		HUD::REMOVE_BLIP(&iLocal_50);
	}
}

void func_8()//Position - 0x2E0
{
	func_9(func_10(iLocal_54), 1, 1);
	iLocal_53 = 1;
}

void func_9(vector3 vParam0, bool bParam1, bool bParam2)//Position - 0x2F9
{
	Global_4220 = { vParam0 };
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 30);
	if (bParam1)
	{
		MISC::SET_BIT(&Global_950, 29);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 29);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&Global_951, 1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 1);
	}
}

Vector3 func_10(int iParam0)//Position - 0x345
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		
		case 10:
			return -3413.73f, 830.23f, -12.95f;
			break;
		
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		
		case 19:
			return -3043.23f, -212.16f, -23.48f;
			break;
		
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		
		case 21:
			return -777.21f, 6726.71f, -30.89f;
			break;
		
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		
		case 24:
			return -2591.62f, -470.34f, -30.4f;
			break;
		
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		
		case 28:
			return 1873.5f, -3012.6f, -47f;
			break;
		
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x681
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_12(&(uParam0->f_1), iVar0))
		{
			fVar1 = SYSTEM::VDIST2(vParam2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != 4294967295;
}

bool func_12(var uParam0, int iParam1)//Position - 0x6E8
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, iParam1);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1, (iParam1 - 32));
}

int func_13(int iParam0)//Position - 0x726
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&Global_950, 22);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 22);
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x75D
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
			func_26();
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
	func_20();
	if (Global_38B1.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_19(0) == 1)
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
	func_26();
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

void func_15()//Position - 0x96E
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

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x9F2
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

bool func_17(int iParam0)//Position - 0xAA8
{
	return Global_8D15 == iParam0;
}

void func_18(char* sParam0)//Position - 0xAB6
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_19(int iParam0)//Position - 0xAD6
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

void func_20()//Position - 0xB30
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
		Global_38B1 = func_21();
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

var func_21()//Position - 0xBD2
{
	func_22();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_22()//Position - 0xBEB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_25(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_24(AUDIO::_0x0626A247D2405330());
			if (func_23(iVar0) && (!func_17(14) || Global_19A3D))
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

bool func_23(int iParam0)//Position - 0xCE8
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0xCF4
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

int func_25(int iParam0)//Position - 0xD31
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

void func_26()//Position - 0xD5B
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
		if ((Global_8D15 == 15 && func_27(0) == 0) && Global_954 == 0)
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

bool func_27(bool bParam0)//Position - 0x1277
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_28()//Position - 0x12A2
{
	func_51(3, 250000);
	func_44(299, 0, 0);
	func_31(20, 1);
	func_29();
	func_6(3);
}

void func_29()//Position - 0x12CD
{
	int iVar0;
	
	iVar0 = func_30(65);
	Global_24D678[iVar0 /*83*/] = 65;
	StringCopy(&(Global_24D678[iVar0 /*83*/].f_12[0 /*16*/]), "", 64);
}

int func_30(int iParam0)//Position - 0x12FA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24D678[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24D678[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)//Position - 0x1347
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)//Position - 0x1362
{
	if (func_17(14) && !func_43(iParam0))
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
	if (func_42(&Global_412216))
	{
		if (func_40(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_412216, iParam0))
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

int func_33(var uParam0, int iParam1)//Position - 0x13FF
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)//Position - 0x14B0
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)//Position - 0x152B
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)//Position - 0x153C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_412215 - 0.5f));
}

void func_37(var uParam0, int iParam1)//Position - 0x1570
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)//Position - 0x1580
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

float func_39(var uParam0)//Position - 0x159D
{
	return uParam0->f_50;
}

bool func_40(var uParam0, int iParam1)//Position - 0x15A9
{
	return func_41(uParam0, iParam1) != 4294967295;
}

int func_41(var uParam0, int iParam1)//Position - 0x15BB
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

bool func_42(var uParam0)//Position - 0x15E8
{
	return uParam0->f_4F == 1;
}

int func_43(int iParam0)//Position - 0x15F6
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

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x1646
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
		func_49((891 + iParam0), 1, 4294967295, 1);
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
		func_45();
	}
}

void func_45()//Position - 0x172E
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
		func_48(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_47() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_46();
				}
			}
		}
	}
}

int func_46()//Position - 0x1BEF
{
	if (func_27(0))
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

int func_47()//Position - 0x1C3A
{
	return Global_6373;
}

int func_48(int iParam0, int iParam1)//Position - 0x1C45
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

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1C96
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
		iParam2 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_50()//Position - 0x21FE
{
	return Global_1407E0;
}

void func_51(int iParam0, int iParam1)//Position - 0x220A
{
	int iVar0;
	
	func_53(Global_19E56.f_612C[iParam0 /*4*/], func_69(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_19E56.f_612C.f_45 = (Global_19E56.f_612C.f_45 + iParam1);
			break;
		
		case 2:
			Global_19E56.f_612C.f_46 = (Global_19E56.f_612C.f_46 + iParam1);
			break;
		
		case 0:
			Global_19E56.f_612C.f_47 = (Global_19E56.f_612C.f_47 + iParam1);
			break;
	}
	STATS::STAT_GET_INT(func_52(iParam0, 1), &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(func_52(iParam0, 1), iVar0, 1);
}

int func_52(int iParam0, int iParam1)//Position - 0x22B1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x268F
{
	int iVar0;
	int iVar1;
	
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_54(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2776
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_68();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_67(99, 1);
					func_66(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_66(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_66(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_65(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_61(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_66(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_61(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_66(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_66(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_66(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_66(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_66(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_66(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_66(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_61(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_66(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_66(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_66(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_66(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_60(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_67(95, iParam3);
					break;
				
				case 1:
					func_67(97, iParam3);
					break;
				
				case 2:
					func_67(96, iParam3);
					break;
			}
			func_67(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(iVar1);
	}
	iVar5 = (Global_D06B[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_D06B[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_D06B[iVar2] = 2147483647;
				}
				else
				{
					Global_D06B[iVar2] = (Global_D06B[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_66(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_66(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_66(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_D06B[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_D06B[iVar2];
			Global_D06B[iVar2] = (Global_D06B[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/]++;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_56(iParam0);
	if (Global_8D15 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)//Position - 0x2D75
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_D073[iVar0 /*3*/][0] = Global_19E56.f_5038[iVar0];
		Global_D073.f_1F[iVar0 /*3*/][0] = Global_19E56.f_5038.f_B[iVar0];
		Global_D073.f_3E[iVar0 /*3*/][0] = Global_19E56.f_5038.f_16[iVar0];
		Global_D073.f_5D[iVar0 /*3*/][0] = Global_19E56.f_5038.f_21[iVar0];
		Global_D073.f_7C[iVar0 /*3*/][0] = Global_19E56.f_5038.f_2C[iVar0];
		Global_D073.f_9B[iVar0 /*3*/][0] = Global_19E56.f_5038.f_37[iVar0];
		Global_D073.f_BA[iVar0 /*3*/][0] = Global_19E56.f_5038.f_42[iVar0];
		Global_D073.f_D9[iVar0 /*3*/][0] = Global_19E56.f_5038.f_4D[iVar0];
		Global_D073.f_F8[iVar0 /*3*/][0] = Global_19E56.f_5038.f_58[iVar0];
		if (!bParam0)
		{
			Global_D073[iVar0 /*3*/][1] = Global_19E56.f_5038[iVar0];
			Global_D073.f_1F[iVar0 /*3*/][1] = Global_19E56.f_5038.f_B[iVar0];
			Global_D073.f_3E[iVar0 /*3*/][1] = Global_19E56.f_5038.f_16[iVar0];
			Global_D073.f_5D[iVar0 /*3*/][1] = Global_19E56.f_5038.f_21[iVar0];
			Global_D073.f_7C[iVar0 /*3*/][1] = Global_19E56.f_5038.f_2C[iVar0];
			Global_D073.f_9B[iVar0 /*3*/][1] = Global_19E56.f_5038.f_37[iVar0];
			Global_D073.f_BA[iVar0 /*3*/][1] = Global_19E56.f_5038.f_42[iVar0];
			Global_D073.f_D9[iVar0 /*3*/][1] = Global_19E56.f_5038.f_4D[iVar0];
			Global_D073.f_F8[iVar0 /*3*/][1] = Global_19E56.f_5038.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_56(int iParam0)//Position - 0x2FF7
{
	int iVar0;
	
	iVar0 = Global_D06B[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_57(int iParam0)//Position - 0x3051
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_49(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_49(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_49(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_49(137, 0, 4294967295, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0))
		{
			bVar0 = true;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_59() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_59() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_58(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(int iParam0)//Position - 0x3164
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		default:
	}
	return "";
}

int func_59()//Position - 0x3213
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_60(int iParam0)//Position - 0x3220
{
	func_67(93, iParam0);
	func_67(29, iParam0);
	func_67(30, iParam0);
}

bool func_61(int iParam0)//Position - 0x3240
{
	if (iParam0 == 8)
	{
		return func_62(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_62(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_62(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_62(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_59() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_62(int iParam0, int iParam1, int iParam2)//Position - 0x32C4
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_50();
	}
	iVar1 = func_64(iParam0, iParam1);
	uVar2 = func_63(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_63(int iParam0)//Position - 0x3301
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

int func_64(int iParam0, int iParam1)//Position - 0x3619
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_50();
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

int func_65(bool bParam0)//Position - 0x3911
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
		func_48(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

void func_66(int iParam0, int iParam1)//Position - 0x39C8
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_67(int iParam0, int iParam1)//Position - 0x39EB
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

void func_68()//Position - 0x3A48
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[0] == iVar0)
		{
			Global_D06B[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[1] == iVar0)
		{
			Global_D06B[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[2] == iVar0)
		{
			Global_D06B[2] = iVar0;
		}
	}
}

int func_69(int iParam0)//Position - 0x3ABD
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

int func_70(var uParam0, int iParam1)//Position - 0x3BAD
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	
	PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330());
	vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		bVar2 = func_12(&(uParam0->f_1), uParam0->f_A);
		if (!(iParam1[uParam0->f_A /*11*/])->f_A)
		{
			if (!bVar2)
			{
				if (!func_101((iParam1[uParam0->f_A /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_99(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_99(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar2)
		{
			if (func_86(uParam0, iParam1, vVar1))
			{
				if (func_11(uParam0, iParam1, vVar1, &iLocal_54))
				{
					func_51(3, 23000);
					func_8();
				}
			}
		}
		func_83(uParam0->f_A, bVar2);
		uParam0->f_A++;
		if (uParam0->f_A >= *iParam1)
		{
			uParam0->f_A = 0;
		}
		iVar0++;
	}
	if (!Global_11729)
	{
		func_76(&(uParam0->f_B), &(uParam0->f_C), &(uParam0->f_9), 3, &iLocal_56, &uLocal_57, "SUBM_TITLE", "SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_75();
		func_118(0);
		func_71(0);
	}
	if (!uParam0->f_C && !uParam0->f_B)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_71(int iParam0)//Position - 0x3D0F
{
	if (func_74())
	{
		return;
	}
	if (Global_3959)
	{
		func_73(0, 0);
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
	if (!func_72())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_72()//Position - 0x3D89
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_73(bool bParam0, bool bParam1)//Position - 0x3DB0
{
	if (bParam0)
	{
		if (func_19(0))
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

bool func_74()//Position - 0x3E24
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_75()//Position - 0x3E36
{
	MISC::SET_BIT(&Global_950, 30);
}

void func_76(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)//Position - 0x3E47
{
	int iVar0;
	
	func_82(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						unk_0x1190AB7024CBD8CB(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x1190AB7024CBD8CB(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_78(iParam3));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				*uParam2 = MISC::GET_GAME_TIMER();
				*iParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHARD_ANIM_OUT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.33f);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					*iParam4++;
				}
				else if (!func_77())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						func_82(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_77())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						func_82(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam5);
				}
				func_82(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_77()//Position - 0x3FD1
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

int func_78(int iParam0)//Position - 0x3FFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_81(iParam0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_6C, func_80(func_81(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_5"), &iVar0, 4294967295);
	}
	else if (iParam0 == 7)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_7"), &iVar0, 4294967295);
	}
	else if (iParam0 == 8)
	{
		STATS::STAT_GET_INT(joaat("num_hidden_packages_6"), &iVar0, 4294967295);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_81(iParam0))
		{
			iVar2 = (func_79(iParam0) + iVar1);
			if (func_62(iVar2, 4294967295, 4294967295))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_79(int iParam0)//Position - 0x40C8
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_80(int iParam0, int iParam1)//Position - 0x410F
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_81(int iParam0)//Position - 0x412B
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_82(int iParam0)//Position - 0x417B
{
	if (Global_11730 != iParam0)
	{
		Global_11730 = iParam0;
	}
}

void func_83(int iParam0, bool bParam1)//Position - 0x4195
{
	int iVar0;
	
	if (func_85(iParam0) == 0)
	{
		return;
	}
	if (iLocal_58[iParam0] == 4294967295)
	{
		if (!bParam1 && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), Local_48[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_84(&iVar0))
				{
					GRAPHICS::_0xAE51BC858F32BA66(iVar0, Local_48[iParam0 /*11*/].f_3, 8f);
					iLocal_58[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), Local_48[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_58[iParam0] >= 0 && iLocal_58[iParam0] < 8)
			{
				GRAPHICS::_0x649C97D52332341A(iLocal_58[iParam0]);
				iLocal_58[iParam0] = 4294967295;
			}
		}
	}
}

int func_84(var uParam0)//Position - 0x427B
{
	*uParam0 = 0;
	*uParam0 = 0;
	while (*uParam0 < 8)
	{
		if (!GRAPHICS::_0x2C42340F916C5930(*uParam0))
		{
			return 1;
		}
		*uParam0++;
	}
	*uParam0 = 4294967295;
	return 0;
}

int func_85(int iParam0)//Position - 0x42B2
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}

int func_86(var uParam0, var uParam1, vector3 vParam2)//Position - 0x42C6
{
	int iVar0;
	
	iVar0 = uParam0->f_A;
	if ((uParam1[iVar0 /*11*/])->f_A)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[iVar0 /*11*/])->f_1) || func_98((uParam1[iVar0 /*11*/])->f_1))
			{
				func_88(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, OBJECT::GET_PICKUP_COORDS((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14))
		{
			func_87(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_A = 0;
		}
	}
	return 0;
}

void func_87(var uParam0)//Position - 0x4383
{
	if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		OBJECT::REMOVE_PICKUP(*uParam0);
	}
}

void func_88(var uParam0, var uParam1, int iParam2)//Position - 0x439C
{
	int iVar0;
	
	iVar0 = (func_79(*uParam0) + iParam2);
	func_87(&((uParam1[iParam2 /*11*/])->f_1));
	func_97(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_A = 0;
	func_96(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_95(*uParam0, iParam2, 1);
	}
	PAD::SET_PAD_SHAKE(0, 200, 250);
	STATS::STAT_INCREMENT(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_94(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_92(&(uParam0->f_1));
	}
	func_90();
	STATS::_0x79AB33F0FBFAC40C(iVar0);
	func_89(1, 0);
	func_46();
	uParam0->f_B = 1;
}

void func_89(int iParam0, int iParam1)//Position - 0x4447
{
	Global_16C57.f_7 = iParam0;
	Global_16C57.f_8 = iParam1;
}

void func_90()//Position - 0x445F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	STATS::STAT_GET_INT(func_91(0), &iVar0, 4294967295);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(18, iVar0);
	}
	STATS::STAT_GET_INT(func_91(1), &iVar0, 4294967295);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(19, iVar0);
	}
	STATS::STAT_GET_INT(func_91(3), &iVar0, 4294967295);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(20, iVar0);
	}
	iVar2 = ((func_81(0) + func_81(1)) + func_81(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	STATS::STAT_SET_INT(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_91(int iParam0)//Position - 0x4502
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_92(var uParam0)//Position - 0x4553
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, iVar0))
		{
			iVar1++;
			func_49((uParam0->f_2 + iVar0), 1, 4294967295, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_93(168, 0);
	}
}

void func_93(int iParam0, int iParam1)//Position - 0x45D6
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_19E56.f_2189[iParam0] = 1;
	Global_19E56.f_2189.f_EC[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_94(var uParam0, int iParam1)//Position - 0x4613
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_49((uParam0->f_2 + iParam1), 1, 4294967295, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_93(168, 0);
	}
}

void func_95(int iParam0, int iParam1, bool bParam2)//Position - 0x4687
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_7A), iParam1);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2725.f_7A), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_19E56.f_2725.f_7A.f_1), (iParam1 - 32));
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2725.f_7A.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_7D), iParam1);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2725.f_7D), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_19E56.f_2725.f_7D.f_1), (iParam1 - 32));
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2725.f_7D.f_1), (iParam1 - 32));
		}
	}
}

void func_96(var uParam0, int iParam1, bool bParam2)//Position - 0x4773
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			MISC::SET_BIT(uParam0, iParam1);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(uParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), (iParam1 - 32));
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1), (iParam1 - 32));
	}
}

void func_97(int iParam0)//Position - 0x47D4
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, 0);
		HUD::REMOVE_BLIP(iParam0);
	}
}

int func_98(var uParam0)//Position - 0x47F4
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	if (func_102(AUDIO::_0x0626A247D2405330()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("SUBMERSIBLE") || iVar1 == joaat("SUBMERSIBLE2"))
			{
				if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), OBJECT::GET_PICKUP_COORDS(uParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), OBJECT::GET_PICKUP_OBJECT(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_99(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x4880
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (!func_17(13) && !func_17(14))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), uParam0->f_3) <= (50f * 50f))
					{
						STREAMING::REQUEST_MODEL(iParam1);
						while (!STREAMING::HAS_MODEL_LOADED(iParam1))
						{
							STREAMING::REQUEST_MODEL(iParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_100(uParam0->f_3);
						}
						MISC::CLEAR_AREA(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							MISC::SET_BIT(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, 4294967295, iParam5, 1, iParam1);
						}
						else
						{
							MISC::SET_BIT(&iVar0, 3);
							MISC::SET_BIT(&iVar0, 4);
							MISC::SET_BIT(&iVar0, 8);
							MISC::SET_BIT(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, iVar0, 4294967295, 1, iParam1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
			}
			if (OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
			{
				uParam0->f_A = 1;
			}
		}
	}
}

void func_100(vector3 vParam0)//Position - 0x4999
{
	int iVar0;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::_LOAD_INTERIOR(iVar0);
		while (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		INTERIOR::UNPIN_INTERIOR(iVar0);
	}
}

bool func_101(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x49D7
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_102(int iParam0)//Position - 0x4A1E
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

void func_103()//Position - 0x4A3F
{
	if (func_102(AUDIO::_0x0626A247D2405330()))
	{
		if (!PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
		{
			func_118(0);
			func_71(0);
			HUD::_0x14621BB1DF14E2B2(5);
			func_6(2);
		}
		else
		{
			if (!func_110(15))
			{
				func_107("SUBM_HELP1", 1, 0, 4294967295, 10000, 7, 0, 0, 0);
				func_106(15);
			}
			if (!func_105())
			{
				func_118(1);
				if (!iLocal_52 && !Local_42.f_1.f_4 >= Local_42.f_1.f_3)
				{
					func_107("SUBM_TRKHELP", 1, 0, 4294967295, 10000, 7, 0, 0, 0);
					iLocal_52 = 1;
				}
			}
			func_104();
			if (func_70(&Local_42, &Local_48))
			{
				func_28();
			}
		}
	}
}

void func_104()//Position - 0x4AE7
{
	iLocal_53++;
	if ((iLocal_53 % 30) == 0 || iLocal_54 == 4294967295)
	{
		if (func_11(&Local_42, &Local_48, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), &iLocal_54))
		{
			func_8();
		}
	}
}

int func_105()//Position - 0x4B28
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0)//Position - 0x4B45
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

void func_107(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x4B87
{
	func_108(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_108(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x4BA9
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
		func_109();
	}
}

void func_109()//Position - 0x4D7D
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

int func_110(int iParam0)//Position - 0x4E9D
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

void func_111()//Position - 0x4EE0
{
	iLocal_56 = 0;
	func_115();
	func_114(&Local_42, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	func_112(&Local_42, joaat("num_hidden_packages_3"), 815, 30);
	if (func_102(AUDIO::_0x0626A247D2405330()))
	{
		if (PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
		{
			HUD::_0x14621BB1DF14E2B2(0);
			func_6(1);
		}
		else
		{
			HUD::_0x14621BB1DF14E2B2(5);
			func_6(2);
		}
	}
}

void func_112(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4F3D
{
	uParam0->f_6 = iParam1;
	func_113(&(uParam0->f_1), iParam2, iParam3);
}

void func_113(var uParam0, var uParam1, var uParam2)//Position - 0x4F57
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_62((uParam0->f_2 + iVar0), 4294967295, 4294967295))
		{
			iVar1++;
			func_96(uParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_114(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x4FC0
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_A = 0;
}

void func_115()//Position - 0x4FDE
{
	int iVar0;
	
	Local_48[0 /*11*/].f_3 = { func_10(0) };
	Local_48[0 /*11*/].f_9 = 179.47f;
	Local_48[1 /*11*/].f_3 = { func_10(1) };
	Local_48[1 /*11*/].f_9 = 104f;
	Local_48[2 /*11*/].f_3 = { func_10(2) };
	Local_48[2 /*11*/].f_9 = 321.5f;
	Local_48[3 /*11*/].f_3 = { func_10(3) };
	Local_48[3 /*11*/].f_9 = -29.79f;
	Local_48[4 /*11*/].f_3 = { func_10(4) };
	Local_48[4 /*11*/].f_9 = -165.6f;
	Local_48[5 /*11*/].f_3 = { func_10(5) };
	Local_48[5 /*11*/].f_9 = 116f;
	Local_48[6 /*11*/].f_3 = { func_10(6) };
	Local_48[6 /*11*/].f_9 = -68.65f;
	Local_48[7 /*11*/].f_3 = { func_10(7) };
	Local_48[7 /*11*/].f_9 = 40f;
	Local_48[8 /*11*/].f_3 = { func_10(8) };
	Local_48[8 /*11*/].f_9 = 40f;
	Local_48[9 /*11*/].f_3 = { func_10(9) };
	Local_48[9 /*11*/].f_9 = 40f;
	Local_48[10 /*11*/].f_3 = { func_10(10) };
	Local_48[10 /*11*/].f_9 = 40f;
	Local_48[11 /*11*/].f_3 = { func_10(11) };
	Local_48[11 /*11*/].f_9 = 27.04f;
	Local_48[12 /*11*/].f_3 = { func_10(12) };
	Local_48[12 /*11*/].f_9 = 40f;
	Local_48[13 /*11*/].f_3 = { func_10(13) };
	Local_48[13 /*11*/].f_9 = 40f;
	Local_48[14 /*11*/].f_3 = { func_10(14) };
	Local_48[14 /*11*/].f_9 = 40f;
	Local_48[15 /*11*/].f_3 = { func_10(15) };
	Local_48[15 /*11*/].f_9 = 40f;
	Local_48[16 /*11*/].f_3 = { func_10(16) };
	Local_48[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_48[17 /*11*/].f_3 = { func_10(17) };
	Local_48[17 /*11*/].f_9 = 40f;
	Local_48[18 /*11*/].f_3 = { func_10(18) };
	Local_48[18 /*11*/].f_9 = 40f;
	Local_48[19 /*11*/].f_3 = { func_10(19) };
	Local_48[19 /*11*/].f_9 = 40f;
	Local_48[20 /*11*/].f_3 = { func_10(20) };
	Local_48[20 /*11*/].f_9 = 40f;
	Local_48[21 /*11*/].f_3 = { func_10(21) };
	Local_48[21 /*11*/].f_9 = 40f;
	Local_48[22 /*11*/].f_3 = { func_10(22) };
	Local_48[22 /*11*/].f_9 = 40f;
	Local_48[23 /*11*/].f_3 = { func_10(23) };
	Local_48[23 /*11*/].f_9 = 40f;
	Local_48[24 /*11*/].f_3 = { func_10(24) };
	Local_48[24 /*11*/].f_9 = 40f;
	Local_48[25 /*11*/].f_3 = { func_10(25) };
	Local_48[25 /*11*/].f_9 = 198f;
	Local_48[26 /*11*/].f_3 = { func_10(26) };
	Local_48[26 /*11*/].f_9 = 198f;
	Local_48[27 /*11*/].f_3 = { func_10(27) };
	Local_48[27 /*11*/].f_9 = 198f;
	Local_48[28 /*11*/].f_3 = { func_10(28) };
	Local_48[28 /*11*/].f_9 = 198f;
	Local_48[29 /*11*/].f_3 = { func_10(29) };
	Local_48[29 /*11*/].f_9 = -109.43f;
	func_116(&Local_48);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_58[iVar0] = 4294967295;
		iVar0++;
	}
}

void func_116(int iParam0)//Position - 0x5361
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_A = 0;
		iVar0++;
	}
}

bool func_117(int iParam0)//Position - 0x5386
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_118(bool bParam0)//Position - 0x53A4
{
	if (bParam0)
	{
		Global_19E56.f_36C7.f_59 = 1;
	}
	else
	{
		Global_19E56.f_36C7.f_59 = 0;
	}
}

int func_119(int iParam0)//Position - 0x53C8
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

void func_120()//Position - 0x5422
{
	int iVar0;
	
	HUD::_0x14621BB1DF14E2B2(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		func_97(&(Local_48[iVar0 /*11*/].f_2));
		func_87(&(Local_48[iVar0 /*11*/].f_1));
		if (iLocal_58[iVar0] >= 0 && iLocal_58[iVar0] < 8)
		{
			GRAPHICS::_0x649C97D52332341A(iLocal_58[iVar0]);
		}
		iVar0++;
	}
	if (func_122(&(Local_42.f_1)))
	{
		func_121(13);
	}
	func_75();
	func_118(0);
	func_71(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_42.f_7);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_121(int iParam0)//Position - 0x54B0
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

bool func_122(var uParam0)//Position - 0x550A
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

