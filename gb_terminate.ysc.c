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
	int iLocal_36 = 0;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	struct<11> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_113[32];
	struct<21> Local_114 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_681(ScriptParam_114))
		{
			func_625();
		}
	}
	while (true)
	{
		func_624();
		if (func_616())
		{
			func_625();
		}
		switch (func_615(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_614() == 1)
				{
					if (func_613())
					{
						func_612(NETSHOP::_NETWORK_SHOP_BASKET_START(), 1);
					}
				}
				break;
			
			case 1:
				if (func_614() == 1)
				{
					if (!func_610())
					{
						func_92();
					}
					if (func_52(1))
					{
						func_612(NETSHOP::_NETWORK_SHOP_BASKET_START(), 3);
					}
				}
				else if (func_614() == 3)
				{
					func_612(NETSHOP::_NETWORK_SHOP_BASKET_START(), 3);
				}
				break;
			
			case 3:
				func_625();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_51())
			{
				func_50(3);
			}
			switch (func_614())
			{
				case 0:
					if (func_42())
					{
						func_50(1);
					}
					break;
				
				case 1:
					if (func_41() == 3)
					{
						func_50(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_625();
					break;
				}
		}
	}
}

void func_1()//Position - 0x18A
{
	switch (Local_112.f_8)
	{
		case 0:
			if (func_40())
			{
				func_39(1);
			}
			func_37();
			break;
		
		case 1:
			func_37();
			func_2();
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 5))
			{
				func_39(3);
			}
			func_37();
			break;
		
		case 3:
			break;
	}
}

void func_2()//Position - 0x1EC
{
	if (!func_13(func_36()))
	{
		func_12(1);
		func_39(2);
		MISC::SET_BIT(&(Local_112.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_39(2);
		MISC::SET_BIT(&(Local_112.f_1), 3);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 0))
	{
		if (func_3(&(Local_112.f_4), func_5(), 0))
		{
			MISC::SET_BIT(&(Local_112.f_1), 4);
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 4))
	{
		func_12(2);
		func_39(2);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 7))
	{
		func_12(0);
		func_39(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)//Position - 0x2A3
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x301
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_5()//Position - 0x346
{
	if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(int iParam0, bool bParam1)//Position - 0x368
{
	return func_7(iParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)//Position - 0x379
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_10() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, int iParam1)//Position - 0x3D5
{
	if (iParam0 != func_10())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_10())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)//Position - 0x424
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

int func_10()//Position - 0x46E
{
	return 4294967295;
}

int func_11()//Position - 0x477
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

void func_12(int iParam0)//Position - 0x48C
{
	Local_112.f_9 = iParam0;
}

int func_13(int iParam0)//Position - 0x49A
{
	if (func_33(iParam0) && ((func_31(iParam0) == 142 || func_31(iParam0) == 164) || func_31(iParam0) == 148))
	{
		return 0;
	}
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_30(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_29(iParam0))
	{
		return 0;
	}
	if (func_27(iParam0, 1) && func_26(iParam0) == func_11())
	{
		return 0;
	}
	if (func_22(iParam0))
	{
		return 0;
	}
	if (func_21(iParam0, 7))
	{
		return 0;
	}
	if (func_16(iParam0))
	{
		return 0;
	}
	if (func_14(iParam0, 6))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)//Position - 0x569
{
	int iVar0;
	
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1841F3[iVar0 /*790*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)//Position - 0x5A2
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_252F9E.f_1, iParam0);
	}
	return 1;
}

int func_16(int iParam0)//Position - 0x5C7
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
	{
		if (iParam0 == CAM::_0xDC9DA9E8789F5246())
		{
			return 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 2))
	{
		return 1;
	}
	return 0;
}

bool func_17()//Position - 0x609
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_18(int iParam0, int iParam1)//Position - 0x61A
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_19(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_1841F3[iParam0 /*790*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)//Position - 0x665
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_20();
	}
	if (Global_140845[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()//Position - 0x6A6
{
	return Global_1407E0;
}

bool func_21(int iParam0, int iParam1)//Position - 0x6B2
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

bool func_22(int iParam0)//Position - 0x6CB
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return func_25();
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_F1.f_88[func_24(10) /*33*/][iParam0], func_23(10));
}

int func_23(int iParam0)//Position - 0x701
{
	return (iParam0 % 32);
}

int func_24(int iParam0)//Position - 0x70E
{
	return (iParam0 / 32);
}

bool func_25()//Position - 0x71B
{
	return Global_1406A0;
}

int func_26(int iParam0)//Position - 0x727
{
	if (iParam0 != func_10())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_10();
}

bool func_27(int iParam0, bool bParam1)//Position - 0x74A
{
	if (!bParam1)
	{
		if (func_28(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_10();
}

int func_28(int iParam0)//Position - 0x775
{
	if (iParam0 != func_10())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_10())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

bool func_29(int iParam0)//Position - 0x7AA
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_30(int iParam0, bool bParam1, bool bParam2)//Position - 0x7BF
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x829
{
	if (func_32(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_32(int iParam0, int iParam1)//Position - 0x84C
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x887
{
	if (func_28(iParam0))
	{
		if (func_34(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x8A6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_35(iParam0, 9);
	}
	return 0;
}

bool func_35(int iParam0, int iParam1)//Position - 0x8C4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

int func_36()//Position - 0x8DF
{
	return Local_112.f_2;
}

void func_37()//Position - 0x8EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_41() < 2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar2 /*4*/].f_1, 1))
			{
				func_38(PLAYER::INT_TO_PLAYERINDEX(iVar2));
				MISC::SET_BIT(&(Local_112.f_1), 1);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar2 /*4*/].f_1, 4))
			{
				func_38(func_11());
				MISC::SET_BIT(&(Local_112.f_1), 7);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar2 /*4*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_112.f_1), 0);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar2 /*4*/].f_1, 2))
			{
				MISC::SET_BIT(&(Local_112.f_1), 4);
			}
		}
		else if (func_41() == 2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_41() == 2)
	{
		if (iVar0 == NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
		{
			MISC::SET_BIT(&(Local_112.f_1), 5);
		}
		else if (func_3(&(Local_112.f_6), 10000, 0))
		{
			MISC::SET_BIT(&(Local_112.f_1), 5);
		}
	}
}

void func_38(int iParam0)//Position - 0x9E0
{
	Local_112.f_3 = iParam0;
}

void func_39(int iParam0)//Position - 0x9EE
{
	Local_112.f_8 = iParam0;
}

int func_40()//Position - 0x9FC
{
	return 1;
}

int func_41()//Position - 0xA05
{
	return Local_112.f_8;
}

int func_42()//Position - 0xA11
{
	if (func_43())
	{
		return 1;
	}
	return 0;
}

int func_43()//Position - 0xA25
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 6))
	{
		return 1;
	}
	func_49(func_10());
	if (Global_26862F.f_1313.f_4 != func_10())
	{
	}
	else
	{
		func_50(3);
	}
	if (func_9(Global_26862F.f_1313.f_4, 0, 1))
	{
		if (!func_47(Global_26862F.f_1313.f_4, CAM::_0xDC9DA9E8789F5246(), 1))
		{
			func_49(Global_26862F.f_1313.f_4);
		}
	}
	if (func_36() != func_10())
	{
		if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			if (func_46(func_36(), 13))
			{
				Local_112.f_A = 1;
			}
		}
		func_44(func_45(func_36()), 1);
		Global_26862F.f_1313.f_4 = func_10();
		MISC::SET_BIT(&(Local_112.f_1), 6);
		return 1;
	}
	else if (func_36() == func_10())
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)//Position - 0xAF7
{
	vector3 vVar0;
	
	vVar0.x = 3364138797;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iParam0);
	}
}

int func_45(int iParam0)//Position - 0xB29
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

bool func_46(int iParam0, int iParam1)//Position - 0xB3B
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

