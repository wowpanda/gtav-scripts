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
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	struct<11> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_108[32];
	struct<21> Local_109 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		if (!func_674(ScriptParam_109))
		{
			func_618();
		}
	}
	while (true)
	{
		func_617();
		if (func_609())
		{
			func_618();
		}
		switch (func_608(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_607() == 1)
				{
					if (func_606())
					{
						func_605(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_607() == 1)
				{
					if (!func_603())
					{
						func_89();
					}
					if (func_52(1))
					{
						func_605(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
					}
				}
				else if (func_607() == 3)
				{
					func_605(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_618();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_51())
			{
				func_50(3);
			}
			switch (func_607())
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
					func_618();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_107.f_8)
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
			if (MISC::IS_BIT_SET(Local_107.f_1, 5))
			{
				func_39(3);
			}
			func_37();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_36()))
	{
		func_12(1);
		func_39(2);
		MISC::SET_BIT(&(Local_107.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_39(2);
		MISC::SET_BIT(&(Local_107.f_1), 3);
	}
	if (MISC::IS_BIT_SET(Local_107.f_1, 0))
	{
		if (func_3(&(Local_107.f_4), func_5(), 0))
		{
			MISC::SET_BIT(&(Local_107.f_1), 4);
		}
	}
	if (MISC::IS_BIT_SET(Local_107.f_1, 4))
	{
		func_12(2);
		func_39(2);
	}
	if (MISC::IS_BIT_SET(Local_107.f_1, 1) || MISC::IS_BIT_SET(Local_107.f_1, 7))
	{
		func_12(0);
		func_39(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
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

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
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

int func_5()
{
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(int iParam0, bool bParam1)
{
	return func_7(iParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)
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
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_10() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_10())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_10())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
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
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_10()
{
	return -1;
}

int func_11()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11;
}

void func_12(int iParam0)
{
	Local_107.f_9 = iParam0;
}

int func_13(int iParam0)
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

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589291[iVar0 /*770*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2436641.f_1, iParam0);
	}
	return 1;
}

int func_16(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_17()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()
{
	return Global_1312736;
}

bool func_21(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_204, iParam1);
}

bool func_22(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_25();
	}
	return MISC::IS_BIT_SET(Global_1363073.f_241.f_136[func_24(10) /*33*/][iParam0], func_23(10));
}

int func_23(int iParam0)
{
	return (iParam0 % 32);
}

int func_24(int iParam0)
{
	return (iParam0 / 32);
}

bool func_25()
{
	return Global_1312416;
}

int func_26(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_10();
}

bool func_27(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_28(iParam0))
		{
			return 0;
		}
	}
	return Global_1624079[iParam0 /*558*/].f_11 != func_10();
}

int func_28(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_10())
		{
			return Global_1624079[iParam0 /*558*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_29(int iParam0)
{
	return Global_1589291[iParam0 /*770*/].f_196 != 0;
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
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

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_35(iParam0, 9);
	}
	return 0;
}

bool func_35(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_11.f_4, iParam1);
}

int func_36()
{
	return Local_107.f_2;
}

void func_37()
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
			if (MISC::IS_BIT_SET(Local_108[iVar2 /*4*/].f_1, 1))
			{
				func_38(PLAYER::INT_TO_PLAYERINDEX(iVar2));
				MISC::SET_BIT(&(Local_107.f_1), 1);
			}
			if (MISC::IS_BIT_SET(Local_108[iVar2 /*4*/].f_1, 4))
			{
				func_38(func_11());
				MISC::SET_BIT(&(Local_107.f_1), 7);
			}
			if (MISC::IS_BIT_SET(Local_108[iVar2 /*4*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_107.f_1), 0);
			}
			if (MISC::IS_BIT_SET(Local_108[iVar2 /*4*/].f_1, 2))
			{
				MISC::SET_BIT(&(Local_107.f_1), 4);
			}
		}
		else if (func_41() == 2)
		{
			if (MISC::IS_BIT_SET(Local_108[iVar2 /*4*/].f_1, 3))
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
			MISC::SET_BIT(&(Local_107.f_1), 5);
		}
		else if (func_3(&(Local_107.f_6), 10000, 0))
		{
			MISC::SET_BIT(&(Local_107.f_1), 5);
		}
	}
}

void func_38(int iParam0)
{
	Local_107.f_3 = iParam0;
}

void func_39(int iParam0)
{
	Local_107.f_8 = iParam0;
}

int func_40()
{
	return 1;
}

int func_41()
{
	return Local_107.f_8;
}

int func_42()
{
	if (func_43())
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	if (MISC::IS_BIT_SET(Local_107.f_1, 6))
	{
		return 1;
	}
	func_49(func_10());
	if (Global_2519572.f_4882.f_4 != func_10())
	{
	}
	else
	{
		func_50(3);
	}
	if (func_9(Global_2519572.f_4882.f_4, 0, 1))
	{
		if (!func_47(Global_2519572.f_4882.f_4, PLAYER::PLAYER_ID(), 1))
		{
			func_49(Global_2519572.f_4882.f_4);
		}
	}
	if (func_36() != func_10())
	{
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			if (func_46(func_36(), 13))
			{
				Local_107.f_10 = 1;
			}
		}
		func_44(func_45(func_36()), 1);
		Global_2519572.f_4882.f_4 = func_10();
		MISC::SET_BIT(&(Local_107.f_1), 6);
		return 1;
	}
	else if (func_36() == func_10())
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = -1282886260;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &vVar0, 3, iParam0);
	}
}

int func_45(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

bool func_46(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_11.f_5, iParam1);
}

int func_47(int iParam0, int iParam1, bool bParam2)
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
		if (Global_1624079[iParam0 /*558*/].f_11 != func_10())
		{
			return iParam1 == Global_1624079[iParam0 /*558*/].f_11;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 != func_10())
			{
				if (Global_1624079[iParam0 /*558*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_49(int iParam0)
{
	Local_107.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_50(int iParam0)
{
	Local_107 = iParam0;
}

int func_51()
{
	if (Global_2519572.f_4882.f_32)
	{
		Global_2519572.f_4882.f_32 = 0;
		return 1;
	}
	return 0;
}

int func_52(bool bParam0)
{
	if (func_60(1))
	{
		return 1;
	}
	if (Global_2519572.f_4882.f_33)
	{
		Global_2519572.f_4882.f_33 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_59() == func_10() || !func_9(func_59(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_57(PLAYER::PLAYER_ID()))
	{
		if (func_56(PLAYER::PLAYER_ID()) && func_53(func_55(PLAYER::PLAYER_ID()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53(int iParam0, int iParam1)
{
	return func_54(iParam0) == iParam1;
}

int func_54(int iParam0)
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
	}
	return -1;
}

int func_55(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_305.f_12;
	}
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_305, 4);
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_58(iParam0) != func_10())
	{
		return func_58(iParam0) == func_26(iParam0);
	}
	return 0;
}

int func_58(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_35;
}

int func_59()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_35;
}

int func_60(bool bParam0)
{
	bool bVar0;
	
	if (!func_88(1))
	{
		bVar0 = false;
		if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 != func_10())
		{
			if (func_9(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57, 0, 1))
			{
				if ((Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_24 == 4 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_24 == 8) || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_87(func_31(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_86(31);
				if (func_85(func_31(PLAYER::PLAYER_ID())))
				{
					func_86(81);
				}
				if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 != func_10() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57))
				{
					Global_1622663 = func_62(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57, -2, 0, 0);
					if (!func_61(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57))
					{
						func_86(88);
					}
				}
				else
				{
					Global_1622663 = 1;
				}
				Global_1622647 = { Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_61(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_62(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_16(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_121853[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_16(PLAYER::PLAYER_ID()) || (func_84() && func_83())) && !MISC::IS_BIT_SET(Global_2519572.f_4576, 31))
	{
		iVar1 = func_82();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_121853[iParam1] != -1)
							{
								return func_80(iParam1, iParam0, 0);
							}
							else
							{
								return func_70(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_70(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_121853[iParam1] != -1)
				{
					return func_80(iParam1, iParam0, 0);
				}
				else
				{
					return func_63(0, -1, 0);
				}
			}
			else
			{
				return func_63(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_121853[iParam1] != -1)
		{
			return func_80(iParam1, iParam0, 0);
		}
		else
		{
			return func_70(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_70(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_63(bool bParam0, int iParam1, bool bParam2)
{
	return func_64(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_69(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
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
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
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
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_68(1);
	}
	return func_68(0);
}

int func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_67(iParam0, iParam1, iParam3);
	if (func_66(Global_4456448.f_126776, 1))
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

int func_66(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_148478 == 65)
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
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
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
	return -1;
}

int func_68(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589291[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_76(1))
			{
				iVar3 = func_75(iParam0);
				if (!iVar3 == -1)
				{
					return func_73(iVar3);
				}
			}
			if ((func_72(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_69(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_68(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_71(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574355 || Global_1574346) || Global_1589291[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574355 == 1 && Global_1574365 == 0))
			{
				return func_68(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574350 && Global_1573884.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_75(iParam0);
	if (!iVar4 == -1)
	{
		return func_73(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_71(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
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
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_73(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_74(iParam0);
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

var func_74(int iParam0)
{
	return Global_2417501.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_75(int iParam0)
{
	if (!iParam0 == func_10())
	{
		if (func_27(iParam0, 1))
		{
			return Global_2417501.f_2071.f_11[func_26(iParam0)];
		}
	}
	return -1;
}

int func_76(int iParam0)
{
	if ((func_79() || func_78()) || (func_77() && iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_77()
{
	return Global_2447942.f_16;
}

var func_78()
{
	return Global_2447942.f_15;
}

var func_79()
{
	return Global_2447942.f_14;
}

int func_80(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_76(1))
	{
		iVar2 = func_75(iParam1);
		if (!iVar2 == -1)
		{
			return func_73(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_98[iParam0 /*10231*/].f_5361[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_10())
	{
		if (Global_4456448.f_121853[iParam0] != -1 && Global_4456448.f_121853[iParam0] <= 4)
		{
			if (Global_4456448.f_121853[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_121853[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_121853[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_121853[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_121853[iParam0];
			}
		}
		else
		{
			iVar0 = func_64(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_81(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_148521;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_148522;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_148523;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_148524;
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

var func_82()
{
	return Global_2359302.f_2;
}

bool func_83()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_84()
{
	return MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_18, 14);
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 148 && func_8(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_35, 1))
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

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2519572.f_4882.f_7[iVar0]), iVar1);
}

int func_87(int iParam0)
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
	return -1;
}

bool func_88(bool bParam0)
{
	return func_27(PLAYER::PLAYER_ID(), bParam0);
}

void func_89()
{
	switch (func_602())
	{
		case 0:
			func_587(151, 1, -1, 0);
			func_586(1);
			if (func_41() > 0)
			{
				func_585(1);
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_105, 2))
			{
				func_582();
			}
			if (Global_1671537 == func_10())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_36()))
				{
					Global_1671537 = func_36();
				}
			}
			func_576();
			func_566();
			func_547();
			func_545();
			func_502();
			func_381(&(Global_1352938.f_533), &Global_1352938, 27, &(Global_1352938.f_1), &(Global_1352938.f_116), -1, 0, 0);
			if (func_41() > 1)
			{
				func_585(2);
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
			{
				func_379(0, func_10());
				func_298();
				func_90();
			}
			if (func_41() > 2)
			{
				func_585(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_90()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!MISC::IS_BIT_SET(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
	{
		if ((MISC::IS_BIT_SET(Local_107.f_1, 2) || MISC::IS_BIT_SET(Local_107.f_1, 4)) || MISC::IS_BIT_SET(Local_107.f_1, 4))
		{
			MISC::SET_BIT(&(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_297())
		{
			MISC::SET_BIT(&(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_291())
		{
			MISC::SET_BIT(&(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (MISC::IS_BIT_SET(Local_107.f_1, 7))
		{
			func_91(151, 1, &Var0, 0);
		}
		else
		{
			func_91(151, MISC::IS_BIT_SET(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 1), &Var0, 0);
		}
		MISC::SET_BIT(&(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
	}
}

void func_91(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_289(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17652);
		}
		else
		{
			iVar1 = (iVar1 + func_288(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_287(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17651);
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
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_285(iParam0))
	{
		if (bParam1)
		{
			if (func_284(PLAYER::PLAYER_ID()) > 0)
			{
				func_283();
			}
			else
			{
				func_282();
			}
		}
		else
		{
			func_281();
		}
	}
	func_265(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_263(iParam0, uParam2, &iVar0, &iVar5);
	func_240(iParam0, uParam2, &iVar0, &iVar5);
	func_226(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_209(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2519572.f_4882.f_371 = iVar4;
	}
	else
	{
		Global_2519572.f_4882.f_371 = iVar5;
	}
	iVar8 = func_59();
	if (iVar8 != func_10() && iParam0 != 148)
	{
		if (func_27(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_47(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_195(&iVar0, 1);
			}
		}
	}
	func_189(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1665352.f_10 = iVar1;
		func_188();
		func_141(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1665352.f_9 = iVar0;
		iVar13 = func_11();
		if (iVar13 != func_10())
		{
			func_140(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_88(1);
		if (iParam0 == 168)
		{
			if (!func_139())
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_138())
			{
				if (!func_139())
				{
					Var15 = { func_137() };
					NETCASH::_0x8586789730B10CAF(iVar0, MISC::GET_HASH_KEY(func_136(Var15)), func_135(Var15), iVar5);
				}
			}
			else if (func_139())
			{
				func_126(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_4262188[iVar16 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar16 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar16 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_125())
			{
				if (!func_139())
				{
					NETCASH::_0x8586789730B10CAF(iVar0, MISC::GET_HASH_KEY(func_136(func_124(PLAYER::PLAYER_ID()))), 5, iVar5);
				}
			}
			else if (func_139())
			{
				func_126(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4262188[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_125())
			{
				if (!func_139())
				{
					iVar18 = func_120(uParam2->f_16, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					NETCASH::_0x6B7E4FB50D5F3D65(iVar19, iVar5, iVar7, iVar18, uParam2->f_16);
				}
			}
			else if (func_139())
			{
				func_126(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_4262188[iVar20 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar20 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar20 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xDEE612F2D71B0308(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_139())
			{
				func_126(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_4262188[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_125())
			{
				if (!func_139())
				{
					unk_0x0B39CF0D53F1C883(iVar0, uParam2->f_20, iVar5);
				}
			}
			else if (func_139())
			{
				func_126(-856006867, iVar0, &iVar22, 0, 1, 0);
				Global_4262188[iVar22 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar22 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar22 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_139())
			{
				func_126(-961034881, iVar0, &iVar23, 0, 1, 0);
				Global_4262188[iVar23 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar23 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar23 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xA75EAC69F59E96E7(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_139())
			{
				func_126(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_4262188[iVar24 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar24 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar24 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xC5156361F26E2212(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_139())
			{
				func_126(-634726636, iVar0, &iVar25, 0, 1, 0);
				Global_4262188[iVar25 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar25 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar25 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x1FDA0AA679C9919B(iVar0);
			}
		}
		else if (func_139())
		{
			func_126(-856006867, iVar0, &iVar26, 0, 1, 0);
			Global_4262188[iVar26 /*80*/].f_8.f_54 = uVar11;
			Global_4262188[iVar26 /*80*/].f_8.f_55 = uVar12;
			Global_4262188[iVar26 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			NETCASH::_0x0CB1BE0633C024A8(uVar11, uVar12, iVar0, bVar14);
		}
		func_119(iParam0, iVar0);
		if (func_118(iParam0))
		{
			if (func_117(iParam0) > -1)
			{
				func_116(func_117(iParam0), iVar0);
			}
		}
		Global_2459893 = iVar0;
		func_115(&Global_2458160, 0, 0);
	}
	if (func_34(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID()))
	{
		func_102(iParam0);
	}
	if (func_85(iParam0))
	{
		Global_1665370.f_13 = iVar0;
		Global_1665370.f_14 = iVar1;
	}
	if (func_101(iParam0))
	{
		Global_1665424.f_13 = iVar0;
		Global_1665424.f_14 = iVar1;
	}
	if (func_100(iParam0))
	{
		Global_1665487.f_12 = iVar0;
		Global_1665487.f_13 = iVar1;
	}
	if (func_99(iParam0))
	{
		Global_1665531.f_12 = iVar0;
		Global_1665531.f_13 = iVar1;
	}
	if (func_98(iParam0))
	{
		Global_1665585.f_12 = iVar0;
		Global_1665585.f_13 = iVar1;
	}
	if (func_97(iParam0))
	{
		if (func_96(iParam0))
		{
			Global_1665665.f_12 = iVar0;
			Global_1665665.f_13 = iVar1;
		}
		else if (func_92(iParam0))
		{
			Global_1665718.f_12 = iVar0;
			Global_1665718.f_13 = iVar1;
		}
	}
}

int func_92(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_93(func_94(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
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

int func_94(int iParam0)
{
	if (func_31(iParam0) == 237 || func_31(iParam0) == 250)
	{
		return func_95(iParam0);
	}
	return -1;
}

int func_95(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_176;
	}
	return -1;
}

int func_96(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
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

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_99(int iParam0)
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

int func_100(int iParam0)
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

int func_101(int iParam0)
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

void func_102(int iParam0)
{
	if (func_113(PLAYER::PLAYER_ID()) && func_138())
	{
		if (func_112(iParam0))
		{
			func_106(7948, -1);
		}
		else if (func_105(iParam0))
		{
			func_106(7950, -1);
		}
		else if (func_104(iParam0, 1))
		{
			func_106(7951, -1);
		}
		else if (func_103(iParam0))
		{
			func_106(7952, -1);
		}
	}
}

int func_103(int iParam0)
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

int func_104(int iParam0, int iParam1)
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

int func_105(int iParam0)
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

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_110(iParam0, func_111(iParam1), 0);
	iVar0++;
	if (!func_109(iParam0))
	{
		func_108(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_107(iParam0, iVar0, iParam1, 1);
	}
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_111(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_111(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_111(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_111(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_111(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_111(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_111(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_111(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_111(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_111(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_111(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_111(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_111(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_111(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_111(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_111(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_111(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_111(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_111(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_111(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_111(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_111(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_111(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_111(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_111(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_111(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_111(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_111(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_111(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_111(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_111(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_111(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_111(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_111(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_111(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_109(int iParam0)
{
	if (Global_1373635)
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
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_111(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_112(int iParam0)
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

bool func_113(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_109, 14);
}

bool func_114(int iParam0)
{
	return func_35(iParam0, 20);
}

void func_115(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
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

void func_116(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22851 == 0 || Global_262145.f_22851 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_22851 == 1)
			{
				Global_2519572.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2519572.f_273 = iParam1;
				Global_2519572.f_274 = 0;
			}
		}
	}
}

int func_117(int iParam0)
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

int func_118(int iParam0)
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

void func_119(int iParam0, int iParam1)
{
	if (func_113(PLAYER::PLAYER_ID()) && func_138())
	{
		if (func_112(iParam0) && iParam1 > 0)
		{
			func_108(7949, (func_110(7949, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_120(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_123(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_121(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_121(int iParam0, int iParam1)
{
	return (func_122(iParam0) * iParam1);
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21676;
		
		case 0:
			return Global_262145.f_21677;
		
		case 1:
			return Global_262145.f_21678;
		
		case 2:
			return Global_262145.f_21679;
		
		case 3:
			return Global_262145.f_21680;
		
		case 4:
			return Global_262145.f_21681;
		
		case 5:
			return Global_262145.f_21682;
		
		case 6:
			return Global_262145.f_21683;
		
		case 7:
			return Global_262145.f_21684;
		
		default:
	}
	return 0;
}

float func_123(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21686);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21688;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21685);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21688;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21685);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21689;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21689;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21689;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21690;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21687);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21690;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21687);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21690;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21687);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_124(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_273.f_168[5 /*12*/];
}

bool func_125()
{
	return func_28(PLAYER::PLAYER_ID());
}

void func_126(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_139())
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
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_127(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_127(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_127(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_139())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_20()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_4262738 = 1;
			return 0;
		}
		if (Global_2458855)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262739 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262188[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_134(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262188[*uParam0 /*80*/].f_69 = 1;
					Global_4262188[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262725 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262737 = 1;
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_133(1, iParam4);
			Global_4262737 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_128(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_118.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_129(iParam0);
	}
}

void func_129(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_139())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_132(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_4262188[iParam0 /*80*/]);
		}
		func_130(&(Global_4262188[iParam0 /*80*/]));
	}
}

void func_130(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_131(&(uParam0->f_8.f_3));
	func_131(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_131(var uParam0)
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
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_132(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262188[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1)
{
	Global_2460027 = iParam1;
	Global_2460026 = iParam0;
}

int func_134(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262188[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_139())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262188[iVar0 /*80*/].f_2 = 1;
			Global_4262188[iVar0 /*80*/].f_1 = iParam5;
			Global_4262188[iVar0 /*80*/].f_3 = uParam1;
			Global_4262188[iVar0 /*80*/].f_4 = iParam2;
			Global_4262188[iVar0 /*80*/].f_7 = iParam3;
			Global_4262188[iVar0 /*80*/].f_5 = 0;
			Global_4262188[iVar0 /*80*/] = iParam0;
			Global_4262188[iVar0 /*80*/].f_6 = iParam4;
			Global_4262188[iVar0 /*80*/].f_72 = uParam8;
			Global_4262188[iVar0 /*80*/].f_71 = iParam7;
			Global_4262188[iVar0 /*80*/].f_74 = iParam9;
			Global_4262188[iVar0 /*80*/].f_73 = 0;
			Global_4262188[iVar0 /*80*/].f_75 = MISC::GET_FRAME_COUNT();
			Global_4262188[iVar0 /*80*/].f_79 = 0;
			Global_4262725 = 0;
			if (bParam6)
			{
				Global_4262188[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_135(int iParam0)
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
	return -1;
}

char* func_136(int iParam0)
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

struct<2> func_137()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_188;
}

bool func_138()
{
	return func_61(PLAYER::PLAYER_ID());
}

int func_139()
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_140(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1624079[iParam0 /*558*/].f_11.f_8[0];
	*uParam2 = Global_1624079[iParam0 /*558*/].f_11.f_8[1];
}

int func_141(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_142(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_142(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_152(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_148(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_143(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_143(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_146(iParam0, 1) };
	if (iParam0 == func_145(PLAYER::PLAYER_PED_ID()))
	{
		func_144(1);
	}
	func_148(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_144(int iParam0)
{
	Global_2436641.f_1885 = iParam0;
}

int func_145(int iParam0)
{
	return iParam0;
}

Vector3 func_146(int iParam0, bool bParam1)
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
	if (iParam0 == func_147(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
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

int func_147(int iParam0)
{
	return iParam0;
}

void func_148(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436641.f_1284[iVar0 /*30*/].f_6 == 0 || Global_2436641.f_1284[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436641.f_1284[iVar1 /*30*/] = { vParam0 };
			Global_2436641.f_1284[iVar1 /*30*/].f_6 = 1;
			Global_2436641.f_1284[iVar1 /*30*/].f_4 = func_151(Global_2436641.f_1284[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436641.f_1284[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2436641.f_1284[iVar1 /*30*/].f_3 = iParam1;
			Global_2436641.f_1284[iVar1 /*30*/].f_8 = iParam2;
			Global_2436641.f_1284[iVar1 /*30*/].f_9 = func_150();
			Global_2436641.f_1284[iVar1 /*30*/].f_10 = func_149();
			StringCopy(&(Global_2436641.f_1284[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436641.f_1284[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_149()
{
	if (Global_2436641.f_1885)
	{
		Global_2436641.f_1885 = 0;
		return 1;
	}
	Global_2436641.f_1885 = 0;
	return 0;
}

var func_150()
{
	var uVar0;
	
	uVar0 = Global_2436641.f_1887;
	Global_2436641.f_1887 = 1;
	return uVar0;
}

float func_151(vector3 vParam0, var uParam1, var uParam2)
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

var func_152(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_153(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_153(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_187(PLAYER::PLAYER_ID()) || func_186(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9024 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9024;
		}
	}
	else if (func_184() || func_183(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22143 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22143;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_182(sParam2))
	{
	}
	if (func_181())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_179(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_178(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_175(0, &iVar1);
					break;
				
				case 3:
					func_175(1, &iVar1);
					break;
				
				case 1:
					func_172(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1676003)
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
			func_171(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_164((func_170(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_2 != -1)
				{
					func_171(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_158(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_154((func_156(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_154((func_156(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_154(int iParam0)
{
	if (func_181())
	{
		Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_5 = iParam0;
		func_155(joaat("mpply_globalxp"), iParam0);
	}
}

void func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_156(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_157(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_5;
			}
		}
		else
		{
			return func_157(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_158(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_163(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_161(func_162(&Var0));
			if (iVar1 == 0)
			{
				func_160(&Global_1373641, iParam0);
				func_159(joaat("mpply_crew_local_xp_0"), Global_1373641);
			}
			else if (iVar1 == 1)
			{
				func_160(&Global_1373642, iParam0);
				func_159(joaat("mpply_crew_local_xp_1"), Global_1373642);
			}
			else if (iVar1 == 2)
			{
				func_160(&Global_1373643, iParam0);
				func_159(joaat("mpply_crew_local_xp_2"), Global_1373643);
			}
			else if (iVar1 == 3)
			{
				func_160(&Global_1373644, iParam0);
				func_159(joaat("mpply_crew_local_xp_3"), Global_1373644);
			}
			else if (iVar1 == 4)
			{
				func_160(&Global_1373645, iParam0);
				func_159(joaat("mpply_crew_local_xp_4"), Global_1373645);
			}
		}
	}
}

void func_159(int iParam0, int iParam1)
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
			Global_1373636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1373639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1373640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1373641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1373642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1373643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1373644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1373645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1373646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1373647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1373648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1373649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1373650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1373651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1373652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_161(int iParam0)
{
	if (iParam0 == Global_1373636)
	{
		return 0;
	}
	else if (iParam0 == Global_1373637)
	{
		return 1;
	}
	else if (iParam0 == Global_1373638)
	{
		return 2;
	}
	else if (iParam0 == Global_1373639)
	{
		return 3;
	}
	else if (iParam0 == Global_1373640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_162(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2457627;
		}
	}
	return Global_2457627;
}

struct<13> func_163(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	if (func_181())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8992 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1373762[func_111(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1373762[func_111(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_15(PLAYER::PLAYER_ID()))
		{
			Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_1 = iParam0;
			Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_6 = func_168(iParam0, 1);
		}
		func_107(639, iParam0, -1, 1);
		func_108(640, func_168(iParam0, 1), -1, 1, 0);
		Global_1373762[func_111(-1)] = iParam0;
		func_165(7, 0);
	}
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_167(iParam0, iParam1))
	{
		iVar0 = func_166();
		Global_2457604[iVar0] = iParam0;
	}
}

int func_166()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2457604[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_167(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_169(iParam0, 0);
}

int func_169(int iParam0, int iParam1)
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
		if (Global_286291[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_286291[iVar3] < iParam0)
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

int func_170(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1373762[func_111(-1)];
			}
			else if (func_15(iParam0))
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1373762[func_111(-1)];
	}
	return 0;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_110(iParam0, func_111(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_109(iParam0))
	{
		func_108(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_107(iParam0, iVar0, iParam2, 1);
	}
}

void func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_69(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_174(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_173(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_173(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_173(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_174(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2498829 = { func_163(iParam0) };
		Global_2498842 = { func_163(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2498829))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2498842))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498759, 35, &Global_2498829);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498794, 35, &Global_2498842);
				if (Global_2498759 == Global_2498794)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_175(bool bParam0, int iParam1)
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
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_174(PLAYER::PLAYER_ID(), iVar4))
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
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_176(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_174(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_173(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_173(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_176(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_177(iParam0), func_177(iParam1));
	return 0f;
}

Vector3 func_177(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_173(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_179(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_170(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_170(PLAYER::PLAYER_ID());
		}
	}
	if (func_180(8000, 0, 0) > 0)
	{
		if (func_180(8000, 0, 0) < (iParam0 + func_170(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_180(8000, 0, 0) - func_170(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_180(int iParam0, bool bParam1, int iParam2)
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
	return Global_286291[iParam0];
}

int func_181()
{
	return 1;
}

int func_182(char* sParam0)
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

int func_183(int iParam0)
{
	return func_98(func_31(iParam0));
}

bool func_184()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_77();
	}
	return func_185(Global_4456448.f_126776);
}

int func_185(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_186(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_187(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

void func_188()
{
	Global_2459235 = 1;
}

void func_189(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_194(7))
	{
		return;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_191(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2519572.f_4882.f_257, NETWORK::GET_NETWORK_TIME()));
	if (func_190(iParam0) != -1)
	{
		if (iVar2 > func_190(iParam0))
		{
			iVar2 = func_190(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11784)
	{
		iVar2 = Global_262145.f_11784;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_190(int iParam0)
{
	if (func_104(iParam0, 0) || func_105(iParam0))
	{
		return Global_262145.f_17857;
	}
	if (func_112(iParam0))
	{
		return Global_262145.f_17856;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17853;
		
		case 191:
			return Global_262145.f_17855;
		
		case 190:
			return Global_262145.f_17854;
		
		case 227:
			return Global_262145.f_20413;
		
		case 226:
			return Global_262145.f_20401;
		
		case 225:
			return Global_262145.f_20421;
		
		case 230:
			return Global_262145.f_21673;
		
		case 229:
			return Global_262145.f_21577;
		
		case 233:
			return Global_262145.f_22148;
		
		case 237:
			return Global_262145.f_23276;
		
		case 238:
			return Global_262145.f_23387;
		
		case 249:
			return Global_262145.f_23403;
		
		default:
	}
	return -1;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11875;
		
		case 152:
			return Global_262145.f_11910;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11898;
		
		case 157:
			return Global_262145.f_11865;
		
		case 159:
			return Global_262145.f_11848;
		
		case 164:
			return Global_262145.f_11888;
		
		case 160:
			return Global_262145.f_11938;
		
		case 162:
			return Global_262145.f_11958;
		
		case 163:
			return Global_262145.f_11923;
		
		case 154:
			return Global_262145.f_11993;
		
		case 155:
			return Global_262145.f_11983;
		
		case 153:
			return Global_262145.f_11947;
		
		case 170:
			return Global_262145.f_14370;
		
		case 171:
			return Global_262145.f_14429;
		
		case 172:
			return Global_262145.f_14447;
		
		case 173:
			return Global_262145.f_14388;
		
		case 166:
			return Global_262145.f_14403;
		
		case 167:
			return Global_262145.f_14494;
		
		case 169:
			return Global_262145.f_14466;
		
		case 168:
			return Global_262145.f_14459;
		
		case 179:
			return Global_262145.f_17736;
		
		case 180:
			return Global_262145.f_17515;
		
		case 182:
			return Global_262145.f_17515;
		
		case 183:
			return Global_262145.f_17515;
		
		case 185:
			return Global_262145.f_17515;
		
		case 186:
			return Global_262145.f_17515;
		
		case 189:
			return Global_262145.f_17736;
		
		case 190:
			return Global_262145.f_17391;
		
		case 191:
			return Global_262145.f_17482;
		
		case 192:
			return Global_262145.f_17276;
		
		case 193:
			return Global_262145.f_17736;
		
		case 194:
			return Global_262145.f_17736;
		
		case 195:
			return Global_262145.f_17515;
		
		case 197:
			return Global_262145.f_17515;
		
		case 198:
			return Global_262145.f_17515;
		
		case 199:
			return Global_262145.f_17736;
		
		case 200:
			return Global_262145.f_17736;
		
		case 201:
			return Global_262145.f_17736;
		
		case 205:
			return Global_262145.f_17736;
		
		case 207:
			return Global_262145.f_17515;
		
		case 208:
			return Global_262145.f_17515;
		
		case 209:
			return Global_262145.f_17515;
		
		case 210:
			return Global_262145.f_17736;
		
		case 211:
			return Global_262145.f_17736;
		
		case 214:
			return Global_262145.f_18586;
		
		case 215:
			return Global_262145.f_18588;
		
		case 216:
			return Global_262145.f_18590;
		
		case 217:
			return Global_262145.f_18592;
		
		case 218:
			return Global_262145.f_18594;
		
		case 219:
			return Global_262145.f_18596;
		
		case 220:
			return Global_262145.f_18598;
		
		case 221:
			return Global_262145.f_18600;
		
		case 225:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_20423;
			}
			break;
		
		case 226:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_20403;
			}
			break;
		
		case 227:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_20415;
			}
			break;
		
		case 229:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_21579;
			}
			break;
		
		case 230:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_21675;
			}
			break;
		
		case 233:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_22147;
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
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_23278;
			}
			break;
		
		case 238:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_23389;
			}
			break;
		
		case 249:
			if (func_88(0) || func_192(0))
			{
				return Global_262145.f_23405;
			}
			break;
	}
	return 0;
}

bool func_192(bool bParam0)
{
	return func_6(PLAYER::PLAYER_ID(), bParam0);
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11874;
		
		case 152:
			return Global_262145.f_11909;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11897;
		
		case 157:
			return Global_262145.f_11864;
		
		case 159:
			return Global_262145.f_11847;
		
		case 164:
			return Global_262145.f_11887;
		
		case 160:
			return Global_262145.f_11937;
		
		case 162:
			return Global_262145.f_11957;
		
		case 163:
			return Global_262145.f_11922;
		
		case 154:
			return Global_262145.f_11992;
		
		case 155:
			return Global_262145.f_11982;
		
		case 153:
			return Global_262145.f_11946;
		
		case 170:
			return Global_262145.f_14369;
		
		case 171:
			return Global_262145.f_14428;
		
		case 172:
			return Global_262145.f_14446;
		
		case 173:
			return Global_262145.f_14387;
		
		case 166:
			return Global_262145.f_14402;
		
		case 179:
			return Global_262145.f_17735;
		
		case 180:
			return Global_262145.f_17514;
		
		case 182:
			return Global_262145.f_17514;
		
		case 183:
			return Global_262145.f_17514;
		
		case 185:
			return Global_262145.f_17514;
		
		case 186:
			return Global_262145.f_17514;
		
		case 189:
			return Global_262145.f_17735;
		
		case 193:
			return Global_262145.f_17735;
		
		case 194:
			return Global_262145.f_17735;
		
		case 195:
			return Global_262145.f_17514;
		
		case 197:
			return Global_262145.f_17514;
		
		case 198:
			return Global_262145.f_17514;
		
		case 199:
			return Global_262145.f_17735;
		
		case 200:
			return Global_262145.f_17735;
		
		case 201:
			return Global_262145.f_17735;
		
		case 205:
			return Global_262145.f_17735;
		
		case 207:
			return Global_262145.f_17514;
		
		case 208:
			return Global_262145.f_17514;
		
		case 209:
			return Global_262145.f_17514;
		
		case 210:
			return Global_262145.f_17735;
		
		case 211:
			return Global_262145.f_17735;
		
		case 190:
			if (!func_125())
			{
				return Global_262145.f_17390;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_125())
			{
				return Global_262145.f_17481;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_125())
			{
				return Global_262145.f_17275;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18585;
		
		case 215:
			return Global_262145.f_18587;
		
		case 216:
			return Global_262145.f_18589;
		
		case 217:
			return Global_262145.f_18591;
		
		case 218:
			return Global_262145.f_18593;
		
		case 219:
			return Global_262145.f_18595;
		
		case 220:
			return Global_262145.f_18597;
		
		case 221:
			return Global_262145.f_18599;
		
		case 225:
			if (func_192(0))
			{
				return Global_262145.f_20422;
			}
			break;
		
		case 226:
			if (func_192(0))
			{
				return Global_262145.f_20402;
			}
			break;
		
		case 227:
			if (func_192(0))
			{
				return Global_262145.f_20414;
			}
			break;
		
		case 229:
			if (func_192(0))
			{
				return Global_262145.f_21578;
			}
			break;
		
		case 230:
			if (func_192(0))
			{
				return Global_262145.f_21674;
			}
			break;
		
		case 233:
			if (func_192(0))
			{
				return Global_262145.f_22149;
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
			if (func_192(0))
			{
				return Global_262145.f_23277;
			}
			break;
		
		case 238:
			if (func_192(0))
			{
				return Global_262145.f_23388;
			}
			break;
		
		case 249:
			if (func_192(0))
			{
				return Global_262145.f_23404;
			}
			break;
	}
	return 0;
}

bool func_194(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_37, iParam0);
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_125())
		{
			if (func_88(0))
			{
				if (!func_192(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_11()))
					{
						if (func_208() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_208());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_206(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_199("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1, 1);
						}
						func_86(20);
						func_196(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_198(iParam0);
		func_197(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_0xA40CC53DF8E50837(1, &Var0, 8, func_45(iParam0));
	}
}

void func_197(var uParam0, var uParam1)
{
	*uParam0 = Global_1641937.f_9;
	*uParam1 = Global_1641937.f_10;
}

var func_198(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_491;
}

int func_199(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_62(iParam1, -2, 1, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_204(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_200(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_200(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_203() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_18(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_201(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1661957.f_5[iVar0 /*53*/] = iParam0;
		Global_1661957.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1661957.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1661957.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1661957.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1661957.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1661957.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1661957 - 1))
	{
		if (iParam0 > Global_1661957.f_5[iVar0 /*53*/].f_1)
		{
			func_202(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1661957++;
	if (Global_1661957 > 5)
	{
		Global_1661957 = 5;
		return Global_1661957;
	}
	return (Global_1661957 - 1);
}

void func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1661957.f_5[iVar0 /*53*/] = { Global_1661957.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_203()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_204(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_205(&cVar0);
}

var func_205(char[4] cParam0)
{
	return cParam0;
}

void func_206(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_207(1);
	}
	else
	{
		iVar1 = func_207(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_11779;
}

int func_208()
{
	return Global_262145.f_11778;
}

void func_209(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_192(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_125())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_11();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589291[iVar11 /*770*/].f_753.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1589291[iVar11 /*770*/].f_753.f_2;
			}
			else
			{
				iVar2 = func_225(Global_1589291[iVar11 /*770*/].f_753, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_224(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_223("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1665665.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_222(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_220(*uParam3);
				}
				iVar6 = func_219(&uVar5);
				iVar7 = Global_262145.f_23307;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23306));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_86(140);
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
								if (func_218(iVar23))
								{
									func_210(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23279;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23280;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1676011 = *iParam2;
					func_86(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_212(iParam0);
	func_211(iParam0, uVar0, iParam1, iParam2);
}

void func_211(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 151656521;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_198(iParam0);
	func_197(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::_0xA40CC53DF8E50837(1, &Var0, 8, func_45(iParam0));
		}
	}
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_217();
	iVar0 = func_215(iParam0, iVar0);
	iVar1 = Global_1624079[func_11() /*558*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14330));
	if (iVar0 < func_214())
	{
		iVar0 = func_214();
	}
	if (iVar0 > func_213())
	{
		iVar0 = func_213();
	}
	return iVar0;
}

int func_213()
{
	return Global_262145.f_14331;
}

int func_214()
{
	return Global_262145.f_15506;
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_284(iParam0) * func_216());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_216()
{
	return Global_262145.f_15505;
}

var func_217()
{
	return Global_262145.f_11770;
}

int func_218(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_47(iParam0, PLAYER::PLAYER_ID(), 0))
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

int func_219(var uParam0)
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
			if (!func_18(iVar2, 0) && !func_47(iVar2, PLAYER::PLAYER_ID(), 1))
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

void func_220(int iParam0)
{
	func_221(iParam0, 7232);
}

void func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_110(iParam1, -1, 0);
	func_108(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_222(int iParam0)
{
	func_221(iParam0, 7227);
}

int func_223(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_200(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_224(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23308);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_225(struct<5> Param0, int iParam1)
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

void func_226(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_192(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_125())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_238(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_229(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_121(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_120(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_228(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_223("SMTICK_RONCUT", func_228(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_228(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_227(iVar2, iVar9);
				iVar6 = func_219(&uVar5);
				iVar7 = Global_262145.f_21692;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21691));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_86(44);
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
								if (func_218(iVar20))
								{
									func_210(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21625;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21626;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1676011 = *iParam2;
					func_86(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_227(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_221(iParam0, 6112);
	}
	if (iParam1 > 0)
	{
		func_221(iParam1, 6113);
	}
}

int func_228(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21659);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_21660))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21660);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_236())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_238(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_231(func_232(func_235(iVar0), -1, -1));
		if (func_230(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar0 = 0;
	iVar1 = func_234(iParam0, iParam1);
	iVar2 = func_233(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_233(int iParam0)
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
	return iVar0;
}

int func_234(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
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
	return iVar0;
}

int func_235(int iParam0)
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

bool func_236()
{
	return func_237() != 0;
}

int func_237()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_249;
}

int func_238(int iParam0)
{
	if (iParam0 != func_10() && func_239(iParam0))
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_249.f_3;
	}
	return 0;
}

int func_239(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_249 != 0;
	}
	return 0;
}

void func_240(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_192(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_125())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_124(iVar15);
			iVar0 = (func_262(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_258(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20405));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20404));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_255(iVar16, iVar2);
				if (func_251(iVar16) >= Global_262145.f_19953 || iVar2 >= Global_262145.f_19953)
				{
					func_241(5);
				}
				iVar6 = func_219(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_20407);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_20406));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_86(108);
					}
					else
					{
						func_86(110);
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
								if (func_218(iVar20))
								{
									func_210(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20408;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20409;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1676011 = *iParam2;
					func_86(112);
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

void func_241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19941)
			{
				if (func_243(Global_262145.f_19942))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19943)
			{
				if (func_243(Global_262145.f_19944))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19945)
			{
				if (func_243(Global_262145.f_19946))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19947)
			{
				if (func_243(Global_262145.f_19948))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19949)
			{
				if (func_243(Global_262145.f_19950))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19951)
			{
				if (func_243(Global_262145.f_19952))
				{
					func_223("CLOTHAWDSTRAP3", Global_262145.f_19953, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19954)
			{
				if (func_243(Global_262145.f_19955))
				{
					func_223("CLOTHAWDSTRAP5", Global_262145.f_20087, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19957)
			{
				if (func_243(Global_262145.f_19958))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19959)
			{
				if (func_243(Global_262145.f_19960))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19961)
			{
				if (func_243(Global_262145.f_19962))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19963)
			{
				if (func_243(Global_262145.f_19964))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19965)
			{
				if (func_243(Global_262145.f_19966))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19967)
			{
				if (func_243(Global_262145.f_19968))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19969)
			{
				if (func_243(Global_262145.f_19970))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19971)
			{
				if (func_243(Global_262145.f_19972))
				{
					func_242("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_242(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
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
		Global_2498829 = { func_163(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498759, 35, &Global_2498829))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2498759.f_22), "Leader") && Global_2498759.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2498759.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_2498759, 35), &(Global_2498759.f_17), Global_2498759.f_30, iVar1, 0, Global_2498759, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_200(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_248(15417, -1, -1))
			{
				func_247(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_248(15418, -1, -1))
			{
				func_247(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_248(15425, -1, -1))
			{
				func_247(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_248(15405, -1, -1))
			{
				func_247(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_248(15393, -1, -1))
			{
				func_247(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_248(15409, -1, -1))
			{
				func_247(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_248(15396, -1, -1))
			{
				func_247(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_248(15412, -1, -1))
			{
				func_247(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_248(15403, -1, -1))
			{
				func_247(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_248(15389, -1, -1))
			{
				func_247(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_248(15398, -1, -1))
			{
				func_247(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_248(15400, -1, -1))
			{
				func_247(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_248(15408, -1, -1))
			{
				func_247(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_248(15411, -1, -1))
			{
				func_247(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_248(15397, -1, -1))
			{
				func_247(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_248(15413, -1, -1))
			{
				func_247(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_248(15391, -1, -1))
			{
				func_247(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_248(15388, -1, -1))
			{
				func_247(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_248(15401, -1, -1))
			{
				func_247(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_248(15394, -1, -1))
			{
				func_247(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_248(15406, -1, -1))
			{
				func_247(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_248(15395, -1, -1))
			{
				func_247(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_248(15410, -1, -1))
			{
				func_247(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_248(15407, -1, -1))
			{
				func_247(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_248(15414, -1, -1))
			{
				func_247(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_248(15415, -1, -1))
			{
				func_247(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_248(15399, -1, -1))
			{
				func_247(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_248(15404, -1, -1))
			{
				func_247(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_248(15392, -1, -1))
			{
				func_247(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_248(15390, -1, -1))
			{
				func_247(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_248(15402, -1, -1))
			{
				func_247(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_248(15416, -1, -1))
			{
				func_247(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_246(209, -1))
			{
				func_244(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_248(15426, -1, -1))
			{
				func_247(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_248(15422, -1, -1))
			{
				func_247(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_248(15423, -1, -1))
			{
				func_247(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_248(15421, -1, -1))
			{
				func_247(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_248(15427, -1, -1))
			{
				func_247(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_248(15419, -1, -1))
			{
				func_247(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_248(15420, -1, -1))
			{
				func_247(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_244(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_245())
	{
		iVar0 = Global_2557346[iParam0 /*3*/][func_111(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_245()
{
	return 1;
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2557346[iParam0 /*3*/][func_111(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_247(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
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
	return iVar0;
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar1 = func_250(iParam0, iParam1);
	uVar2 = func_249(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_249(int iParam0)
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
	return iVar0;
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
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
	return iVar0;
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = func_253(iParam0);
	return func_110(func_252(iVar0), -1, 0);
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3947;
		
		case 1:
			return 3948;
		
		case 2:
			return 3949;
		
		case 3:
			return 3950;
		
		case 4:
			return 3951;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3947;
}

int func_253(int iParam0)
{
	int iVar0;
	
	if (func_254(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_254(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_253(iParam0);
	iVar1 = func_252(iVar0);
	iVar2 = (func_110(iVar1, -1, 0) + iParam1);
	func_108(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_232(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iVar0 /*12*/] != 0)
			{
				iVar1 = func_252(iVar0);
				iVar3 = (iVar3 + func_110(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_257(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_256(9357, iVar5, -1, 1);
	}
}

var func_256(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
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

int func_257(int iParam0)
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

int func_258(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_135(iParam1);
	if (func_254(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16335;
				if (func_259(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16340);
				}
				if (func_259(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16345);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16334;
				if (func_259(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16339);
				}
				if (func_259(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16344);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16333;
				if (func_259(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16338);
				}
				if (func_259(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16343);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16331;
				if (func_259(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16336);
				}
				if (func_259(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16341);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16332;
				if (func_259(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16337);
				}
				if (func_259(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16342);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20430;
				if (func_259(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20432);
				}
				if (func_259(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20431);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_261(iParam0, iParam1))
	{
		iVar0 = func_260(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_254(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_254(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_262(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_254(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_263(int iParam0, var uParam1, int iParam2, var uParam3)
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
		if (uParam1->f_10 > 0)
		{
			if (func_138())
			{
				Var0 = { func_137() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_258(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_17965);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_17964);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_219(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_262145.f_17955);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_262145.f_17954));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_86(86);
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (func_192(0))
			{
				Var14 = { func_264(func_11()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_258(func_11(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_17965));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_17964));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18004;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18005;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
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

struct<2> func_264(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_188;
}

void func_265(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_28(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_280();
			}
			func_279();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_28(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_271(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_270(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_219(&uVar2);
					iVar4 = Global_262145.f_15516;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_14725));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_86(44);
					}
				}
				func_268(*iParam3);
				func_267();
				Global_2519572.f_4882.f_370 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_218(iVar9))
						{
							func_210(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_28(PLAYER::PLAYER_ID()))
		{
			func_266();
		}
	}
}

void func_266()
{
	int iVar0;
	
	iVar0 = Global_2559367[func_20()];
	iVar0++;
	func_107(3663, iVar0, -1, 1);
}

void func_267()
{
	int iVar0;
	
	iVar0 = Global_2559373[func_20()];
	iVar0++;
	func_107(3662, iVar0, -1, 1);
}

void func_268(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2559376[func_20()];
	iVar0 = (iVar0 + iParam0);
	func_107(3664, iVar0, -1, 1);
	if (func_232(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_269(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_256(7666, iVar2, -1, 1);
	}
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15649;
			break;
		
		case 2:
			return Global_262145.f_15650;
			break;
		
		case 3:
			return Global_262145.f_15651;
			break;
		
		case 4:
			return Global_262145.f_15652;
			break;
		
		case 5:
			return Global_262145.f_15653;
			break;
		
		case 6:
			return Global_262145.f_15654;
			break;
		
		case 7:
			return Global_262145.f_15655;
			break;
		
		case 8:
			return Global_262145.f_15656;
			break;
		
		case 9:
			return Global_262145.f_15657;
			break;
		
		case 10:
			return Global_262145.f_15658;
			break;
		
		case 11:
			return Global_262145.f_15659;
			break;
		
		case 12:
			return Global_262145.f_15660;
			break;
		
		case 13:
			return Global_262145.f_15661;
			break;
		
		case 14:
			return Global_262145.f_15662;
			break;
		
		case 15:
			return Global_262145.f_15663;
			break;
		
		case 16:
			return Global_262145.f_15664;
			break;
		
		case 17:
			return Global_262145.f_15665;
			break;
		
		case 18:
			return Global_262145.f_15666;
			break;
		
		case 19:
			return Global_262145.f_15667;
			break;
		
		case 20:
			return Global_262145.f_15668;
			break;
		
		case 21:
			return Global_262145.f_15669;
			break;
		
		case 22:
			return Global_262145.f_15670;
			break;
		
		case 23:
			return Global_262145.f_15671;
			break;
		
		case 24:
			return Global_262145.f_15672;
			break;
	}
	return 0;
}

var func_270(int iParam0)
{
	if (iParam0 >= Global_262145.f_14703)
	{
		return Global_262145.f_14724;
	}
	else if (iParam0 >= Global_262145.f_14702)
	{
		return Global_262145.f_14723;
	}
	else if (iParam0 >= Global_262145.f_14701)
	{
		return Global_262145.f_14722;
	}
	else if (iParam0 >= Global_262145.f_14700)
	{
		return Global_262145.f_14721;
	}
	else if (iParam0 >= Global_262145.f_14699)
	{
		return Global_262145.f_14720;
	}
	else if (iParam0 >= Global_262145.f_14698)
	{
		return Global_262145.f_14719;
	}
	else if (iParam0 >= Global_262145.f_14697)
	{
		return Global_262145.f_14718;
	}
	else if (iParam0 >= Global_262145.f_14696)
	{
		return Global_262145.f_14717;
	}
	else if (iParam0 >= Global_262145.f_14695)
	{
		return Global_262145.f_14716;
	}
	else if (iParam0 >= Global_262145.f_14694)
	{
		return Global_262145.f_14715;
	}
	else if (iParam0 >= Global_262145.f_14693)
	{
		return Global_262145.f_14714;
	}
	else if (iParam0 >= Global_262145.f_14692)
	{
		return Global_262145.f_14713;
	}
	else if (iParam0 >= Global_262145.f_14691)
	{
		return Global_262145.f_14712;
	}
	else if (iParam0 >= Global_262145.f_14690)
	{
		return Global_262145.f_14711;
	}
	else if (iParam0 >= Global_262145.f_14689)
	{
		return Global_262145.f_14710;
	}
	else if (iParam0 >= Global_262145.f_14688)
	{
		return Global_262145.f_14709;
	}
	else if (iParam0 >= Global_262145.f_14687)
	{
		return Global_262145.f_14708;
	}
	else if (iParam0 >= Global_262145.f_14686)
	{
		return Global_262145.f_14707;
	}
	else if (iParam0 >= Global_262145.f_14685)
	{
		return Global_262145.f_14706;
	}
	else if (iParam0 >= Global_262145.f_14684)
	{
		return Global_262145.f_14705;
	}
	return Global_262145.f_14704;
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_278(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_277(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_276(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_272(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_272(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_276(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_272(int iParam0)
{
	int iVar0;
	
	if (func_275(iParam0))
	{
		iVar0 = func_273(func_274(iParam0));
		return func_110(iVar0, -1, 0);
	}
	return 0;
}

int func_273(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3642;
	}
	else if (iParam0 == 1)
	{
		return 3643;
	}
	else if (iParam0 == 2)
	{
		return 3644;
	}
	else if (iParam0 == 3)
	{
		return 3645;
	}
	else if (iParam0 == 4)
	{
		return 3646;
	}
	return 3642;
}

int func_274(int iParam0)
{
	int iVar0;
	
	if (func_275(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_92[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_275(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_276(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14903;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14901;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14905;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14899;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14897;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14907;
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_275(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1666869[iVar0] == iParam1 && Global_1666876[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_278(int iParam0)
{
	int iVar0;
	
	if (func_275(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_92[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_279()
{
	int iVar0;
	
	iVar0 = Global_2559364[func_20()];
	iVar0++;
	Global_2559364[func_20()] = iVar0;
	func_107(3661, iVar0, -1, 1);
}

void func_280()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2559361[func_20()];
	iVar1 = Global_2559370[func_20()];
	iVar0++;
	iVar1++;
	Global_2559361[func_20()] = iVar0;
	Global_2559370[func_20()] = iVar1;
	Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_114 = iVar1;
	func_107(3659, iVar0, -1, 1);
	func_107(3660, iVar1, -1, 1);
}

void func_281()
{
	if (func_125())
	{
		Global_2448723.f_3066.f_134 = 0;
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_408 = Global_2448723.f_3066.f_134;
	}
}

void func_282()
{
	if (func_125())
	{
		if (Global_2448723.f_3066.f_134 < 10)
		{
			Global_2448723.f_3066.f_134++;
			Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_408 = Global_2448723.f_3066.f_134;
		}
	}
}

void func_283()
{
	if (func_125())
	{
		if (Global_2448723.f_3066.f_134 > 0)
		{
			Global_2448723.f_3066.f_134 = (Global_2448723.f_3066.f_134 - 1);
			Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_408 = Global_2448723.f_3066.f_134;
		}
	}
}

int func_284(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_28;
}

int func_285(int iParam0)
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
			if (func_88(1) && !func_192(1))
			{
				if (func_286(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_286(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 26);
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11895) * Global_262145.f_11900));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11845) * Global_262145.f_11850));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11872) * Global_262145.f_11876));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11885) * Global_262145.f_11889));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11907) * Global_262145.f_11912));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12069) * Global_262145.f_12070));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12075) * Global_262145.f_12076));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12073) * Global_262145.f_12074));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12067) * Global_262145.f_12068));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12071) * Global_262145.f_12072));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12065) * Global_262145.f_12066));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14426;
		
		case 172:
			return Global_262145.f_14442;
		
		case 173:
			return Global_262145.f_14385;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17659;
		
		case 180:
			return Global_262145.f_17535;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17543;
		
		case 185:
			return Global_262145.f_17552;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17747;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17764;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17612;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17795;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17673;
		
		case 205:
			return Global_262145.f_17782;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17640;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17777;
		
		case 211:
			return Global_262145.f_17741;
		
		case 214:
			return Global_262145.f_18335;
		
		case 215:
			return Global_262145.f_18345;
		
		case 216:
			return Global_262145.f_18355;
		
		case 217:
			return Global_262145.f_18364;
		
		case 218:
			return Global_262145.f_18373;
		
		case 219:
			return Global_262145.f_18389;
		
		case 241:
			return Global_262145.f_23424;
		
		case 242:
			return Global_262145.f_23420;
		
		case 248:
			return Global_262145.f_23423;
		
		case 244:
			return Global_262145.f_23421;
		
		case 239:
			return Global_262145.f_23425;
		
		case 240:
			return Global_262145.f_23426;
		
		default:
	}
	return 0;
}

int func_288(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11896) * Global_262145.f_11901));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11846) * Global_262145.f_11851));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11873) * Global_262145.f_11877));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11886) * Global_262145.f_11890));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11908) * Global_262145.f_11913));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11945) * Global_262145.f_11948));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11991) * Global_262145.f_11994));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11981) * Global_262145.f_11984));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11936) * Global_262145.f_11939));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11956) * Global_262145.f_11961));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11921) * Global_262145.f_11924));
		
		case 170:
			return Global_262145.f_14368;
		
		case 171:
			return Global_262145.f_14427;
		
		case 172:
			return Global_262145.f_14443;
		
		case 173:
			return Global_262145.f_14386;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16463;
		
		case 168:
			return Global_262145.f_16462;
		
		case 179:
			return Global_262145.f_17660;
		
		case 180:
			return Global_262145.f_17536;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17544;
		
		case 185:
			return Global_262145.f_17553;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17748;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17765;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17613;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17796;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17674;
		
		case 205:
			return Global_262145.f_17783;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17641;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17778;
		
		case 211:
			return Global_262145.f_17742;
		
		case 214:
			return Global_262145.f_18336;
		
		case 215:
			return Global_262145.f_18346;
		
		case 216:
			return Global_262145.f_18356;
		
		case 217:
			return Global_262145.f_18365;
		
		case 218:
			return Global_262145.f_18374;
		
		case 219:
			return Global_262145.f_18390;
		
		case 178:
			if (func_125())
			{
				return Global_262145.f_18213;
			}
			else if (bParam1)
			{
				return Global_262145.f_18214;
			}
			break;
		
		case 188:
			if (func_125())
			{
				return Global_262145.f_18297;
			}
			else if (bParam1)
			{
				return Global_262145.f_18298;
			}
			break;
		
		case 225:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20418;
				}
				else
				{
					return Global_262145.f_20419;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_20420;
			}
			break;
		
		case 226:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20398;
				}
				else
				{
					return Global_262145.f_20399;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_20400;
			}
			break;
		
		case 227:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20410;
				}
				else
				{
					return Global_262145.f_20411;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_20412;
			}
			break;
		
		case 229:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21574;
				}
				else
				{
					return Global_262145.f_21575;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_21576;
			}
			break;
		
		case 230:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21670;
				}
				else
				{
					return Global_262145.f_21671;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_21672;
			}
			break;
		
		case 233:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22145;
				}
				else
				{
					return Global_262145.f_22146;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_22144;
			}
			break;
		
		case 241:
			return Global_262145.f_23431;
		
		case 242:
			return Global_262145.f_23427;
		
		case 244:
			return Global_262145.f_23428;
		
		case 248:
			return Global_262145.f_23430;
		
		case 239:
			return Global_262145.f_23432;
		
		case 240:
			return Global_262145.f_23433;
		
		case 237:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23273;
				}
				else
				{
					return Global_262145.f_23274;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_23275;
			}
			break;
		
		case 238:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23384;
				}
				else
				{
					return Global_262145.f_23385;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_23386;
			}
			break;
		
		case 249:
			if (func_125() && !func_138())
			{
				if (func_286(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23400;
				}
				else
				{
					return Global_262145.f_23401;
				}
			}
			else if (func_138())
			{
				return Global_262145.f_23402;
			}
			break;
	}
	return 0;
}

void func_289(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_290(iParam0))
	{
		if (!func_125())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11789;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_27(PLAYER::PLAYER_ID(), 1))
	{
		if (func_85(iParam0))
		{
			*uParam1 = (Global_262145.f_17512 / 100f);
			*uParam2 = (Global_262145.f_17512 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23434;
			*uParam2 = Global_262145.f_23434;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23435;
			*uParam2 = Global_262145.f_23435;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23437;
			*uParam2 = Global_262145.f_23437;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23438;
			*uParam2 = Global_262145.f_23438;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23439;
			*uParam2 = Global_262145.f_23439;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23440;
			*uParam2 = Global_262145.f_23440;
		}
		else
		{
			*uParam1 = Global_262145.f_11786;
			*uParam2 = Global_262145.f_11785;
		}
	}
	else if (func_85(iParam0))
	{
		*uParam1 = (Global_262145.f_17513 / 100f);
		*uParam2 = (Global_262145.f_17513 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23441;
		*uParam2 = Global_262145.f_23441;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23442;
		*uParam2 = Global_262145.f_23442;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23444;
		*uParam2 = Global_262145.f_23444;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23445;
		*uParam2 = Global_262145.f_23445;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23446;
		*uParam2 = Global_262145.f_23446;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23447;
		*uParam2 = Global_262145.f_23447;
	}
	else
	{
		*uParam1 = Global_262145.f_11788;
		*uParam2 = Global_262145.f_11787;
	}
	iVar0 = func_59();
	if (iVar0 != func_10())
	{
		if (func_47(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_290(int iParam0)
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

int func_291()
{
	if ((func_35(PLAYER::PLAYER_ID(), 21) || func_35(PLAYER::PLAYER_ID(), 22)) || func_296())
	{
		return 1;
	}
	if (func_293())
	{
		func_292(22);
		return 1;
	}
	return 0;
}

void func_292(int iParam0)
{
	MISC::SET_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_4), iParam0);
}

int func_293()
{
	if (func_32(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_25() && !func_295()) || func_21(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_294(27);
		}
	}
	return 0;
}

void func_294(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_4), iParam0);
}

bool func_295()
{
	return Global_1312416.f_1;
}

bool func_296()
{
	return func_246(306, -1);
}

int func_297()
{
	return 0;
}

void func_298()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_337())
	{
		return;
	}
	if (func_336())
	{
		func_329();
	}
	if (func_328())
	{
		func_327();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!MISC::IS_BIT_SET(Local_107.f_1, 2) && !MISC::IS_BIT_SET(Local_107.f_1, 4)) && !MISC::IS_BIT_SET(Local_107.f_1, 3))
	{
		if (MISC::IS_BIT_SET(Local_107.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_107.f_10)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_107.f_10)
			{
				func_319(101, sVar0, sVar1, func_321(), func_320(PLAYER::PLAYER_ID()), func_36(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_318(87, func_36(), -1, sVar1, sVar0, 1, -1, 2, -1);
			}
		}
		else if (func_317() != PLAYER::PLAYER_ID())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_107.f_10)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_107.f_10)
			{
				func_319(101, sVar0, sVar1, func_321(), func_320(PLAYER::PLAYER_ID()), func_317(), func_36(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_316(91, func_317(), func_36(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_107.f_10)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_107.f_10)
			{
				func_319(101, "GB_WINNER", sVar1, func_321(), func_320(PLAYER::PLAYER_ID()), func_36(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_318(87, func_36(), -1, sVar1, "GB_WINNER", 1, -1, 2, -1);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_107.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_300(88, sVar0, sVar1, 1, -1, 2, 1);
		if (MISC::IS_BIT_SET(Local_107.f_1, 4) || func_30(func_36(), 1, 0))
		{
			if (PLAYER::PLAYER_ID() == func_59())
			{
				Var2.f_10 = func_59();
				Var2.f_2 = 1550427930;
				func_299(Var2, func_45(func_36()));
			}
		}
	}
}

void func_299(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -471892217;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &Param0, 14, iParam13);
	}
}

int func_300(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_315(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_301(&Var0);
}

int func_301(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436641.f_3025)
		{
			return 0;
		}
	}
	func_314(uParam0, uParam0->f_17);
	func_311(uParam0);
	if (func_77())
	{
		func_311(uParam0);
	}
	if (func_310(uParam0->f_1))
	{
		func_303();
		if (Global_2436641.f_2703[0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436641.f_2703[0 /*80*/].f_1 == 13 || Global_2436641.f_2703[0 /*80*/].f_1 == 53) || Global_2436641.f_2703[0 /*80*/].f_1 == 54) || Global_2436641.f_2703[0 /*80*/].f_1 == 58)
		{
			Global_2436641.f_2703[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436641.f_2703[iVar0 + 1 /*80*/] = { Global_2436641.f_2703[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436641.f_2703[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_303();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				MISC::SET_BIT(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 1);
				Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !MISC::IS_BIT_SET(uParam0->f_69, 7))
			{
				if (func_302(Global_2436641.f_2703[iVar0 /*80*/].f_1))
				{
					Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
					MISC::SET_BIT(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_302(int iParam0)
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

void func_303()
{
	bool bVar0;
	
	if (Global_2436641.f_3026)
	{
		return;
	}
	if (!Global_71246)
	{
		Global_71246 = 1;
		bVar0 = true;
	}
	func_304();
	if (bVar0)
	{
		Global_71246 = 0;
	}
}

void func_304()
{
	Global_2436641.f_3027 = 0;
	Global_2436641.f_3027.f_578 = 0;
	func_308(&(Global_2436641.f_3027.f_1));
	Global_2436641.f_3027.f_1.f_1 = 0;
	func_305(&(Global_2436641.f_3027.f_1));
}

void func_305(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71246)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71247)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_307(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_306(0);
}

void func_306(int iParam0)
{
	Global_71238 = iParam0;
	Global_71239 = iParam0;
}

bool func_307(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71226, 0);
}

void func_308(var uParam0)
{
	func_309(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_309(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_310(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_311(var uParam0)
{
	if (func_313(uParam0->f_1))
	{
		uParam0->f_72 = func_312();
	}
}

int func_312()
{
	return 21;
}

int func_313(int iParam0)
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

void func_314(var uParam0, int iParam1)
{
	if (func_313(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_302(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_62(iParam1, -2, 0, 0);
		}
	}
}

void func_315(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_10();
	uParam1->f_18 = func_10();
	uParam1->f_19 = func_10();
	uParam1->f_20 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_316(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_315(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_301(&Var0);
}

int func_317()
{
	return Local_107.f_3;
}

int func_318(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_315(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != -1)
	{
		MISC::SET_BIT(&(Var0.f_69), iParam8);
	}
	return func_301(&Var0);
}

int func_319(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_315(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_69), 2);
	return func_301(&Var0);
}

int func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = func_75(iParam0);
	if (iVar0 != -1)
	{
		return func_73(iVar0);
	}
	return 1;
}

char* func_321()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_26(PLAYER::PLAYER_ID());
	if (iVar0 != func_10())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_35(iVar0, 28) || func_35(PLAYER::PLAYER_ID(), 28)) || func_326(iVar0)) && !func_325(iVar0))
			{
				return func_323(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_323(iVar0, 0);
			}
		}
		sVar1 = func_322(&(Global_1624079[iVar0 /*558*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_323(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_322(var uParam0)
{
	return uParam0;
}

char* func_323(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0, 1))
		{
			return func_324();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_324()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_325(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_163(iParam0) };
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

int func_326(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_163(iParam0) };
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

void func_327()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 != 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			MISC::SET_BIT(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

bool func_328()
{
	return Global_2436641.f_2703[0 /*80*/].f_1 != 0;
}

void func_329()
{
	if (!func_335())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_330();
}

void func_330()
{
	func_332();
	func_331(0);
}

void func_331(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_332()
{
	if (!func_334())
	{
	}
	if (func_335())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_333();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_333()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_334()
{
	if (!func_335())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_333();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_335()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_336()
{
	return func_335();
}

int func_337()
{
	if (!func_338(1, 1, 1) || func_603())
	{
		return 1;
	}
	return 0;
}

int func_338(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_46(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_21(PLAYER::PLAYER_ID(), 21))
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
	if (!func_378(PLAYER::PLAYER_ID()))
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
	if (func_376(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_375())
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (func_373())
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_370(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_368())
	{
		return 0;
	}
	if (func_21(PLAYER::PLAYER_ID(), 0) || func_21(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_21(PLAYER::PLAYER_ID(), 12) || func_21(PLAYER::PLAYER_ID(), 14)) || func_21(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_365(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_345())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_344())
		{
			return 0;
		}
	}
	if (Global_1653121)
	{
		return 0;
	}
	if (func_343(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_342())
	{
		return 0;
	}
	if (func_341(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_19, 4))
	{
		return 0;
	}
	if (func_339(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_339(int iParam0)
{
	if (Global_2423644[iParam0 /*406*/].f_257.f_4 != 0 || Global_2423644[iParam0 /*406*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_340()
{
	return Global_1667157.f_3342 != -1;
}

int func_341(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 11))
	{
		return 1;
	}
	return 0;
}

int func_342()
{
	if (Global_4253672.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_343(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_35;
}

bool func_344()
{
	return Global_93007.f_322 > 0;
}

int func_345()
{
	int iVar0;
	
	iVar0 = func_31(PLAYER::PLAYER_ID());
	if (((func_364(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_21) || func_363(PLAYER::PLAYER_ID())) || func_362(PLAYER::PLAYER_ID())) || func_357(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_355(PLAYER::PLAYER_ID()))
	{
		if (func_112(iVar0) || func_354(iVar0))
		{
			return 1;
		}
	}
	if (func_353(PLAYER::PLAYER_ID()))
	{
		if (func_354(iVar0))
		{
			return 1;
		}
	}
	if (func_352(PLAYER::PLAYER_ID()))
	{
		if (func_100(iVar0))
		{
			return 1;
		}
	}
	if (func_351(PLAYER::PLAYER_ID()))
	{
		if (func_99(iVar0))
		{
			return 1;
		}
	}
	if (func_350(PLAYER::PLAYER_ID()))
	{
		if (func_98(iVar0))
		{
			return 1;
		}
	}
	if (func_349(PLAYER::PLAYER_ID()))
	{
		if (func_348(iVar0))
		{
			return 1;
		}
	}
	if (func_347(PLAYER::PLAYER_ID(), 0))
	{
		if (func_346(iVar0))
		{
			if (func_57(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
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

int func_347(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_10())
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_348(int iParam0)
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

int func_349(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_352(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_353(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_354(int iParam0)
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

int func_355(int iParam0)
{
	if (func_356(Global_1589291[iParam0 /*770*/].f_273.f_21, -1))
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0, int iParam1)
{
	if (iParam1 == -1)
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

int func_357(int iParam0)
{
	if (func_358(Global_1589291[iParam0 /*770*/].f_273.f_21, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_359(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_359(PLAYER::PLAYER_ID(), 0))
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

bool func_359(int iParam0, bool bParam1)
{
	if (Global_1589134 != func_10())
	{
		if (!func_361(Global_1589134))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589134)
			{
				if (MISC::IS_BIT_SET(Global_2423644[Global_1589134 /*406*/].f_191, 24) || func_360(Global_1589134))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_191, 24);
}

int func_360(int iParam0)
{
	if (iParam0 != func_10())
	{
		return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_191, 9);
	}
	return 0;
}

int func_361(int iParam0)
{
	if (iParam0 != func_10())
	{
		return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 2);
	}
	return 0;
}

int func_362(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
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

int func_365(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (Global_1589291[iParam0 /*770*/].f_273.f_21 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 0))
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
		if (func_363(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_353(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_362(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_352(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_351(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_350(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_367(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_349(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_366(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_347(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_367(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_10())
			{
				return func_54(Global_2423644[iParam0 /*406*/].f_305.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_368()
{
	if (func_369() == 0)
	{
		return 1;
	}
	return 0;
}

int func_369()
{
	return Global_1312466.f_18;
}

bool func_370(int iParam0)
{
	return func_371(iParam0);
}

bool func_371(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

bool func_372()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_196 != 0;
}

bool func_373()
{
	return Global_1312854;
}

bool func_374()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 5;
}

bool func_375()
{
	return MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_18, 0);
}

int func_376(int iParam0)
{
	if (func_377(iParam0, 1))
	{
		if (Global_1589291[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589291[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_378(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_142, 22);
}

void func_379(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_380(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			Global_2519572.f_4882.f_372 = NETWORK::_GET_POSIX_TIME();
		}
	}
}

int func_380(int iParam0, int iParam1)
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

void func_381(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_498(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_496() || iParam2 == 27)
	{
		if (func_453(iParam1, iParam2, uParam3, Global_1574165, 0, func_494(), sParam7))
		{
			func_452(1);
			if ((!func_451() && !func_450()) || MISC::IS_BIT_SET(Global_2519572.f_4573, 1))
			{
				if (func_449())
				{
					func_448();
				}
				else
				{
					GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_447(1);
						Global_1574165 = 0;
						iVar19 = -1;
						if (Global_1574351 != 1)
						{
							func_446(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
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
										if ((func_445(iVar3) || Global_2423644[iVar3 /*406*/].f_232 != -1) || func_29(iVar3))
										{
											iVar9 = iVar3;
											if (func_28(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_444(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_442(PLAYER::PLAYER_ID(), 0) && func_31(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_441())
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
							if ((func_440(iVar3) && func_436(iVar3, iParam2)) && func_9(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1589291[iVar9 /*770*/].f_211.f_6;
								Var6 = { func_431(iVar3) };
								if (iVar3 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_163(iVar3) };
								iVar5 = func_425(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574165++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_441())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_420(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_419(iParam5, 1, 0, 0), 16);
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
										iVar13 = -2;
									}
								}
								iVar16 = func_418(iVar3, 0);
								if (bVar2)
								{
									if (func_27(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_417(iParam5))
								{
									func_416(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_416(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
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
							if (func_9(iVar3, 0, 1) && !MISC::IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_10();
							}
							if (func_440(iVar3))
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1589291[iVar9 /*770*/].f_211.f_6;
									Var6 = { func_431(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_163(iVar3) };
									iVar5 = func_425(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574165++;
									iVar16 = func_418(iVar3, 1);
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
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_396(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_393(uParam3, iParam1);
						}
						func_392(&(uParam3->f_21));
						func_391();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_390(uParam3, iParam1);
							func_389(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_390(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_385(uParam3))
						{
							Global_1574351 = 1;
						}
						func_382(uParam3);
						if (Global_1574351 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574351 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::_SET_2D_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_2D_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_391();
			func_447(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_382(var uParam0)
{
	if (!func_384(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_392(&(uParam0->f_21));
		func_383(0);
	}
}

void func_383(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574351 != 2)
		{
			Global_1574351 = 2;
		}
	}
	else
	{
		switch (Global_1574351)
		{
			case 0:
				Global_1574351 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_384(var uParam0)
{
	return uParam0->f_1;
}

int func_385(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_10() && func_9(iVar3, 0, 1))
	{
		Var2 = { func_163(iVar3) };
		iVar1 = func_388(uParam0, uParam0->f_37);
		if (func_387(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_386(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_386(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_386(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_386(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_386(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_386(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_386(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_387(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_388(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_389(int iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_390(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_391()
{
	if (Global_1574351 != 0)
	{
		Global_1574351 = 0;
	}
}

void func_392(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_393(var uParam0, int iParam1)
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
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_395(uParam0->f_38[iVar0 /*2*/], 0);
					func_394(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589291[iVar0 /*770*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_394(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_395(int iParam0, bool bParam1)
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

void func_396(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_415() && iParam4 < func_414())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574167)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574351 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam2, sVar1))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_413("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
			}
			func_413(sParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_413("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
			func_413("");
			if (uParam3->f_108 == 6)
			{
				func_413("");
			}
			else
			{
				func_413(&sParam5);
			}
			func_401(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			if (func_400(uParam3))
			{
				func_399("DPAD_FRIEND");
			}
			else if (func_398(uParam3))
			{
				func_399("DPAD_FRIEND");
			}
			else if (func_397(uParam3))
			{
				func_399("DPAD_CREW");
			}
			else
			{
				func_399("");
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

bool func_397(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_398(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_399(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_400(var uParam0)
{
	if (func_398(uParam0) && func_397(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_401(var uParam0, int iParam1)
{
	if (func_412(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(121);
	}
	else if (func_405(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2423644[iParam1 /*406*/].f_405, 0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(123);
	}
	else
	{
		if (func_402())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_402()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_403() || func_79())
		{
			return 1;
		}
	}
	return 0;
}

int func_403()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_79();
	}
	return func_404(Global_4456448.f_126776);
}

int func_404(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_405(int iParam0)
{
	if ((func_9(iParam0, 0, 1) && func_406()) && func_6(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_406()
{
	if (func_411(PLAYER::PLAYER_ID()) || func_410())
	{
		if (!func_407(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_407(int iParam0, int iParam1)
{
	if (func_409(iParam0) == iParam1)
	{
		return func_408(iParam0);
	}
	return 0;
}

int func_408(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1624079[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

int func_409(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/];
	}
	return -1;
}

int func_410()
{
	switch (func_31(PLAYER::PLAYER_ID()))
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

int func_411(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/] != -1;
	}
	return 0;
}

int func_412(int iParam0)
{
	if (func_402())
	{
		if (func_9(iParam0, 0, 1))
		{
			return func_28(iParam0);
		}
	}
	if ((func_9(iParam0, 0, 1) && func_406()) && func_8(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_413(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_414()
{
	int iVar0;
	
	if (Global_1574167)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_415()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574167)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_416(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_415() && iParam3 < func_414())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574167)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574351 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, sVar1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_413("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_399(sParam16);
				}
				else
				{
					func_413(&(uParam2->f_1));
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_413("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
				}
				if (func_441())
				{
					func_413("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_399(&(uParam2->f_104));
					}
					else
					{
						func_413("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
				}
				else
				{
					func_413("");
				}
				if (uParam2->f_108 == 6)
				{
					func_413("");
				}
				else
				{
					func_413(&sParam4);
				}
				func_401(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_413("");
					func_413("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
				}
				if (func_400(uParam2))
				{
					func_399("DPAD_FRIEND");
				}
				else if (func_398(uParam2))
				{
					func_399("DPAD_FRIEND");
				}
				else if (func_397(uParam2))
				{
					func_399("DPAD_CREW");
				}
				else
				{
					func_399("");
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
	}
}

int func_417(int iParam0)
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

int func_418(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_411(iParam0)) && !func_114(iParam0))
	{
		iVar0 = func_312();
	}
	iVar1 = func_75(iParam0);
	if (!iVar1 == -1)
	{
		return func_73(iVar1);
	}
	return iVar0;
}

char* func_419(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (MISC::_0xD3D15555431AB793())
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
			if (MISC::_0xD3D15555431AB793())
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

int func_420(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_424(iParam3))
	{
		*fParam1 = (func_421(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_417(iParam3))
	{
		*fParam1 = (func_421(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_421(int iParam0, int iParam1)
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
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_423(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_422(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_422(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_423(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_424(int iParam0)
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

int func_425(int iParam0)
{
	int iVar0;
	
	iVar0 = func_428(iParam0);
	if (iVar0 == -1)
	{
		func_426(iParam0, 1);
		return 0;
	}
	Global_1374725[iVar0 /*5*/].f_4 = 1;
	return Global_1374725[iVar0 /*5*/].f_2;
}

void func_426(int iParam0, bool bParam1)
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	if (func_428(iParam0) != -1)
	{
		return;
	}
	if (Global_1374888)
	{
		if (iParam0 == Global_1374888.f_1)
		{
			return;
		}
	}
	if (func_427(iParam0))
	{
		return;
	}
	if (Global_1374926 >= 32)
	{
		return;
	}
	Global_1374893[Global_1374926] = iParam0;
	Global_1374926++;
	if (bParam1)
	{
	}
}

int func_427(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1374926)
	{
		if (Global_1374893[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_428(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1374886 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1374886)
	{
		if (Global_1374725[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1374725[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1374725[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_429(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_429(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1374886)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1374725[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1374725[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1374725[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1374725[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1374886)
	{
		Global_1374725[iVar2 /*5*/] = { Global_1374725[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_430(&(Global_1374725[iVar2 /*5*/]));
	Global_1374886 = (Global_1374886 - 1);
}

void func_430(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_431(int iParam0)
{
	char cVar0[32];
	
	if (func_9(iParam0, 0, 1))
	{
		Global_2498829 = { func_163(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_387(Global_2498829))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2498829))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_435(&Global_2498829))
		{
			Global_2498759 = { func_433(iParam0) };
			func_432(&Global_2498759, &cVar0);
		}
	}
	return cVar0;
}

void func_432(var uParam0, char* sParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_433(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_434(iParam0))
	{
		return Global_1312886[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_163(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_434(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_435(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_439(iParam0) || func_438(iParam0)) || func_437(iParam0))
		{
			return 0;
		}
	}
	if (!func_378(iParam0))
	{
		return 0;
	}
	if ((!func_445(iParam0) && Global_2423644[iParam0 /*406*/].f_232 == -1) && !func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_437(int iParam0)
{
	if (func_439(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 8);
}

int func_438(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 10) || MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

bool func_439(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 2);
}

int func_440(int iParam0)
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
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1589291[iVar0 /*770*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_441()
{
	switch (func_31(PLAYER::PLAYER_ID()))
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
	switch (func_409(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_114(PLAYER::PLAYER_ID()))
	{
		switch (func_31(PLAYER::PLAYER_ID()))
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
	if (func_407(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_442(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 && func_443(Global_1624079[iParam0 /*558*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1)
	{
		if (func_443(Global_1624079[iParam0 /*558*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_443(int iParam0)
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
	return func_104(iParam0, 0);
	return 0;
}

void func_444(int iParam0, int iParam1, int iParam2, int iParam3)
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
				if ((func_445(iVar1) || Global_2423644[iVar1 /*406*/].f_232 != -1) || func_29(iVar1))
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

int func_445(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (func_9(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_31(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_446(int iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_447(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1363070.f_2 == 0)
		{
			Global_1363070.f_2 = 1;
		}
	}
	else if (Global_1363070.f_2 == 1)
	{
		Global_1363070.f_2 = 0;
	}
}

void func_448()
{
	if (MISC::IS_BIT_SET(Global_2519572.f_4573, 1))
	{
		if (func_328())
		{
			func_327();
		}
	}
}

int func_449()
{
	if (MISC::IS_BIT_SET(Global_2519572.f_4573, 0) && func_328())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4573, 1) && func_328())
	{
		return 1;
	}
	return 0;
}

int func_450()
{
	if (func_328())
	{
		if (func_302(Global_2436641.f_2703[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_451()
{
	if (func_328())
	{
		if (func_313(Global_2436641.f_2703[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_452(int iParam0)
{
	if (Global_1363070.f_1 != Global_1363070)
	{
		Global_1363070.f_1 = Global_1363070;
	}
	if (Global_1363070 != iParam0)
	{
		Global_1363070 = iParam0;
	}
}

int func_453(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_493(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_492();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_491())
		{
			if (func_490() > 0 && Global_1574167)
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
		if (!func_482())
		{
			func_481(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4576, 26))
	{
		func_481(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_384(&(uParam2->f_19)))
	{
		if (func_490() == 1)
		{
			func_480(bVar3, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_481(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2519572.f_4577), 5);
		}
	}
	if (func_384(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_490() == 0 && !bParam5))
		{
			func_481(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_479();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_0x25F87B30C382FCA7();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_479();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_480(bVar3, iParam0, 0))
				{
					func_446(iParam0, 0, 0);
					sVar1 = func_477(iParam1, &(Global_4456448.f_126783), bParam4);
					Var0 = { func_475(iParam1) };
					if (bParam4)
					{
						func_472(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_465(iParam0, func_469(uParam2), func_466(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_461(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_459(iParam0, sVar5, func_460(), -1);
					}
					else if (func_402())
					{
						uParam2->f_34 = Global_1574166;
						func_472(iParam0, sVar1, &Var0, 1, -1, Global_1574166, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574166;
						func_472(iParam0, sVar1, "", 0, -1, Global_1574166, 1);
					}
					else
					{
						iVar6 = func_454(iParam1);
						func_472(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574165 = uParam3;
				Global_1574164 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574166)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_454(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_458())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
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
			if (func_457(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_456(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_455(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_184())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_455(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 4;
}

bool func_456(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

bool func_457(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_458()
{
	return Global_4456448.f_1 == 0;
}

void func_459(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_399(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_399("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_460()
{
	switch (func_31(PLAYER::PLAYER_ID()))
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

char* func_461(var uParam0)
{
	switch (uParam0->f_112)
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
	switch (uParam0->f_110)
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
	switch (func_31(PLAYER::PLAYER_ID()))
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
			if (func_463())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_192(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_192(1))
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
			if (func_462(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_462(int iParam0)
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

bool func_463()
{
	return (func_464() && func_61(func_59()));
}

bool func_464()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 148;
}

void func_465(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_399(sParam1);
		}
		else if (func_409(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_399("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_466(var uParam0)
{
	int iVar0;
	
	iVar0 = func_409(PLAYER::PLAYER_ID());
	if (func_468())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_467())
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

int func_467()
{
	if (func_409(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2519572.f_4803;
	}
	return -1;
}

bool func_468()
{
	return Global_1589164;
}

char* func_469(var uParam0)
{
	int iVar0;
	
	iVar0 = func_409(PLAYER::PLAYER_ID());
	if (func_468())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_471() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_471() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_467())
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
			if (func_470() == 1)
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

int func_470()
{
	return Global_2519572.f_4806;
}

int func_471()
{
	if (func_409(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2519572.f_4801;
	}
	return -1;
}

void func_472(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_413(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_399(sParam1);
		}
		if (func_491() && iParam6)
		{
			if (func_474())
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
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_399(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_473(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_77())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_473(int iParam0)
{
	if (func_457(iParam0) || func_456(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_474()
{
	return Global_1574167;
}

struct<4> func_475(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_476(PLAYER::PLAYER_ID()) || func_455(PLAYER::PLAYER_ID()))
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
			StringIntConCat(&Var0, Global_4456448.f_34, 16);
			break;
	}
	if (func_402() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_34, 16);
	}
	return Var0;
}

bool func_476(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 5;
}

char* func_477(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_402() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_478();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574369 == 0)
		{
			Global_1574369 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574369 == 1)
		{
			Global_1574369 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574369 == 0)
		{
			Global_1574369 = 1;
		}
		switch (iParam0)
		{
			case 0:
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

char* func_478()
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

void func_479()
{
	Global_36813 = 1;
}

bool func_480(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_481(int iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574165 = 0;
	func_391();
	Global_1574164 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_384(&(uParam1->f_19)))
		{
			func_392(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2519572.f_4577), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_482()
{
	if (func_489())
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (!func_487())
	{
		return 0;
	}
	if (!func_368())
	{
		return 0;
	}
	if (func_486(8, -1))
	{
		return 0;
	}
	if (func_490() == 2)
	{
		return 0;
	}
	if (Global_2519572.f_4529)
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	else if (!func_377(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_485(1) || func_483(1)) || Global_17206.f_124) || Global_17206)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_16(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1653121)
	{
		return 0;
	}
	if (Global_1653125)
	{
		return 0;
	}
	if (func_194(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_19, 4))
	{
		return 0;
	}
	if (Global_1356262)
	{
		return 0;
	}
	if ((Global_1677950.f_705.f_5 || Global_1680761.f_705.f_5) || Global_1676993.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_483(bool bParam0)
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_484(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17206.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
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
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_484(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_485(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17206.f_4 && Global_17206.f_104 == 4);
	}
	return Global_17206.f_4;
}

bool func_486(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1363073.f_1048, iParam0);
}

int func_487()
{
	if (func_488())
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

bool func_488()
{
	return Global_1312438;
}

bool func_489()
{
	return MISC::GET_GAME_TIMER() <= Global_17345.f_5745 + 100;
}

int func_490()
{
	return Global_1363073.f_68;
}

int func_491()
{
	if (Global_1574166 > 16)
	{
		return 1;
	}
	return 0;
}

float func_492()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_493(int iParam0)
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

int func_494()
{
	if (func_495(PLAYER::PLAYER_ID()))
	{
		return Global_1316736;
	}
	return 0;
}

int func_495(int iParam0)
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

int func_496()
{
	if (func_494())
	{
		return 1;
	}
	if (func_437(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_468())
	{
		return 1;
	}
	if (func_411(PLAYER::PLAYER_ID()))
	{
		switch (func_409(PLAYER::PLAYER_ID()))
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
				if (!func_497(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_497(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_497(PLAYER::PLAYER_ID()))
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

bool func_497(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 4);
}

int func_498(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_411(PLAYER::PLAYER_ID()) && !func_114(PLAYER::PLAYER_ID())) && !func_407(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_32(PLAYER::PLAYER_ID(), 0) && func_114(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_499(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_411(iParam0) && !func_439(iParam0)) && !MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 8));
	bVar2 = func_114(iParam0);
	uVar3 = func_25();
	uVar4 = func_291();
	if ((bVar1 && (func_408(iParam0) || func_501(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_34(iParam0)) && !func_500(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2519572.f_4882.f_208 != iVar0)
	{
		Global_2519572.f_4882.f_208 = iVar0;
	}
	return iVar0;
}

bool func_500(int iParam0)
{
	return func_35(iParam0, 19);
}

int func_501(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1624079[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

void func_502()
{
	if (func_9(func_36(), 1, 1) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(func_36()), 0))
	{
		func_503(151, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_36()), true), &uLocal_106, 1140457472, 1144750080, 0);
	}
}

void func_503(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_411(PLAYER::PLAYER_ID()) && !func_439(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_1, 8)) && (func_408(PLAYER::PLAYER_ID()) || func_501(PLAYER::PLAYER_ID()))) || func_544(vParam1))
	{
		return;
	}
	Global_1665343 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_540(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_34(PLAYER::PLAYER_ID()) || func_33(PLAYER::PLAYER_ID()))
		{
			if (!HUD::_0x84698AB38D0C6636(1344549371))
			{
				HUD::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (HUD::_0x84698AB38D0C6636(1344549371))
		{
			HUD::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_21(PLAYER::PLAYER_ID(), 21))
		{
			func_539(vParam1, 1, 0);
		}
		if (!*uParam2 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			if (func_538(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_537(iParam0));
				if (func_536(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					MISC::SET_BIT(&(Global_1665343.f_3), 0);
				}
			}
			if (func_535(iParam0))
			{
				fVar1 = func_534(iParam0);
				if (fVar1 != 1f)
				{
					func_531(fVar1);
					MISC::SET_BIT(&(Global_1665343.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_530(iParam0) && func_34(PLAYER::PLAYER_ID()))
				{
					func_528(1);
					func_527(2);
				}
			}
			func_292(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_35(PLAYER::PLAYER_ID(), 19))
			{
				func_294(19);
			}
		}
		if (*uParam2 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 0;
			if (func_538(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1665343.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1665343.f_3), 0);
				}
			}
			if (func_535(iParam0))
			{
				func_526();
				MISC::CLEAR_BIT(&(Global_1665343.f_3), 1);
			}
			if (iParam5 && !func_411(PLAYER::PLAYER_ID()))
			{
				if (func_31(PLAYER::PLAYER_ID()) != 152)
				{
					func_505();
				}
			}
			if (func_194(2))
			{
				func_528(0);
				func_504(2);
			}
		}
	}
}

void func_504(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_37), iParam0);
}

void func_505()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_24), &Global_2409277, 2);
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_26), &Global_2409279, 18);
	func_524();
	func_508(1, 1, 0);
	func_506();
}

void func_506()
{
	func_507(0, 0);
}

void func_507(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_508(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_44), &Global_2409297, 317);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409297 };
		Global_2405070.f_44.f_49 = { Global_2409297.f_49 };
		Global_2405070.f_44.f_52 = Global_2409297.f_52;
		Global_2405070.f_44.f_53 = Global_2409297.f_53;
	}
	if (bParam0)
	{
		func_523();
	}
	if (!bParam2)
	{
		func_511(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_510(0);
	func_509();
}

void func_509()
{
	struct<6> Var0;
	
	if (Global_2405070.f_483.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405070.f_483 = { Var0 };
	}
}

void func_510(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_701 = 0;
	}
	else
	{
		Global_2405070.f_701 = 1;
	}
}

void func_511(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_522())
		{
			func_521();
		}
		Global_2405070.f_702.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405070.f_702.f_504 = iParam1;
		Global_2405070.f_702.f_505 = iParam2;
		Global_2405070.f_702.f_506 = iParam10;
		func_519();
		func_515(8, 0, 0, 0, 0);
		Global_2405070.f_702.f_507 = iParam11;
		Global_2405070.f_702.f_510 = iParam3;
		Global_2405070.f_702.f_511 = iParam4;
		Global_2405070.f_702.f_508 = iParam5;
		Global_2405070.f_702.f_509 = iParam6;
		Global_2405070.f_702.f_512 = iParam7;
		Global_2405070.f_702.f_513 = iParam8;
		Global_2405070.f_702.f_514 = iParam9;
		Global_2405070.f_1735 = 1;
	}
	else
	{
		func_512();
	}
}

void func_512()
{
	if (func_522() && !func_514())
	{
		func_521();
	}
	if (func_514())
	{
		func_513();
	}
	else
	{
		func_519();
		func_515(0, 0, 0, 0, 0);
		Global_2405070.f_1735 = 0;
		Global_2405070.f_1734 = 0;
	}
}

void func_513()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_702), &(Global_2405070.f_1218), 516);
	Global_2405070.f_483 = { Global_2405070.f_489 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_702.f_515)
	{
		Global_2405070.f_1734 = 0;
	}
}

int func_514()
{
	if ((Global_2405070.f_1734 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_1218.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_1218.f_515))
	{
		return 1;
	}
	return 0;
}

void func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436641.f_1888.f_690.f_16 != func_10())
	{
		if (MISC::IS_BIT_SET(Global_2423644[Global_2436641.f_1888.f_690.f_16 /*406*/].f_396, 0) && func_516())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412387 = 0;
	}
	Global_2405070.f_483 = iParam0;
	Global_2405070.f_483.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405070.f_483.f_2 = iParam1;
	Global_2405070.f_483.f_3 = iParam2;
	Global_2405070.f_483.f_4 = iParam3;
	Global_2405070.f_483.f_5 = iParam4;
}

int func_516()
{
	if (((func_31(PLAYER::PLAYER_ID()) == 229 || func_31(PLAYER::PLAYER_ID()) == 191) || func_518()) || func_517())
	{
		return 0;
	}
	return 1;
}

var func_517()
{
	return Global_1574350;
}

int func_518()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_519()
{
	if (func_522() && !func_514())
	{
		func_521();
	}
	func_520();
	Global_2405070.f_702 = 0;
}

void func_520()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_702.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_521()
{
	if (func_514())
	{
		if (Global_2405070.f_702.f_515 == Global_2405070.f_1218.f_515)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_702.f_515)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_1218), &(Global_2405070.f_702), 516);
		Global_2405070.f_489 = { Global_2405070.f_483 };
		Global_2405070.f_1734 = 1;
	}
}

int func_522()
{
	if ((Global_2405070.f_1735 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_702.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_702.f_515))
	{
		return 1;
	}
	return 0;
}

void func_523()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_361), &Global_2409614, 121);
}

void func_524()
{
	func_525();
	Global_2405070.f_2244 = 0;
}

void func_525()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405070.f_2245[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_526()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2519572.f_4878))
	{
		if (!Global_2519572.f_4878 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2519572.f_4877 < 1f)
		{
			return;
		}
	}
	Global_2519572.f_4878 = -1;
	Global_2519572.f_4877 = 1f;
}

void func_527(int iParam0)
{
	MISC::SET_BIT(&(Global_2519572.f_4882.f_37), iParam0);
}

void func_528(int iParam0)
{
	if (func_529() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_529()
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)
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

void func_531(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_532())
	{
		return;
	}
	fVar0 = (Global_2519572.f_4877 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2519572.f_4878))
	{
		if (!Global_2519572.f_4878 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2519572.f_4877 = fParam0;
	Global_2519572.f_4878 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_532()
{
	switch (func_533())
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

int func_533()
{
	return Global_25277;
}

float func_534(int iParam0)
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

int func_535(int iParam0)
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

int func_536(int iParam0, int iParam1)
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

float func_537(int iParam0)
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

int func_538(int iParam0)
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

void func_539(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405070.f_44.f_49 = { vParam0 };
	Global_2405070.f_44.f_52 = iParam1;
	Global_2405070.f_44.f_53 = iParam2;
}

void func_540(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_543(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_541();
	}
}

void func_541()
{
	if (!func_542(PLAYER::PLAYER_ID()))
	{
		func_292(25);
	}
}

bool func_542(int iParam0)
{
	return func_35(iParam0, 25);
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11911;
		
		case 142:
			return Global_262145.f_11899;
		
		case 157:
			return Global_262145.f_11866;
		
		case 159:
			return Global_262145.f_11849;
		
		case 162:
			return Global_262145.f_11960;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_544(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_545()
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
				func_546(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_546(int iParam0)
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
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
					{
						MISC::SET_BIT(&(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_547()
{
	if (!MISC::IS_BIT_SET(iLocal_105, 3))
	{
		if (func_9(func_36(), 1, 1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_36()))
		{
			func_564(func_36(), func_565(6), 1, 0);
			func_562(func_36(), 432, 1, 0);
			func_560(func_36(), 1, 1, 0);
			func_559(func_36(), Global_262145.f_11744, 1, 0);
			func_556(func_36(), 1, 0);
			if (func_41() <= 1)
			{
				func_548(func_36(), 1, 7000);
			}
			MISC::SET_BIT(&iLocal_105, 3);
		}
	}
}

void func_548(int iParam0, bool bParam1, int iParam2)
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
		if (iParam0 == Global_2436641)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2415808[iVar0]))
		{
			MISC::SET_BIT(&(Global_2415808.f_367), iVar0);
			MISC::CLEAR_BIT(&(Global_2415808.f_372), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2415808[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2415808[iVar0], 250);
			func_549(iParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2415808.f_372), iVar0);
			}
			else
			{
				Global_2415808.f_198[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2415808.f_367), iVar0);
			MISC::CLEAR_BIT(&(Global_2415808.f_372), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2415808.f_372), iVar0);
			}
			else
			{
				Global_2415808.f_198[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2415808.f_367), iVar0);
		MISC::CLEAR_BIT(&(Global_2415808.f_372), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2415808[iVar0]))
		{
			func_549(iParam0);
			HUD::SET_BLIP_FLASHES(Global_2415808[iVar0], false);
		}
	}
}

void func_549(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2415808[iVar0]))
		{
			Global_2415808.f_1397[iVar0] = func_550(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_2415808[iVar0], Global_2415808.f_1397[iVar0]);
		}
	}
}

int func_550(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2415808[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2415808[iVar0]);
			if (MISC::IS_BIT_SET(Global_2415808.f_383, iVar0) || MISC::IS_BIT_SET(Global_2415808.f_382, iVar0))
			{
				return 1;
			}
			else if ((MISC::IS_BIT_SET(Global_2415808.f_368, iVar0) || MISC::IS_BIT_SET(Global_2415808.f_367, iVar0)) || MISC::IS_BIT_SET(Global_2415808.f_385, iVar0))
			{
				return func_553(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_553(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_553(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2436641))
						{
							return func_553(6);
						}
						else
						{
							return func_553(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2436641))
						{
							return func_553(6);
						}
						else
						{
							return func_553(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_72(Global_2436641, iParam0, -2, 0))
						{
							return func_553(6);
						}
						else
						{
							return func_553(5);
						}
						break;
					
					case 303:
					case 418:
						return func_553(10);
						break;
					
					case 364:
						if (func_551(Global_2436641, iParam0, 1))
						{
							return func_553(10);
						}
						else
						{
							return func_553(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_553(10);
						break;
					
					case 417:
						if (func_551(Global_2436641, iParam0, 1))
						{
							return func_553(6);
						}
						else
						{
							return func_553(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_551(Global_2436641, iParam0, 1))
						{
							return func_553(6);
						}
						else
						{
							return func_553(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_551(int iParam0, int iParam1, bool bParam2)
{
	if (func_62(iParam0, -2, 0, 0) == func_62(iParam1, -2, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_552(func_62(iParam0, -2, 0, 0)) && func_552(func_62(iParam1, -2, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_552(int iParam0)
{
	if (iParam0 == func_68(1) || iParam0 == func_68(0))
	{
		return 1;
	}
	return 0;
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_555())
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
	return func_554(iParam0);
}

int func_554(int iParam0)
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

int func_555()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2436641);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return MISC::IS_BIT_SET(Global_4456448.f_98[iVar0 /*10231*/].f_5416, 4);
	}
	return 0;
}

void func_556(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_558(iParam0))
	{
		return;
	}
	func_557(&(Global_2415808.f_713[iParam0]), &(Global_2415808.f_1076[iParam0]), &(Global_2415808.f_390), bParam1, iParam0, bParam2, &uVar0);
}

int func_557(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_558(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_532())
	{
		return 1;
	}
	return 0;
}

void func_559(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_558(iParam0))
	{
		return;
	}
	if (func_557(&(Global_2415808.f_746[iParam0]), &(Global_2415808.f_1109[iParam0]), &(Global_2415808.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415808.f_548[iParam0] = fParam1;
		}
	}
}

void func_560(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_558(iParam0))
	{
		return;
	}
	if (func_557(&(Global_2415808.f_812[iParam0]), &(Global_2415808.f_1175[iParam0]), &(Global_2415808.f_364), bParam1, iParam0, bParam3, &uVar0))
	{
		func_561(iParam0, bParam2);
	}
}

void func_561(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2415808.f_365), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2415808.f_365), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2415808[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2415808[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2415808[iParam0], true);
		}
	}
}

void func_562(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_558(iParam0))
	{
		return;
	}
	if (func_557(&(Global_2415808.f_581[iParam0]), &(Global_2415808.f_944[iParam0]), &(Global_2415808.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415808.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_563();
		}
	}
}

void func_563()
{
	Global_2415808.f_1508 = 1;
}

void func_564(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_558(iParam0))
	{
		return;
	}
	if (func_557(&(Global_2415808.f_614[iParam0]), &(Global_2415808.f_977[iParam0]), &(Global_2415808.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415808.f_449[iParam0] = uParam1;
		}
	}
}

int func_565(int iParam0)
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

void func_566()
{
	char* sVar0;
	
	if (func_337())
	{
		if (func_336())
		{
			func_329();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_107.f_10)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_573(sVar0))
	{
		func_567(sVar0, func_36(), 1, 0);
	}
}

void func_567(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_568(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_568(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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
	if (func_572(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312576.f_54;
	func_330();
	Global_1312576 = 9;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	Global_1312576.f_54 = uVar0;
	func_571();
	func_570(bParam2);
	func_569();
	return 1;
}

void func_569()
{
	MISC::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_570(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_571()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_572(char* sParam0, char* sParam1)
{
	if (!func_335())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_573(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_335())
	{
		return 0;
	}
	if (Global_1312576 == 11)
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
	return func_574(sParam0);
}

bool func_574(char* sParam0)
{
	if (!func_335())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_575(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_575(char* sParam0)
{
	if (!func_335())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

void func_576()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_337())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_107.f_1, 0))
	{
		if (func_384(&(Local_107.f_4)))
		{
			iVar1 = (func_5() - func_581(&(Local_107.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_580(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_577(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_577(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_577(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_579(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1364578.f_1 = 1;
		func_578(7, iVar0);
		Global_1364578.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1364578.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1364578.f_4388.f_172[iVar0] = iParam2;
		Global_1364578.f_4388.f_216[iVar0] = iParam3;
		Global_1364578.f_4388.f_183[iVar0] = iParam4;
		Global_1364578.f_4388.f_194[iVar0] = iParam5;
		Global_1364578.f_4388.f_249[iVar0] = iParam6;
		Global_1364578.f_4388.f_260[iVar0] = iParam7;
		Global_1364578.f_4388.f_205[iVar0] = iParam8;
		Global_1364578.f_4388.f_314[iVar0] = iParam9;
		Global_1364578.f_4388.f_325[iVar0] = iParam10;
		Global_1364578.f_4388.f_357[iVar0] = iParam11;
		Global_1364578.f_4388.f_238[iVar0] = iParam12;
		Global_1364578.f_4388.f_271[iVar0] = iParam13;
		Global_1364578.f_4388.f_368[iVar0] = iParam14;
		Global_1364578.f_4388.f_379[iVar0] = iParam15;
		Global_1364578.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_578(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1364578.f_6119[iParam0]), iParam1);
}

bool func_579(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1364578.f_6119[iParam0], iParam1);
}

int func_580(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_581(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_582()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_337())
	{
		return;
	}
	if (PLAYER::PLAYER_ID() != func_59())
	{
		if (MISC::IS_BIT_SET(iLocal_105, 0))
		{
			if (!func_328())
			{
				sVar0 = "GBTER_START";
				if (func_6(PLAYER::PLAYER_ID(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_107.f_10)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_584(sVar0, PLAYER::GET_PLAYER_NAME(func_36()), 0, -1);
				func_583(1);
				MISC::SET_BIT(&iLocal_105, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_107.f_10)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_327();
			func_318(86, func_36(), -1, sVar2, sVar1, 1, -1, 2, -1);
			MISC::SET_BIT(&(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_105, 0))
	{
		if (!func_328())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_107.f_10)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_584(sVar3, PLAYER::GET_PLAYER_NAME(func_36()), 0, -1);
			MISC::SET_BIT(&iLocal_105, 2);
			func_583(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_107.f_10)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_327();
		func_318(86, func_36(), -1, sVar5, sVar4, 1, -1, 2, -1);
		MISC::SET_BIT(&(Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	}
	MISC::SET_BIT(&iLocal_105, 0);
}

void func_583(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_192(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_328())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_584(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

void func_585(int iParam0)
{
	Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = iParam0;
}

void func_586(bool bParam0)
{
	if (bParam0)
	{
		if (!func_35(PLAYER::PLAYER_ID(), 9))
		{
			if (func_499(PLAYER::PLAYER_ID()) != 0)
			{
				func_292(9);
			}
		}
	}
	else if (func_35(PLAYER::PLAYER_ID(), 9))
	{
		func_294(9);
	}
}

void func_587(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 != iParam0)
	{
		func_601(-1);
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 = iParam0;
		if (func_600() != -1)
		{
			func_599(-1);
		}
		if (func_598() != -1)
		{
			func_597(-1);
		}
		func_596(iParam2);
		func_594(iParam0);
		if (!func_535(iParam0))
		{
			fVar0 = func_534(iParam0);
			if (fVar0 != 1f)
			{
				func_531(fVar0);
				MISC::SET_BIT(&(Global_1665343.f_3), 1);
			}
		}
		if (!func_538(iParam0) || iParam3)
		{
			if (func_536(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				MISC::SET_BIT(&(Global_1665343.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_25())
		{
			func_292(27);
		}
		if (bParam1)
		{
			if (!func_291())
			{
				func_528(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2519572.f_4541, 1) || MISC::IS_BIT_SET(Global_2519572.f_4541, 4)) || MISC::IS_BIT_SET(Global_2519572.f_4541, 0))
			{
				func_86(6);
			}
			func_593();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_411(PLAYER::PLAYER_ID()) && func_34(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_1), 8);
		}
		func_589();
		if (func_588(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1665343.f_3), 6);
		}
		Global_2519572.f_6170 = 0;
	}
}

int func_588(int iParam0)
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

void func_589()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_592();
	iVar2 = func_26(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_47(iVar1, iVar2, 1) || func_590(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_590(int iParam0, int iParam1)
{
	if (func_27(iParam0, 1) && func_27(iParam1, 1))
	{
		return (func_591(iParam0) == func_26(iParam1) || func_591(iParam1) == func_26(iParam0));
	}
	return 0;
}

int func_591(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		return Global_1624079[func_26(iParam0) /*558*/].f_11.f_443;
	}
	return func_10();
}

int func_592()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1624079[iVar1 /*558*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_593()
{
	if (MISC::IS_BIT_SET(Global_2519572.f_4541, 1))
	{
		MISC::CLEAR_BIT(&(Global_2519572.f_4541), 1);
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4541, 4))
	{
		MISC::CLEAR_BIT(&(Global_2519572.f_4541), 4);
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4541, 6))
	{
		MISC::CLEAR_BIT(&(Global_2519572.f_4541), 6);
	}
	MISC::CLEAR_BIT(&(Global_2519572.f_4541), 0);
	MISC::CLEAR_BIT(&(Global_2519572.f_4541), 2);
	Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_651 = 0;
	if (Global_2519572.f_4543 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2519572.f_4543);
	}
	Global_2519572.f_4542 = 0;
}

void func_594(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(3787, -1, 0);
	iVar1 = func_595(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_108(3787, iVar0, -1, 1, 0);
	}
}

int func_595(int iParam0)
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
	return -1;
}

void func_596(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1624079[iVar0 /*558*/].f_11.f_176 != iParam0)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_176 = iParam0;
	}
}

void func_597(int iParam0)
{
	if (Global_2519572.f_4882.f_329 != iParam0)
	{
		Global_2519572.f_4882.f_329 = iParam0;
	}
}

int func_598()
{
	return Global_2519572.f_4882.f_329;
}

void func_599(int iParam0)
{
	if (Global_2519572.f_4882.f_328 != iParam0)
	{
		Global_2519572.f_4882.f_328 = iParam0;
	}
}

int func_600()
{
	return Global_2519572.f_4882.f_328;
}

void func_601(int iParam0)
{
	Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_32 = iParam0;
}

int func_602()
{
	return Local_108[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2;
}

int func_603()
{
	if (func_604(151) || func_291())
	{
		return 1;
	}
	return 0;
}

int func_604(int iParam0)
{
	if (!func_125() && !func_27(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_34(PLAYER::PLAYER_ID()))
		{
			if (func_291())
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

void func_605(int iParam0, int iParam1)
{
	Local_108[iParam0 /*4*/] = iParam1;
}

int func_606()
{
	return 1;
}

int func_607()
{
	return Local_107;
}

int func_608(int iParam0)
{
	return Local_108[iParam0 /*4*/];
}

int func_609()
{
	var uVar0;
	
	func_614(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_613())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_612())
	{
		return 1;
	}
	if (func_611(157))
	{
		if (!func_610())
		{
			return 1;
		}
	}
	if (func_611(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_532() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_532()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_610()
{
	return Global_2447942.f_586;
}

int func_611(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_612()
{
	return Global_2457699;
}

bool func_613()
{
	return Global_2447942.f_581;
}

void func_614(var uParam0)
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
				case 1113296425:
					func_615(iVar0);
					break;
				
				case -319074860:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_615(int iParam0)
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
						if (func_616(iVar2, &bVar3))
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

int func_616(int iParam0, var uParam1)
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

void func_617()
{
	SYSTEM::WAIT(0);
}

void func_618()
{
	func_329();
	if (func_9(func_36(), 0, 1))
	{
		func_559(func_36(), 1f, 1, 0);
		func_44(func_45(func_36()), 0);
	}
	Global_1671537 = func_10();
	func_619(1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_619(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1352938.f_1.f_108 != 0)
	{
		Global_1352938.f_1.f_108 = 0;
	}
	Global_1352938.f_1.f_109 = -1;
	Global_1352938.f_1.f_110 = -1;
	if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 167 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 168)
	{
		func_672();
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 4);
	}
	if ((func_138() && iParam1 != 0) && Global_262145.f_16354)
	{
		if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 190 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 192)
		{
			func_652(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 164 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 208) || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 250) || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 != -1)
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574452.f_1, 14) && !func_411(PLAYER::PLAYER_ID()))
		{
			func_528(0);
		}
	}
	else if (func_650(PLAYER::PLAYER_ID()) != -1)
	{
		func_601(-1);
	}
	func_649(func_10());
	if (func_194(16))
	{
		func_504(16);
	}
	func_646(0);
	func_596(-1);
	func_645();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_644(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_641(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 5);
	}
	iVar2 = func_640();
	if ((func_443(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_639(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_112(iVar2))
	{
		func_636(-1, 1);
	}
	else if (((((func_635(iVar2) || func_634(iVar2)) || func_633(iVar2)) || func_100(iVar2)) || func_99(iVar2)) || func_98(iVar2))
	{
	}
	else
	{
		func_636(-1, 1);
	}
	func_294(19);
	func_294(20);
	func_294(21);
	func_294(22);
	func_294(27);
	func_504(3);
	func_504(4);
	func_504(7);
	func_632();
	if (func_34(PLAYER::PLAYER_ID()))
	{
		func_586(0);
	}
	func_294(29);
	Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 = func_10();
	if (Global_2519572.f_4882.f_33 != 0)
	{
		Global_2519572.f_4882.f_33 = 0;
	}
	if (bParam0)
	{
		func_505();
	}
	if (!func_411(PLAYER::PLAYER_ID()))
	{
		func_526();
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 8))
	{
		func_631("IMPEXP_SELFDES", 0);
		func_622("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 8);
	}
	func_620(iVar2, 0);
}

void func_620(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1665343.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_621(iParam0));
			MISC::SET_BIT(&(Global_1665343.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1665343.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_621(iParam0));
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 9);
	}
}

char* func_621(int iParam0)
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

void func_622(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_105220.f_14112[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_105220.f_14112[iVar0 /*104*/]), sParam0))
			{
				if (Global_105220.f_14112[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_624();
					Global_105220.f_14112[iVar0 /*104*/].f_99[Global_14493] = 0;
					if (func_623(iVar0))
					{
					}
					else
					{
						Global_105220.f_14112[iVar0 /*104*/].f_24 = 0;
						Global_105220.f_14112[iVar0 /*104*/].f_28 = 0;
						Global_105220.f_14112[iVar0 /*104*/].f_29 = 0;
					}
					HUD::_REMOVE_NOTIFICATION(Global_105220.f_14112[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_623(int iParam0)
{
	if ((Global_105220.f_14112[iParam0 /*104*/].f_99[0] == 1 || Global_105220.f_14112[iParam0 /*104*/].f_99[1] == 1) || Global_105220.f_14112[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_624()
{
	if (func_630(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_625();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_625()
{
	func_626();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_626()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_629(Global_105220.f_2354.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_628(PLAYER::PLAYER_PED_ID());
			if (func_627(iVar0) && (!func_630(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_627(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_627(int iParam0)
{
	return iParam0 < 3;
}

int func_628(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_629(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_629(int iParam0)
{
	if (func_627(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_630(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_631(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_105220.f_14112[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_105220.f_14112[iVar0 /*104*/]), sParam0))
			{
				if (Global_105220.f_14112[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_105220.f_14112[iVar0 /*104*/].f_24 = 1;
				if (Global_105220.f_14112[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_105220.f_14022[0 /*20*/].f_17 = 0;
					}
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_105220.f_14022[1 /*20*/].f_17 = 0;
					}
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_105220.f_14022[2 /*20*/].f_17 = 0;
					}
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_105220.f_14022[3 /*20*/].f_17 = 0;
					}
					Global_105220.f_14112[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_105220.f_14112[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_632()
{
	if (func_542(PLAYER::PLAYER_ID()))
	{
		func_294(25);
	}
}

int func_633(int iParam0)
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

int func_634(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_635(int iParam0)
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

void func_636(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_640();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_58(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2499203.f_93[func_638(iParam0)] = 1;
			}
		}
		iVar0 = func_638(159);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(157);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(148);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(164);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(142);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(152);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(166);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(170);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(173);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(179);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(200);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(201);
		if (func_637(iVar0, Global_262145.f_11995, bParam1))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(182);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(183);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(185);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(186);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(180);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(195);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(197);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(198);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(207);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(208);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(209);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(214);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(215);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(216);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(217);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(218);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(219);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(220);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(221);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_637(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_35(PLAYER::PLAYER_ID(), 19) && !func_35(PLAYER::PLAYER_ID(), 20)) && !func_35(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2499203.f_93[iParam0] == 1 && func_384(&(Global_2499203[iParam0 /*2*/])))
	{
		if (func_581(&(Global_2499203[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2499203.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_638(int iParam0)
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
	return -1;
}

void func_639(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_640();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_2499203.f_93[func_638(iParam0)] = 1;
		}
		iVar0 = func_638(155);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(163);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(160);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(153);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(162);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(154);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(171);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(172);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(199);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(194);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(193);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(210);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(205);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(189);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_638(211);
		if (func_637(iVar0, Global_262145.f_11996, 0))
		{
			func_392(&(Global_2499203[iVar0 /*2*/]));
			func_4(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_640()
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

void func_641(int iParam0)
{
	if (!func_642(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_303[iParam0 /*3*/], func_643(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_303[iParam0 /*3*/] = { func_643() };
	}
	if (!func_642(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_290[iParam0 /*3*/], func_643(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_290[iParam0 /*3*/] = { func_643() };
	}
}

bool func_642(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_643()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_644(int iParam0)
{
	if (!func_642(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_145[iParam0 /*3*/], func_643(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_145[iParam0 /*3*/] = { func_643() };
	}
	if (!func_642(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_120[iParam0 /*3*/], func_643(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_120[iParam0 /*3*/] = { func_643() };
	}
}

void func_645()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573884 = { Var0 };
	Global_1573884.f_13 = func_10();
	if (MISC::IS_BIT_SET(Global_1573342, 3))
	{
		MISC::CLEAR_BIT(&Global_1573342, 3);
	}
}

void func_646(bool bParam0)
{
	if (bParam0)
	{
		if (!func_46(PLAYER::PLAYER_ID(), 14))
		{
			func_648(14);
		}
	}
	else if (func_46(PLAYER::PLAYER_ID(), 14))
	{
		func_647(14);
	}
}

void func_647(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_5), iParam0);
}

void func_648(int iParam0)
{
	MISC::SET_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_5), iParam0);
}

void func_649(int iParam0)
{
	if (func_28(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_443 != iParam0)
			{
				Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_443 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_650(int iParam0)
{
	if (func_651(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_32;
	}
	return -1;
}

int func_651(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_32 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_652(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_261(iParam0, iParam1) && func_671(iParam0, iParam1))
	{
		iVar0 = func_260(iParam0, iParam1);
		func_656(iVar0, bParam2, bParam3);
		func_653(iVar0, 1);
	}
}

void func_653(int iParam0, bool bParam1)
{
	if (!func_655(iParam0))
	{
		return;
	}
	func_247(func_654(iParam0), bParam1, -1, 1);
	Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_6 = bParam1;
}

int func_654(int iParam0)
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

bool func_655(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_656(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_670(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_669(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2499081[iParam0];
		iVar0 = func_668(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1667015 = -1;
		}
		func_667(iParam0, 0, bParam2);
	}
	else if (func_665(iParam0, bParam2))
	{
		iVar0 = func_664(iVar2, 0);
		iVar3 = func_663(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_662(iVar2, bParam2);
		iVar5 = func_664(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_661(iVar2) && func_660(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_669(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_659(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_658(iParam0, (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_2 - (func_662(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_664(iVar2, bParam2) / func_659(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_661(iVar2) && func_660(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_657(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_657(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_254(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589291[iParam0 /*770*/].f_273.f_242 = iParam2;
				}
				else
				{
					Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_658(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_2)
	{
		Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_659(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_254(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_660(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_254(iParam1) && func_661(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_661(int iParam0)
{
	return func_135(iParam0) == 5;
}

int func_662(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_135(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16325;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16330;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16324;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16329;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16323;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16328;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16321;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16326;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16322;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16327;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20444;
				if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20445;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20428;
				if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20429;
				}
			}
			break;
	}
	return uVar0;
}

int func_663(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_254(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_664(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_135(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16306;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16315);
			}
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16320);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16307;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16314);
			}
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16319);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16308;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16313);
			}
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16318);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16309;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16311);
			}
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16316);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16310;
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16312);
			}
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16317);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20441;
			}
			else
			{
				iVar0 = Global_262145.f_20425;
			}
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20442);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20426);
				}
			}
			if (func_259(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20443);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20427);
				}
			}
			if (func_660(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_665(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_248(15384, -1, -1);
	}
	return func_248(func_666(iParam0), -1, -1);
}

int func_666(int iParam0)
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

void func_667(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_247(15384, bParam1, -1, 1);
		return;
	}
	func_247(func_666(iParam0), bParam1, -1, 1);
}

int func_668(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2499081[iParam0];
	iVar1 = func_670(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2499088;
	}
	if (func_661(iVar1))
	{
		if (func_660(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_669(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2499088 = iParam1;
		return;
	}
	Global_2499081[iParam0] = iParam1;
}

int func_670(int iParam0, int iParam1)
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
	if (func_254(Global_1589291[iParam0 /*770*/].f_273.f_168[iParam1 /*12*/]))
	{
		uVar0 = Global_1589291[iParam0 /*770*/].f_273.f_168[iParam1 /*12*/];
	}
	return uVar0;
}

int func_671(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_261(iParam0, iParam1))
	{
		iVar0 = func_260(iParam0, iParam1);
		if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_4 > 0 && Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_672()
{
	MISC::CLEAR_BIT(&(Global_2519572.f_1725), 28);
	MISC::CLEAR_BIT(&(Global_2519572.f_1725), 29);
	func_673(24);
}

void func_673(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_7[iVar0]), iVar1);
}

int func_674(struct<21> Param0)
{
	func_712(func_713(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_709(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_107, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_108, 129);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_675(0, 0);
	return 1;
}

void func_675(int iParam0, int iParam1)
{
	func_708();
	if (func_57(PLAYER::PLAYER_ID()))
	{
		func_681(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_680(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1665338, 0);
				break;
			}
	}
	if (!func_125() && !func_27(PLAYER::PLAYER_ID(), 1))
	{
		if (func_296())
		{
			func_527(3);
		}
	}
	func_527(4);
	if (func_88(0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 = func_11();
	}
	if (func_85(iParam0))
	{
		func_679();
		Global_1665370.f_18 = func_678(func_59());
	}
	else if (func_101(func_650(PLAYER::PLAYER_ID())))
	{
		func_677();
		Global_1665424.f_18 = func_678(func_59());
	}
	func_676();
}

void func_676()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1352938.f_533[iVar0 /*42*/].f_1 = func_10();
		Global_1352938.f_533[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_677()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1665424 = { Var0 };
	Global_1665424.f_24 = 0;
	Global_1665424.f_25 = 0;
	Global_1665424.f_17 = 0;
}

int func_678(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_410;
	}
	return -1;
}

void func_679()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1665370 = { Var0 };
	Global_1665370.f_29 = 0;
	Global_1665370.f_30 = 0;
	Global_1665370.f_17 = 0;
}

int func_680(int iParam0, bool bParam1)
{
	return func_47(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_681(bool bParam0)
{
	int iVar0;
	
	func_673(33);
	func_673(34);
	func_673(35);
	func_673(36);
	func_673(37);
	func_673(38);
	func_673(39);
	func_673(40);
	func_673(43);
	func_673(41);
	func_673(54);
	func_673(42);
	func_673(47);
	func_707(23);
	func_707(24);
	func_673(92);
	MISC::CLEAR_BIT(&(Global_2519572.f_1725), 2);
	func_706();
	func_701();
	func_696();
	func_691();
	func_683();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2519572.f_4882.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_682(3))
	{
		func_707(3);
	}
	else if (func_682(4))
	{
		func_707(4);
	}
	else if (func_682(5))
	{
		func_707(5);
	}
	else if (func_682(6))
	{
		func_707(6);
	}
	else if (func_682(7))
	{
		func_707(7);
	}
	else if (((((((((((((((((func_682(0) || func_682(1)) || func_682(2)) || func_682(8)) || func_682(9)) || func_682(10)) || func_682(11)) || func_682(12)) || func_682(13)) || func_682(14)) || func_682(15)) || func_682(16)) || func_682(17)) || func_682(18)) || func_682(19)) || func_682(20)) || func_682(21)) || func_682(22))
	{
		func_707(8);
		func_707(0);
		func_707(1);
		func_707(2);
		func_707(9);
		func_707(10);
		func_707(11);
		func_707(12);
		func_707(13);
		func_707(14);
		func_707(15);
		func_707(16);
		func_707(17);
		func_707(18);
		func_707(19);
		func_707(20);
		func_707(21);
		func_707(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2519572.f_4882.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_682(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_14[iVar0], iVar1);
}

void func_683()
{
	int iVar0;
	
	if (func_690())
	{
		func_689(8);
		func_689(9);
		func_689(10);
		func_689(12);
		func_689(13);
		func_689(14);
		func_689(19);
		func_689(20);
		func_689(21);
		func_689(22);
		func_689(23);
		func_689(24);
		func_689(25);
		func_689(26);
		func_689(15);
		func_689(16);
		func_689(17);
		func_689(18);
		func_689(35);
		func_689(45);
		func_689(46);
		if (func_688(11))
		{
			func_689(11);
			iVar0 = func_110(7222, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_108(7222, iVar0, -1, 1, 0);
		}
	}
	if (func_688(48))
	{
		if (func_687(151, 3))
		{
			func_686(151, 3);
		}
		func_689(48);
	}
	if (func_688(49))
	{
		if (func_687(152, 3))
		{
			func_686(152, 3);
		}
		func_689(49);
	}
	if (func_688(50))
	{
		if (func_687(153, 3))
		{
			func_686(153, 3);
		}
		func_689(50);
	}
	if (func_688(51))
	{
		if (func_687(func_684(), 3))
		{
			func_686(func_684(), 3);
		}
		func_689(51);
	}
}

int func_684()
{
	if (func_685())
	{
		Global_105220.f_28021[154 /*29*/].f_24[Global_14493] = 1;
	}
	return 154;
}

int func_685()
{
	int iVar0;
	
	iVar0 = func_26(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_10()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_686(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 144)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_105220.f_28021[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_687(int iParam0, int iParam1)
{
	if (Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_688(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_26[iVar0], iVar1);
}

void func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_26[iVar0]), iVar1);
}

int func_690()
{
	if (((((((((((((((((((((func_688(8) || func_688(9)) || func_688(10)) || func_688(12)) || func_688(11)) || func_688(13)) || func_688(14)) || func_688(19)) || func_688(20)) || func_688(21)) || func_688(22)) || func_688(23)) || func_688(24)) || func_688(25)) || func_688(26)) || func_688(15)) || func_688(16)) || func_688(17)) || func_688(18)) || func_688(35)) || func_688(45)) || func_688(46))
	{
		return 1;
	}
	return 0;
}

void func_691()
{
	if (func_695())
	{
		func_694(0);
		func_694(1);
		func_694(2);
		func_694(3);
		func_694(4);
		func_694(5);
		if (func_693(32))
		{
			if (func_687(func_692(), 3))
			{
				func_686(func_692(), 3);
			}
			func_694(32);
		}
	}
}

int func_692()
{
	if (func_685())
	{
		Global_105220.f_28021[12 /*29*/].f_24[Global_14493] = 1;
	}
	return 12;
}

bool func_693(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_23[iVar0], iVar1);
}

void func_694(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_23[iVar0]), iVar1);
}

int func_695()
{
	if ((((func_693(1) || func_693(0)) || func_693(2)) || func_693(4)) || func_693(5))
	{
		return 1;
	}
	return 0;
}

void func_696()
{
	if (func_700())
	{
		func_699(0);
		func_699(1);
		func_699(2);
		func_699(3);
		func_699(4);
		func_699(5);
		func_699(6);
		func_699(7);
		if (func_698(8))
		{
			func_699(8);
		}
		if (func_698(15))
		{
			if (func_687(func_697(), 3))
			{
				func_686(func_697(), 3);
			}
			func_699(15);
		}
	}
}

int func_697()
{
	if (func_685())
	{
		Global_105220.f_28021[20 /*29*/].f_24[Global_14493] = 1;
	}
	return 20;
}

bool func_698(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_21[iVar0], iVar1);
}

void func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_21[iVar0]), iVar1);
}

int func_700()
{
	if ((((((((func_698(0) || func_698(1)) || func_698(2)) || func_698(3)) || func_698(4)) || func_698(5)) || func_698(6)) || func_698(7)) || func_698(8))
	{
		return 1;
	}
	return 0;
}

void func_701()
{
	if (func_705())
	{
		func_704(0);
		func_704(1);
		func_704(2);
		func_704(3);
		func_704(4);
		func_704(5);
		func_704(6);
		func_704(7);
		func_704(8);
		func_704(9);
		func_704(10);
		func_704(11);
		func_704(12);
		if (func_703(13))
		{
			if (func_687(func_702(), 3))
			{
				func_686(func_702(), 3);
			}
			func_704(13);
		}
	}
}

int func_702()
{
	if (func_685())
	{
		Global_105220.f_28021[76 /*29*/].f_24[Global_14493] = 1;
	}
	return 76;
}

bool func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_19[iVar0], iVar1);
}

void func_704(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_19[iVar0]), iVar1);
}

int func_705()
{
	if ((((((((((((func_703(0) || func_703(1)) || func_703(2)) || func_703(3)) || func_703(4)) || func_703(5)) || func_703(6)) || func_703(7)) || func_703(8)) || func_703(9)) || func_703(10)) || func_703(11)) || func_703(12))
	{
		return 1;
	}
	return 0;
}

void func_706()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2519572.f_4882.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_707(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_14[iVar0]), iVar1);
}

void func_708()
{
	struct<14> Var0;
	
	Global_1665352 = { Var0 };
	Global_1665352.f_14 = 0;
	Global_1665352.f_15 = 0;
}

int func_709(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_711();
			}
			else
			{
				return 0;
			}
		}
		if (!func_710())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_711();
					}
					else
					{
						return 0;
					}
				}
				if (func_613())
				{
					if (!bParam2)
					{
						func_711();
					}
					else
					{
						return 0;
					}
				}
				if (func_611(155))
				{
					if (!bParam2)
					{
						func_711();
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
					func_711();
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
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_711();
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
			func_711();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_710()
{
	return Global_1312831;
}

void func_711()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_712(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_711();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_713(int iParam0)
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