int func_47(int iParam0, int iParam1, bool bParam2)//Position - 0xB56
{
	if (iParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_48(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_10())
		{
			return iParam1 == Global_18CD5B[iParam0 /*560*/].f_B;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0xBA0
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_10())
			{
				if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_49(int iParam0)//Position - 0xBE5
{
	Local_112.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_50(int iParam0)//Position - 0xBFF
{
	Local_112 = iParam0;
}

int func_51()//Position - 0xC0B
{
	if (Global_26862F.f_1313.f_22)
	{
		Global_26862F.f_1313.f_22 = 0;
		return 1;
	}
	return 0;
}

int func_52(bool bParam0)//Position - 0xC2E
{
	if (func_60(1))
	{
		return 1;
	}
	if (Global_26862F.f_1313.f_23)
	{
		Global_26862F.f_1313.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_59() == func_10() || !func_9(func_59(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_57(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_56(CAM::_0xDC9DA9E8789F5246()) && func_53(func_55(CAM::_0xDC9DA9E8789F5246()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53(int iParam0, int iParam1)//Position - 0xCB1
{
	return func_54(iParam0) == iParam1;
}

int func_54(int iParam0)//Position - 0xCC2
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

int func_55(int iParam0)//Position - 0x101C
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_135.f_D;
	}
	return 4294967295;
}

int func_56(int iParam0)//Position - 0x104D
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135, 4);
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x1081
{
	if (func_58(iParam0) != func_10())
	{
		return func_58(iParam0) == func_26(iParam0);
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x10A7
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_23;
}

int func_59()//Position - 0x10BC
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23;
}

int func_60(bool bParam0)//Position - 0x10D3
{
	bool bVar0;
	
	if (!func_91(1))
	{
		bVar0 = false;
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_10())
		{
			if (func_9(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 0, 1))
			{
				if ((Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 4 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 8) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_90(func_31(CAM::_0xDC9DA9E8789F5246())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_89(31);
				if (func_88(func_31(CAM::_0xDC9DA9E8789F5246())))
				{
					func_89(81);
				}
				if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_10() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
				{
					Global_18C773 = func_62(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_61(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
					{
						func_89(88);
					}
				}
				else
				{
					Global_18C773 = 1;
				}
				Global_18C763 = { Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_63 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_61(int iParam0)//Position - 0x1225
{
	return func_8(iParam0, 1);
}

int func_62(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1234
{
	int iVar0;
	int iVar1;
	
	if (func_16(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > 4294967295 && iVar0 < 4)
		{
			if (Global_440000.f_1EBA3[iVar0] != 4294967295)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_16(CAM::_0xDC9DA9E8789F5246()) || (func_87() && func_86())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_85();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_83(iParam1, iParam0, 0);
							}
							else
							{
								return func_73(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_73(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_83(iParam1, iParam0, 0);
				}
				else
				{
					return func_63(0, 4294967295, 0);
				}
			}
			else
			{
				return func_63(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_83(iParam1, iParam0, 0);
		}
		else
		{
			return func_73(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_73(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_63(bool bParam0, int iParam1, bool bParam2)//Position - 0x1414
{
	return func_64(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x142A
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_71() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_70(iParam2, iVar0);
		}
		else
		{
			return func_70(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_69(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_68(1);
				}
				else
				{
					return func_68(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_65(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_65(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_68(1);
	}
	return func_68(0);
}

int func_65(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x151E
{
	int iVar0;
	
	iVar0 = func_67(iParam0, iParam1, iParam3);
	if (func_66(Global_440000.f_1FEDE, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_66(int iParam0, bool bParam1)//Position - 0x1636
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_2559E == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_22CA[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x1687
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_69(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_68(bool bParam0)//Position - 0x16CE
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_69(int iParam0, int iParam1, int iParam2)//Position - 0x16E5
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > 4294967295 && iParam1 > 4294967295) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 0);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 1);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 2);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 4);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 5);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 6);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 8);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 9);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 10);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 12);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 13);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 14);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)//Position - 0x18B0
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_67(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_71()//Position - 0x18FE
{
	if (func_72() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_72()//Position - 0x191B
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1933
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > 4294967295)
	{
		if (Global_1841F3[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 4294967295)
		{
			if (func_79(1))
			{
				iVar3 = func_78(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_76(iVar3);
				}
			}
			if ((func_75(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_69(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_68(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_74(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_68(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_78(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_76(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_74(bool bParam0)//Position - 0x1AD7
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_75(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1AEE
{
	if (iParam2 == 4294967294)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && iParam2 == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_76(int iParam0)//Position - 0x1B66
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_77(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_77(int iParam0)//Position - 0x1C29
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_78(int iParam0)//Position - 0x1C40
{
	if (!iParam0 == func_10())
	{
		if (func_27(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_26(iParam0)];
		}
	}
	return 4294967295;
}

int func_79(int iParam0)//Position - 0x1C72
{
	if ((func_82() || func_81()) || (func_80() && iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_80()//Position - 0x1CA1
{
	return Global_255C02.f_10;
}

var func_81()//Position - 0x1CAF
{
	return Global_255C02.f_F;
}

var func_82()//Position - 0x1CBD
{
	return Global_255C02.f_E;
}

int func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x1CCB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_79(1))
	{
		iVar2 = func_78(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_76(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_10())
	{
		if (Global_440000.f_1EBA3[iParam0] != 4294967295 && Global_440000.f_1EBA3[iParam0] <= 4)
		{
			if (Global_440000.f_1EBA3[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 4)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1EBA3[iParam0];
			}
		}
		else
		{
			iVar0 = func_64(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_84(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_69(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_74(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_84(int iParam0)//Position - 0x1E59
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_255C9;
			break;
		
		case 1:
			iVar0 = Global_440000.f_255CA;
			break;
		
		case 2:
			iVar0 = Global_440000.f_255CB;
			break;
		
		case 3:
			iVar0 = Global_440000.f_255CC;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_85()//Position - 0x1F2E
{
	return Global_240006.f_2;
}

bool func_86()//Position - 0x1F3C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_87()//Position - 0x1F4D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_88(int iParam0)//Position - 0x1F6A
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148 && func_8(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_89(int iParam0)//Position - 0x204C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_90(int iParam0)//Position - 0x2075
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return 4294967295;
}

bool func_91(bool bParam0)//Position - 0x2229
{
	return func_27(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

void func_92()//Position - 0x223B
{
	switch (func_609())
	{
		case 0:
			func_594(151, 1, 4294967295, 0);
			func_593(1);
			if (func_41() > 0)
			{
				func_592(1);
			}
			break;
		
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110, 2))
			{
				func_589();
			}
			if (Global_1987C5 == func_10())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_36()))
				{
					Global_1987C5 = func_36();
				}
			}
			func_583();
			func_573();
			func_554();
			func_552();
			func_509();
			func_387(&(Global_14B91C.f_216), &Global_14B91C, 27, &(Global_14B91C.f_1), &(Global_14B91C.f_75), 4294967295, 0, 0);
			if (func_41() > 1)
			{
				func_592(2);
			}
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 3))
			{
				func_385(0, func_10());
				func_303();
				func_93();
			}
			if (func_41() > 2)
			{
				func_592(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_93()//Position - 0x232A
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 3))
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 2) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 4))
		{
			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 3);
			return;
		}
		if (func_302())
		{
			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 3);
			return;
		}
		if (func_296())
		{
			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 3);
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 7))
		{
			func_94(151, 1, &Var0, 0);
		}
		else
		{
			func_94(151, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 1), &Var0, 0);
		}
		MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 3);
	}
}

void func_94(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x2422
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	func_294(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_40001.f_46E7);
		}
		else
		{
			iVar1 = (iVar1 + func_293(iParam0, uParam2->f_D));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_292(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_40001.f_46E6);
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_12 > 4294967295)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > 4294967295)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_290(iParam0))
	{
		if (bParam1)
		{
			if (func_289(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				func_288();
			}
			else
			{
				func_287();
			}
		}
		else
		{
			func_286();
		}
	}
	func_270(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_268(iParam0, uParam2, &iVar0, &iVar5);
	func_245(iParam0, uParam2, &iVar0, &iVar5);
	func_231(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_214(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26862F.f_1313.f_175 = iVar4;
	}
	else
	{
		Global_26862F.f_1313.f_175 = iVar5;
	}
	iVar8 = func_59();
	if (iVar8 != func_10() && iParam0 != 148)
	{
		if (func_27(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			if (!func_47(CAM::_0xDC9DA9E8789F5246(), iVar8, 1))
			{
				func_200(&iVar0, 1);
			}
		}
	}
	func_194(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_196EF6.f_A = iVar1;
		func_193();
		func_146(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_196EF6.f_9 = iVar0;
		iVar13 = func_11();
		if (iVar13 != func_10())
		{
			func_145(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_91(1);
		if (iParam0 == 168)
		{
			if (!func_144())
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_143())
			{
				if (!func_144())
				{
					Var15 = { func_142() };
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_141(Var15)), func_140(Var15), iVar5);
				}
			}
			else if (func_144())
			{
				func_129(3438960429, iVar0, &iVar16, 0, 1, 0);
				Global_410C0F[iVar16 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar16 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar16 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_128())
			{
				if (!func_144())
				{
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_141(func_127(CAM::_0xDC9DA9E8789F5246()))), 5, iVar5);
				}
			}
			else if (func_144())
			{
				func_129(3438960429, iVar0, &iVar17, 0, 1, 0);
				Global_410C0F[iVar17 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar17 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar17 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_128())
			{
				if (!func_144())
				{
					iVar18 = func_123(uParam2->f_10, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0xB6DC534CAEB0D937(iVar19, iVar5, iVar7, iVar18, uParam2->f_10);
				}
			}
			else if (func_144())
			{
				func_129(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_410C0F[iVar20 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar20 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar20 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xACD5CE18E734968D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_144())
			{
				func_129(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_410C0F[iVar21 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar21 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar21 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x02A33E5F88B092E3(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_128())
			{
				if (!func_144())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_14, iVar5);
				}
			}
			else if (func_144())
			{
				func_129(3438960429, iVar0, &iVar22, 0, 1, 0);
				Global_410C0F[iVar22 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar22 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar22 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_144())
			{
				func_129(3333932415, iVar0, &iVar23, 0, 1, 0);
				Global_410C0F[iVar23 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar23 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar23 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x70275A5DEC872CA2(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_144())
			{
				func_129(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_410C0F[iVar24 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar24 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar24 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF03B782EEA848691(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_144())
			{
				func_129(3660240660, iVar0, &iVar25, 0, 1, 0);
				Global_410C0F[iVar25 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar25 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar25 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_144())
		{
			func_129(3438960429, iVar0, &iVar26, 0, 1, 0);
			Global_410C0F[iVar26 /*80*/].f_6 = uVar11;
			Global_410C0F[iVar26 /*80*/].f_7 = uVar12;
			Global_410C0F[iVar26 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0xECDF3A47BBA3F980(uVar11, uVar12, iVar0, bVar14);
		}
		func_122(iParam0, iVar0);
		if (func_121(iParam0))
		{
			if (func_120(iParam0) > 4294967295)
			{
				func_119(func_120(iParam0), iVar0);
			}
		}
		Global_258AE3 = iVar0;
		func_118(&Global_25841E, 0, 0);
	}
	if (func_34(CAM::_0xDC9DA9E8789F5246()) || func_117(CAM::_0xDC9DA9E8789F5246()))
	{
		func_105(iParam0);
	}
	if (func_88(iParam0))
	{
		Global_196F08.f_D = iVar0;
		Global_196F08.f_E = iVar1;
	}
	if (func_104(iParam0))
	{
		Global_196F3E.f_D = iVar0;
		Global_196F3E.f_E = iVar1;
	}
	if (func_103(iParam0))
	{
		Global_196F7D.f_C = iVar0;
		Global_196F7D.f_D = iVar1;
	}
	if (func_102(iParam0))
	{
		Global_196FA9.f_C = iVar0;
		Global_196FA9.f_D = iVar1;
	}
	if (func_101(iParam0))
	{
		Global_196FDF.f_C = iVar0;
		Global_196FDF.f_D = iVar1;
	}
	if (func_100(iParam0))
	{
		if (func_99(iParam0))
		{
			Global_197030.f_C = iVar0;
			Global_197030.f_D = iVar1;
		}
		else if (func_95(iParam0))
		{
			Global_197065.f_C = iVar0;
			Global_197065.f_D = iVar1;
		}
	}
}

int func_95(int iParam0)//Position - 0x2BE2
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_96(func_97(CAM::_0xDC9DA9E8789F5246()))))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x2C6B
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x2CA3
{
	if (func_31(iParam0) == 237 || func_31(iParam0) == 250)
	{
		return func_98(iParam0);
	}
	return 4294967295;
}

int func_98(int iParam0)//Position - 0x2CD0
{
	if (func_32(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_B0;
	}
	return 4294967295;
}

int func_99(int iParam0)//Position - 0x2CF3
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x2D07
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x2D5D
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x2D77
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_103(int iParam0)//Position - 0x2D97
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_104(int iParam0)//Position - 0x2DBD
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_105(int iParam0)//Position - 0x2E0D
{
	if (func_116(CAM::_0xDC9DA9E8789F5246()) && func_143())
	{
		if (func_115(iParam0))
		{
			func_109(8657, 4294967295);
		}
		else if (func_108(iParam0))
		{
			func_109(8659, 4294967295);
		}
		else if (func_107(iParam0, 1))
		{
			func_109(8660, 4294967295);
		}
		else if (func_106(iParam0))
		{
			func_109(8661, 4294967295);
		}
	}
}

int func_106(int iParam0)//Position - 0x2E77
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x2EA3
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x2EF8
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_109(int iParam0, int iParam1)//Position - 0x2F24
{
	int iVar0;
	
	iVar0 = func_113(iParam0, func_114(iParam1), 0);
	iVar0++;
	if (!func_112(iParam0))
	{
		func_111(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_110(iParam0, iVar0, iParam1, 1);
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F65
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_114(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_114(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_114(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_114(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_114(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_114(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_114(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_114(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_114(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_114(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_114(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_114(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_114(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_114(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_114(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_114(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_114(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_114(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_114(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_114(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_114(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_114(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_114(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_114(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_114(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_114(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_114(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_114(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_114(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_114(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_114(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_114(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_114(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3770
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

int func_112(int iParam0)//Position - 0x37A0
{
	if (Global_150A02)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_113(int iParam0, int iParam1, int iParam2)//Position - 0x39AA
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

int func_114(int iParam0)//Position - 0x39DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_20();
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

int func_115(int iParam0)//Position - 0x3A10
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_116(int iParam0)//Position - 0x3A66
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_73, 14);
}

bool func_117(int iParam0)//Position - 0x3A8C
{
	return func_35(iParam0, 20);
}

void func_118(var uParam0, bool bParam1, bool bParam2)//Position - 0x3A9C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = HUD::_0x13C4B962653A5280();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_119(int iParam0, int iParam1)//Position - 0x3AD9
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5B34 == 0 || Global_40001.f_5B34 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_40001.f_5B34 == 1)
			{
				Global_26862F.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1949)
				{
					iParam1 = Global_40001.f_1949;
				}
				Global_26862F.f_111 = iParam1;
				Global_26862F.f_112 = 0;
			}
		}
	}
}

int func_120(int iParam0)//Position - 0x3B4B
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x3C2C
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_122(int iParam0, int iParam1)//Position - 0x3C94
{
	if (func_116(CAM::_0xDC9DA9E8789F5246()) && func_143())
	{
		if (func_115(iParam0) && iParam1 > 0)
		{
			func_111(8658, (func_113(8658, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

int func_123(int iParam0, int iParam1)//Position - 0x3CD8
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_126(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_124(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_124(int iParam0, int iParam1)//Position - 0x3D01
{
	return (func_125(iParam0) * iParam1);
}

int func_125(int iParam0)//Position - 0x3D12
{
	switch (iParam0)
	{
		case 8:
			return Global_40001.f_569E;
		
		case 0:
			return Global_40001.f_569F;
		
		case 1:
			return Global_40001.f_56A0;
		
		case 2:
			return Global_40001.f_56A1;
		
		case 3:
			return Global_40001.f_56A2;
		
		case 4:
			return Global_40001.f_56A3;
		
		case 5:
			return Global_40001.f_56A4;
		
		case 6:
			return Global_40001.f_56A5;
		
		case 7:
			return Global_40001.f_56A6;
		
		default:
	}
	return 0;
}

float func_126(int iParam0, int iParam1)//Position - 0x3DB2
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A8);
	switch (iParam0)
	{
		case 4294967295:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_40001.f_56AA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A7);
			break;
		
		case 3:
			fVar0 = Global_40001.f_56AA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A7);
			break;
		
		case 0:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 1:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 4:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 6:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
		
		case 2:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
		
		case 5:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_127(int iParam0)//Position - 0x3ECA
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_AE[5 /*12*/];
}

bool func_128()//Position - 0x3EF0
{
	return func_28(CAM::_0xDC9DA9E8789F5246());
}

void func_129(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3F00
{
	int iVar0;
	
	if (!func_144())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case 2649738075:
		case 3709248901:
		case 2935592169:
		case 454359403:
		case 3312573245:
		case 1643659499:
		case 2222677642:
		case 650665123:
		case 1654961868:
		case 3418119454:
		case 68030260:
		case 2172668013:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case 3778748250:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case 2905739390:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case 3395164992:
		case 3631022961:
		case 1208553146:
		case 3681746286:
		case 3623904420:
		case 3887766060:
		case 3540943093:
		case 2409522409:
		case 1931729587:
		case 1064954035:
		case 4114826223:
		case 2131324797:
		case 1612072658:
		case 3777519894:
		case 1948102096:
		case 1108628223:
		case 2460920732:
		case 3055958484:
		case 4072603454:
		case 3018288428:
		case 1564537328:
		case 4198373795:
		case 742499889:
		case 2050093329:
		case 2542479227:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case 2964212290:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case 3958163446:
		case 2882274531:
		case 618167454:
		case 980623936:
		case 437291904:
		case 4159154248:
		case 3364862819:
		case 2874057976:
		case 2561569253:
		case 2402207034:
		case 2749230248:
		case 2039302543:
		case 402505853:
		case 3151457114:
		case 1678112166:
		case 837955913:
		case 2762500152:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_130(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 4263810419:
		case 3267748665:
		case 2896648878:
		case 1652884147:
		case 4237099040:
		case 3078478004:
		case 4248344981:
		case 3942610365:
		case 3304681061:
		case 563463121:
		case 1734805203:
		case 941287179:
		case 3108887451:
		case 2309817038:
		case 3167945912:
		case 4185766010:
		case 312105838:
		case 1982688246:
		case 3633936878:
		case 1301046174:
		case 2708796979:
		case 393059668:
		case 23796958:
		case 3217811126:
		case 1780666425:
		case 2251272238:
		case 2372412947:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case 4140234963:
		case 2932306805:
		case 645708827:
		case 767907967:
		case 2324815990:
		case 718859568:
		case 2339402525:
		case 892388724:
		case 2868046458:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case 4235299214:
		case 1736933716:
		case 2826443171:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case 3360501964:
		case 3100714174:
		case 4082360211:
		case 3479420741:
		case 1048226110:
		case 569170531:
		case 3438960429:
		case 848090538:
		case 4247420391:
		case 4001907056:
		case 463142405:
		case 1550217370:
		case 4193659516:
		case 3630369731:
		case 599804707:
		case 3967048882:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case 2164767625:
		case 3067312758:
		case 1864522104:
		case 215608230:
		case 3418954532:
		case 3572072971:
		case 1407278493:
		case 2715572802:
		case 4267523385:
		case 1179783540:
		case 923419301:
		case 3986141121:
		case 603298940:
		case 4282347442:
		case 3983854621:
		case 870439158:
		case 3320678556:
		case 4290828642:
		case 3114013174:
		case 2376916280:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case 3122066507:
		case 2279567963:
		case 2720171655:
		case 3333932415:
		case 1135468152:
		case 1265272476:
		case 3660240660:
		case 696556762:
		case 403506509:
		case 3411090882:
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
		case 3733955243:
			func_130(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_130(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_130(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_130(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4539
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_144())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_20()) || unk_0x64BE694244417BDA())
		{
			Global_410E36 = 1;
			return 0;
		}
		if (Global_2586D5)
		{
			if (iParam3 == 1067618600 || iParam3 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_410C0F[iVar2 /*80*/].f_3D.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_137(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 4294967295)
				{
					Global_410C0F[*uParam0 /*80*/].f_3D.f_8 = 1;
					Global_410C0F[*uParam0 /*80*/].f_3D.f_C = 1;
				}
			}
			Global_410E28 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410E35 = 1;
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_136(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_131(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x46E4
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_132(iParam0);
	}
}

void func_132(int iParam0)//Position - 0x471C
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_144())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_135(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_410C0F[iParam0 /*80*/].f_3D);
		}
		func_133(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_133(var uParam0)//Position - 0x4770
{
	uParam0->f_3D = 0;
	uParam0->f_3D = 2147483647;
	uParam0->f_3D.f_1 = 0;
	uParam0->f_3D.f_2 = 0;
	uParam0->f_3D.f_3 = 2701847856;
	uParam0->f_3D.f_4 = 2209654107;
	uParam0->f_3D.f_5 = 0;
	uParam0->f_3D.f_6 = 1227573907;
	uParam0->f_3D.f_7 = 3133133477;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_134(&(uParam0->f_D));
	func_134(&(uParam0->f_D.f_D));
	StringCopy(&(uParam0->f_D.f_1A), "", 32);
	StringCopy(&(uParam0->f_D.f_22), "", 24);
	StringCopy(&(uParam0->f_D.f_28), "", 16);
	StringCopy(&(uParam0->f_D.f_2C), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_3D.f_8 = 0;
	uParam0->f_3D.f_9 = 0;
	uParam0->f_3D.f_A = 0;
	uParam0->f_3D.f_B = 0;
	uParam0->f_3D.f_D = 0;
	uParam0->f_3D.f_C = 0;
	uParam0->f_3D.f_E = 0;
	uParam0->f_3D.f_F = 0;
	uParam0->f_3D.f_10 = 0;
	uParam0->f_3D.f_12 = 0;
}

void func_134(var uParam0)//Position - 0x4873
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_135(int iParam0)//Position - 0x48BB
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_136(int iParam0, int iParam1)//Position - 0x48E5
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x48F9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_144())
			{
				iParam0 = iVar0 + 900;
			}
			Global_410C0F[iVar0 /*80*/].f_3D.f_2 = 1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_1 = iParam5;
			Global_410C0F[iVar0 /*80*/].f_3D.f_3 = iParam1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_4 = iParam2;
			Global_410C0F[iVar0 /*80*/].f_3D.f_7 = iParam3;
			Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 0;
			Global_410C0F[iVar0 /*80*/].f_3D = iParam0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_6 = iParam4;
			Global_410C0F[iVar0 /*80*/].f_3D.f_B = uParam8;
			Global_410C0F[iVar0 /*80*/].f_3D.f_A = iParam7;
			Global_410C0F[iVar0 /*80*/].f_3D.f_D = iParam9;
			Global_410C0F[iVar0 /*80*/].f_3D.f_C = 0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_E = MISC::GET_FRAME_COUNT();
			Global_410C0F[iVar0 /*80*/].f_3D.f_12 = 0;
			Global_410E28 = 0;
			if (bParam6)
			{
				Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 1;
			}
			if (iParam1 == 3159588365 && iParam10)
			{
				func_138(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_138(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x4A35
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 3981691983;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.f_2 = { Param0.f_3D };
	vVar0.f_2.f_20 = iParam19;
	iVar1 = func_45(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_139();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_139()//Position - 0x4AC7
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_140(int iParam0)//Position - 0x4AD5
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return 4294967295;
}

char* func_141(int iParam0)//Position - 0x4C1B
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_142()//Position - 0x4DEC
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_BC;
}

bool func_143()//Position - 0x4E05
{
	return func_61(CAM::_0xDC9DA9E8789F5246());
}

int func_144()//Position - 0x4E15
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_145(int iParam0, var uParam1, var uParam2)//Position - 0x4E2C
{
	*uParam1 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
	*uParam2 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_146(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4E5A
{
	return func_147(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_147(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4E7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_157(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_153(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_148(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_148(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x4EF5
{
	vector3 vVar0;
	
	vVar0 = { func_151(iParam0, 1) };
	if (iParam0 == func_150(AUDIO::_0x0626A247D2405330()))
	{
		func_149(1);
	}
	func_153(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_149(int iParam0)//Position - 0x4F29
{
	Global_252F9E.f_75E = iParam0;
}

int func_150(int iParam0)//Position - 0x4F3A
{
	return iParam0;
}

Vector3 func_151(int iParam0, bool bParam1)//Position - 0x4F44
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_152(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_152(int iParam0)//Position - 0x5008
{
	return iParam0;
}

void func_153(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x5012
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = 4294967295;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_252F9E.f_505[iVar0 /*30*/].f_6 == 0 || Global_252F9E.f_505[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != 4294967295)
		{
			Global_252F9E.f_505[iVar1 /*30*/] = { vParam0 };
			Global_252F9E.f_505[iVar1 /*30*/].f_6 = 1;
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_156(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_155();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_154();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_154()//Position - 0x5129
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_155()//Position - 0x5153
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_156(vector3 vParam0, var uParam1, var uParam2)//Position - 0x516E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_157(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5207
{
	var uVar0;
	
	uVar0 = func_158(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_158(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x522A
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_192(CAM::_0xDC9DA9E8789F5246()) || func_191(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_2532 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2532;
		}
	}
	else if (func_189() || func_188(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_5870 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_5870;
		}
	}
	else if (Global_40001.f_197C > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_197C;
	}
	if (func_187(sParam2))
	{
	}
	if (func_186())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_184(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_183(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_180(0, &iVar1);
					break;
				
				case 3:
					func_180(1, &iVar1);
					break;
				
				case 1:
					func_177(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_199937)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_176(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_169((func_175(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_176(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_163(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_159((func_161(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_159((func_161(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_159(int iParam0)//Position - 0x5428
{
	if (func_186())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_160(joaat("mpply_globalxp"), iParam0);
	}
}

void func_160(int iParam0, int iParam1)//Position - 0x5453
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_161(int iParam0)//Position - 0x546F
{
	if (iParam0 > 4294967295)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_162(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_162(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x54C0
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

void func_163(int iParam0)//Position - 0x54DE
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_168(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_166(func_167(&Var0));
			if (iVar1 == 0)
			{
				func_165(&Global_150A08, iParam0);
				func_164(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_165(&Global_150A09, iParam0);
				func_164(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_165(&Global_150A0A, iParam0);
				func_164(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_165(&Global_150A0B, iParam0);
				func_164(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_165(&Global_150A0C, iParam0);
				func_164(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_164(int iParam0, int iParam1)//Position - 0x55B2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_150A03 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_150A06 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_150A07 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_150A08 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_150A09 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_150A0A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_150A0B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_150A0C = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_150A0D = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_150A0E = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_150A0F = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_150A10 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_150A11 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_150A12 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_150A13 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_165(var uParam0, int iParam1)//Position - 0x56D7
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_166(int iParam0)//Position - 0x56E8
{
	if (iParam0 == Global_150A03)
	{
		return 0;
	}
	else if (iParam0 == Global_150A04)
	{
		return 1;
	}
	else if (iParam0 == Global_150A05)
	{
		return 2;
	}
	else if (iParam0 == Global_150A06)
	{
		return 3;
	}
	else if (iParam0 == Global_150A07)
	{
		return 4;
	}
	else
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_167(var uParam0)//Position - 0x5745
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_258207;
		}
	}
	return Global_258207;
}

struct<13> func_168(int iParam0)//Position - 0x5768
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_169(int iParam0, int iParam1, int iParam2)//Position - 0x577F
{
	if (func_186())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_114(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_114(4294967295)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 3136273443, 2949543449);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 2708045899, iParam1);
				return;
			}
		}
		if (func_15(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_173(iParam0, 1);
		}
		func_110(639, iParam0, 4294967295, 1);
		func_111(640, func_173(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_114(4294967295)] = iParam0;
		func_170(7, 0);
	}
}

void func_170(int iParam0, int iParam1)//Position - 0x58A0
{
	int iVar0;
	
	if (func_172(iParam0, iParam1))
	{
		iVar0 = func_171();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_171()//Position - 0x58C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2581E6[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_172(int iParam0, var uParam1)//Position - 0x58F8
{
	if (Global_14084D)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140859) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0, bool bParam1)//Position - 0x597E
{
	if (bParam1)
	{
	}
	return func_174(iParam0, 0);
}

int func_174(int iParam0, int iParam1)//Position - 0x5992
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

int func_175(int iParam0)//Position - 0x5A51
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_114(4294967295)];
			}
			else if (func_15(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_114(4294967295)];
	}
	return 0;
}

void func_176(int iParam0, int iParam1, int iParam2)//Position - 0x5AAE
{
	int iVar0;
	
	iVar0 = func_113(iParam0, func_114(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_112(iParam0))
	{
		func_111(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_110(iParam0, iVar0, iParam2, 1);
	}
}

void func_177(int iParam0)//Position - 0x5AF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != 4294967295)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_69(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_179(CAM::_0xDC9DA9E8789F5246(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_178(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_178(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_178(int iParam0, int iParam1)//Position - 0x5BDB
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_179(int iParam0, int iParam1)//Position - 0x5BFC
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_168(iParam0) };
		Global_2633EE = { func_168(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633E1))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633EE))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2633BE, 35, &Global_2633EE);
				if (Global_26339B == Global_2633BE)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_180(bool bParam0, int iParam1)//Position - 0x5C69
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_179(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_181(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_179(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_178(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_178(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_181(int iParam0, int iParam1)//Position - 0x5D81
{
	return SYSTEM::VDIST(func_182(iParam0), func_182(iParam1));
	return 0f;
}

Vector3 func_182(int iParam0)//Position - 0x5D9D
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_183(int iParam0)//Position - 0x5DB0
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_178(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_184(int iParam0)//Position - 0x5DE7
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_175(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_175(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_185(8000, 0, 0) > 0)
	{
		if (func_185(8000, 0, 0) < (iParam0 + func_175(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_185(8000, 0, 0) - func_175(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_185(int iParam0, bool bParam1, int iParam2)//Position - 0x5E4B
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_4646A[iParam0];
}

int func_186()//Position - 0x5E73
{
	return 1;
}

int func_187(char* sParam0)//Position - 0x5E7C
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)//Position - 0x5EB4
{
	return func_101(func_31(iParam0));
}

bool func_189()//Position - 0x5EC6
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_80();
	}
	return func_190(Global_440000.f_1FEDE);
}

int func_190(int iParam0)//Position - 0x5EEA
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_138A[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_191(int iParam0)//Position - 0x5F24
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_192(int iParam0)//Position - 0x5F39
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_193()//Position - 0x5F4E
{
	Global_258851 = 1;
}

void func_194(int iParam0, var uParam1, var uParam2)//Position - 0x5F5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_199(7))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_196(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_26862F.f_1313.f_103, HUD::_0x13C4B962653A5280()));
	if (func_195(iParam0) != 4294967295)
	{
		if (iVar2 > func_195(iParam0))
		{
			iVar2 = func_195(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_2FFA)
	{
		iVar2 = Global_40001.f_2FFA;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_195(int iParam0)//Position - 0x6005
{
	if (func_107(iParam0, 0) || func_108(iParam0))
	{
		return Global_40001.f_47B4;
	}
	if (func_115(iParam0))
	{
		return Global_40001.f_47B3;
	}
	switch (iParam0)
	{
		case 192:
			return Global_40001.f_47B0;
		
		case 191:
			return Global_40001.f_47B2;
		
		case 190:
			return Global_40001.f_47B1;
		
		case 227:
			return Global_40001.f_51AF;
		
		case 226:
			return Global_40001.f_51A3;
		
		case 225:
			return Global_40001.f_51B7;
		
		case 230:
			return Global_40001.f_569B;
		
		case 229:
			return Global_40001.f_563B;
		
		case 233:
			return Global_40001.f_5875;
		
		case 237:
			return Global_40001.f_5CF9;
		
		case 238:
			return Global_40001.f_5D68;
		
		case 249:
			return Global_40001.f_5D78;
		
		default:
	}
	return 4294967295;
}

int func_196(int iParam0)//Position - 0x6108
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_3055;
		
		case 152:
			return Global_40001.f_3078;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_306C;
		
		case 157:
			return Global_40001.f_304B;
		
		case 159:
			return Global_40001.f_303A;
		
		case 164:
			return Global_40001.f_3062;
		
		case 160:
			return Global_40001.f_3094;
		
		case 162:
			return Global_40001.f_30A8;
		
		case 163:
			return Global_40001.f_3085;
		
		case 154:
			return Global_40001.f_30CB;
		
		case 155:
			return Global_40001.f_30C1;
		
		case 153:
			return Global_40001.f_309D;
		
		case 170:
			return Global_40001.f_3A14;
		
		case 171:
			return Global_40001.f_3A4F;
		
		case 172:
			return Global_40001.f_3A61;
		
		case 173:
			return Global_40001.f_3A26;
		
		case 166:
			return Global_40001.f_3A35;
		
		case 167:
			return Global_40001.f_3A90;
		
		case 169:
			return Global_40001.f_3A74;
		
		case 168:
			return Global_40001.f_3A6D;
		
		case 179:
			return Global_40001.f_473B;
		
		case 180:
			return Global_40001.f_465E;
		
		case 182:
			return Global_40001.f_465E;
		
		case 183:
			return Global_40001.f_465E;
		
		case 185:
			return Global_40001.f_465E;
		
		case 186:
			return Global_40001.f_465E;
		
		case 189:
			return Global_40001.f_473B;
		
		case 190:
			return Global_40001.f_45E2;
		
		case 191:
			return Global_40001.f_463D;
		
		case 192:
			return Global_40001.f_456F;
		
		case 193:
			return Global_40001.f_473B;
		
		case 194:
			return Global_40001.f_473B;
		
		case 195:
			return Global_40001.f_465E;
		
		case 197:
			return Global_40001.f_465E;
		
		case 198:
			return Global_40001.f_465E;
		
		case 199:
			return Global_40001.f_473B;
		
		case 200:
			return Global_40001.f_473B;
		
		case 201:
			return Global_40001.f_473B;
		
		case 205:
			return Global_40001.f_473B;
		
		case 207:
			return Global_40001.f_465E;
		
		case 208:
			return Global_40001.f_465E;
		
		case 209:
			return Global_40001.f_465E;
		
		case 210:
			return Global_40001.f_473B;
		
		case 211:
			return Global_40001.f_473B;
		
		case 214:
			return Global_40001.f_4A8C;
		
		case 215:
			return Global_40001.f_4A8E;
		
		case 216:
			return Global_40001.f_4A90;
		
		case 217:
			return Global_40001.f_4A92;
		
		case 218:
			return Global_40001.f_4A94;
		
		case 219:
			return Global_40001.f_4A96;
		
		case 220:
			return Global_40001.f_4A98;
		
		case 221:
			return Global_40001.f_4A9A;
		
		case 225:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_51B9;
			}
			break;
		
		case 226:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_51A5;
			}
			break;
		
		case 227:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_51B1;
			}
			break;
		
		case 229:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_563D;
			}
			break;
		
		case 230:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_569D;
			}
			break;
		
		case 233:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_5874;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_5CFB;
			}
			break;
		
		case 238:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_5D6A;
			}
			break;
		
		case 249:
			if (func_91(0) || func_197(0))
			{
				return Global_40001.f_5D7A;
			}
			break;
	}
	return 0;
}

bool func_197(bool bParam0)//Position - 0x6605
{
	return func_6(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_198(int iParam0)//Position - 0x6617
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_3054;
		
		case 152:
			return Global_40001.f_3077;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_306B;
		
		case 157:
			return Global_40001.f_304A;
		
		case 159:
			return Global_40001.f_3039;
		
		case 164:
			return Global_40001.f_3061;
		
		case 160:
			return Global_40001.f_3093;
		
		case 162:
			return Global_40001.f_30A7;
		
		case 163:
			return Global_40001.f_3084;
		
		case 154:
			return Global_40001.f_30CA;
		
		case 155:
			return Global_40001.f_30C0;
		
		case 153:
			return Global_40001.f_309C;
		
		case 170:
			return Global_40001.f_3A13;
		
		case 171:
			return Global_40001.f_3A4E;
		
		case 172:
			return Global_40001.f_3A60;
		
		case 173:
			return Global_40001.f_3A25;
		
		case 166:
			return Global_40001.f_3A34;
		
		case 179:
			return Global_40001.f_473A;
		
		case 180:
			return Global_40001.f_465D;
		
		case 182:
			return Global_40001.f_465D;
		
		case 183:
			return Global_40001.f_465D;
		
		case 185:
			return Global_40001.f_465D;
		
		case 186:
			return Global_40001.f_465D;
		
		case 189:
			return Global_40001.f_473A;
		
		case 193:
			return Global_40001.f_473A;
		
		case 194:
			return Global_40001.f_473A;
		
		case 195:
			return Global_40001.f_465D;
		
		case 197:
			return Global_40001.f_465D;
		
		case 198:
			return Global_40001.f_465D;
		
		case 199:
			return Global_40001.f_473A;
		
		case 200:
			return Global_40001.f_473A;
		
		case 201:
			return Global_40001.f_473A;
		
		case 205:
			return Global_40001.f_473A;
		
		case 207:
			return Global_40001.f_465D;
		
		case 208:
			return Global_40001.f_465D;
		
		case 209:
			return Global_40001.f_465D;
		
		case 210:
			return Global_40001.f_473A;
		
		case 211:
			return Global_40001.f_473A;
		
		case 190:
			if (!func_128())
			{
				return Global_40001.f_45E1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_128())
			{
				return Global_40001.f_463C;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_128())
			{
				return Global_40001.f_456E;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_40001.f_4A8B;
		
		case 215:
			return Global_40001.f_4A8D;
		
		case 216:
			return Global_40001.f_4A8F;
		
		case 217:
			return Global_40001.f_4A91;
		
		case 218:
			return Global_40001.f_4A93;
		
		case 219:
			return Global_40001.f_4A95;
		
		case 220:
			return Global_40001.f_4A97;
		
		case 221:
			return Global_40001.f_4A99;
		
		case 225:
			if (func_197(0))
			{
				return Global_40001.f_51B8;
			}
			break;
		
		case 226:
			if (func_197(0))
			{
				return Global_40001.f_51A4;
			}
			break;
		
		case 227:
			if (func_197(0))
			{
				return Global_40001.f_51B0;
			}
			break;
		
		case 229:
			if (func_197(0))
			{
				return Global_40001.f_563C;
			}
			break;
		
		case 230:
			if (func_197(0))
			{
				return Global_40001.f_569C;
			}
			break;
		
		case 233:
			if (func_197(0))
			{
				return Global_40001.f_5876;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_197(0))
			{
				return Global_40001.f_5CFA;
			}
			break;
		
		case 238:
			if (func_197(0))
			{
				return Global_40001.f_5D69;
			}
			break;
		
		case 249:
			if (func_197(0))
			{
				return Global_40001.f_5D79;
			}
			break;
	}
	return 0;
}

bool func_199(int iParam0)//Position - 0x6ABE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_27, iParam0);
}

void func_200(int iParam0, int iParam1)//Position - 0x6AD5
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_128())
		{
			if (func_91(0))
			{
				if (!func_197(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_11()))
					{
						if (func_213() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_213());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_211(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_204("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1, 1);
						}
						func_89(20);
						func_201(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_201(int iParam0, int iParam1, int iParam2)//Position - 0x6B76
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_203(iParam0);
		func_202(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_45(iParam0));
	}
}

void func_202(var uParam0, var uParam1)//Position - 0x6BCC
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_203(int iParam0)//Position - 0x6BE6
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

int func_204(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x6BFA
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4294967295;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_62(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_209(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_205(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_205(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x6C92
{
	int iVar0;
	
	if ((!func_208() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_18(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_206(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_196195.f_5[iVar0 /*53*/] = iParam0;
		Global_196195.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_196195.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_196195.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_196195.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_196195.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_196195.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_206(int iParam0)//Position - 0x6D9A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_207(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_196195++;
	if (Global_196195 > 5)
	{
		Global_196195 = 5;
		return Global_196195;
	}
	return (Global_196195 - 1);
}

void func_207(int iParam0)//Position - 0x6DFC
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_208()//Position - 0x6E35
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

var func_209(char* sParam0)//Position - 0x6E46
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_210(&cVar0);
}

var func_210(char[4] cParam0)//Position - 0x6E6A
{
	return cParam0;
}

void func_211(int iParam0, bool bParam1)//Position - 0x6E74
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_212(1);
	}
	else
	{
		iVar1 = func_212(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_212(bool bParam0)//Position - 0x6EA6
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_213()//Position - 0x6ECC
{
	return Global_40001.f_2FF4;
}

void func_214(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x6EDB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_197(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_128())
		{
			iVar17 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar17 = func_11();
		}
		iVar11 = iVar17;
		if (iVar11 != 4294967295)
		{
			iVar0 = Global_1841F3[iVar11 /*790*/].f_300.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1841F3[iVar11 /*790*/].f_300.f_2;
			}
			else
			{
				iVar2 = func_230(Global_1841F3[iVar11 /*790*/].f_300, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_229(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == CAM::_0xDC9DA9E8789F5246())
				{
					func_228("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_197030.f_31 = *uParam3;
			if (iVar17 == CAM::_0xDC9DA9E8789F5246())
			{
				if (iVar2 > 0)
				{
					func_227(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_225(*uParam3);
				}
				iVar6 = func_224(&uVar5);
				iVar7 = Global_40001.f_5D18;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5D17));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_89(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_223(iVar23))
								{
									func_215(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5CFC;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5CFD;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_89(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2)//Position - 0x7142
{
	var uVar0;
	
	uVar0 = func_217(iParam0);
	func_216(iParam0, uVar0, iParam1, iParam2);
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x715E
{
	struct<8> Var0;
	
	Var0 = 2440128305;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_203(iParam0);
	func_202(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_45(iParam0));
		}
	}
}

int func_217(int iParam0)//Position - 0x71C4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_222();
	iVar0 = func_220(iParam0, iVar0);
	iVar1 = Global_18CD5B[func_11() /*560*/].f_B.f_198;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_39EC));
	if (iVar0 < func_219())
	{
		iVar0 = func_219();
	}
	if (iVar0 > func_218())
	{
		iVar0 = func_218();
	}
	return iVar0;
}

int func_218()//Position - 0x721D
{
	return Global_40001.f_39ED;
}

int func_219()//Position - 0x722C
{
	return Global_40001.f_3E84;
}

int func_220(int iParam0, int iParam1)//Position - 0x723B
{
	int iVar0;
	
	iVar0 = (func_289(iParam0) * func_221());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_221()//Position - 0x7259
{
	return Global_40001.f_3E83;
}

var func_222()//Position - 0x7268
{
	return Global_40001.f_2FEC;
}

int func_223(int iParam0)//Position - 0x7277
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (func_47(iParam0, CAM::_0xDC9DA9E8789F5246(), 0))
			{
				if (!func_35(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(var uParam0)//Position - 0x72B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_18(iVar2, 0) && !func_47(iVar2, CAM::_0xDC9DA9E8789F5246(), 1))
			{
				iVar1++;
			}
			else if (func_18(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_225(int iParam0)//Position - 0x731C
{
	func_226(iParam0, 7236);
}

void func_226(int iParam0, int iParam1)//Position - 0x732D
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_113(iParam1, 4294967295, 0);
	func_111(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_227(int iParam0)//Position - 0x7356
{
	func_226(iParam0, 7231);
}

int func_228(char* sParam0, int iParam1, int iParam2)//Position - 0x7367
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_205(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_229(int iParam0)//Position - 0x739B
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5D19);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_230(struct<5> Param0, int iParam1)//Position - 0x73CF
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_231(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x7439
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_197(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_128())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != 4294967295)
		{
			if (uParam1->f_10 == 8)
			{
				iVar0 = (func_243(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_234(uParam1->f_10) + uParam1->f_8);
			}
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_124(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_123(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_233(*iParam2) > 0)
			{
				if (iVar15 == CAM::_0xDC9DA9E8789F5246())
				{
					func_228("SMTICK_RONCUT", func_233(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_233(*iParam2));
			}
			if (iVar15 == CAM::_0xDC9DA9E8789F5246())
			{
				func_232(iVar2, iVar9);
				iVar6 = func_224(&uVar5);
				iVar7 = Global_40001.f_56AE;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_56AD));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_89(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_223(iVar20))
								{
									func_215(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_566B;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_566C;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_89(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_232(int iParam0, int iParam1)//Position - 0x767F
{
	if (iParam0 > 0)
	{
		func_226(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_226(iParam1, 6117);
	}
}

int func_233(int iParam0)//Position - 0x76A5
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_568D);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_568E))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_568E);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_234(int iParam0)//Position - 0x76E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_241())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_243(CAM::_0xDC9DA9E8789F5246());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_236(func_237(func_240(iVar0), 4294967295, 4294967295));
		if (func_235(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_235(int iParam0)//Position - 0x7743
{
	switch (iParam0)
	{
		case 3786007249:
			return 5;
		
		case 2298388584:
			return 5;
		
		case 3970904288:
			return 7;
		
		case 2757724536:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case 2473282811:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case 3072258214:
			return 0;
		
		case 4034544605:
			return 0;
		
		case 3177327825:
			return 3;
		
		case 2860494080:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return 4294967295;
}

int func_236(int iParam0)//Position - 0x77F3
{
	switch (iParam0)
	{
		case 1:
			return 3786007249;
		
		case 2:
			return 2298388584;
		
		case 3:
			return 3970904288;
		
		case 4:
			return 2757724536;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return 2473282811;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return 3072258214;
		
		case 12:
			return 4034544605;
		
		case 13:
			return 3177327825;
		
		case 14:
			return 2860494080;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2)//Position - 0x78E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_20();
	}
	iVar0 = 0;
	iVar1 = func_239(iParam0, iParam1);
	iVar2 = func_238(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_238(int iParam0)//Position - 0x7929
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_239(int iParam0, int iParam1)//Position - 0x7CCB
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_20();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_240(int iParam0)//Position - 0x8021
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_241()//Position - 0x828B
{
	return func_242() != 0;
}

int func_242()//Position - 0x8299
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_FF;
}

int func_243(int iParam0)//Position - 0x82B1
{
	if (iParam0 != func_10() && func_244(iParam0))
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF.f_3;
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x82E2
{
	if (iParam0 != func_10())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF != 0;
	}
	return 0;
}

void func_245(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x8307
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_197(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_128())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_127(iVar15);
			iVar0 = (func_267(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_263(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_51A7));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_51A6));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == CAM::_0xDC9DA9E8789F5246())
			{
				func_260(iVar16, iVar2);
				if (func_256(iVar16) >= Global_40001.f_4FE3 || iVar2 >= Global_40001.f_4FE3)
				{
					func_246(5);
				}
				iVar6 = func_224(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_51A9);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_51A8));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_89(108);
					}
					else
					{
						func_89(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_223(iVar20))
								{
									func_215(iVar20, 1, 2389839094);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_51AA;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_51AB;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_89(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_246(int iParam0)//Position - 0x8542
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_4FD7)
			{
				if (func_248(Global_40001.f_4FD8))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_4FD9)
			{
				if (func_248(Global_40001.f_4FDA))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_4FDB)
			{
				if (func_248(Global_40001.f_4FDC))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_4FDD)
			{
				if (func_248(Global_40001.f_4FDE))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_4FDF)
			{
				if (func_248(Global_40001.f_4FE0))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_4FE1)
			{
				if (func_248(Global_40001.f_4FE2))
				{
					func_228("CLOTHAWDSTRAP3", Global_40001.f_4FE3, 1);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_4FE4)
			{
				if (func_248(Global_40001.f_4FE5))
				{
					func_228("CLOTHAWDSTRAP5", Global_40001.f_5069, 1);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_4FE7)
			{
				if (func_248(Global_40001.f_4FE8))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_4FE9)
			{
				if (func_248(Global_40001.f_4FEA))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_4FEB)
			{
				if (func_248(Global_40001.f_4FEC))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_4FED)
			{
				if (func_248(Global_40001.f_4FEE))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_4FEF)
			{
				if (func_248(Global_40001.f_4FF0))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_4FF1)
			{
				if (func_248(Global_40001.f_4FF2))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_4FF3)
			{
				if (func_248(Global_40001.f_4FF4))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_4FF5)
			{
				if (func_248(Global_40001.f_4FF6))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_247(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x883F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	}
	else
	{
		Global_2633E1 = { func_168(CAM::_0xDC9DA9E8789F5246()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_26339B.f_16), "Leader") && Global_26339B.f_1E == 0)
			{
				iVar1 = 1;
			}
			if (Global_26339B.f_15 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar1, 0, Global_26339B, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), Global_140CDE, Global_140CDF, Global_140CE0);
		}
		else
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_205(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_248(int iParam0)//Position - 0x8933
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_253(15417, 4294967295, 4294967295))
			{
				func_252(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_253(15418, 4294967295, 4294967295))
			{
				func_252(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_253(15425, 4294967295, 4294967295))
			{
				func_252(15425, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 3599602535:
		case 1263491585:
		case 2987652061:
		case 258618816:
			if (!func_253(15405, 4294967295, 4294967295))
			{
				func_252(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_253(15393, 4294967295, 4294967295))
			{
				func_252(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_253(15409, 4294967295, 4294967295))
			{
				func_252(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_253(15396, 4294967295, 4294967295))
			{
				func_252(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_253(15412, 4294967295, 4294967295))
			{
				func_252(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_253(15403, 4294967295, 4294967295))
			{
				func_252(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_253(15389, 4294967295, 4294967295))
			{
				func_252(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_253(15398, 4294967295, 4294967295))
			{
				func_252(15398, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2933869803:
		case 4221319652:
		case 3258386893:
		case 2529150874:
		case 2303587303:
		case 2563356175:
			if (!func_253(15400, 4294967295, 4294967295))
			{
				func_252(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_253(15408, 4294967295, 4294967295))
			{
				func_252(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_253(15411, 4294967295, 4294967295))
			{
				func_252(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_253(15397, 4294967295, 4294967295))
			{
				func_252(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_253(15413, 4294967295, 4294967295))
			{
				func_252(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_253(15391, 4294967295, 4294967295))
			{
				func_252(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_253(15388, 4294967295, 4294967295))
			{
				func_252(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_253(15401, 4294967295, 4294967295))
			{
				func_252(15401, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case 3972875916:
		case 2690230073:
		case 3458584499:
			if (!func_253(15394, 4294967295, 4294967295))
			{
				func_252(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_253(15406, 4294967295, 4294967295))
			{
				func_252(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_253(15395, 4294967295, 4294967295))
			{
				func_252(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_253(15410, 4294967295, 4294967295))
			{
				func_252(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_253(15407, 4294967295, 4294967295))
			{
				func_252(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_253(15414, 4294967295, 4294967295))
			{
				func_252(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_253(15415, 4294967295, 4294967295))
			{
				func_252(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_253(15399, 4294967295, 4294967295))
			{
				func_252(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_253(15404, 4294967295, 4294967295))
			{
				func_252(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_253(15392, 4294967295, 4294967295))
			{
				func_252(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_253(15390, 4294967295, 4294967295))
			{
				func_252(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_253(15402, 4294967295, 4294967295))
			{
				func_252(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_253(15416, 4294967295, 4294967295))
			{
				func_252(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_251(209, 4294967295))
			{
				func_249(209, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2171481858:
		case 1457900554:
		case 4280650683:
		case 619771057:
			if (!func_253(15426, 4294967295, 4294967295))
			{
				func_252(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_253(15422, 4294967295, 4294967295))
			{
				func_252(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_253(15423, 4294967295, 4294967295))
			{
				func_252(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_253(15421, 4294967295, 4294967295))
			{
				func_252(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_253(15427, 4294967295, 4294967295))
			{
				func_252(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_253(15419, 4294967295, 4294967295))
			{
				func_252(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_253(15420, 4294967295, 4294967295))
			{
				func_252(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_249(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x94A8
{
	int iVar0;
	
	if (func_250())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_114(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_250()//Position - 0x94DA
{
	return 1;
	return 0;
}

int func_251(int iParam0, int iParam1)//Position - 0x94E7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_114(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_252(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x9513
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
		iParam2 = func_20();
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

int func_253(int iParam0, int iParam1, int iParam2)//Position - 0x9A7B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_20();
	}
	iVar1 = func_255(iParam0, iParam1);
	uVar2 = func_254(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_254(int iParam0)//Position - 0x9AB8
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

int func_255(int iParam0, int iParam1)//Position - 0x9DD0
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_20();
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

int func_256(int iParam0)//Position - 0xA0C8
{
	int iVar0;
	
	iVar0 = func_258(iParam0);
	return func_113(func_257(iVar0), 4294967295, 0);
}

int func_257(int iParam0)//Position - 0xA0E4
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_258(int iParam0)//Position - 0xA13E
{
	int iVar0;
	
	if (func_259(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_259(int iParam0)//Position - 0xA180
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_260(int iParam0, int iParam1)//Position - 0xA19F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_258(iParam0);
	iVar1 = func_257(iVar0);
	iVar2 = (func_113(iVar1, 4294967295, 0) + iParam1);
	func_111(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_237(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iVar0 /*12*/] != 0)
			{
				iVar1 = func_257(iVar0);
				iVar3 = (iVar3 + func_113(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_262(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_261(9357, iVar5, 4294967295, 1);
	}
}

var func_261(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA254
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_20();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_262(int iParam0)//Position - 0xA792
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_263(int iParam0, int iParam1, int iParam2)//Position - 0xA7D2
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_140(iParam1);
	if (func_259(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_41C2;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C7);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CC);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_41C1;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C6);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CB);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_41C0;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C5);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CA);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_41BE;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C3);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C8);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_41BF;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C4);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C9);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_51C0;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_51C2);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_51C1);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_264(int iParam0, int iParam1, int iParam2)//Position - 0xA9AA
{
	int iVar0;
	
	if (func_266(iParam0, iParam1))
	{
		iVar0 = func_265(iParam0, iParam1);
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_265(int iParam0, int iParam1)//Position - 0xA9E5
{
	int iVar0;
	
	if (func_259(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_266(int iParam0, int iParam1)//Position - 0xAA31
{
	int iVar0;
	
	if (func_259(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_267(int iParam0, int iParam1)//Position - 0xAA7C
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_268(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0xAADB
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_A > 0)
		{
			if (func_143())
			{
				Var0 = { func_142() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_263(CAM::_0xDC9DA9E8789F5246(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_4820);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_481F);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_224(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4816);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4815));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_89(86);
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (func_197(0))
			{
				Var14 = { func_269(func_11()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_263(func_11(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_4820));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_481F));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_4847;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_4848;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_269(int iParam0)//Position - 0xAD7E
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_BC;
}

void func_270(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0xAD95
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_28(CAM::_0xDC9DA9E8789F5246()))
		{
			if (bParam1)
			{
				func_285();
			}
			func_284();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_28(CAM::_0xDC9DA9E8789F5246()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_276(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B1));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_275(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_224(&uVar2);
					iVar4 = Global_40001.f_3E8E;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3B77));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_89(44);
					}
				}
				func_273(*iParam3);
				func_272();
				Global_26862F.f_1313.f_174 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_223(iVar9))
						{
							func_215(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_28(CAM::_0xDC9DA9E8789F5246()))
		{
			func_271();
		}
	}
}

void func_271()//Position - 0xAF01
{
	int iVar0;
	
	iVar0 = Global_27304E[func_20()];
	iVar0++;
	func_110(3667, iVar0, 4294967295, 1);
}

void func_272()//Position - 0xAF26
{
	int iVar0;
	
	iVar0 = Global_273054[func_20()];
	iVar0++;
	func_110(3666, iVar0, 4294967295, 1);
}

void func_273(int iParam0)//Position - 0xAF4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_273057[func_20()];
	iVar0 = (iVar0 + iParam0);
	func_110(3668, iVar0, 4294967295, 1);
	if (func_237(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_274(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_261(7666, iVar2, 4294967295, 1);
	}
}

int func_274(int iParam0)//Position - 0xAFAD
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_3F13;
			break;
		
		case 2:
			return Global_40001.f_3F14;
			break;
		
		case 3:
			return Global_40001.f_3F15;
			break;
		
		case 4:
			return Global_40001.f_3F16;
			break;
		
		case 5:
			return Global_40001.f_3F17;
			break;
		
		case 6:
			return Global_40001.f_3F18;
			break;
		
		case 7:
			return Global_40001.f_3F19;
			break;
		
		case 8:
			return Global_40001.f_3F1A;
			break;
		
		case 9:
			return Global_40001.f_3F1B;
			break;
		
		case 10:
			return Global_40001.f_3F1C;
			break;
		
		case 11:
			return Global_40001.f_3F1D;
			break;
		
		case 12:
			return Global_40001.f_3F1E;
			break;
		
		case 13:
			return Global_40001.f_3F1F;
			break;
		
		case 14:
			return Global_40001.f_3F20;
			break;
		
		case 15:
			return Global_40001.f_3F21;
			break;
		
		case 16:
			return Global_40001.f_3F22;
			break;
		
		case 17:
			return Global_40001.f_3F23;
			break;
		
		case 18:
			return Global_40001.f_3F24;
			break;
		
		case 19:
			return Global_40001.f_3F25;
			break;
		
		case 20:
			return Global_40001.f_3F26;
			break;
		
		case 21:
			return Global_40001.f_3F27;
			break;
		
		case 22:
			return Global_40001.f_3F28;
			break;
		
		case 23:
			return Global_40001.f_3F29;
			break;
		
		case 24:
			return Global_40001.f_3F2A;
			break;
	}
	return 0;
}

var func_275(int iParam0)//Position - 0xB185
{
	if (iParam0 >= Global_40001.f_3B61)
	{
		return Global_40001.f_3B76;
	}
	else if (iParam0 >= Global_40001.f_3B60)
	{
		return Global_40001.f_3B75;
	}
	else if (iParam0 >= Global_40001.f_3B5F)
	{
		return Global_40001.f_3B74;
	}
	else if (iParam0 >= Global_40001.f_3B5E)
	{
		return Global_40001.f_3B73;
	}
	else if (iParam0 >= Global_40001.f_3B5D)
	{
		return Global_40001.f_3B72;
	}
	else if (iParam0 >= Global_40001.f_3B5C)
	{
		return Global_40001.f_3B71;
	}
	else if (iParam0 >= Global_40001.f_3B5B)
	{
		return Global_40001.f_3B70;
	}
	else if (iParam0 >= Global_40001.f_3B5A)
	{
		return Global_40001.f_3B6F;
	}
	else if (iParam0 >= Global_40001.f_3B59)
	{
		return Global_40001.f_3B6E;
	}
	else if (iParam0 >= Global_40001.f_3B58)
	{
		return Global_40001.f_3B6D;
	}
	else if (iParam0 >= Global_40001.f_3B57)
	{
		return Global_40001.f_3B6C;
	}
	else if (iParam0 >= Global_40001.f_3B56)
	{
		return Global_40001.f_3B6B;
	}
	else if (iParam0 >= Global_40001.f_3B55)
	{
		return Global_40001.f_3B6A;
	}
	else if (iParam0 >= Global_40001.f_3B54)
	{
		return Global_40001.f_3B69;
	}
	else if (iParam0 >= Global_40001.f_3B53)
	{
		return Global_40001.f_3B68;
	}
	else if (iParam0 >= Global_40001.f_3B52)
	{
		return Global_40001.f_3B67;
	}
	else if (iParam0 >= Global_40001.f_3B51)
	{
		return Global_40001.f_3B66;
	}
	else if (iParam0 >= Global_40001.f_3B50)
	{
		return Global_40001.f_3B65;
	}
	else if (iParam0 >= Global_40001.f_3B4F)
	{
		return Global_40001.f_3B64;
	}
	else if (iParam0 >= Global_40001.f_3B4E)
	{
		return Global_40001.f_3B63;
	}
	return Global_40001.f_3B62;
}

int func_276(int iParam0)//Position - 0xB385
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_283(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_282(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_281(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_277(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_277(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_281(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_277(int iParam0)//Position - 0xB401
{
	int iVar0;
	
	if (func_280(iParam0))
	{
		iVar0 = func_278(func_279(iParam0));
		return func_113(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_278(int iParam0)//Position - 0xB42A
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_279(int iParam0)//Position - 0xB47D
{
	int iVar0;
	
	if (func_280(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_62[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_280(int iParam0)//Position - 0xB4BF
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_281(int iParam0)//Position - 0xB4DE
{
	if (iParam0 == 1)
	{
		return Global_40001.f_3C29;
	}
	else if (iParam0 == 2)
	{
		return Global_40001.f_3C27;
	}
	else if (iParam0 == 3)
	{
		return Global_40001.f_3C2B;
	}
	else if (iParam0 == 4)
	{
		return Global_40001.f_3C25;
	}
	else if (iParam0 == 5)
	{
		return Global_40001.f_3C23;
	}
	else if (iParam0 == 6)
	{
		return Global_40001.f_3C2D;
	}
	return 0;
}

int func_282(int iParam0, int iParam1)//Position - 0xB556
{
	int iVar0;
	
	if (func_280(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_197512[iVar0] == iParam1 && Global_197519[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_283(int iParam0)//Position - 0xB59C
{
	int iVar0;
	
	if (func_280(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_62[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_284()//Position - 0xB5DD
{
	int iVar0;
	
	iVar0 = Global_27304B[func_20()];
	iVar0++;
	Global_27304B[func_20()] = iVar0;
	func_110(3665, iVar0, 4294967295, 1);
}

void func_285()//Position - 0xB60E
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_273048[func_20()];
	iVar1 = Global_273051[func_20()];
	iVar0++;
	iVar1++;
	Global_273048[func_20()] = iVar0;
	Global_273051[func_20()] = iVar1;
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_78 = iVar1;
	func_110(3663, iVar0, 4294967295, 1);
	func_110(3664, iVar1, 4294967295, 1);
}

void func_286()//Position - 0xB67A
{
	if (func_128())
	{
		Global_255F11.f_BFC.f_86 = 0;
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
	}
}

void func_287()//Position - 0xB6AC
{
	if (func_128())
	{
		if (Global_255F11.f_BFC.f_86 < 10)
		{
			Global_255F11.f_BFC.f_86++;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

void func_288()//Position - 0xB6F6
{
	if (func_128())
	{
		if (Global_255F11.f_BFC.f_86 > 0)
		{
			Global_255F11.f_BFC.f_86 = (Global_255F11.f_BFC.f_86 - 1);
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

int func_289(int iParam0)//Position - 0xB73F
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_1C;
}

int func_290(int iParam0)//Position - 0xB754
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_91(1) && !func_197(1))
			{
				if (func_291(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_291(int iParam0)//Position - 0xB7C9
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 26);
}

int func_292(int iParam0)//Position - 0xB7EF
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3069) * Global_40001.f_306E));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3037) * Global_40001.f_303C));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3052) * Global_40001.f_3056));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_305F) * Global_40001.f_3063));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3075) * Global_40001.f_307A));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3117) * Global_40001.f_3118));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_311D) * Global_40001.f_311E));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_311B) * Global_40001.f_311C));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3115) * Global_40001.f_3116));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3119) * Global_40001.f_311A));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3113) * Global_40001.f_3114));
		
		case 170:
			return 0;
		
		case 171:
			return Global_40001.f_3A4C;
		
		case 172:
			return Global_40001.f_3A5C;
		
		case 173:
			return Global_40001.f_3A23;
		
		case 166:
			return 0;
		
		case 179:
			return Global_40001.f_46EE;
		
		case 180:
			return Global_40001.f_4672;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_467A;
		
		case 185:
			return Global_40001.f_4683;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4746;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4757;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_46BF;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4776;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_46FC;
		
		case 205:
			return Global_40001.f_4769;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_46DB;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4764;
		
		case 211:
			return Global_40001.f_4740;
		
		case 214:
			return Global_40001.f_4991;
		
		case 215:
			return Global_40001.f_499B;
		
		case 216:
			return Global_40001.f_49A5;
		
		case 217:
			return Global_40001.f_49AE;
		
		case 218:
			return Global_40001.f_49B7;
		
		case 219:
			return Global_40001.f_49C7;
		
		case 241:
			return Global_40001.f_5D8D;
		
		case 242:
			return Global_40001.f_5D89;
		
		case 248:
			return Global_40001.f_5D8C;
		
		case 244:
			return Global_40001.f_5D8A;
		
		case 239:
			return Global_40001.f_5D8E;
		
		case 240:
			return Global_40001.f_5D8F;
		
		default:
	}
	return 0;
}

int func_293(int iParam0, bool bParam1)//Position - 0xBB94
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_306A) * Global_40001.f_306F));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3038) * Global_40001.f_303D));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3053) * Global_40001.f_3057));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3060) * Global_40001.f_3064));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3076) * Global_40001.f_307B));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_309B) * Global_40001.f_309E));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C9) * Global_40001.f_30CC));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30BF) * Global_40001.f_30C2));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3092) * Global_40001.f_3095));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A6) * Global_40001.f_30AB));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3083) * Global_40001.f_3086));
		
		case 170:
			return Global_40001.f_3A12;
		
		case 171:
			return Global_40001.f_3A4D;
		
		case 172:
			return Global_40001.f_3A5D;
		
		case 173:
			return Global_40001.f_3A24;
		
		case 166:
			return 0;
		
		case 167:
			return Global_40001.f_4242;
		
		case 168:
			return Global_40001.f_4241;
		
		case 179:
			return Global_40001.f_46EF;
		
		case 180:
			return Global_40001.f_4673;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_467B;
		
		case 185:
			return Global_40001.f_4684;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4747;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4758;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_46C0;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4777;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_46FD;
		
		case 205:
			return Global_40001.f_476A;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_46DC;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4765;
		
		case 211:
			return Global_40001.f_4741;
		
		case 214:
			return Global_40001.f_4992;
		
		case 215:
			return Global_40001.f_499C;
		
		case 216:
			return Global_40001.f_49A6;
		
		case 217:
			return Global_40001.f_49AF;
		
		case 218:
			return Global_40001.f_49B8;
		
		case 219:
			return Global_40001.f_49C8;
		
		case 178:
			if (func_128())
			{
				return Global_40001.f_4917;
			}
			else if (bParam1)
			{
				return Global_40001.f_4918;
			}
			break;
		
		case 188:
			if (func_128())
			{
				return Global_40001.f_496B;
			}
			else if (bParam1)
			{
				return Global_40001.f_496C;
			}
			break;
		
		case 225:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51B4;
				}
				else
				{
					return Global_40001.f_51B5;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_51B6;
			}
			break;
		
		case 226:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51A0;
				}
				else
				{
					return Global_40001.f_51A1;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_51A2;
			}
			break;
		
		case 227:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51AC;
				}
				else
				{
					return Global_40001.f_51AD;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_51AE;
			}
			break;
		
		case 229:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5638;
				}
				else
				{
					return Global_40001.f_5639;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_563A;
			}
			break;
		
		case 230:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5698;
				}
				else
				{
					return Global_40001.f_5699;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_569A;
			}
			break;
		
		case 233:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5872;
				}
				else
				{
					return Global_40001.f_5873;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_5871;
			}
			break;
		
		case 241:
			return Global_40001.f_5D94;
		
		case 242:
			return Global_40001.f_5D90;
		
		case 244:
			return Global_40001.f_5D91;
		
		case 248:
			return Global_40001.f_5D93;
		
		case 239:
			return Global_40001.f_5D95;
		
		case 240:
			return Global_40001.f_5D96;
		
		case 237:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5CF6;
				}
				else
				{
					return Global_40001.f_5CF7;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_5CF8;
			}
			break;
		
		case 238:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D65;
				}
				else
				{
					return Global_40001.f_5D66;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_5D67;
			}
			break;
		
		case 249:
			if (func_128() && !func_143())
			{
				if (func_291(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D75;
				}
				else
				{
					return Global_40001.f_5D76;
				}
			}
			else if (func_143())
			{
				return Global_40001.f_5D77;
			}
			break;
	}
	return 0;
}

void func_294(int iParam0, var uParam1, var uParam2)//Position - 0xC288
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_295(iParam0))
	{
		if (!func_128())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_2FFF;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_27(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_88(iParam0))
		{
			*uParam1 = (Global_40001.f_465B / 100f);
			*uParam2 = (Global_40001.f_465B / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_40001.f_5D97;
			*uParam2 = Global_40001.f_5D97;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_40001.f_5D98;
			*uParam2 = Global_40001.f_5D98;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_40001.f_5D9A;
			*uParam2 = Global_40001.f_5D9A;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_40001.f_5D9B;
			*uParam2 = Global_40001.f_5D9B;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_40001.f_5D9C;
			*uParam2 = Global_40001.f_5D9C;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_40001.f_5D9D;
			*uParam2 = Global_40001.f_5D9D;
		}
		else
		{
			*uParam1 = Global_40001.f_2FFC;
			*uParam2 = Global_40001.f_2FFB;
		}
	}
	else if (func_88(iParam0))
	{
		*uParam1 = (Global_40001.f_465C / 100f);
		*uParam2 = (Global_40001.f_465C / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_40001.f_5D9E;
		*uParam2 = Global_40001.f_5D9E;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_40001.f_5D9F;
		*uParam2 = Global_40001.f_5D9F;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_40001.f_5DA1;
		*uParam2 = Global_40001.f_5DA1;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_40001.f_5DA2;
		*uParam2 = Global_40001.f_5DA2;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_40001.f_5DA3;
		*uParam2 = Global_40001.f_5DA3;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_40001.f_5DA4;
		*uParam2 = Global_40001.f_5DA4;
	}
	else
	{
		*uParam1 = Global_40001.f_2FFE;
		*uParam2 = Global_40001.f_2FFD;
	}
	iVar0 = func_59();
	if (iVar0 != func_10())
	{
		if (func_47(CAM::_0xDC9DA9E8789F5246(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_295(int iParam0)//Position - 0xC4EB
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_296()//Position - 0xC52F
{
	if ((func_35(CAM::_0xDC9DA9E8789F5246(), 21) || func_35(CAM::_0xDC9DA9E8789F5246(), 22)) || func_301())
	{
		return 1;
	}
	if (func_298())
	{
		func_297(22);
		return 1;
	}
	return 0;
}

void func_297(int iParam0)//Position - 0xC574
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

int func_298()//Position - 0xC591
{
	if (func_32(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if ((func_25() && !func_300()) || func_21(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		else
		{
			func_299(27);
		}
	}
	return 0;
}

void func_299(int iParam0)//Position - 0xC5D4
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

bool func_300()//Position - 0xC5F1
{
	return Global_1406A0.f_1;
}

bool func_301()//Position - 0xC5FF
{
	return func_251(306, 4294967295);
}

int func_302()//Position - 0xC60F
{
	return 0;
}

void func_303()//Position - 0xC618
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_342())
	{
		return;
	}
	if (func_341())
	{
		func_334();
	}
	if (func_333())
	{
		func_332();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 2) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 4)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 3))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_112.f_A)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_112.f_A)
			{
				func_324(101, sVar0, sVar1, func_326(), func_325(CAM::_0xDC9DA9E8789F5246()), func_36(), func_10(), func_10(), 0, 4294967295, 4294967295, 4294967295, 2, 4294967295, 2);
			}
			else
			{
				func_323(87, func_36(), 4294967295, sVar1, sVar0, 1, 4294967295, 2, 4294967295);
			}
		}
		else if (func_322() != CAM::_0xDC9DA9E8789F5246())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_112.f_A)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_112.f_A)
			{
				func_324(101, sVar0, sVar1, func_326(), func_325(CAM::_0xDC9DA9E8789F5246()), func_322(), func_36(), func_10(), 0, 4294967295, 4294967295, 4294967295, 2, 4294967295, 2);
			}
			else
			{
				func_321(91, func_322(), func_36(), 4294967295, sVar1, sVar0, 1, 4294967295, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_112.f_A)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_112.f_A)
			{
				func_324(101, "GB_WINNER", sVar1, func_326(), func_325(CAM::_0xDC9DA9E8789F5246()), func_36(), func_10(), func_10(), 0, 4294967295, 4294967295, 4294967295, 2, 4294967295, 2);
			}
			else
			{
				func_323(87, func_36(), 4294967295, sVar1, "GB_WINNER", 1, 4294967295, 2, 4294967295);
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_305(88, sVar0, sVar1, 1, 4294967295, 2, 1);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 4) || func_30(func_36(), 1, 0))
		{
			if (CAM::_0xDC9DA9E8789F5246() == func_59())
			{
				Var2.f_A = func_59();
				Var2.f_2 = 1337401234;
				func_304(Var2, func_45(func_36()));
			}
		}
	}
}

void func_304(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xC867
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_305(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC894
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_320(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_306(&Var0);
}

int func_306(var uParam0)//Position - 0xC904
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_319(uParam0, uParam0->f_11);
	func_316(uParam0);
	if (func_80())
	{
		func_316(uParam0);
	}
	if (func_315(uParam0->f_1))
	{
		func_308();
		if (Global_252F9E.f_A90[0 /*80*/].f_2 == 0)
		{
			Global_252F9E.f_A90[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_252F9E.f_A90[0 /*80*/].f_1 == 13 || Global_252F9E.f_A90[0 /*80*/].f_1 == 53) || Global_252F9E.f_A90[0 /*80*/].f_1 == 54) || Global_252F9E.f_A90[0 /*80*/].f_1 == 58)
		{
			Global_252F9E.f_A90[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_252F9E.f_A90[iVar0 + 1 /*80*/] = { Global_252F9E.f_A90[iVar0 /*80*/] };
			iVar0 = (iVar0 + 4294967295);
		}
		Global_252F9E.f_A90[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_2 == 0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_308();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 1);
				Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_45, 7))
			{
				if (func_307(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
				{
					Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
					MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_307(int iParam0)//Position - 0xCAD5
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

void func_308()//Position - 0xCB55
{
	bool bVar0;
	
	if (Global_252F9E.f_BD3)
	{
		return;
	}
	if (!Global_11731)
	{
		Global_11731 = 1;
		bVar0 = true;
	}
	func_309();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_309()//Position - 0xCB88
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_313(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_310(&(Global_252F9E.f_BD4.f_1));
}

void func_310(var uParam0)//Position - 0xCBC9
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SET_SEETHROUGH(false);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_234 = 0;
	}
	if (!Global_11731)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_11732)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_312(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_311(0);
}

void func_311(int iParam0)//Position - 0xCC70
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_312(bool bParam0)//Position - 0xCC84
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_313(var uParam0)//Position - 0xCCAF
{
	func_314(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_314(var uParam0)//Position - 0xCCD9
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

int func_315(int iParam0)//Position - 0xCD58
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_316(var uParam0)//Position - 0xCE5A
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_48 = func_317();
	}
}

int func_317()//Position - 0xCE75
{
	return 21;
}

int func_318(int iParam0)//Position - 0xCE7F
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_319(var uParam0, int iParam1)//Position - 0xCF11
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_307(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_62(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

void func_320(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0xCF68
{
	uParam1->f_11 = func_10();
	uParam1->f_12 = func_10();
	uParam1->f_13 = func_10();
	uParam1->f_14 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xCFE4
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_320(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_11 = iParam1;
	Var0.f_12 = iParam2;
	Var0.f_47 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_48 = iParam8;
	StringCopy(&(Var0.f_19), sParam9, 64);
	StringCopy(&(Var0.f_29), sParam10, 64);
	StringCopy(&(Var0.f_39), sParam11, 16);
	return func_306(&Var0);
}

int func_322()//Position - 0xD073
{
	return Local_112.f_3;
}

int func_323(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xD07F
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_320(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_11 = iParam1;
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	if (iParam8 != 4294967295)
	{
		MISC::SET_BIT(&(Var0.f_45), iParam8);
	}
	return func_306(&Var0);
}

int func_324(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xD100
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_320(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_48 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_45), 2);
	return func_306(&Var0);
}

int func_325(int iParam0)//Position - 0xD1B4
{
	int iVar0;
	
	iVar0 = func_78(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_76(iVar0);
	}
	return 1;
}

char* func_326()//Position - 0xD1D4
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_26(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 != func_10())
	{
		if (iVar0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (((func_35(iVar0, 28) || func_35(CAM::_0xDC9DA9E8789F5246(), 28)) || func_331(iVar0)) && !func_330(iVar0))
			{
				return func_328(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_328(iVar0, 0);
			}
		}
		sVar1 = func_327(&(Global_18CD5B[iVar0 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_328(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_327(var uParam0)//Position - 0xD284
{
	return uParam0;
}

char* func_328(int iParam0, bool bParam1)//Position - 0xD28E
{
	if (!bParam1)
	{
		if (func_6(iParam0, 1))
		{
			return func_329();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_329()//Position - 0xD2B5
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_330(int iParam0)//Position - 0xD2C5
{
	struct<13> Var0;
	
	Var0 = { func_168(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_331(int iParam0)//Position - 0xD2F5
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_168(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_332()//Position - 0xD34E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_2 != 0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

bool func_333()//Position - 0xD399
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

void func_334()//Position - 0xD3AF
{
	if (!func_340())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_335();
}

void func_335()//Position - 0xD3DC
{
	func_337();
	func_336(0);
}

void func_336(bool bParam0)//Position - 0xD3ED
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = HUD::_0x13C4B962653A5280();
		Global_140740.f_B = HUD::_0x13C4B962653A5280();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = 4294967295;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_337()//Position - 0xD47B
{
	if (!func_339())
	{
	}
	if (func_340())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_338();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_338()//Position - 0xD4A4
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_35);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_339()//Position - 0xD716
{
	if (!func_340())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_338();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_340()//Position - 0xD73C
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_341()//Position - 0xD752
{
	return func_340();
}

int func_342()//Position - 0xD75E
{
	if (!func_343(1, 1, 1) || func_610())
	{
		return 1;
	}
	return 0;
}

int func_343(bool bParam0, bool bParam1, bool bParam2)//Position - 0xD780
{
	if (func_46(CAM::_0xDC9DA9E8789F5246(), 29))
	{
		return 0;
	}
	if (func_21(CAM::_0xDC9DA9E8789F5246(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_384(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_382(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_381())
	{
		return 0;
	}
	if (func_380())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_376(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_21(CAM::_0xDC9DA9E8789F5246(), 0) || func_21(CAM::_0xDC9DA9E8789F5246(), 3))
	{
		return 0;
	}
	if ((func_21(CAM::_0xDC9DA9E8789F5246(), 12) || func_21(CAM::_0xDC9DA9E8789F5246(), 14)) || func_21(CAM::_0xDC9DA9E8789F5246(), 13))
	{
		return 0;
	}
	if (func_370(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_350())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_349())
		{
			return 0;
		}
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (func_348(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_347())
	{
		return 0;
	}
	if (func_346(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (func_344(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_344(int iParam0)//Position - 0xD929
{
	if (Global_24FBF9[iParam0 /*413*/].f_105.f_4 != 0 || Global_24FBF9[iParam0 /*413*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_345()//Position - 0xD95D
{
	return Global_197632.f_D1F != 4294967295;
}

int func_346(int iParam0)//Position - 0xD96E
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 14))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11))
	{
		return 1;
	}
	return 0;
}

int func_347()//Position - 0xD9AD
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0)//Position - 0xD9C5
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

bool func_349()//Position - 0xD9E8
{
	return Global_16C64.f_148 > 0;
}

int func_350()//Position - 0xD9F9
{
	int iVar0;
	
	iVar0 = func_31(CAM::_0xDC9DA9E8789F5246());
	if (((func_369(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_18) || func_368(CAM::_0xDC9DA9E8789F5246())) || func_367(CAM::_0xDC9DA9E8789F5246())) || func_362(CAM::_0xDC9DA9E8789F5246()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_360(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_115(iVar0) || func_359(iVar0))
		{
			return 1;
		}
	}
	if (func_358(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_359(iVar0))
		{
			return 1;
		}
	}
	if (func_357(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_103(iVar0))
		{
			return 1;
		}
	}
	if (func_356(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_102(iVar0))
		{
			return 1;
		}
	}
	if (func_355(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_101(iVar0))
		{
			return 1;
		}
	}
	if (func_354(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_353(iVar0))
		{
			return 1;
		}
	}
	if (func_352(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_351(iVar0))
		{
			if (func_57(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)//Position - 0xDB3A
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_352(int iParam0, bool bParam1)//Position - 0xDB72
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_10())
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_353(int iParam0)//Position - 0xDC00
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_354(int iParam0)//Position - 0xDC2C
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_355(int iParam0)//Position - 0xDC73
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)//Position - 0xDCBA
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_357(int iParam0)//Position - 0xDD00
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_358(int iParam0)//Position - 0xDD46
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_359(int iParam0)//Position - 0xDD8C
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_360(int iParam0)//Position - 0xDDB2
{
	if (func_361(Global_1841F3[iParam0 /*790*/].f_111.f_18, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_361(int iParam0, int iParam1)//Position - 0xDDD5
{
	if (iParam1 == 4294967295)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_362(int iParam0)//Position - 0xDEB2
{
	if (func_363(Global_1841F3[iParam0 /*790*/].f_111.f_18, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0, bool bParam1, bool bParam2)//Position - 0xDED6
{
	if (bParam2)
	{
		return func_364(CAM::_0xDC9DA9E8789F5246(), 0);
	}
	if (bParam1)
	{
		if (func_364(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_364(int iParam0, bool bParam1)//Position - 0xDFB1
{
	if (Global_184156 != func_10())
	{
		if (!func_366(Global_184156))
		{
			return 0;
		}
		if (bParam1)
		{
			if (CAM::_0xDC9DA9E8789F5246() != Global_184156)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_184156 /*413*/].f_C3, 24) || func_365(Global_184156))
				{
					return 1;
				}
			}
		}
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 24);
}

int func_365(int iParam0)//Position - 0xE01D
{
	if (iParam0 != func_10())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 9);
	}
	return 0;
}

int func_366(int iParam0)//Position - 0xE043
{
	if (iParam0 != func_10())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 2);
	}
	return 0;
}

int func_367(int iParam0)//Position - 0xE06F
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_368(int iParam0)//Position - 0xE0B5
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)//Position - 0xE0FB
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_370(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0xE12A
{
	if (Global_1841F3[iParam0 /*790*/].f_111.f_18 > 0)
	{
		if (bParam1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_368(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_358(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_367(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_357(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_356(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_355(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_373(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_354(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_372(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_352(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_371(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0)//Position - 0xE23D
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)//Position - 0xE284
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)//Position - 0xE2CB
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_10())
			{
				return func_54(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_374()//Position - 0xE32B
{
	if (func_375() == 0)
	{
		return 1;
	}
	return 0;
}

int func_375()//Position - 0xE340
{
	return Global_1406D2.f_12;
}

bool func_376(int iParam0)//Position - 0xE34E
{
	return func_377(iParam0);
}

bool func_377(int iParam0)//Position - 0xE35C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

bool func_378()//Position - 0xE376
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_379()//Position - 0xE38D
{
	return Global_140859;
}

bool func_380()//Position - 0xE399
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 5;
}

bool func_381()//Position - 0xE3AE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

int func_382(int iParam0)//Position - 0xE3CA
{
	if (func_383(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_383(int iParam0, bool bParam1)//Position - 0xE3EE
{
	if (bParam1)
	{
		if (func_376(iParam0))
		{
			return 1;
		}
	}
	if (Global_1841F3[iParam0 /*790*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_384(int iParam0)//Position - 0xE41A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

void func_385(int iParam0, int iParam1)//Position - 0xE433
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == CAM::_0xDC9DA9E8789F5246())
			{
				iVar0 = 1;
			}
			else if (func_386(iParam1, CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 0);
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			Global_26862F.f_1313.f_176 = NETWORK::_GET_POSIX_TIME();
		}
	}
}

int func_386(int iParam0, int iParam1)//Position - 0xE4AA
{
	int iVar0;
	
	if (iParam0 != func_10() && iParam1 != func_10())
	{
		iVar0 = func_26(iParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_26(iParam1);
		}
	}
	return 0;
}

void func_387(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xE4E6
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_505(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_503() || iParam2 == 27)
	{
		if (func_459(iParam1, iParam2, uParam3, Global_180518, 0, func_501(), sParam7))
		{
			func_458(1);
			if ((!func_457() && !func_456()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
			{
				if (func_455())
				{
					func_454();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_453(1);
						Global_180518 = 0;
						iVar19 = 4294967295;
						if (Global_1805F5 != 1)
						{
							func_452(iParam1, 0, 0);
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = 4294967295;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_18(iVar3, 0))
									{
										if ((func_451(iVar3) || Global_24FBF9[iVar3 /*413*/].f_EC != 4294967295) || func_29(iVar3))
										{
											iVar9 = iVar3;
											if (func_28(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_450(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_448(CAM::_0xDC9DA9E8789F5246(), 0) && func_31(CAM::_0xDC9DA9E8789F5246()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_447())
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_10();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_446(iVar3) && func_442(iVar3, iParam2)) && func_9(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
								Var6 = { func_437(iVar3) };
								if (iVar3 == CAM::_0xDC9DA9E8789F5246())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_168(iVar3) };
								iVar5 = func_431(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_180518++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 4294967295)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 4294967295 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									if (!func_447())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_426(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_425(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 4294967294;
									}
								}
								iVar16 = func_424(iVar3, 0);
								if (bVar2)
								{
									if (func_27(iVar3, 1) && iVar1[iVar9] != 4294967295)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 4294967295)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_423(iParam5))
								{
									func_422(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_422(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								MISC::SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							if (func_9(iVar3, 0, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_10();
							}
							if (func_446(iVar3))
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
									Var6 = { func_437(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_168(iVar3) };
									iVar5 = func_431(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_180518++;
									iVar16 = func_424(iVar3, 1);
									if (bVar2)
									{
										if (func_27(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_402(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							func_399(uParam3, iParam1);
						}
						func_398(&(uParam3->f_15));
						func_397();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
						{
							func_396(uParam3, iParam1);
							func_395(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_21), 7);
						}
						func_396(uParam3, iParam1);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							MISC::SET_BIT(&(uParam3->f_21), 11);
						}
						if (func_391(uParam3))
						{
							Global_1805F5 = 1;
						}
						func_388(uParam3);
						if (Global_1805F5 == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_1805F5 == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_397();
			func_453(0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 10))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_388(var uParam0)//Position - 0xEB35
{
	if (!func_390(&(uParam0->f_15)))
	{
		func_4(&(uParam0->f_15), 0, 0);
	}
	else if (func_3(&(uParam0->f_15), 250, 0))
	{
		func_398(&(uParam0->f_15));
		func_389(0);
	}
}

void func_389(bool bParam0)//Position - 0xEB71
{
	if (bParam0)
	{
		if (Global_1805F5 != 2)
		{
			Global_1805F5 = 2;
		}
	}
	else
	{
		switch (Global_1805F5)
		{
			case 0:
				Global_1805F5 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_390(var uParam0)//Position - 0xEBB7
{
	return uParam0->f_1;
}

int func_391(var uParam0)//Position - 0xEBC3
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_25);
	if (iVar3 != func_10() && func_9(iVar3, 0, 1))
	{
		Var2 = { func_168(iVar3) };
		iVar1 = func_394(uParam0, uParam0->f_25);
		if (func_393(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_392(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_392(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_392(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_392(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_392(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_392(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_392(var uParam0, int iParam1, int iParam2)//Position - 0xECF0
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_393(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xED02
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_394(var uParam0, int iParam1)//Position - 0xED12
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_395(int iParam0, bool bParam1, int iParam2)//Position - 0xED22
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SET_SEETHROUGH(bParam1);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

void func_396(var uParam0, int iParam1)//Position - 0xED5A
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_23);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(&(uParam0->f_21), 10);
	}
}

void func_397()//Position - 0xED92
{
	if (Global_1805F5 != 0)
	{
		Global_1805F5 = 0;
	}
}

void func_398(var uParam0)//Position - 0xEDA7
{
	uParam0->f_1 = 0;
}

void func_399(var uParam0, int iParam1)//Position - 0xEDB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_10())
		{
			if (func_9(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_401(uParam0->f_26[iVar0 /*2*/], 0);
					func_400(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1841F3[iVar0 /*790*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_400(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEE27
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

int func_401(int iParam0, bool bParam1)//Position - 0xEE64
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_402(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xEE98
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_421() && iParam4 < func_420())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_419("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
			}
			func_419(sParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_419("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
			}
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			func_419("");
			if (uParam3->f_6C == 6)
			{
				func_419("");
			}
			else
			{
				func_419(&sParam5);
			}
			func_407(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_406(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_404(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_403(uParam3))
			{
				func_405("DPAD_CREW");
			}
			else
			{
				func_405("");
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

bool func_403(var uParam0)//Position - 0xEFBD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 6);
}

bool func_404(var uParam0)//Position - 0xEFCE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 5);
}

void func_405(char* sParam0)//Position - 0xEFDF
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_406(var uParam0)//Position - 0xEFF1
{
	if (func_404(uParam0) && func_403(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_407(var uParam0, int iParam1)//Position - 0xF012
{
	if (func_418(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(121);
	}
	else if (func_411(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(122);
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam1 /*413*/].f_19A, 0))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(123);
	}
	else
	{
		if (func_408())
		{
			uParam0->f_24 = 0;
		}
		GRAPHICS::SET_SEETHROUGH(uParam0->f_24);
	}
}

int func_408()//Position - 0xF093
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_409() || func_82())
		{
			return 1;
		}
	}
	return 0;
}

int func_409()//Position - 0xF0B8
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_82();
	}
	return func_410(Global_440000.f_1FEDE);
}

int func_410(int iParam0)//Position - 0xF0DC
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1378[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_411(int iParam0)//Position - 0xF116
{
	if ((func_9(iParam0, 0, 1) && func_412()) && func_6(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_412()//Position - 0xF143
{
	if (func_417(CAM::_0xDC9DA9E8789F5246()) || func_416())
	{
		if (!func_413(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_413(int iParam0, int iParam1)//Position - 0xF173
{
	if (func_415(iParam0) == iParam1)
	{
		return func_414(iParam0);
	}
	return 0;
}

int func_414(int iParam0)//Position - 0xF190
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_415(int iParam0)//Position - 0xF1B6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

int func_416()//Position - 0xF1D5
{
	switch (func_31(CAM::_0xDC9DA9E8789F5246()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_417(int iParam0)//Position - 0xF213
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

int func_418(int iParam0)//Position - 0xF234
{
	if (func_408())
	{
		if (func_9(iParam0, 0, 1))
		{
			return func_28(iParam0);
		}
	}
	if ((func_9(iParam0, 0, 1) && func_412()) && func_8(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_419(char* sParam0)//Position - 0xF27C
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_420()//Position - 0xF28A
{
	int iVar0;
	
	if (Global_18051A)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_421()//Position - 0xF2A6
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18051A)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_422(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xF2BE
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_421() && iParam3 < func_420())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 4294967294)
			{
				iParam10 = 4294967295;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_419("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam9);
				}
				if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_405(sParam16);
				}
				else
				{
					func_419(&(uParam2->f_1));
				}
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_419("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
				}
				if (func_447())
				{
					func_419("");
				}
				else if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != 4294967295)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_68));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
				}
				else if (iParam15 > 4294967295)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
					{
						func_405(&(uParam2->f_68));
					}
					else
					{
						func_419("");
					}
				}
				else if (iParam14 != 4294967295)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (iParam10 != 4294967295)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
				}
				else
				{
					func_419("");
				}
				if (uParam2->f_6C == 6)
				{
					func_419("");
				}
				else
				{
					func_419(&sParam4);
				}
				func_407(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_419("");
					func_419("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_406(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_404(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_403(uParam2))
				{
					func_405("DPAD_CREW");
				}
				else
				{
					func_405("");
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

int func_423(int iParam0)//Position - 0xF60F
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_424(int iParam0, bool bParam1)//Position - 0xF633
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_417(iParam0)) && !func_117(iParam0))
	{
		iVar0 = func_317();
	}
	iVar1 = func_78(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_76(iVar1);
	}
	return iVar0;
}

char* func_425(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xF67D
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_426(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xF807
{
	if (func_430(iParam3))
	{
		*fParam1 = (func_427(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_423(iParam3))
	{
		*fParam1 = (func_427(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_427(int iParam0, int iParam1)//Position - 0xF857
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_429(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_428(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_428(float fParam0)//Position - 0xF8FA
{
	return (fParam0 / 1.609344f);
}

float func_429(float fParam0)//Position - 0xF90A
{
	return (fParam0 / 0.3048f);
}

int func_430(int iParam0)//Position - 0xF91A
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_431(int iParam0)//Position - 0xF976
{
	int iVar0;
	
	iVar0 = func_434(iParam0);
	if (iVar0 == 4294967295)
	{
		func_432(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_432(int iParam0, bool bParam1)//Position - 0xF9AC
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	if (func_434(iParam0) != 4294967295)
	{
		return;
	}
	if (Global_150F14)
	{
		if (iParam0 == Global_150F14.f_1)
		{
			return;
		}
	}
	if (func_433(iParam0))
	{
		return;
	}
	if (Global_150F3A >= 32)
	{
		return;
	}
	Global_150F19[Global_150F3A] = iParam0;
	Global_150F3A++;
	if (bParam1)
	{
	}
}

int func_433(int iParam0)//Position - 0xFA18
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F3A)
	{
		if (Global_150F19[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_434(int iParam0)//Position - 0xFA4A
{
	int iVar0;
	
	if (!func_9(iParam0, 0, 1))
	{
		return 4294967295;
	}
	if (Global_150F12 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F12)
	{
		if (Global_150E71[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_150E71[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_435(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_435(int iParam0)//Position - 0xFAC9
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_150F12)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_150E71[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_150E71[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_150E71[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_150F12)
	{
		Global_150E71[iVar2 /*5*/] = { Global_150E71[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_436(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_436(var uParam0)//Position - 0xFB7F
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

struct<4> func_437(int iParam0)//Position - 0xFBAC
{
	char cVar0[32];
	
	if (func_9(iParam0, 0, 1))
	{
		Global_2633E1 = { func_168(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_393(Global_2633E1))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2633E1))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_441(&Global_2633E1))
		{
			Global_26339B = { func_439(iParam0) };
			func_438(&Global_26339B, &cVar0);
		}
	}
	return cVar0;
}

void func_438(var uParam0, char* sParam1)//Position - 0xFC2D
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_439(int iParam0)//Position - 0xFC3F
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_440(iParam0))
	{
		return Global_140879[CAM::_0xDC9DA9E8789F5246() /*35*/];
	}
	Var0 = { func_168(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_440(int iParam0)//Position - 0xFC7B
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	return 0;
}

int func_441(var uParam0)//Position - 0xFC91
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (GRAPHICS::_DRAW_SHOWROOM() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_442(int iParam0, int iParam1)//Position - 0xFCB7
{
	if (iParam1 == 26)
	{
		if ((func_445(iParam0) || func_444(iParam0)) || func_443(iParam0))
		{
			return 0;
		}
	}
	if (!func_384(iParam0))
	{
		return 0;
	}
	if ((!func_451(iParam0) && Global_24FBF9[iParam0 /*413*/].f_EC == 4294967295) && !func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_443(int iParam0)//Position - 0xFD26
{
	if (func_445(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

int func_444(int iParam0)//Position - 0xFD4C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

bool func_445(int iParam0)//Position - 0xFD8A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

int func_446(int iParam0)//Position - 0xFDA2
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_18(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iVar0 /*790*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_447()//Position - 0xFDE7
{
	switch (func_31(CAM::_0xDC9DA9E8789F5246()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_415(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_117(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_31(CAM::_0xDC9DA9E8789F5246()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_413(CAM::_0xDC9DA9E8789F5246(), 236))
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0, int iParam1)//Position - 0xFF23
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_449(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_449(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_449(int iParam0)//Position - 0xFF89
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_107(iParam0, 0);
	return 0;
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFFE3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_18(iVar1, 0))
			{
				if ((func_451(iVar1) || Global_24FBF9[iVar1 /*413*/].f_EC != 4294967295) || func_29(iVar1))
				{
					if (func_47(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_451(int iParam0)//Position - 0x1006F
{
	if (func_9(iParam0, 0, 1))
	{
		if (func_9(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, CAM::_0xDC9DA9E8789F5246()) || func_31(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_452(int iParam0, int iParam1, int iParam2)//Position - 0x100B0
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_453(bool bParam0)//Position - 0x100DE
{
	if (bParam0)
	{
		if (Global_14E0B2.f_2 == 0)
		{
			Global_14E0B2.f_2 = 1;
		}
	}
	else if (Global_14E0B2.f_2 == 1)
	{
		Global_14E0B2.f_2 = 0;
	}
}

void func_454()//Position - 0x10110
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
	{
		if (func_333())
		{
			func_332();
		}
	}
}

int func_455()//Position - 0x10132
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0) && func_333())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1) && func_333())
	{
		return 1;
	}
	return 0;
}

int func_456()//Position - 0x10173
{
	if (func_333())
	{
		if (func_307(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_457()//Position - 0x1019A
{
	if (func_333())
	{
		if (func_318(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_458(int iParam0)//Position - 0x101C1
{
	if (Global_14E0B2.f_1 != Global_14E0B2)
	{
		Global_14E0B2.f_1 = Global_14E0B2;
	}
	if (Global_14E0B2 != iParam0)
	{
		Global_14E0B2 = iParam0;
	}
}

int func_459(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x101EF
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_500(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_499();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_498())
		{
			if (func_497() > 0 && Global_18051A)
			{
				HUD::_0x25F87B30C382FCA7();
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_488())
		{
			func_487(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
	{
		func_487(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_390(&(uParam2->f_13)))
	{
		if (func_497() == 1)
		{
			func_486(bVar3, iParam0, 0);
			func_4(&(uParam2->f_13), 0, 0);
			func_487(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_26862F.f_11E2), 5);
		}
	}
	if (func_390(&(uParam2->f_13)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_3(&(uParam2->f_13), 10000, 0) || (func_497() == 0 && !bParam5))
		{
			func_487(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_485();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_0x25F87B30C382FCA7();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_485();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_486(bVar3, iParam0, 0))
				{
					func_452(iParam0, 0, 0);
					sVar1 = func_483(iParam1, &(Global_440000.f_1FEE5), bParam4);
					Var0 = { func_481(iParam1) };
					if (bParam4)
					{
						func_478(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 26)
					{
						func_471(iParam0, func_475(uParam2), func_472(uParam2), 4294967295);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_467(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_465(iParam0, sVar5, func_466(), 4294967295);
					}
					else if (func_408())
					{
						uParam2->f_22 = Global_180519;
						func_478(iParam0, sVar1, &Var0, 1, 4294967295, Global_180519, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180519;
						func_478(iParam0, sVar1, "", 0, 4294967295, Global_180519, 1);
					}
					else
					{
						iVar6 = func_460(iParam1);
						func_478(iParam0, sVar1, &Var0, 1, iVar6, 4294967295, 1);
					}
					MISC::SET_BIT(&(uParam2->f_21), 0);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
			{
				Global_180518 = uParam3;
				Global_180517 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_180519)
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x104BF
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_464())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_463(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 20;
			}
			if (func_462(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_461(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 2;
	}
	if (func_189())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_461(int iParam0)//Position - 0x1060B
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 4;
}

bool func_462(int iParam0)//Position - 0x10620
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

bool func_463(int iParam0)//Position - 0x10635
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_464()//Position - 0x1064A
{
	return Global_440000.f_1 == 0;
}

void func_465(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1065A
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_405(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_405("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_466()//Position - 0x106B8
{
	switch (func_31(CAM::_0xDC9DA9E8789F5246()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_467(var uParam0)//Position - 0x1070F
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_31(CAM::_0xDC9DA9E8789F5246()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_469())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_197(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_197(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_468(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_468(int iParam0)//Position - 0x10B3A
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_469()//Position - 0x10B6C
{
	return (func_470() && func_61(func_59()));
}

bool func_470()//Position - 0x10B85
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148;
}

void func_471(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x10B9B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_405(sParam1);
		}
		else if (func_415(CAM::_0xDC9DA9E8789F5246()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_405("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_472(var uParam0)//Position - 0x10C21
{
	int iVar0;
	
	iVar0 = func_415(CAM::_0xDC9DA9E8789F5246());
	if (func_474())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_473())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_473()//Position - 0x10DC7
{
	if (func_415(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

bool func_474()//Position - 0x10DEA
{
	return Global_184174;
}

char* func_475(var uParam0)//Position - 0x10DF6
{
	int iVar0;
	
	iVar0 = func_415(CAM::_0xDC9DA9E8789F5246());
	if (func_474())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_477() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_477() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_473())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_476() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_476()//Position - 0x10FEA
{
	return Global_26862F.f_12C7;
}

int func_477()//Position - 0x10FF9
{
	if (func_415(CAM::_0xDC9DA9E8789F5246()) == 132)
	{
		return Global_26862F.f_12C2;
	}
	return 4294967295;
}

void func_478(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1101C
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_419(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_405(sParam1);
		}
		if (func_498() && iParam6)
		{
			if (func_480())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_405(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (func_479(CAM::_0xDC9DA9E8789F5246()))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(166);
			}
			else if (func_80())
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(220);
			}
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_479(int iParam0)//Position - 0x110DD
{
	if (func_463(iParam0) || func_462(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_480()//Position - 0x110FF
{
	return Global_18051A;
}

struct<4> func_481(int iParam0)//Position - 0x1110B
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_482(CAM::_0xDC9DA9E8789F5246()) || func_461(CAM::_0xDC9DA9E8789F5246()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_26, 16);
			break;
	}
	if (func_408() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_26, 16);
	}
	return Var0;
}

bool func_482(int iParam0)//Position - 0x111A5
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 5;
}

char* func_483(int iParam0, char* sParam1, bool bParam2)//Position - 0x111BA
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_408() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_484();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_180607 == 1)
		{
			Global_180607 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_484()//Position - 0x1131E
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_485()//Position - 0x11362
{
	Global_90A3 = 1;
}

bool func_486(bool bParam0, int iParam1, bool bParam2)//Position - 0x1136E
{
	if (bParam0)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_487(int iParam0, var uParam1, bool bParam2)//Position - 0x113AE
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 7);
	Global_180518 = 0;
	func_397();
	Global_180517 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_390(&(uParam1->f_13)))
		{
			func_398(&(uParam1->f_13));
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11E2), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_21, 0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_488()//Position - 0x11420
{
	if (func_496())
	{
		return 0;
	}
	if (func_380())
	{
		return 0;
	}
	if (!func_494())
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_493(8, 4294967295))
	{
		return 0;
	}
	if (func_497() == 2)
	{
		return 0;
	}
	if (Global_26862F.f_11B2)
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	else if (!func_383(CAM::_0xDC9DA9E8789F5246(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_492(1) || func_490(1)) || Global_434C.f_7C) || Global_434C)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_489() && Global_19BACA == 2)
	{
		return 0;
	}
	if (func_16(CAM::_0xDC9DA9E8789F5246()) && !func_489())
	{
		return 0;
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (Global_193F15)
	{
		return 0;
	}
	if (func_199(0))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (Global_14C619)
	{
		return 0;
	}
	if ((Global_19A0DD.f_2C1.f_5 || Global_19ABD8.f_2C1.f_5) || Global_199D20.f_2C1.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_489()//Position - 0x11588
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

int func_490(bool bParam0)//Position - 0x115AA
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_491(AUDIO::_0x0626A247D2405330()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_434C.f_82)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && unk_0xE11F00B4AC919F45(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xE11F00B4AC919F45(0, 166) || unk_0xE11F00B4AC919F45(0, 167)) || unk_0xE11F00B4AC919F45(0, 168)) || unk_0xE11F00B4AC919F45(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x11695
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_492(bool bParam0)//Position - 0x116F2
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

bool func_493(int iParam0, int iParam1)//Position - 0x1171B
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

int func_494()//Position - 0x11756
{
	if (func_495())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_495()//Position - 0x11795
{
	return Global_1406B6;
}

bool func_496()//Position - 0x117A1
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_497()//Position - 0x117B6
{
	return Global_14E0B5.f_44;
}

int func_498()//Position - 0x117C4
{
	if (Global_180519 > 16)
	{
		return 1;
	}
	return 0;
}

float func_499()//Position - 0x117DA
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_500(int iParam0)//Position - 0x117FE
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_501()//Position - 0x11827
{
	if (func_502(CAM::_0xDC9DA9E8789F5246()))
	{
		return Global_141784;
	}
	return 0;
}

int func_502(int iParam0)//Position - 0x11842
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_18(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_503()//Position - 0x11865
{
	if (func_501())
	{
		return 1;
	}
	if (func_443(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_474())
	{
		return 1;
	}
	if (func_417(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_415(CAM::_0xDC9DA9E8789F5246()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_504(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_504(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_504(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_504(int iParam0)//Position - 0x11940
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

int func_505(int iParam0)//Position - 0x11958
{
	if (iParam0 == 27)
	{
		if ((func_417(CAM::_0xDC9DA9E8789F5246()) && !func_117(CAM::_0xDC9DA9E8789F5246())) && !func_413(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_32(CAM::_0xDC9DA9E8789F5246(), 0) && func_117(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
		if (func_506(CAM::_0xDC9DA9E8789F5246()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_506(int iParam0)//Position - 0x119C9
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_417(iParam0) && !func_445(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8));
	bVar2 = func_117(iParam0);
	uVar3 = func_25();
	uVar4 = func_296();
	if ((bVar1 && (func_414(iParam0) || func_508(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_34(iParam0)) && !func_507(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_26862F.f_1313.f_D2 != iVar0)
	{
		Global_26862F.f_1313.f_D2 = iVar0;
	}
	return iVar0;
}

bool func_507(int iParam0)//Position - 0x11A87
{
	return func_35(iParam0, 19);
}

int func_508(int iParam0)//Position - 0x11A97
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_509()//Position - 0x11ABD
{
	if (func_9(func_36(), 1, 1) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(func_36()), 0))
	{
		func_510(151, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(func_36()), true), &uLocal_111, 1140457472, 1144750080, 0);
	}
}

void func_510(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0x11B05
{
	float fVar0;
	float fVar1;
	
	if ((((func_417(CAM::_0xDC9DA9E8789F5246()) && !func_445(CAM::_0xDC9DA9E8789F5246())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 8)) && (func_414(CAM::_0xDC9DA9E8789F5246()) || func_508(CAM::_0xDC9DA9E8789F5246()))) || func_551(vParam1))
	{
		return;
	}
	Global_196EED = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vParam1);
	func_547(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_34(CAM::_0xDC9DA9E8789F5246()) || func_33(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				HUD::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			HUD::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_21(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			func_546(vParam1, 1, 0);
		}
		if (!*uParam2 && func_9(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 1;
			if (func_545(iParam0))
			{
				GRAPHICS::_0x54E22EA2C1956A8D(func_544(iParam0));
				if (func_543(iParam0, 4294967295))
				{
					HUD::_0x14621BB1DF14E2B2(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 1);
						HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 1);
					}
					MISC::SET_BIT(&(Global_196EED.f_3), 0);
				}
			}
			if (func_542(iParam0))
			{
				fVar1 = func_541(iParam0);
				if (fVar1 != 1f)
				{
					func_538(fVar1);
					MISC::SET_BIT(&(Global_196EED.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_537(iParam0) && func_34(CAM::_0xDC9DA9E8789F5246()))
				{
					func_535(1);
					func_534(2);
				}
			}
			func_297(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_35(CAM::_0xDC9DA9E8789F5246(), 19))
			{
				func_299(19);
			}
		}
		if (*uParam2 && func_9(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 0;
			if (func_545(iParam0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0))
				{
					GRAPHICS::_0x54E22EA2C1956A8D(1f);
					HUD::_0x14621BB1DF14E2B2(5);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 0);
				}
			}
			if (func_542(iParam0))
			{
				func_533();
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 1);
			}
			if (iParam5 && !func_417(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_31(CAM::_0xDC9DA9E8789F5246()) != 152)
				{
					func_512();
				}
			}
			if (func_199(2))
			{
				func_535(0);
				func_511(2);
			}
		}
	}
}

void func_511(int iParam0)//Position - 0x11D78
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_27), iParam0);
}

void func_512()//Position - 0x11D8F
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_531();
	func_515(1, 1, 0);
	func_513();
}

void func_513()//Position - 0x11DC5
{
	func_514(0, 0);
}

void func_514(int iParam0, int iParam1)//Position - 0x11DD3
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_515(bool bParam0, bool bParam1, bool bParam2)//Position - 0x11DEB
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2C), &Global_24C35C, 318);
	}
	else
	{
		Global_24B2CE.f_2C = { Global_24C35C };
		Global_24B2CE.f_2C.f_31 = { Global_24C35C.f_31 };
		Global_24B2CE.f_2C.f_34 = Global_24C35C.f_34;
		Global_24B2CE.f_2C.f_35 = Global_24C35C.f_35;
	}
	if (bParam0)
	{
		func_530();
	}
	if (!bParam2)
	{
		func_518(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_517(0);
	func_516();
}

void func_516()//Position - 0x11E8A
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_517(bool bParam0)//Position - 0x11EAF
{
	if (bParam0)
	{
		Global_24B2CE.f_2BE = 0;
	}
	else
	{
		Global_24B2CE.f_2BE = 1;
	}
}

void func_518(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x11ECF
{
	if (bParam0)
	{
		if (func_529())
		{
			func_528();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_526();
		func_522(8, 0, 0, 0, 0);
		Global_24B2CE.f_2BF.f_1FB = iParam11;
		Global_24B2CE.f_2BF.f_1FE = iParam3;
		Global_24B2CE.f_2BF.f_1FF = iParam4;
		Global_24B2CE.f_2BF.f_1FC = iParam5;
		Global_24B2CE.f_2BF.f_1FD = iParam6;
		Global_24B2CE.f_2BF.f_200 = iParam7;
		Global_24B2CE.f_2BF.f_201 = iParam8;
		Global_24B2CE.f_2BF.f_202 = iParam9;
		Global_24B2CE.f_6C8 = 1;
	}
	else
	{
		func_519();
	}
}

void func_519()//Position - 0x11F96
{
	if (func_529() && !func_521())
	{
		func_528();
	}
	if (func_521())
	{
		func_520();
	}
	else
	{
		func_526();
		func_522(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_520()//Position - 0x11FDE
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_521()//Position - 0x12026
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x12065
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_10())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_523())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24CF98 = 0;
	}
	Global_24B2CE.f_1E4 = iParam0;
	Global_24B2CE.f_1E4.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B2CE.f_1E4.f_2 = iParam1;
	Global_24B2CE.f_1E4.f_3 = iParam2;
	Global_24B2CE.f_1E4.f_4 = iParam3;
	Global_24B2CE.f_1E4.f_5 = iParam4;
}

int func_523()//Position - 0x12104
{
	if (((func_31(CAM::_0xDC9DA9E8789F5246()) == 229 || func_31(CAM::_0xDC9DA9E8789F5246()) == 191) || func_525()) || func_524())
	{
		return 0;
	}
	return 1;
}

var func_524()//Position - 0x12144
{
	return Global_1805F4;
}

int func_525()//Position - 0x12150
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_526()//Position - 0x12165
{
	if (func_529() && !func_521())
	{
		func_528();
	}
	func_527();
	Global_24B2CE.f_2BF = 0;
}

void func_527()//Position - 0x1218E
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2CE.f_2BF.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_528()//Position - 0x121C9
{
	if (func_521())
	{
		if (Global_24B2CE.f_2BF.f_203 == Global_24B2CE.f_4C3.f_203)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_4C3), &(Global_24B2CE.f_2BF), 516);
		Global_24B2CE.f_1EA = { Global_24B2CE.f_1E4 };
		Global_24B2CE.f_6C7 = 1;
	}
}

int func_529()//Position - 0x12237
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_530()//Position - 0x12276
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_531()//Position - 0x1228F
{
	func_532();
	Global_24B2CE.f_8C5 = 0;
}

void func_532()//Position - 0x122A3
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2CE.f_8C6[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_533()//Position - 0x122CF
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_26862F.f_130E < 1f)
		{
			return;
		}
	}
	Global_26862F.f_130F = 4294967295;
	Global_26862F.f_130E = 1f;
}

void func_534(int iParam0)//Position - 0x12316
{
	MISC::SET_BIT(&(Global_26862F.f_1313.f_27), iParam0);
}

void func_535(int iParam0)//Position - 0x1232D
{
	if (func_536() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_536()//Position - 0x12362
{
	if ((((Global_EC6C9 != 4294967295 && Global_EC6C9 != 33) && Global_EC6C9 != 35) && Global_EC6C9 != 37) && Global_EC6C9 != 21)
	{
		return 1;
	}
	return 0;
}

int func_537(int iParam0)//Position - 0x123A8
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_538(float fParam0)//Position - 0x123F8
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_539())
	{
		return;
	}
	fVar0 = (Global_26862F.f_130E - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26862F.f_130E = fParam0;
	Global_26862F.f_130F = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_539()//Position - 0x12464
{
	switch (func_540())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_540()//Position - 0x12498
{
	return Global_6373;
}

float func_541(int iParam0)//Position - 0x124A3
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_542(int iParam0)//Position - 0x12637
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_543(int iParam0, int iParam1)//Position - 0x126FF
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_544(int iParam0)//Position - 0x12880
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_545(int iParam0)//Position - 0x12938
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_546(vector3 vParam0, int iParam1, int iParam2)//Position - 0x12A36
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

void func_547(int iParam0, float fParam1)//Position - 0x12A60
{
	int iVar0;
	
	iVar0 = func_550(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_548();
	}
}

void func_548()//Position - 0x12A86
{
	if (!func_549(CAM::_0xDC9DA9E8789F5246()))
	{
		func_297(25);
	}
}

bool func_549(int iParam0)//Position - 0x12AA0
{
	return func_35(iParam0, 25);
}

int func_550(int iParam0)//Position - 0x12AB0
{
	switch (iParam0)
	{
		case 152:
			return Global_40001.f_3079;
		
		case 142:
			return Global_40001.f_306D;
		
		case 157:
			return Global_40001.f_304C;
		
		case 159:
			return Global_40001.f_303B;
		
		case 162:
			return Global_40001.f_30AA;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return 4294967295;
}

int func_551(vector3 vParam0)//Position - 0x12B26
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_552()//Position - 0x12B50
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_553(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_553(int iParam0)//Position - 0x12B8D
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Var0) && ENTITY::IS_ENTITY_A_PED(Var0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == PLAYER::GET_PLAYER_PED(func_36()))
		{
			if (Var0.f_3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == AUDIO::_0x0626A247D2405330())
					{
						MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_554()//Position - 0x12C0B
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110, 3))
	{
		if (func_9(func_36(), 1, 1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_36()))
		{
			func_571(func_36(), func_572(6), 1, 0);
			func_569(func_36(), 432, 1, 0);
			func_567(func_36(), 1, 1, 0);
			func_566(func_36(), Global_40001.f_2FD2, 1, 0);
			func_563(func_36(), 1, 0);
			if (func_41() <= 1)
			{
				func_555(func_36(), 1, 7000);
			}
			MISC::SET_BIT(&iLocal_110, 3);
		}
	}
}

void func_555(int iParam0, bool bParam1, int iParam2)//Position - 0x12C95
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_252F9E)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			MISC::SET_BIT(&(Global_24DCF5.f_16F), iVar0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_174), iVar0);
			HUD::SET_BLIP_FLASHES(Global_24DCF5[iVar0], 1);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_24DCF5[iVar0], 250);
			func_556(iParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_24DCF5.f_174), iVar0);
			}
			else
			{
				Global_24DCF5.f_C6[iVar0] = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_24DCF5.f_16F), iVar0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_174), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_24DCF5.f_174), iVar0);
			}
			else
			{
				Global_24DCF5.f_C6[iVar0] = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_16F), iVar0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_174), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			func_556(iParam0);
			HUD::SET_BLIP_FLASHES(Global_24DCF5[iVar0], 0);
		}
	}
}

void func_556(int iParam0)//Position - 0x12DCA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			Global_24DCF5.f_575[iVar0] = func_557(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_24DCF5[iVar0], Global_24DCF5.f_575[iVar0]);
		}
	}
}

int func_557(int iParam0)//Position - 0x12E18
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_24DCF5[iVar0]);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_17F, iVar0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_17E, iVar0))
			{
				return 1;
			}
			else if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_170, iVar0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_16F, iVar0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24DCF5.f_181, iVar0))
			{
				return func_560(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_560(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_560(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_252F9E))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_252F9E))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_75(Global_252F9E, iParam0, 4294967294, 0))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 303:
					case 418:
						return func_560(10);
						break;
					
					case 364:
						if (func_558(Global_252F9E, iParam0, 1))
						{
							return func_560(10);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_560(10);
						break;
					
					case 417:
						if (func_558(Global_252F9E, iParam0, 1))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_558(Global_252F9E, iParam0, 1))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_558(int iParam0, int iParam1, bool bParam2)//Position - 0x13055
{
	if (func_62(iParam0, 4294967294, 0, 0, 0) == func_62(iParam1, 4294967294, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_559(func_62(iParam0, 4294967294, 0, 0, 0)) && func_559(func_62(iParam1, 4294967294, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_559(int iParam0)//Position - 0x130AE
{
	if (iParam0 == func_68(1) || iParam0 == func_68(0))
	{
		return 1;
	}
	return 0;
}

int func_560(int iParam0)//Position - 0x130D4
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_562())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_561(iParam0);
}

int func_561(int iParam0)//Position - 0x1310E
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_562()//Position - 0x13199
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_252F9E);
	if (iVar0 > 4294967295 && iVar0 < 4)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iVar0 /*10693*/].f_15E5, 4);
	}
	return 0;
}

void func_563(int iParam0, bool bParam1, bool bParam2)//Position - 0x131D2
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	func_564(&(Global_24DCF5.f_2C9[iParam0]), &(Global_24DCF5.f_434[iParam0]), &(Global_24DCF5.f_186), bParam1, iParam0, bParam2, &uVar0);
}

int func_564(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x13210
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				GRAPHICS::_0x35FB78DC42B7BD21(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = 4294967295;
			}
			*uParam0 = 4294967295;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_565(int iParam0)//Position - 0x132D5
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_539())
	{
		return 1;
	}
	return 0;
}

void func_566(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x132FE
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_24DCF5.f_2EA[iParam0]), &(Global_24DCF5.f_455[iParam0]), &(Global_24DCF5.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_224[iParam0] = fParam1;
		}
	}
}

void func_567(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x13350
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_24DCF5.f_32C[iParam0]), &(Global_24DCF5.f_497[iParam0]), &(Global_24DCF5.f_16C), bParam1, iParam0, bParam3, &uVar0))
	{
		func_568(iParam0, bParam2);
	}
}

void func_568(int iParam0, bool bParam1)//Position - 0x13398
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_24DCF5.f_16D), iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24DCF5.f_16D), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_24DCF5[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_24DCF5[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_24DCF5[iParam0], true);
		}
	}
}

void func_569(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x133F3
{
	bool bVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_24DCF5.f_245[iParam0]), &(Global_24DCF5.f_3B0[iParam0]), &(Global_24DCF5.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_570();
		}
	}
}

void func_570()//Position - 0x1344E
{
	Global_24DCF5.f_5E4 = 1;
}

void func_571(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1345E
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_24DCF5.f_266[iParam0]), &(Global_24DCF5.f_3D1[iParam0]), &(Global_24DCF5.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1C1[iParam0] = uParam1;
		}
	}
}

int func_572(int iParam0)//Position - 0x134B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_573()//Position - 0x13718
{
	char* sVar0;
	
	if (func_342())
	{
		if (func_341())
		{
			func_334();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_112.f_A)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_580(sVar0))
	{
		func_574(sVar0, func_36(), 1, 0);
	}
}

void func_574(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x13770
{
	func_575(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_575(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x13788
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam1) > 63)
	{
		return 0;
	}
	if (func_579(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	uVar0 = Global_140740.f_36;
	func_335();
	Global_140740 = 9;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = iParam3;
	Global_140740.f_38 = iParam3;
	Global_140740.f_36 = uVar0;
	func_578();
	func_577(bParam2);
	func_576();
	return 1;
}

void func_576()//Position - 0x13852
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_577(bool bParam0)//Position - 0x13865
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_578()//Position - 0x1388B
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

bool func_579(char* sParam0, char* sParam1)//Position - 0x138B0
{
	if (!func_340())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

int func_580(char* sParam0)//Position - 0x13908
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_340())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_581(sParam0);
}

bool func_581(char* sParam0)//Position - 0x13959
{
	if (!func_340())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_582(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_582(char* sParam0)//Position - 0x1399D
{
	if (!func_340())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

void func_583()//Position - 0x139CF
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_342())
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_112.f_1, 0))
	{
		if (func_390(&(Local_112.f_4)))
		{
			iVar1 = (func_5() - func_588(&(Local_112.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_587(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_584(iVar1, sVar2, 0, 0, 4294967295, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_584(0, sVar2, 0, 0, 4294967295, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_584(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x13A73
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_586(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_585(7, iVar0);
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

void func_585(int iParam0, int iParam1)//Position - 0x13BC1
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_586(int iParam0, int iParam1)//Position - 0x13BDA
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

int func_587(int iParam0, int iParam1)//Position - 0x13BF3
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_588(var uParam0, bool bParam1, bool bParam2)//Position - 0x13C09
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_589()//Position - 0x13C50
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_342())
	{
		return;
	}
	if (CAM::_0xDC9DA9E8789F5246() != func_59())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110, 0))
		{
			if (!func_333())
			{
				sVar0 = "GBTER_START";
				if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_112.f_A)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_591(sVar0, PLAYER::GET_PLAYER_NAME(func_36()), 0, 4294967295);
				func_590(1);
				MISC::SET_BIT(&iLocal_110, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_112.f_A)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_332();
			func_323(86, func_36(), 4294967295, sVar2, sVar1, 1, 4294967295, 2, 4294967295);
			MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110, 0))
	{
		if (!func_333())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_112.f_A)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_591(sVar3, PLAYER::GET_PLAYER_NAME(func_36()), 0, 4294967295);
			MISC::SET_BIT(&iLocal_110, 2);
			func_590(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_112.f_A)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_332();
		func_323(86, func_36(), 4294967295, sVar5, sVar4, 1, 4294967295, 2, 4294967295);
		MISC::SET_BIT(&(Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 0);
	}
	MISC::SET_BIT(&iLocal_110, 0);
}

void func_590(int iParam0)//Position - 0x13DDF
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_197(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_333())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Boss_Message_Orange", sVar0, false);
	}
}

void func_591(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x13E16
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

void func_592(int iParam0)//Position - 0x13E41
{
	Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_2 = iParam0;
}

void func_593(bool bParam0)//Position - 0x13E55
{
	if (bParam0)
	{
		if (!func_35(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			if (func_506(CAM::_0xDC9DA9E8789F5246()) != 0)
			{
				func_297(9);
			}
		}
	}
	else if (func_35(CAM::_0xDC9DA9E8789F5246(), 9))
	{
		func_299(9);
	}
}

void func_594(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x13E9B
{
	float fVar0;
	
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 != iParam0)
	{
		func_608(4294967295);
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 = iParam0;
		if (func_607() != 4294967295)
		{
			func_606(4294967295);
		}
		if (func_605() != 4294967295)
		{
			func_604(4294967295);
		}
		func_603(iParam2);
		func_601(iParam0);
		if (!func_542(iParam0))
		{
			fVar0 = func_541(iParam0);
			if (fVar0 != 1f)
			{
				func_538(fVar0);
				MISC::SET_BIT(&(Global_196EED.f_3), 1);
			}
		}
		if (!func_545(iParam0) || iParam3)
		{
			if (func_543(iParam0, iParam2) && iParam3 == 1)
			{
				HUD::_0x14621BB1DF14E2B2(0);
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 0);
					HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				}
				MISC::SET_BIT(&(Global_196EED.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				GRAPHICS::_0x54E22EA2C1956A8D(1f);
				HUD::_0x14621BB1DF14E2B2(5);
			}
		}
		if (func_25())
		{
			func_297(27);
		}
		if (bParam1)
		{
			if (!func_296())
			{
				func_535(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 0))
			{
				func_89(6);
			}
			func_600();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_417(CAM::_0xDC9DA9E8789F5246()) && func_34(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 8);
		}
		func_596();
		if (func_595(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_196EED.f_3), 6);
		}
		Global_26862F.f_185C = 0;
	}
}

int func_595(int iParam0)//Position - 0x140BA
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_596()//Position - 0x14104
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_599();
	iVar2 = func_26(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_47(iVar1, iVar2, 1) || func_597(iVar1, CAM::_0xDC9DA9E8789F5246()))
			{
				unk_0xB7BCAAFF114A94F2(CAM::_0xDC9DA9E8789F5246(), iVar1, iVar3);
				unk_0xB7BCAAFF114A94F2(iVar1, CAM::_0xDC9DA9E8789F5246(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_597(int iParam0, int iParam1)//Position - 0x14174
{
	if (func_27(iParam0, 1) && func_27(iParam1, 1))
	{
		return (func_598(iParam0) == func_26(iParam1) || func_598(iParam1) == func_26(iParam0));
	}
	return 0;
}

int func_598(int iParam0)//Position - 0x141B6
{
	if (func_27(iParam0, 1))
	{
		return Global_18CD5B[func_26(iParam0) /*560*/].f_B.f_1BB;
	}
	return func_10();
}

int func_599()//Position - 0x141E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != 4294967295)
			{
				return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar1 /*560*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_600()//Position - 0x14222
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 1);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 4))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 4);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 6))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 6);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 2);
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_29A = 0;
	if (Global_26862F.f_11C0 > 0)
	{
		HUD::_0x14621BB1DF14E2B2(Global_26862F.f_11C0);
	}
	Global_26862F.f_11BF = 0;
}

void func_601(int iParam0)//Position - 0x142C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_113(3791, 4294967295, 0);
	iVar1 = func_602(iParam0);
	if (iVar1 != 4294967295)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_111(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_602(int iParam0)//Position - 0x142F5
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return 4294967295;
}

void func_603(int iParam0)//Position - 0x1438C
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_B0 != iParam0)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_B0 = iParam0;
	}
}

void func_604(int iParam0)//Position - 0x143BB
{
	if (Global_26862F.f_1313.f_14B != iParam0)
	{
		Global_26862F.f_1313.f_14B = iParam0;
	}
}

int func_605()//Position - 0x143DE
{
	return Global_26862F.f_1313.f_14B;
}

void func_606(int iParam0)//Position - 0x143F0
{
	if (Global_26862F.f_1313.f_14A != iParam0)
	{
		Global_26862F.f_1313.f_14A = iParam0;
	}
}

int func_607()//Position - 0x14413
{
	return Global_26862F.f_1313.f_14A;
}

void func_608(int iParam0)//Position - 0x14425
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_20 = iParam0;
}

int func_609()//Position - 0x1443E
{
	return Local_113[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_2;
}

int func_610()//Position - 0x14450
{
	if (func_611(151) || func_296())
	{
		return 1;
	}
	return 0;
}

int func_611(int iParam0)//Position - 0x14470
{
	if (!func_128() && !func_27(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (!func_34(CAM::_0xDC9DA9E8789F5246()))
		{
			if (func_296())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_612(int iParam0, int iParam1)//Position - 0x144C9
{
	Local_113[iParam0 /*4*/] = iParam1;
}

int func_613()//Position - 0x144D9
{
	return 1;
}

int func_614()//Position - 0x144E2
{
	return Local_112;
}

int func_615(int iParam0)//Position - 0x144EC
{
	return Local_113[iParam0 /*4*/];
}

int func_616()//Position - 0x144FA
{
	var uVar0;
	
	func_621(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_620())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_619())
	{
		return 1;
	}
	if (func_618(157))
	{
		if (!func_617())
		{
			return 1;
		}
	}
	if (func_618(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_539() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_539()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_617()//Position - 0x14584
{
	return Global_255C02.f_24B;
}

int func_618(int iParam0)//Position - 0x14593
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_619()//Position - 0x145AA
{
	return Global_25824F;
}

bool func_620()//Position - 0x145B6
{
	return Global_255C02.f_246;
}

void func_621(var uParam0)//Position - 0x145C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 3731680626:
					func_622(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 2305239146)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_622(int iParam0)//Position - 0x14638
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_9(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_623(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_623(int iParam0, var uParam1)//Position - 0x146B9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_624()//Position - 0x14718
{
	SYSTEM::WAIT(0);
}

void func_625()//Position - 0x14725
{
	func_334();
	if (func_9(func_36(), 0, 1))
	{
		func_566(func_36(), 1f, 1, 0);
		func_44(func_45(func_36()), 0);
	}
	Global_1987C5 = func_10();
	func_626(1, 0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_626(bool bParam0, int iParam1)//Position - 0x14768
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14B91C.f_1.f_6C != 0)
	{
		Global_14B91C.f_1.f_6C = 0;
	}
	Global_14B91C.f_1.f_6D = 4294967295;
	Global_14B91C.f_1.f_6E = 4294967295;
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 167 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 168)
	{
		func_679();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 4);
	}
	if ((func_143() && iParam1 != 0) && Global_40001.f_41D5)
	{
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 190 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 192)
		{
			func_659(CAM::_0xDC9DA9E8789F5246(), iParam1, 1, 0);
		}
	}
	if (((Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 164 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 208) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 250) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 != 4294967295)
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 = 4294967295;
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 14) && !func_417(CAM::_0xDC9DA9E8789F5246()))
		{
			func_535(0);
		}
	}
	else if (func_657(CAM::_0xDC9DA9E8789F5246()) != 4294967295)
	{
		func_608(4294967295);
	}
	func_656(func_10());
	if (func_199(16))
	{
		func_511(16);
	}
	func_653(0);
	func_603(4294967295);
	func_652();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_651(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_648(iVar1);
		iVar1++;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0))
	{
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 5))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 5);
	}
	iVar2 = func_647();
	if ((func_449(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_646(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_115(iVar2))
	{
		func_643(4294967295, 1);
	}
	else if (((((func_642(iVar2) || func_641(iVar2)) || func_640(iVar2)) || func_103(iVar2)) || func_102(iVar2)) || func_101(iVar2))
	{
	}
	else
	{
		func_643(4294967295, 1);
	}
	func_299(19);
	func_299(20);
	func_299(21);
	func_299(22);
	func_299(27);
	func_511(3);
	func_511(4);
	func_511(7);
	func_639();
	if (func_34(CAM::_0xDC9DA9E8789F5246()))
	{
		func_593(0);
	}
	func_299(29);
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_10();
	if (Global_26862F.f_1313.f_23 != 0)
	{
		Global_26862F.f_1313.f_23 = 0;
	}
	if (bParam0)
	{
		func_512();
	}
	if (!func_417(CAM::_0xDC9DA9E8789F5246()))
	{
		func_533();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 1);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 6);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 7))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 7);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 8))
	{
		func_638("IMPEXP_SELFDES", 0);
		func_629("IMPEXP_SELFDES");
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 8);
	}
	func_627(iVar2, 0);
}

void func_627(int iParam0, bool bParam1)//Position - 0x14B31
{
	if (bParam1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_628(iParam0));
			MISC::SET_BIT(&(Global_196EED.f_3), 9);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_628(iParam0));
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 9);
	}
}

char* func_628(int iParam0)//Position - 0x14B8D
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_629(char* sParam0)//Position - 0x14C06
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_19E56.f_3721[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_3721[iVar0 /*104*/]), sParam0))
			{
				if (Global_19E56.f_3721[iVar0 /*104*/].f_18 == 2)
				{
				}
				else
				{
					func_631();
					Global_19E56.f_3721[iVar0 /*104*/].f_63[Global_38B1] = 0;
					if (func_630(iVar0))
					{
					}
					else
					{
						Global_19E56.f_3721[iVar0 /*104*/].f_18 = 0;
						Global_19E56.f_3721[iVar0 /*104*/].f_1C = 0;
						Global_19E56.f_3721[iVar0 /*104*/].f_1D = 0;
					}
					HUD::_REMOVE_NOTIFICATION(Global_19E56.f_3721[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_630(int iParam0)//Position - 0x14CBA
{
	if ((Global_19E56.f_3721[iParam0 /*104*/].f_63[0] == 1 || Global_19E56.f_3721[iParam0 /*104*/].f_63[1] == 1) || Global_19E56.f_3721[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_631()//Position - 0x14D0F
{
	if (func_637(14))
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
		Global_38B1 = func_632();
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

var func_632()//Position - 0x14DB1
{
	func_633();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_633()//Position - 0x14DCA
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_636(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_635(AUDIO::_0x0626A247D2405330());
			if (func_634(iVar0) && (!func_637(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_634(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_634(int iParam0)//Position - 0x14EC7
{
	return iParam0 < 3;
}

int func_635(int iParam0)//Position - 0x14ED3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_636(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_636(int iParam0)//Position - 0x14F10
{
	if (func_634(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_637(int iParam0)//Position - 0x14F3A
{
	return Global_8D15 == iParam0;
}

void func_638(char* sParam0, int iParam1)//Position - 0x14F48
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_19E56.f_3721[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_3721[iVar0 /*104*/]), sParam0))
			{
				if (Global_19E56.f_3721[iVar0 /*104*/].f_18 == 0)
				{
				}
				Global_19E56.f_3721[iVar0 /*104*/].f_18 = 1;
				if (Global_19E56.f_3721[iVar0 /*104*/].f_19 == 1)
				{
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[0] == 1)
					{
						Global_19E56.f_36C7[0 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[1] == 1)
					{
						Global_19E56.f_36C7[1 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[2] == 1)
					{
						Global_19E56.f_36C7[2 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[3] == 1)
					{
						Global_19E56.f_36C7[3 /*20*/].f_11 = 0;
					}
					Global_19E56.f_3721[iVar0 /*104*/].f_19 = 0;
					if (iParam1 == 1)
					{
						Global_19E56.f_3721[iVar0 /*104*/].f_1B = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_639()//Position - 0x15060
{
	if (func_549(CAM::_0xDC9DA9E8789F5246()))
	{
		func_299(25);
	}
}

int func_640(int iParam0)//Position - 0x15079
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_641(int iParam0)//Position - 0x15099
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0)//Position - 0x150C4
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_643(int iParam0, bool bParam1)//Position - 0x150EA
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_647();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_58(CAM::_0xDC9DA9E8789F5246()) == CAM::_0xDC9DA9E8789F5246())
			{
				Global_26366D.f_5D[func_645(iParam0)] = 1;
			}
		}
		iVar0 = func_645(159);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(157);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(148);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(164);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(142);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(152);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(166);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(170);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(173);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(179);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(200);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(201);
		if (func_644(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(182);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(183);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(185);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(186);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(180);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(195);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(197);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(198);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(207);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(208);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(209);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(214);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(215);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(216);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(217);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(218);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(219);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(220);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(221);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_644(int iParam0, int iParam1, bool bParam2)//Position - 0x15766
{
	if (bParam2)
	{
		if ((!func_35(CAM::_0xDC9DA9E8789F5246(), 19) && !func_35(CAM::_0xDC9DA9E8789F5246(), 20)) && !func_35(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			return 0;
		}
	}
	if (Global_26366D.f_5D[iParam0] == 1 && func_390(&(Global_26366D[iParam0 /*2*/])))
	{
		if (func_588(&(Global_26366D[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_26366D.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_645(int iParam0)//Position - 0x157EC
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return 4294967295;
}

void func_646(int iParam0)//Position - 0x159EE
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_647();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_26366D.f_5D[func_645(iParam0)] = 1;
		}
		iVar0 = func_645(155);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(163);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(160);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(153);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(162);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(154);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(171);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(172);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(199);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(194);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(193);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(210);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(205);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(189);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(211);
		if (func_644(iVar0, Global_40001.f_30CE, 0))
		{
			func_398(&(Global_26366D[iVar0 /*2*/]));
			func_4(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_647()//Position - 0x15D1F
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	return 0;
}

void func_648(int iParam0)//Position - 0x162AA
{
	if (!func_649(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/], func_650(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/] = { func_650() };
	}
	if (!func_649(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/], func_650(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/] = { func_650() };
	}
}

bool func_649(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1632C
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_650()//Position - 0x16373
{
	vector3 vVar0;
	
	return vVar0;
}

void func_651(int iParam0)//Position - 0x1637F
{
	if (!func_649(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/], func_650(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/] = { func_650() };
	}
	if (!func_649(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/], func_650(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/] = { func_650() };
	}
}

void func_652()//Position - 0x163FD
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_1803FE = { Var0 };
	Global_1803FE.f_D = func_10();
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1801DE, 3))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_1801DE, 3);
	}
}

void func_653(bool bParam0)//Position - 0x16457
{
	if (bParam0)
	{
		if (!func_46(CAM::_0xDC9DA9E8789F5246(), 14))
		{
			func_655(14);
		}
	}
	else if (func_46(CAM::_0xDC9DA9E8789F5246(), 14))
	{
		func_654(14);
	}
}

void func_654(int iParam0)//Position - 0x1648E
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_655(int iParam0)//Position - 0x164AB
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_656(int iParam0)//Position - 0x164C8
{
	if (func_28(CAM::_0xDC9DA9E8789F5246()))
	{
		if (CAM::_0xDC9DA9E8789F5246() != iParam0)
		{
			if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB != iParam0)
			{
				Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_657(int iParam0)//Position - 0x16517
{
	if (func_658(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_20;
	}
	return 4294967295;
}

int func_658(int iParam0, int iParam1)//Position - 0x1653A
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_659(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x16575
{
	int iVar0;
	
	if (func_266(iParam0, iParam1) && func_678(iParam0, iParam1))
	{
		iVar0 = func_265(iParam0, iParam1);
		func_663(iVar0, bParam2, bParam3);
		func_660(iVar0, 1);
	}
}

void func_660(int iParam0, bool bParam1)//Position - 0x165B0
{
	if (!func_662(iParam0))
	{
		return;
	}
	func_252(func_661(iParam0), bParam1, 4294967295, 1);
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_6 = bParam1;
}

int func_661(int iParam0)//Position - 0x165EC
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_662(int iParam0)//Position - 0x16646
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_663(int iParam0, bool bParam1, bool bParam2)//Position - 0x1665B
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_677(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (!bParam1)
	{
		func_676(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2634DD[iParam0];
		iVar0 = func_675(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1975A4 = 4294967295;
		}
		func_674(iParam0, 0, bParam2);
	}
	else if (func_672(iParam0, bParam2))
	{
		iVar0 = func_671(iVar2, 0);
		iVar3 = func_670(CAM::_0xDC9DA9E8789F5246(), iVar2);
		iVar4 = func_669(iVar2, bParam2);
		iVar5 = func_671(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_668(iVar2) && func_667(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_676(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_666(CAM::_0xDC9DA9E8789F5246(), iVar2) > 0)
		{
			func_665(iParam0, (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 - (func_669(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_671(iVar2, bParam2) / func_666(CAM::_0xDC9DA9E8789F5246(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_668(iVar2) && func_667(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_664(CAM::_0xDC9DA9E8789F5246(), iVar2, iVar0, bParam2);
}

void func_664(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x167CC
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1841F3[iParam0 /*790*/].f_111.f_F8 = iParam2;
				}
				else
				{
					Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_665(int iParam0, int iParam1)//Position - 0x16840
{
	if (iParam0 != 4294967295 && iParam1 != Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2)
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_666(int iParam0, int iParam1)//Position - 0x16885
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_667(int iParam0, int iParam1)//Position - 0x168E4
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1) && func_668(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_668(int iParam0)//Position - 0x1694E
{
	return func_140(iParam0) == 5;
}

int func_669(int iParam0, bool bParam1)//Position - 0x1695E
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_140(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_41B8;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BD;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_41B7;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BC;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_41B6;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BB;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_41B4;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41B9;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_41B5;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BA;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_51CE;
				if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51CF;
				}
			}
			else
			{
				uVar0 = Global_40001.f_51BE;
				if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51BF;
				}
			}
			break;
	}
	return uVar0;
}

int func_670(int iParam0, int iParam1)//Position - 0x16A95
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_671(int iParam0, bool bParam1)//Position - 0x16AF4
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_140(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_41A5;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AE);
			}
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B3);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_41A6;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AD);
			}
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B2);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_41A7;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AC);
			}
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B1);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_41A8;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AA);
			}
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41AF);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_41A9;
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AB);
			}
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B0);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_40001.f_51CB;
			}
			else
			{
				iVar0 = Global_40001.f_51BB;
			}
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_51CC);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_51BC);
				}
			}
			if (func_264(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_51CD);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_51BD);
				}
			}
			if (func_667(CAM::_0xDC9DA9E8789F5246(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_672(int iParam0, bool bParam1)//Position - 0x16CFE
{
	if (bParam1)
	{
		return func_253(15384, 4294967295, 4294967295);
	}
	return func_253(func_673(iParam0), 4294967295, 4294967295);
}

int func_673(int iParam0)//Position - 0x16D23
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_674(int iParam0, bool bParam1, bool bParam2)//Position - 0x16D7D
{
	if (bParam2)
	{
		func_252(15384, bParam1, 4294967295, 1);
		return;
	}
	func_252(func_673(iParam0), bParam1, 4294967295, 1);
}

int func_675(int iParam0, bool bParam1)//Position - 0x16DA8
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2634DD[iParam0];
	iVar1 = func_677(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2634E4;
	}
	if (func_668(iVar1))
	{
		if (func_667(CAM::_0xDC9DA9E8789F5246(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_676(int iParam0, int iParam1, bool bParam2)//Position - 0x16DF0
{
	if (bParam2)
	{
		Global_2634E4 = iParam1;
		return;
	}
	Global_2634DD[iParam0] = iParam1;
}

int func_677(int iParam0, int iParam1)//Position - 0x16E10
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_259(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/]))
	{
		uVar0 = Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/];
	}
	return uVar0;
}

int func_678(int iParam0, int iParam1)//Position - 0x16E69
{
	int iVar0;
	
	if (func_266(iParam0, iParam1))
	{
		iVar0 = func_265(iParam0, iParam1);
		if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_4 > 0 && Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_679()//Position - 0x16EBD
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 28);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 29);
	func_680(24);
}

void func_680(int iParam0)//Position - 0x16EE5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_681(struct<21> Param0)//Position - 0x16F0E
{
	func_719(func_720(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_716(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_113, 129);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_682(0, 0);
	return 1;
}

void func_682(int iParam0, int iParam1)//Position - 0x16F4E
{
	func_715();
	if (func_57(CAM::_0xDC9DA9E8789F5246()))
	{
		func_688(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_687(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_196EE8, 0);
				break;
			}
	}
	if (!func_128() && !func_27(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_301())
		{
			func_534(3);
		}
	}
	func_534(4);
	if (func_91(0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_11();
	}
	if (func_88(iParam0))
	{
		func_686();
		Global_196F08.f_12 = func_685(func_59());
	}
	else if (func_104(func_657(CAM::_0xDC9DA9E8789F5246())))
	{
		func_684();
		Global_196F3E.f_12 = func_685(func_59());
	}
	func_683();
}

void func_683()//Position - 0x1702A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14B91C.f_216[iVar0 /*42*/].f_1 = func_10();
		Global_14B91C.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_684()//Position - 0x17064
{
	struct<63> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Var0.f_36 = 4294967295;
	Var0.f_37 = 4294967295;
	Var0.f_38 = 4294967295;
	Var0.f_39 = 4294967295;
	Var0.f_3A = 4294967295;
	Var0.f_3B = 4294967295;
	Var0.f_3C = 4294967295;
	Var0.f_3D = 4294967295;
	Var0.f_3E = 4294967295;
	Global_196F3E = { Var0 };
	Global_196F3E.f_18 = 0;
	Global_196F3E.f_19 = 0;
	Global_196F3E.f_11 = 0;
}

int func_685(int iParam0)//Position - 0x171CE
{
	if (func_27(iParam0, 1))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_19A;
	}
	return 4294967295;
}

void func_686()//Position - 0x171F2
{
	struct<54> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_196F08 = { Var0 };
	Global_196F08.f_1D = 0;
	Global_196F08.f_1E = 0;
	Global_196F08.f_11 = 0;
}

int func_687(int iParam0, bool bParam1)//Position - 0x17326
{
	return func_47(CAM::_0xDC9DA9E8789F5246(), iParam0, bParam1);
}

void func_688(bool bParam0)//Position - 0x1733A
{
	int iVar0;
	
	func_680(33);
	func_680(34);
	func_680(35);
	func_680(36);
	func_680(37);
	func_680(38);
	func_680(39);
	func_680(40);
	func_680(43);
	func_680(41);
	func_680(54);
	func_680(42);
	func_680(47);
	func_714(23);
	func_714(24);
	func_680(92);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 2);
	func_713();
	func_708();
	func_703();
	func_698();
	func_690();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26862F.f_1313.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_689(3))
	{
		func_714(3);
	}
	else if (func_689(4))
	{
		func_714(4);
	}
	else if (func_689(5))
	{
		func_714(5);
	}
	else if (func_689(6))
	{
		func_714(6);
	}
	else if (func_689(7))
	{
		func_714(7);
	}
	else if (((((((((((((((((func_689(0) || func_689(1)) || func_689(2)) || func_689(8)) || func_689(9)) || func_689(10)) || func_689(11)) || func_689(12)) || func_689(13)) || func_689(14)) || func_689(15)) || func_689(16)) || func_689(17)) || func_689(18)) || func_689(19)) || func_689(20)) || func_689(21)) || func_689(22))
	{
		func_714(8);
		func_714(0);
		func_714(1);
		func_714(2);
		func_714(9);
		func_714(10);
		func_714(11);
		func_714(12);
		func_714(13);
		func_714(14);
		func_714(15);
		func_714(16);
		func_714(17);
		func_714(18);
		func_714(19);
		func_714(20);
		func_714(21);
		func_714(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26862F.f_1313.f_E[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_689(int iParam0)//Position - 0x17598
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_E[iVar0], iVar1);
}

void func_690()//Position - 0x175C1
{
	int iVar0;
	
	if (func_697())
	{
		func_696(8);
		func_696(9);
		func_696(10);
		func_696(12);
		func_696(13);
		func_696(14);
		func_696(19);
		func_696(20);
		func_696(21);
		func_696(22);
		func_696(23);
		func_696(24);
		func_696(25);
		func_696(26);
		func_696(15);
		func_696(16);
		func_696(17);
		func_696(18);
		func_696(35);
		func_696(45);
		func_696(46);
		if (func_695(11))
		{
			func_696(11);
			iVar0 = func_113(7226, 4294967295, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_111(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_695(48))
	{
		if (func_694(151, 3))
		{
			func_693(151, 3);
		}
		func_696(48);
	}
	if (func_695(49))
	{
		if (func_694(152, 3))
		{
			func_693(152, 3);
		}
		func_696(49);
	}
	if (func_695(50))
	{
		if (func_694(153, 3))
		{
			func_693(153, 3);
		}
		func_696(50);
	}
	if (func_695(51))
	{
		if (func_694(func_691(), 3))
		{
			func_693(func_691(), 3);
		}
		func_696(51);
	}
}

int func_691()//Position - 0x1770B
{
	if (func_692())
	{
		Global_19E56.f_6D76[154 /*29*/].f_18[Global_38B1] = 1;
	}
	return 154;
}

int func_692()//Position - 0x1772F
{
	int iVar0;
	
	iVar0 = func_26(CAM::_0xDC9DA9E8789F5246());
	if (((iVar0 != CAM::_0xDC9DA9E8789F5246() && iVar0 != func_10()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_693(int iParam0, int iParam1)//Position - 0x17770
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

int func_694(int iParam0, int iParam1)//Position - 0x177B3
{
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_695(int iParam0)//Position - 0x177D8
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_1A[iVar0], iVar1);
}

void func_696(int iParam0)//Position - 0x17801
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_1A[iVar0]), iVar1);
}

int func_697()//Position - 0x1782A
{
	if (((((((((((((((((((((func_695(8) || func_695(9)) || func_695(10)) || func_695(12)) || func_695(11)) || func_695(13)) || func_695(14)) || func_695(19)) || func_695(20)) || func_695(21)) || func_695(22)) || func_695(23)) || func_695(24)) || func_695(25)) || func_695(26)) || func_695(15)) || func_695(16)) || func_695(17)) || func_695(18)) || func_695(35)) || func_695(45)) || func_695(46))
	{
		return 1;
	}
	return 0;
}

void func_698()//Position - 0x1793C
{
	if (func_702())
	{
		func_701(0);
		func_701(1);
		func_701(2);
		func_701(3);
		func_701(4);
		func_701(5);
		if (func_700(32))
		{
			if (func_694(func_699(), 3))
			{
				func_693(func_699(), 3);
			}
			func_701(32);
		}
	}
}

int func_699()//Position - 0x17990
{
	if (func_692())
	{
		Global_19E56.f_6D76[12 /*29*/].f_18[Global_38B1] = 1;
	}
	return 12;
}

bool func_700(int iParam0)//Position - 0x179B4
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_17[iVar0], iVar1);
}

void func_701(int iParam0)//Position - 0x179DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_17[iVar0]), iVar1);
}

int func_702()//Position - 0x17A06
{
	if ((((func_700(1) || func_700(0)) || func_700(2)) || func_700(4)) || func_700(5))
	{
		return 1;
	}
	return 0;
}

void func_703()//Position - 0x17A47
{
	if (func_707())
	{
		func_706(0);
		func_706(1);
		func_706(2);
		func_706(3);
		func_706(4);
		func_706(5);
		func_706(6);
		func_706(7);
		if (func_705(8))
		{
			func_706(8);
		}
		if (func_705(15))
		{
			if (func_694(func_704(), 3))
			{
				func_693(func_704(), 3);
			}
			func_706(15);
		}
	}
}

int func_704()//Position - 0x17AB4
{
	if (func_692())
	{
		Global_19E56.f_6D76[20 /*29*/].f_18[Global_38B1] = 1;
	}
	return 20;
}

bool func_705(int iParam0)//Position - 0x17AD8
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_15[iVar0], iVar1);
}

void func_706(int iParam0)//Position - 0x17B01
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_15[iVar0]), iVar1);
}

int func_707()//Position - 0x17B2A
{
	if ((((((((func_705(0) || func_705(1)) || func_705(2)) || func_705(3)) || func_705(4)) || func_705(5)) || func_705(6)) || func_705(7)) || func_705(8))
	{
		return 1;
	}
	return 0;
}

void func_708()//Position - 0x17B98
{
	if (func_712())
	{
		func_711(0);
		func_711(1);
		func_711(2);
		func_711(3);
		func_711(4);
		func_711(5);
		func_711(6);
		func_711(7);
		func_711(8);
		func_711(9);
		func_711(10);
		func_711(11);
		func_711(12);
		if (func_710(13))
		{
			if (func_694(func_709(), 3))
			{
				func_693(func_709(), 3);
			}
			func_711(13);
		}
	}
}

int func_709()//Position - 0x17C14
{
	if (func_692())
	{
		Global_19E56.f_6D76[76 /*29*/].f_18[Global_38B1] = 1;
	}
	return 76;
}

bool func_710(int iParam0)//Position - 0x17C38
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_13[iVar0], iVar1);
}

void func_711(int iParam0)//Position - 0x17C61
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_13[iVar0]), iVar1);
}

int func_712()//Position - 0x17C8A
{
	if ((((((((((((func_710(0) || func_710(1)) || func_710(2)) || func_710(3)) || func_710(4)) || func_710(5)) || func_710(6)) || func_710(7)) || func_710(8)) || func_710(9)) || func_710(10)) || func_710(11)) || func_710(12))
	{
		return 1;
	}
	return 0;
}

void func_713()//Position - 0x17D28
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26862F.f_1313.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_714(int iParam0)//Position - 0x17D50
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_E[iVar0]), iVar1);
}

void func_715()//Position - 0x17D79
{
	struct<14> Var0;
	
	Global_196EF6 = { Var0 };
	Global_196EF6.f_E = 0;
	Global_196EF6.f_F = 0;
}

int func_716(int iParam0, int iParam1, bool bParam2)//Position - 0x17D9B
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_718();
			}
			else
			{
				return 0;
			}
		}
		if (!func_717())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
				if (func_620())
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
				if (func_618(155))
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_718();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > 4294967295)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_718();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_718();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_717()//Position - 0x17EB0
{
	return Global_140842;
}

void func_718()//Position - 0x17EBC
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_719(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x17EC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_718();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_720(int iParam0)//Position - 0x17EE7
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

