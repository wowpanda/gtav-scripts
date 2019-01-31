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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	struct<65> Local_110 = { 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_111[32];
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	vector3 vLocal_115 = { 0f, 0f, 0f };
	struct<8> Local_116[15];
	vector3 vLocal_117 = { 0f, 0f, 0f };
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	vector3 vLocal_130 = { 0f, 0f, 0f };
	vector3 vLocal_131 = { 0f, 0f, 0f };
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	struct<21> Local_143 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	vLocal_115 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_123 = 4294967295;
	iLocal_124 = 4294967295;
	iLocal_126 = 4294967295;
	iLocal_127 = 4294967295;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1202(CAM::_0xDC9DA9E8789F5246(), 0, 1))
	{
		func_1165(ScriptParam_143);
	}
	else
	{
		func_1112();
	}
	while (true)
	{
		func_1111();
		if (func_1104())
		{
			func_1112();
		}
		else if (func_1098(1))
		{
			func_1112();
		}
		Global_196EF6.f_2 = Local_110.f_3F;
		Global_196EF6.f_3 = Local_110.f_40;
		switch (func_1097(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_1096() == 1)
				{
					if (func_1095())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
						{
						}
						func_1094();
						if (func_1093())
						{
							func_1078(159, 1, 4294967295, 0);
							OBJECT::_0x78857FC65CADB909(1);
						}
						else
						{
							func_1078(159, 0, 4294967295, 0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
							{
								OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 1);
							}
						}
						if (func_1077() == 1)
						{
							STREAMING::REMOVE_IPL("CS3_07_MPGates");
							MISC::SET_BIT(&iLocal_112, 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), true);
						}
						else if (func_1077() == 2)
						{
							func_1076();
						}
						else if (func_1077() == 3)
						{
							func_1075();
						}
						if (func_1074(1))
						{
							MISC::SET_BIT(&iLocal_113, 5);
						}
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
						{
							ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_110.f_C), 1200);
						}
						func_1073();
						func_1066();
						Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 1;
					}
				}
				else if (func_1096() == 4)
				{
					Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_1096() == 1)
				{
					func_1065();
					func_1057();
					func_382();
					func_377();
					if (func_1093() || func_376())
					{
						func_218(&(Global_14B91C.f_216), &Global_14B91C, 27, &(Global_14B91C.f_1), &(Global_14B91C.f_75), 4294967295, 0, 0);
					}
				}
				else if (func_1096() == 4)
				{
					Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 3;
				}
				func_217();
				break;
			
			case 3:
				func_216(&(Local_110.f_34));
				if (func_215(&(Local_110.f_34)))
				{
					Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 4;
				}
				func_217();
				break;
			
			case 2:
				func_217();
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 4;
			
			case 4:
				func_1112();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1096())
			{
				case 0:
					if (func_1077() != 4294967295)
					{
						if ((func_205() && func_47()) && func_26())
						{
							func_25();
							func_23();
							if (func_1077() == 3)
							{
								MISC::SET_BIT(&(Local_110.f_1), 6);
							}
							Local_110 = 1;
							Local_110.f_8 = NETSHOP::_NETWORK_SHOP_BASKET_START();
							Local_110.f_9 = CAM::_0xDC9DA9E8789F5246();
							func_1078(159, 1, 4294967295, 0);
							STATS::_0x6DEE77AFF8C21BD1(&(Local_110.f_3F), &(Local_110.f_40));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_110 = 4;
					}
					else if (func_1())
					{
						Local_110 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x372
{
	if (Global_26862F.f_1313.f_22)
	{
		Global_26862F.f_1313.f_22 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x395
{
	if (func_3())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x3B9
{
	if (Local_110.f_33 > 0)
	{
		if (Local_110 != 4)
		{
		}
	}
	return 0;
}

void func_4()//Position - 0x3D0
{
	switch (Local_110.f_33)
	{
		case 0:
			Local_110.f_33 = 1;
			break;
		
		case 1:
			func_11();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 7))
			{
				Local_110.f_33 = 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 20))
			{
				if (Local_110.f_5 != 4294967295)
				{
					Local_110.f_33 = 2;
				}
			}
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[0]))
				{
					if (func_10(Local_110.f_D[0]))
					{
						MISC::SET_BIT(&(Local_110.f_1), 6);
					}
				}
			}
			func_11();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	func_5();
}

void func_5()//Position - 0x47F
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 16))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 20))
		{
			if (!func_9(&(Local_110.f_3C)))
			{
				func_8(&(Local_110.f_3C), 0, 0);
			}
			else if (func_6(&(Local_110.f_3C), func_7(), 0))
			{
				MISC::SET_BIT(&(Local_110.f_1), 20);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x4D6
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()//Position - 0x534
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x540
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

bool func_9(var uParam0)//Position - 0x585
{
	return uParam0->f_1;
}

int func_10(int iParam0)//Position - 0x591
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_11()//Position - 0x5B0
{
	if (!func_9(&(Local_110.f_36)))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 2))
		{
			func_8(&(Local_110.f_36), 0, 0);
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 4))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
			{
				if (func_6(&(Local_110.f_36), func_12(), 0))
				{
					MISC::SET_BIT(&(Local_110.f_1), 3);
				}
			}
		}
	}
}

int func_12()//Position - 0x61D
{
	return Global_40001.f_3030;
}

void func_13()//Position - 0x62C
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_110.f_23[iVar0])
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iVar0]))
				{
					if (func_1077() != 2)
					{
						Local_110.f_23[iVar0] = 3;
					}
					else
					{
						Local_110.f_23[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 11))
				{
					Local_110.f_23[iVar0] = 3;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 12))
				{
					Local_110.f_23[iVar0] = 3;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 13))
				{
					Local_110.f_23[iVar0] = 3;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 14))
				{
					Local_110.f_23[iVar0] = 3;
				}
				break;
			
			case 3:
				break;
		}
		iVar0++;
	}
}

void func_14()//Position - 0x707
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	if (Local_110 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
				{
					iLocal_114 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
					if (func_1202(iVar4, 1, 1))
					{
						func_15(iLocal_114, 0);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 2))
					{
						MISC::SET_BIT(&(Local_110.f_1), 2);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 7))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 7))
						{
							MISC::SET_BIT(&(Local_110.f_1), 7);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 11))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 12))
						{
							MISC::SET_BIT(&(Local_110.f_1), 11);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 12))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 13))
						{
							MISC::SET_BIT(&(Local_110.f_1), 12);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 13))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 14))
						{
							MISC::SET_BIT(&(Local_110.f_1), 13);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 14))
					{
						if (Local_111[iLocal_114 /*6*/].f_2 != 0)
						{
							MISC::SET_BIT(&(Local_110.f_1), 14);
						}
					}
					if (iVar0 == 4294967295)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 2))
						{
							iVar0 = iLocal_114;
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 4))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 3))
							{
								Local_110.f_6 = iVar4;
								MISC::SET_BIT(&(Local_110.f_1), 1);
							}
						}
					}
					if (iVar1 == 4294967295)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 8))
						{
							iVar1 = iLocal_114;
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 9))
						{
							Local_110.f_6 = iVar4;
							MISC::SET_BIT(&(Local_110.f_1), 8);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 10))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 11))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 5))
							{
								Local_110.f_6 = iVar4;
							}
							MISC::SET_BIT(&(Local_110.f_1), 10);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 15))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 15))
						{
							MISC::SET_BIT(&(Local_110.f_1), 15);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 18))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 16))
						{
							MISC::SET_BIT(&(Local_110.f_1), 18);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 9)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 10)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 15)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 18))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*6*/].f_1, 1))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
				else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5))
				{
					if (Local_110.f_9 > 4294967295)
					{
						if (iVar3 == Local_110.f_9)
						{
							MISC::SET_BIT(&(Local_110.f_1), 5);
						}
					}
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5))
			{
				if (Local_110.f_9 > 4294967295)
				{
					if (iVar3 == Local_110.f_9)
					{
						MISC::SET_BIT(&(Local_110.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 4))
			{
				if (Local_110.f_5 != iVar0)
				{
					Local_110.f_5 = iVar0;
					if (Local_110.f_5 == 4294967295)
					{
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 16))
					{
						MISC::SET_BIT(&(Local_110.f_1), 16);
					}
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8))
		{
			if (Local_110.f_7 != iVar1)
			{
				Local_110.f_7 = iVar1;
				if (Local_110.f_7 == 4294967295)
				{
				}
				else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 16))
				{
					MISC::SET_BIT(&(Local_110.f_1), 16);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 0))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_110.f_1), 0);
			}
		}
	}
}

void func_15(int iParam0, int iParam1)//Position - 0xB32
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_1077() == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_2, iParam0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[iParam1]))
			{
				if (func_21(Local_110.f_1D[iParam1]))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_110.f_9 > 4294967295)
					{
						iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9);
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_110.f_2), iParam0);
							}
						}
					}
					if (bVar2)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam1]), iVar0, 1);
						MISC::SET_BIT(&(Local_110.f_2), iParam0);
					}
				}
			}
		}
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0xBE5
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_17(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_18())
		{
			return iParam1 == Global_18CD5B[iParam0 /*560*/].f_B;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)//Position - 0xC2F
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_18())
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

int func_18()//Position - 0xC74
{
	return 4294967295;
}

bool func_19(int iParam0, bool bParam1)//Position - 0xC7D
{
	if (!bParam1)
	{
		if (func_20(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_18();
}

int func_20(int iParam0)//Position - 0xCA8
{
	if (iParam0 != func_18())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_18())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0xCDD
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_22(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_22(int iParam0)//Position - 0xCFD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_23()//Position - 0xD36
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 17))
	{
		vVar0 = { 200f, 200f, 200f };
		vVar1 = { func_24() };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar1 - vVar0, vVar1 + vVar0, false, 1);
		MISC::SET_BIT(&(Local_110.f_1), 17);
	}
}

Vector3 func_24()//Position - 0xD89
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_1077();
	iVar1 = func_25();
	vVar2 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 1:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -575.3725f, 5373.049f, 69.2404f };
					break;
				
				case 1:
					vVar2 = { -3172.135f, 1110.661f, 19.8375f };
					break;
				
				case 2:
					vVar2 = { 872.9173f, 2863.337f, 55.7587f };
					break;
			}
			break;
		
		case 0:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 2308.704f, 4886.404f, 40.8082f };
					break;
				
				case 1:
					vVar2 = { 1209.813f, 1859.069f, 77.9116f };
					break;
				
				case 2:
					vVar2 = { -1928.495f, 2061.418f, 139.8375f };
					break;
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -3020.817f, 84.6034f, 10.6835f };
					break;
				
				case 1:
					vVar2 = { -1041.637f, 796.9575f, 166.2528f };
					break;
				
				case 2:
					vVar2 = { 690.2265f, 602.1689f, 127.9112f };
					break;
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 1530.058f, 1727.639f, 108.9429f };
					break;
				
				case 1:
					vVar2 = { 783.2252f, 1278.739f, 359.2967f };
					break;
				
				case 2:
					vVar2 = { -1796.565f, 407.1885f, 112.4107f };
					break;
			}
			break;
	}
	return vVar2;
}

int func_25()//Position - 0xF3F
{
	int iVar0;
	int iVar1;
	
	if (Local_110.f_4 != 4294967295)
	{
		return Local_110.f_4;
	}
	iVar0 = 0;
	iVar1 = func_1077();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
	Local_110.f_4 = iVar0;
	return Local_110.f_4;
}

int func_26()//Position - 0xF93
{
	switch (Local_110.f_3)
	{
		case 1:
			func_28(0, joaat("RHINO"), -2117.102f, 3292.854f, 31.8103f, 174.0669f, 0);
			break;
		
		case 2:
			func_28(0, joaat("FBI"), -1297.834f, -3399.368f, 12.9452f, 109.6593f, 0);
			func_28(1, joaat("SUPERD"), -1303.505f, -3396.021f, 12.9452f, 152.3324f, 0);
			break;
		
		case 0:
			func_28(0, joaat("HEXER"), -1057.896f, 4903.114f, 210.3096f, 127.0391f, 0);
			func_28(1, joaat("HEXER"), -1060.599f, 4903.006f, 210.642f, 126.9637f, 0);
			break;
		
		case 3:
			return 1;
	}
	if (!func_27())
	{
		return 0;
	}
	return 1;
}

int func_27()//Position - 0x1076
{
	switch (func_1077())
	{
		case 1:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[1]))
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x1106
{
	float fVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_A, iParam0))
				{
					MISC::CLEAR_AREA(vParam2, 5f, 1, 0, 0, false);
					MISC::SET_BIT(&(Local_110.f_A), iParam0);
				}
				if (func_31(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_110.f_1D[iParam0]), iParam1, vParam2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_110.f_1D[iParam0]), 1, 1);
						if (bParam4)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), 2);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), 1);
						}
						VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), 1);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), 0);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), false, 0);
						VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), 1);
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), 1);
						PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]));
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), true, 1, 0);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), true);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), 0);
						if (func_1077() == 1)
						{
							if (iParam1 == joaat("RHINO"))
							{
								fVar0 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								unk_0x65E471E4A2D56226(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), SYSTEM::ROUND(fVar0), 0);
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), SYSTEM::ROUND(fVar0));
								unk_0xD3F329A16C0E5B2B(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_1D[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()//Position - 0x1346
{
	return Global_40001.f_3036;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1355
{
	float fVar0;
	int iVar1;
	
	if (!NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("BOMBUSHKA"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, bParam5, iParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(iVar1);
		Global_26862F.f_1822 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				unk_0x03C1DBD85D4F7482(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, CAM::_0xDC9DA9E8789F5246(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			unk_0x9E9094D4A850A6F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x64B0385195B407FC(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_31(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x144F
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_41(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_32(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_32(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x1560
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_1202(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_37(CAM::_0xDC9DA9E8789F5246()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1202(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_33(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_37(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_37(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1718
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0, int iParam1)//Position - 0x1743
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_35(4294967295, 0) == 8;
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

int func_35(int iParam0, bool bParam1)//Position - 0x178E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_36();
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

int func_36()//Position - 0x17CF
{
	return Global_1407E0;
}

Vector3 func_37(int iParam0)//Position - 0x17DB
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_40() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_39(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_38(iParam0);
}

Vector3 func_38(int iParam0)//Position - 0x182E
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_39(vector3 vParam0)//Position - 0x1841
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_40()//Position - 0x186B
{
	return Global_255C02.f_10;
}

int func_41(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x1879
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_1202(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam7) && bParam4) && func_42(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_38(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x1975
{
	if (func_46(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_45(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_43(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0, int iParam1)//Position - 0x19BC
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (!iVar0 == func_18())
	{
		if (iVar0 == func_44(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x19E7
{
	if (iParam0 != func_18())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_18();
}

struct<13> func_45(int iParam0)//Position - 0x1A0A
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_46(int iParam0, int iParam1)//Position - 0x1A21
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_45(iParam0) };
		Global_2633EE = { func_45(iParam1) };
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

int func_47()//Position - 0x1A8E
{
	switch (Local_110.f_3)
	{
		case 1:
			return 1;
		
		case 0:
		case 2:
			if (func_48(1, 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_48(0, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(bool bParam0, int iParam1, bool bParam2)//Position - 0x1ADE
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar2;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_D = 2;
	Var1.f_14 = 2;
	Var1.f_20 = 3212836864;
	Var1.f_22 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				vVar2 = { func_204() };
				if (!func_9(&(Local_110.f_3A)))
				{
					func_8(&(Local_110.f_3A), 0, 0);
				}
				if (func_49(vVar2, 5f, &vLocal_117, &uLocal_118, &Var1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 19))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 19))
					{
						vLocal_117 = { vVar2 };
					}
					Local_110.f_C = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(3993904883, vLocal_117, 1, iVar0));
					unk_0xF2A50F5F6E7737D8(Local_110.f_C, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_C), vLocal_117 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_110.f_C), true);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_110.f_C), true);
					if (bParam0)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iParam1]))
						{
							if (!func_10(Local_110.f_D[iParam1]))
							{
								unk_0xBEE9B3E558B075FC(NETWORK::NET_TO_OBJ(Local_110.f_C), NETWORK::NET_TO_PED(Local_110.f_D[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_C), vVar2 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 19))
				{
					if (func_6(&(Local_110.f_3A), 15000, 0))
					{
						MISC::SET_BIT(&(Local_110.f_1), 19);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
	{
		return 1;
	}
	return 0;
}

int func_49(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1C9F
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_50(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_C > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_C)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_10[0] = uParam4->f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_50(var uParam0, var uParam1, var uParam2)//Position - 0x1D9F
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_24B2CE.f_991 == *uParam0 || !Global_24B2CE.f_991.f_1 == uParam0->f_1) || !Global_24B2CE.f_991.f_2 == uParam0->f_2) || !Global_24B2CE.f_994 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2) || !Global_24B2CE.f_9A5 == uParam0->f_E)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2CE.f_98F == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_998))
			{
				if (Global_24B2CE.f_998 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_203(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_203(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_202();
		}
		Global_24B2CE.f_98F = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) > func_203(0))
	{
		Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
		func_196();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2CE.f_98F)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_202();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_31(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, 4294967295, 1, uParam1->f_5, uParam0->f_11, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_24B2CE.f_9A6 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_24B2CE.f_991 = { *uParam0 };
					Global_24B2CE.f_994 = uParam0->f_4;
					break;
				
				case 1:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = 0f;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = uParam0->f_E;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_195(vVar6.x, vVar6.y);
			}
			Global_24B2CE.f_990 = 1;
			Global_24B2CE.f_98F = 1;
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_998 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B2CE.f_98F)
	{
		if (Global_24B2CE.f_990 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 5000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_A = 1;
					Var14.f_D = 1;
					Var14.f_F = 1;
					Var14.f_10 = 1;
					Var14.f_1F = 1;
					Var14.f_22 = joaat("TAILGATER");
					Var14.f_26 = 2;
					Var14.f_2D = 2;
					Var14.f_31 = 1123024896;
					Var14.f_35 = 999;
					Var14.f_36 = 1176256410;
					Var14.f_37 = 1;
					Var14.f_38 = 1;
					Var14.f_39 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 1;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 2:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 1;
						Var14.f_20 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0;
					}
					if (func_194(Global_440000.f_2559E))
					{
						Var14.f_9 = 1;
					}
					func_169(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_168(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_24B2CE.f_990 = 9;
				}
				else
				{
					Global_24B2CE.f_990 = 2;
				}
			}
		}
		if (Global_24B2CE.f_990 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar7, vVar8) == 0)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam0->f_5 && !func_34(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					Global_24B2CE.f_990 = 3;
				}
				else
				{
					Global_24B2CE.f_990 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_99A) > 7000)
			{
				func_167(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2CE.f_990 == 3)
		{
			if (func_166() || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 10000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 4;
			}
		}
		if (Global_24B2CE.f_990 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_196();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(CAM::_0xDC9DA9E8789F5246(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 1:
							func_165(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_165(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_24B2CE.f_990 == 5)
		{
			if (func_102(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B2CE.f_9AA.f_5)
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 6;
				}
				else
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_24B2CE.f_990 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 6)
		{
			iVar0 = 0;
			Global_24B2CE.f_9AA.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_101(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_100(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_165(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_24B2CE.f_990 == 7)
		{
			if (func_102(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2CE.f_A30[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_168(Global_24B2CE.f_A30[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_98(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_53(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2CE.f_990 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_52(Global_24B2CE.f_1E3))
				{
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_51(uParam2, &(Global_24B2CE.f_9AA.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_53(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 9;
		}
		if (Global_24B2CE.f_990 == 9)
		{
			Global_24B2CE.f_98F = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_202();
			return 1;
		}
		Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
	}
	return 0;
}

void func_51(var uParam0, var uParam1)//Position - 0x2D58
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_52(int iParam0)//Position - 0x2DA2
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x2DC1
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("TAILGATER");
	Var2.f_26 = 2;
	Var2.f_2D = 2;
	Var2.f_31 = 1123024896;
	Var2.f_35 = 999;
	Var2.f_36 = 1176256410;
	Var2.f_37 = 1;
	Var2.f_38 = 1;
	Var2.f_39 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_101(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_100(uParam5->f_8, uParam5->f_B, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_100(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_57(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 1;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 2:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_55(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			Var2.f_9 = 1;
		}
		func_169(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_54(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_57(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_54(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2CE.f_292 = 1;
}

int func_54(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x320A
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_98(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_55(int iParam0, bool bParam1)//Position - 0x3277
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
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_18())
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x3305
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

int func_57(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x365F
{
	if (func_97(vParam0, uParam1))
	{
		if (func_58(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_58(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_58(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x36BB
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_78(Global_24B2CE.f_1FA, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_65(*uParam1, 1056964608))
			{
				if (!func_59(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_59(var uParam0, bool bParam1)//Position - 0x3740
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_64(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_63(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_60(&vVar1, Global_24C681[iVar2 /*127*/][iVar0 /*7*/], Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_63(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_60(&vVar1, Global_24C681[8 /*127*/][iVar0 /*7*/], Global_24C681[8 /*127*/][iVar0 /*7*/].f_3, Global_24C681[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_60(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x384D
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_62(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_61(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_61(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_62(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_62(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_61(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_61(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_61(vector3 vParam0, vector3 vParam1)//Position - 0x3B1C
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_62(vector3 vParam0, vector3 vParam1)//Position - 0x3B3D
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_63(vector3 vParam0, var uParam1)//Position - 0x3B76
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_64(struct<2> Param0, var uParam1)//Position - 0x3B96
{
	if (Param0.f_1 > Global_24CB03[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_24CB03[1])
	{
		if (Param0 < Global_24CB07[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_24CB03[2])
	{
		if (Param0 < Global_24CB07[1])
		{
			return 3;
		}
		else if (Param0 < Global_24CB07[2])
		{
			return 4;
		}
		else if (Param0 < Global_24CB07[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_65(vector3 vParam0, float fParam1)//Position - 0x3C31
{
	int iVar0;
	
	if (func_75(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (Global_440000.f_E78A > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_E78A)
			{
				if (Global_440000.f_E78B[iVar0 /*80*/].f_7 != 0)
				{
					if (func_66(vParam0, Global_440000.f_E78B[iVar0 /*80*/], Global_440000.f_E78B[iVar0 /*80*/].f_6, Global_440000.f_E78B[iVar0 /*80*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_D972 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_D972)
			{
				if (Global_440000.f_D975[iVar0 /*149*/].f_10 != 0)
				{
					if (func_66(vParam0, Global_440000.f_D975[iVar0 /*149*/], Global_440000.f_D975[iVar0 /*149*/].f_3, Global_440000.f_D975[iVar0 /*149*/].f_10, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_136F4 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_136F4)
			{
				if (Global_440000.f_136F8[iVar0 /*217*/].f_C != 0)
				{
					if (func_66(vParam0, Global_440000.f_136F8[iVar0 /*217*/], Global_440000.f_136F8[iVar0 /*217*/].f_3, Global_440000.f_136F8[iVar0 /*217*/].f_C, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_66(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x3DBA
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_74(iParam3, 1008981770))
	{
		func_67(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_67(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x3E0D
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_73(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_68(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

void func_68(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x3ED9
{
	int iVar0;
	
	if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_71(iParam0);
		if (iVar0 != 0)
		{
			func_69(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_69(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x3F98
{
	int iVar0;
	
	func_70(iParam0, &Global_1413D0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Global_1413D0[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1413D0[iVar0], &(Global_1413D4[iVar0 /*3*/]), &(Global_1413DB[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413D4[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413DB[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413D4[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413DB[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413E2[iVar0] = (Global_1413DB[iVar0 /*3*/] - Global_1413D4[iVar0 /*3*/]);
		Global_1413E5[iVar0] = (Global_1413DB[iVar0 /*3*/].f_1 - Global_1413D4[iVar0 /*3*/].f_1);
		Global_1413E8[iVar0] = (Global_1413DB[iVar0 /*3*/].f_2 - Global_1413D4[iVar0 /*3*/].f_2);
		if (Global_1413E2[iVar0] > Global_1413EB)
		{
			Global_1413EB = Global_1413E2[iVar0];
		}
		if (Global_1413E8[iVar0] > Global_1413EC)
		{
			Global_1413EC = Global_1413E8[iVar0];
		}
		iVar0++;
	}
	Global_1413ED = (Global_1413EB * -0.5f);
	Global_1413F0 = (Global_1413EB * 0.5f);
	Global_1413ED.f_1 = ((((0.5f * Global_1413E5[0]) + Global_1413E5[1]) + Global_1413D0.f_3) * -1f);
	Global_1413F0.f_1 = (0.5f * Global_1413E5[0]);
	Global_1413ED.f_2 = (Global_1413E8[0] * -0.5f);
	Global_1413F0.f_2 = (Global_1413E8[0] * 0.5f);
	*uParam1 = { Global_1413ED };
	*uParam2 = { Global_1413F0 };
}

void func_70(int iParam0, var uParam1)//Position - 0x41A6
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_71(int iParam0)//Position - 0x4227
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_72(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x4256
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_73(var uParam0, vector3 vParam1)//Position - 0x4268
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_74(int iParam0, float fParam1)//Position - 0x433F
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_68(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_75(int iParam0, bool bParam1)//Position - 0x43BF
{
	if (bParam1)
	{
		if (func_76(iParam0))
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

bool func_76(int iParam0)//Position - 0x43EB
{
	return func_77(iParam0);
}

bool func_77(int iParam0)//Position - 0x43F9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

int func_78(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x4413
{
	int iVar0;
	bool bVar1;
	
	if (func_91(vParam0))
	{
		if (func_90(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_81(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_80(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_79(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_79(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x44CF
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_73(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_73(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_80(vector3 vParam0, float fParam1)//Position - 0x4577
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2CE.f_A9F[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_81(var uParam0, bool bParam1, bool bParam2)//Position - 0x45B2
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_86(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_83(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_86(vVar2, &uVar1) || func_82(vVar2))
			{
				vVar2 = { *uParam0 };
				func_83(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_82(vector3 vParam0)//Position - 0x4636
{
	float fVar0;
	
	if (Global_24B2CE.f_24B > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2CE.f_248);
		if (fVar0 < Global_24B2CE.f_24B)
		{
			return 1;
		}
	}
	return 0;
}

void func_83(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x466F
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_79(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_84(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_60(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_84(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x4779
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_85(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x4878
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_79(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_84(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_60(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_168(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_98(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_86(vector3 vParam0, var uParam1)//Position - 0x497B
{
	int iVar0;
	int iVar1;
	
	if (func_89())
	{
		return 0;
	}
	iVar1 = func_88();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9 == 1)
		{
			if (func_87(vParam0, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x49DF
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_168(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_98(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_88()//Position - 0x4B40
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_89()//Position - 0x4B73
{
	return Global_197632.f_1C;
}

int func_90(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4B81
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24C5D6[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24C5D6[iVar0 /*17*/].f_10))
			{
				if (func_87(*uParam0, &(Global_24C5D6[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_24C5D6[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C5D6[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_83(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_90(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_83(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91(vector3 vParam0)//Position - 0x4C5C
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2CE.f_1FD && !Global_24B2CE.f_1FE)
	{
		if (!Global_24B2CE.f_2C.f_13A)
		{
			if (!func_95(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 1;
			}
			if (!func_94(vParam0, 1008981770))
			{
				if (!func_90(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_90(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_93(vParam0, 1008981770);
				if (iVar0 > 4294967295)
				{
					vVar1 = { func_92(&(Global_24B2CE.f_2C[iVar0 /*12*/])) };
					if (!func_90(&vVar1, 0, 0, 0, 1))
					{
						if (!func_90(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_92(var uParam0)//Position - 0x4D1C
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_93(vector3 vParam0, float fParam1)//Position - 0x4D65
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_87(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_94(vector3 vParam0, float fParam1)//Position - 0x4DAD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_87(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_95(int iParam0, bool bParam1)//Position - 0x4DF4
{
	if (Global_1406BF != 0)
	{
		return func_96(iParam0) != 0;
	}
	return func_75(iParam0, bParam1);
}

int func_96(int iParam0)//Position - 0x4E1A
{
	if (func_1202(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_97(vector3 vParam0, var uParam1)//Position - 0x4E3C
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 999999.9f;
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2CE.f_8C6[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == 4294967295)
		{
			*uParam1 = { Global_24B2CE.f_8C6[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_98(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x4EB6
{
	func_99(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_99(var uParam0, var uParam1)//Position - 0x4F61
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_100(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x4FC3
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_101(float fParam0)//Position - 0x506E
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_102(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5086
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2CE.f_9AA.f_1 == 0 && Global_24B2CE.f_9AA == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_24B2CE.f_9AA.f_1)))
			{
				case 0:
					func_163(uParam1, uParam2);
					if (!Global_24B2CE.f_9AA.f_2)
					{
						if (uParam2->f_7 && Global_24B2CE.f_225.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
							}
							if (uParam1->f_5 && func_52(Global_24B2CE.f_1E3))
							{
								if (!Global_24B2CE.f_9AA.f_5)
								{
									Global_24B2CE.f_9AA.f_5 = 1;
								}
								else
								{
									func_53(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_53(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_163(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_163(uParam1, uParam2);
					Global_24B2CE.f_9AA.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_163(uParam1, uParam2);
				if (!Global_24B2CE.f_9AA.f_2)
				{
					Global_24B2CE.f_9AA.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_160(Global_24B2CE.f_225, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2CE.f_9AA.f_4)
	{
		Global_24B2CE.f_9AA.f_4 = 1;
		func_110(*uParam1, uParam1->f_3, uParam1, uParam2, 1, 4294967295);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B2CE.f_9AA.f_1 > 0 || Global_24B2CE.f_9AA > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B2CE.f_9AA.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2CE.f_9AA.f_3)
					{
						iVar2 = Global_24B2CE.f_9AA.f_3 + 1;
					}
					if (iVar2 > (Global_24B2CE.f_9AA.f_1 - 1))
					{
						iVar2 = (Global_24B2CE.f_9AA.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::_0x6C34F1208B8923FD(iVar2);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_110(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B2CE.f_9AA.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2CE.f_9AA.f_1;
		}
		if (Global_24B2CE.f_9AA.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2CE.f_B37)
			{
				func_104(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_52(Global_24B2CE.f_1E3))
			{
				if (Global_24B2CE.f_9AA.f_2)
				{
					func_51(uParam0, &(Global_24B2CE.f_9AA.f_6));
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_53(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_51(uParam0, &(Global_24B2CE.f_9AA.f_6));
				func_103(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24B2CE.f_9AA.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_59(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_53(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_53(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_103(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
		if (uParam1->f_5 && func_52(Global_24B2CE.f_1E3))
		{
			if (!Global_24B2CE.f_9AA.f_5)
			{
				Global_24B2CE.f_9AA.f_5 = 1;
			}
			else
			{
				func_53(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_53(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_103(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_103(vector3 vParam0)//Position - 0x564D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B2CE.f_A30[(3 - iVar0) /*3*/] = { Global_24B2CE.f_A30[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2CE.f_A30[0 /*3*/] = { vParam0 };
}

void func_104(var uParam0, var uParam1, var uParam2)//Position - 0x569D
{
	if (func_52(Global_24B2CE.f_1E3) && func_109() < 4096)
	{
		func_108(uParam0, 0f);
		func_108(uParam1, uParam0->f_2);
		func_108(uParam2, uParam1->f_2);
	}
	else
	{
		func_107(uParam0);
		func_106(uParam2, uParam0->f_4);
		func_105(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_105(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x5702
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_106(var uParam0, vector3 vParam1)//Position - 0x57A1
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_107(var uParam0)//Position - 0x5823
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_108(var uParam0, float fParam1)//Position - 0x5890
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_2 < fVar1 && Global_24BE21[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_109()//Position - 0x5913
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE21[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_110(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x594A
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_24B2CE.f_1E3 == 1)
		{
			if (MISC::ABSF((Global_24B2CE.f_1FA.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_156(CAM::_0xDC9DA9E8789F5246()))
		{
			if (iParam5 == 4294967295)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == 4294967295)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_155(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_41(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_149(vParam0, fParam1, uParam2->f_F, func_154(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2CE.f_3;
		}
	}
	else if (!func_146(vParam0, 25f, CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_32(vParam0, fVar1, 1, 1, 120f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_32(vParam0, fVar1, 1, 1, 60f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			vVar12 = { Global_24B2CE.f_1FA };
			if (Global_24B2CE.f_1E3 == 26)
			{
				vVar12 = { Global_24B2CE.f_225.f_12 };
			}
			if (!func_80(vParam0, 0.5f))
			{
				if (func_91(vVar12))
				{
					if (!func_90(&vParam0, 0, 0, 0, 1) && !func_145(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_145(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_144(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_143(CAM::_0xDC9DA9E8789F5246()) && func_141(CAM::_0xDC9DA9E8789F5246())))
		{
			if (!func_140(&vParam0, &(Global_24B2CE.f_9AA.f_5A), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_141(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!func_139(vParam0, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_138(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_52(Global_24B2CE.f_1E3))
			{
				if (func_94(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_137(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2CE.f_2C.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			if (!func_81(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_59(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_93(vParam0, 1008981770);
		if (iVar14 > 4294967295)
		{
			func_136(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_131(&(Global_24B2CE.f_2C[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = 4294967295;
			}
		}
		else
		{
			iVar8 = 4294967295;
		}
	}
	if (func_65(vParam0, 1056964608))
	{
		iVar8 = 4294967295;
	}
	if (uParam3->f_21)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam3->f_22)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_130(vParam0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_24B2CE.f_B37 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_122(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_122(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_52(Global_24B2CE.f_1E3) && iVar8 < 4096)
			{
				Var19.f_2 = func_120(vParam0);
			}
			uVar7 = func_115(vParam0, 1, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_114(Var19);
			Global_24B2CE.f_9AA.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_24B2CE.f_9AA.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_122(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_122(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_52(Global_24B2CE.f_1E3) && iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_120(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_113(Var19, iVar18);
							Global_24B2CE.f_9AA.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar0 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_113(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_112(vParam0, fVar1, 1, 1, 0, 4294967295, 1);
						fVar6 = func_115(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_111(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_111(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar3 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_113(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_111(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6305
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_112(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x63A3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_1202(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1202(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_33(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_113(struct<10> Param0, int iParam1)//Position - 0x653A
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] };
	Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_113(Var0, iParam1 + 1);
	}
}

void func_114(struct<10> Param0)//Position - 0x658C
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_109();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] < iVar2)
		{
			Global_24BE21[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] == 0)
		{
			Global_24BE21[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE21[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > 4294967295)
	{
		Global_24BE21[iVar4 /*10*/] = { Param0 };
	}
}

float func_115(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x6680
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_1202(iVar7, 1, 1))
		{
			if (!iVar7 == CAM::_0xDC9DA9E8789F5246() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_116(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == 4294967295 || !func_95(CAM::_0xDC9DA9E8789F5246(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar7) || !bParam4)
					{
						if (func_33(iVar7))
						{
							vVar5 = { func_38(iVar7) };
							if (!iVar7 == CAM::_0xDC9DA9E8789F5246())
							{
								vVar6 = { unk_0xCCA038CFFE1C48BC(PLAYER::GET_PLAYER_PED(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_116(int iParam0)//Position - 0x67CC
{
	if (func_1202(iParam0, 0, 1))
	{
		if (!func_118(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_75(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_117(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
				{
					if (!func_75(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_42(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1, int iParam2)//Position - 0x6877
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

int func_118(int iParam0)//Position - 0x6A42
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
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

bool func_119()//Position - 0x6A84
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

float func_120(vector3 vParam0)//Position - 0x6A95
{
	var uVar0;
	
	return func_121(vParam0, &(Global_24B2CE.f_2C), &uVar0);
}

float func_121(vector3 vParam0, var uParam1, var uParam2)//Position - 0x6AAD
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 4294967295;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_122(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x6C29
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_111(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_115(vParam0, 1, 0, 0, 1);
	fVar0 = func_111(fVar4, 0f, func_129(), func_127(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_125(vParam0);
	fVar0 = func_111(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !func_95(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_124(vParam0, CAM::_0xDC9DA9E8789F5246(), 0);
	fVar0 = func_111(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_123(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_111(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_111(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_111(SYSTEM::VDIST(Global_24B2CE.f_1FA, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_123(vector3 vParam0, var uParam1, var uParam2)//Position - 0x6E0F
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_124(vector3 vParam0, int iParam1, int iParam2)//Position - 0x6E68
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1202(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_1202(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295))
					{
						if (Global_24E392.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E392.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_125(vector3 vParam0)//Position - 0x6F14
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar4, 4294967295);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_126(uVar4[iVar2]))
				{
					vVar3 = { unk_0x8000C77B5F336760(uVar4[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_126(int iParam0)//Position - 0x6FA1
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x4EE7377FBE72B4BC(Global_180824[CAM::_0xDC9DA9E8789F5246()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180824[CAM::_0xDC9DA9E8789F5246()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
		if (iVar1 > 4294967295 && iVar1 < 4)
		{
			if (unk_0x4EE7377FBE72B4BC(Global_180702[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180702[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_127()//Position - 0x706C
{
	if (func_128())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_128()//Position - 0x70C8
{
	if (Global_24B2CE.f_2C.f_41 && !Global_24B2CE.f_2C.f_12D)
	{
		if (!func_118(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
	}
	return 0;
}

float func_129()//Position - 0x70FE
{
	if (func_128())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_130(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x715A
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x71E9
{
	switch (uParam0->f_A)
	{
		case 0:
			if (func_135(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_134(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_132(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_132(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x7275
{
	vector3 vVar0[8];
	int iVar1;
	
	func_133(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_133(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x72C7
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_62(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_134(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x73F4
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_135(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x74BE
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_136(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7542
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_64(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_63(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_63(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_137(vector3 vParam0)//Position - 0x7630
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2CE.f_2C.f_37)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_24B2CE.f_2C.f_38))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_24B2CE.f_2C.f_39)
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
		}
	}
	return 1;
}

int func_138(vector3 vParam0)//Position - 0x769B
{
	switch (Global_24B2CE.f_9A6)
	{
		case 0:
			return func_168(vParam0, Global_24B2CE.f_991, Global_24B2CE.f_994, 0, 0);
			break;
		
		case 1:
			return func_98(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, Global_24B2CE.f_9A5, 0, true);
			break;
	}
	return 0;
}

int func_139(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x772D
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_140(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x77DB
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_79(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x784E
{
	switch (Global_1406BF)
	{
		case 0:
			if (!func_142(iParam0))
			{
				if (Global_1841F3[iParam0 /*790*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_142(int iParam0)//Position - 0x7884
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_143(int iParam0)//Position - 0x7899
{
	if (func_75(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_144(vector3 vParam0, float fParam1, int iParam2)//Position - 0x78BD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2CE.f_A30[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_145(var uParam0, bool bParam1)//Position - 0x78FB
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_82(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_79(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 0, fVar2);
			if (func_86(vVar1, &uVar0) || func_82(vVar1))
			{
				vVar1 = { *uParam0 };
				func_79(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_146(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7993
{
	if (func_148(vParam0, fParam1, iParam2, iParam3, 0) || func_147(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_147(vector3 vParam0, int iParam1, int iParam2)//Position - 0x79C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_66(vParam0, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1202(iVar2, 0, 1) && func_1202(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_148(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7A86
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_1202(iVar1, 0, 1) && func_1202(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1202(iVar1, 0, 1) && func_1202(iParam2, 0, 1))
				{
					if (Global_24E392.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_38(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E392.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_1202(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_38(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_149(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x7BA3
{
	Global_24B2CE.f_3 = 0;
	if (!func_146(vParam0, 0.5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
	{
		Global_24B2CE.f_3++;
		if (bParam3)
		{
			if (func_31(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_153(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_65(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_31(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_153(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_150(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B2CE.f_3++;
						if (!func_65(vParam0, 1056964608))
						{
							Global_24B2CE.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (func_31(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			if (!func_153(vParam0, fParam10))
			{
				Global_24B2CE.f_3++;
				if (!func_150(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2CE.f_3++;
					if (!func_65(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
		}
	}
	return 0;
}

int func_150(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x7DE3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!CAM::_0xDC9DA9E8789F5246() == iVar1)
		{
			if ((func_1202(iVar1, 1, 1) && func_33(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (!func_152(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
				{
					if (func_151(func_38(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_151(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x7E62
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_152(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7EEE
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

int func_153(vector3 vParam0, float fParam1)//Position - 0x7F66
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1202(iVar1, 1, 1) && func_33(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295) && !func_95(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !CAM::_0xDC9DA9E8789F5246() == iVar1) || !func_152(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_38(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x8024
{
	if ((Global_24B2CE.f_1E3 == 9 || Global_24B2CE.f_1E3 == 9) || (Global_24B2CE.f_1E3 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x8067
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	if (!iVar3 == 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1202(iVar1, 1, 1))
			{
				if ((!func_34(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1)) && iVar1 != CAM::_0xDC9DA9E8789F5246())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_38(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x812C
{
	if (((func_95(iParam0, 1) || func_159(iParam0)) || func_158(iParam0, 0)) || func_157(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x8168
{
	if (!func_1202(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_158(int iParam0, int iParam1)//Position - 0x818B
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)//Position - 0x81C6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

void func_160(vector3 vParam0, var uParam1, var uParam2)//Position - 0x81E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_162(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1739[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_40001.f_1739[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_162(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_162(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
			{
				Var4 = { Global_140131[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_240065[iVar1 /*3*/] };
				func_161(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_161(var uParam0, var uParam1, int iParam2)//Position - 0x850A
{
	Global_24CEE6 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_161(&Global_24CEE6, uParam1, iParam2 + 1);
	}
}

void func_162(var uParam0, var uParam1, int iParam2)//Position - 0x8548
{
	Global_24CEE2 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_162(&Global_24CEE2, uParam1, iParam2 + 1);
	}
}

void func_163(var uParam0, var uParam1)//Position - 0x8582
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			if (func_164(Global_24B2CE.f_8C6[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2CE.f_8C6[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2CE.f_8C6[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_110(Global_24B2CE.f_8C6[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, 4294967295);
				Global_24B2CE.f_9AA++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2CE.f_B37)
	{
		func_104(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
	}
}

int func_164(vector3 vParam0, var uParam1)//Position - 0x866F
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_54(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_54(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0;
}

void func_165(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x86CC
{
	float fVar0;
	
	func_99(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_166()//Position - 0x8722
{
	return Global_14010B.f_4;
}

void func_167(float fParam0, float fParam1)//Position - 0x8730
{
	func_202();
	func_195(fParam0, fParam1);
}

bool func_168(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x8744
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_169(var uParam0, var uParam1, var uParam2)//Position - 0x87F7
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		while (func_191(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_21 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_170(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_170(var uParam0, var uParam1, var uParam2)//Position - 0x8866
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_78(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_190(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24CEF0.f_A2 = 0;
	Global_24CEF0.f_A3 = 0;
	Global_24CEF0.f_A4 = 4294967197;
	Global_24CEF0.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CEF0.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_71(uParam2->f_22) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_24CEF0.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24CEF0.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar6)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_145(&vVar1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_189(vVar1))
									{
										vVar1 = { func_185(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_65(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
													{
														if (func_184(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_190(&vVar1, 0)) || uParam2->f_30 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + 4294967295);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
																	{
																		if ((uParam2->f_C && !func_180(vVar1, fVar2, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_78(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_21 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_179(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_31(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_31(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_177(vVar1, fVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 2)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_176(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2)
																										{
																											Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CEF0.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CEF0.f_A2 = 0;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CEF0.f_A2 == 0)
																									{
																										Global_24CEF0[0 /*3*/] = { vVar1 };
																										Global_24CEF0.f_79[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_175(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CEF0.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CEF0.f_A2++;
																									if (Global_24CEF0.f_A2 >= 5)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar1 };
																									Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar2;
																									Global_24CEF0.f_A2++;
																									if (func_184(vVar1, uParam2))
																									{
																										Global_24CEF0.f_A3++;
																									}
																									if (Global_24CEF0.f_A2 >= 10)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24CEF0.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
					else
					{
						if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
						{
							func_173(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_24CEF0[0 /*3*/] };
						uVar26 = Global_24CEF0.f_79[0];
						Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar24 /*3*/] };
						Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar24];
						Global_24CEF0[iVar24 /*3*/] = { vVar25 };
						Global_24CEF0.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						return 0;
					}
					else
					{
						func_172(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_78(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 1) || func_190(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0;
								uParam2->f_32 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				return 0;
			}
			else
			{
				func_171(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return 1;
			}
		}
		Global_24CEF0.f_A4 = iVar6;
	}
	return 0;
}

void func_171(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x9290
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_146(*(uParam0[iVar2 /*4*/]), 5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == 4294967295)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_172(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x9314
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_185(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0, 0, uParam5->f_33) };
		if (!func_189(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_173(int iParam0, var uParam1)//Position - 0x9398
{
	if (!func_184(Global_24CEF0[iParam0 /*3*/], uParam1))
	{
		Global_24CEF0.f_A2 = (Global_24CEF0.f_A2 - 1);
		func_174(iParam0);
		if (Global_24CEF0.f_A2 > Global_24CEF0.f_A3)
		{
			func_173(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_173(iParam0 + 1, uParam1);
	}
}

void func_174(int iParam0)//Position - 0x93F3
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24CEF0[iParam0 /*3*/] = { Global_24CEF0[iParam0 + 1 /*3*/] };
			Global_24CEF0.f_79[iParam0] = Global_24CEF0.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_175(vector3 vParam0, float fParam1, int iParam2)//Position - 0x943E
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CEF0[iParam2 /*3*/] };
	uVar1 = Global_24CEF0.f_79[iParam2];
	Global_24CEF0[iParam2 /*3*/] = { vParam0 };
	Global_24CEF0.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CEF0.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_175(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_176(vector3 vParam0, float fParam1, float fParam2)//Position - 0x94AB
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_116(iVar3))
		{
			vVar1 = { func_38(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_177(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x9513
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam7 == 0)
		{
			if (func_1202(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam8) && bParam5) && func_42(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { unk_0x8000C77B5F336760(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_178(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_66(func_38(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_178(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x9686
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_66(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_68(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_73(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_73(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_73(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_66(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_178(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_179(vector3 vParam0, float fParam1, int iParam2)//Position - 0x9840
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_178(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_178(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x994C
{
	if (func_183(vParam0, fParam1, iParam2, iParam3, iParam4) || func_181(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9982
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_182(vParam0, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_178(vParam0, fParam1, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1202(iVar2, 0, 1) && func_1202(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x9A5C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_74(iParam1, 1008981770);
	fVar1 = func_74(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_183(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9A9C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_1202(iVar1, 0, 1) && func_1202(iParam3, 0, 1))
			{
				if (Global_24E392.f_105[iVar0])
				{
					if (func_66(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_66(func_38(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24E392.f_105[iVar0])
			{
				if (func_66(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1202(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_66(func_38(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(vector3 vParam0, var uParam1)//Position - 0x9BAB
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0:
				if (func_168(vParam0, uParam1->f_13, uParam1->f_19, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_98(vParam0, uParam1->f_13, uParam1->f_16, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_185(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x9C3C
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_188(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_187(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_186(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_186(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_188(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4264B2362A7E120F(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_186(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_186(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_186(int iParam0, float fParam1)//Position - 0xA083
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_68(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_187(vector3 vParam0)//Position - 0xA0BA
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0xA0F2
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_73(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_61(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_189(vector3 vParam0)//Position - 0xA12E
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_64(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[iVar1])
	{
		if (func_63(vParam0, &(Global_24CB0C[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[8])
	{
		if (func_63(vParam0, &(Global_24CB0C[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_190(var uParam0, bool bParam1)//Position - 0xA1A9
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_24B2CE.f_1A.f_11)
	{
		switch (Global_24B2CE.f_1A.f_10)
		{
			case 0:
				if (func_168(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_F, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_98(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, Global_24B2CE.f_1A.f_10, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_191(var uParam0, var uParam1, var uParam2)//Position - 0xA29B
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_78(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_190(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CEF0.f_A2 = 0;
		Global_24CEF0.f_A3 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CEF0.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_192(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_6C9)
		{
			iVar1 = Global_24B2CE.f_85F[iVar0];
			if (iVar1 > 4294967295 && iVar1 < 101)
			{
				vVar2 = { Global_24B2CE.f_6CA[iVar1 /*4*/] };
				fVar3 = Global_24B2CE.f_6CA[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_180(vVar2, fVar3, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_78(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_21 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_179(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_31(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_31(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_177(vVar2, fVar3, uParam2->f_22, 1, 1, 0, 0, uParam2->f_3A, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_176(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2)
															{
																Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CEF0.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CEF0.f_A2 = 0;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CEF0.f_A2 == 0)
														{
															Global_24CEF0[0 /*3*/] = { vVar2 };
															Global_24CEF0.f_79[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_175(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CEF0.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 5)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
													else
													{
														Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar2 };
														Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar3;
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 10)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_24CEF0.f_A2 > 0)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
			else
			{
				if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
				{
					func_173(0, uParam2);
				}
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
				vVar13 = { Global_24CEF0[0 /*3*/] };
				uVar14 = Global_24CEF0.f_79[0];
				Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar12 /*3*/] };
				Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar12];
				Global_24CEF0[iVar12 /*3*/] = { vVar13 };
				Global_24CEF0.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_192(vector3 vParam0)//Position - 0xA8D3
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2CE.f_6C9)
	{
		uVar1 = func_193(vParam0, fVar0, &fVar0);
		Global_24B2CE.f_85F[iVar2] = uVar1;
		iVar2++;
	}
}

int func_193(vector3 vParam0, float fParam1, float fParam2)//Position - 0xA90E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_24B2CE.f_6C9)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2CE.f_6CA[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_194(int iParam0)//Position - 0xA970
{
	return iParam0 == 50;
}

void func_195(float fParam0, float fParam1)//Position - 0xA97D
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_24B2CE.f_999 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B2CE.f_997 = 1;
	Global_24B2CE.f_99A = HUD::_0x13C4B962653A5280();
}

void func_196()//Position - 0xA9B0
{
	func_201();
	func_200();
	func_199();
	func_198();
	func_197();
}

void func_197()//Position - 0xA9CC
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_24BE21[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_198()//Position - 0xAA04
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B2CE.f_9AA.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_199()//Position - 0xAA33
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B2CE.f_9AA.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_200()//Position - 0xAA61
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_24B2CE.f_9AA.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_201()//Position - 0xAA9D
{
	struct<6> Var0;
	
	Var0.f_3 = 4294967295;
	Global_24B2CE.f_9AA = { Var0 };
}

void func_202()//Position - 0xAABB
{
	if (Global_24B2CE.f_997)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_999)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_24B2CE.f_997 = 0;
	}
}

int func_203(bool bParam0)//Position - 0xAAEE
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_204()//Position - 0xAB11
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1077();
	vVar1 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 0:
			vVar1 = { -1166.81f, 4928.695f, 222.1781f };
			break;
		
		case 1:
			vVar1 = { -2117.441f, 3301.337f, 31.8103f };
			break;
		
		case 2:
			vVar1 = { -1298.069f, -3398.051f, 12.9452f };
			break;
		
		case 3:
			vVar1 = { 567.0107f, -3125.8f, 17.7686f };
			break;
	}
	return vVar1;
}

int func_205()//Position - 0xABA1
{
	switch (Local_110.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_206())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_206()//Position - 0xABD9
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_214();
	iVar1 = func_213();
	if (func_1077() == 0)
	{
		iVar5 = Global_180848;
	}
	else if (func_1077() == 3)
	{
		iVar5 = 3947353312;
	}
	else
	{
		iVar5 = Global_18084B;
	}
	switch (func_1077())
	{
		case 1:
			func_212(&vVar2, &fVar4, &fVar3);
			func_211(0, iVar0, vVar2, fVar4, fVar3, iVar5);
			iVar6 = 1;
			while (iVar6 <= 4)
			{
				func_210((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				func_208(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
		
		case 2:
			func_212(&vVar2, &fVar4, &fVar3);
			func_211(0, iVar0, vVar2, fVar4, fVar3, iVar5);
			iVar6 = 1;
			while (iVar6 <= 4)
			{
				func_210((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				if (iVar6 <= 2)
				{
					iVar1 = 2072724299;
				}
				else
				{
					iVar1 = func_213();
				}
				func_208(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
		
		case 0:
			func_212(&vVar2, &fVar4, &fVar3);
			func_211(0, iVar0, vVar2, fVar4, fVar3, iVar5);
			iVar6 = 1;
			while (iVar6 <= 3)
			{
				if (iVar6 == 1)
				{
					iVar1 = func_213();
				}
				else
				{
					iVar1 = joaat("g_m_y_lost_03");
				}
				func_210((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				func_208(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
		
		case 3:
			func_212(&vVar2, &fVar4, &fVar3);
			iVar6 = 1;
			while (iVar6 <= 9)
			{
				func_210((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				func_208(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
	}
	if (func_207())
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0xADA6
{
	switch (func_1077())
	{
		case 1:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[1]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[4])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[5])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[6])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[7])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[8])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_208(int iParam0, int iParam1, vector3 vParam2, float fParam3, float fParam4, int iParam5)//Position - 0xAF46
{
	float fVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 0, 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_B, iParam0))
				{
					MISC::CLEAR_AREA(vParam2, 2f, 1, 0, 0, false);
					MISC::SET_BIT(&(Local_110.f_B), iParam0);
				}
				if (func_31(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 50f, 0, 0, 0, 0))
				{
					if (func_209(&(Local_110.f_D[iParam0]), 26, iParam1, vParam2, fParam3, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), iParam5);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 0);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), joaat("weapon_carbinerifle"), 25000, true);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 0, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 42, true);
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 200, 0);
						NETWORK::_SET_NETWORK_OBJECT_NON_CONTACT(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), vParam2, fParam4, 0, 0);
						if (func_1077() == 2)
						{
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), true);
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_209(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0xB152
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_210(int iParam0, var uParam1, float fParam2, float fParam3)//Position - 0xB1B1
{
	switch (func_1077())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1170.255f, 4928.144f, 223.2858f };
					*fParam2 = 252.5942f;
					*fParam3 = 1f;
					break;
				
				case 1:
					*uParam1 = { -1162.207f, 4924.064f, 221.7922f };
					*fParam2 = 47.6051f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1159.473f, 4926.255f, 221.7704f };
					*fParam2 = 107.9506f;
					*fParam3 = 5f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -2117.605f, 3284.526f, 31.8103f };
					*fParam2 = 323.9433f;
					*fParam3 = 10f;
					break;
				
				case 1:
					*uParam1 = { -2114.597f, 3283.476f, 31.8103f };
					*fParam2 = 357.3127f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -2127.048f, 3285.237f, 37.7325f };
					*fParam2 = 219.4789f;
					*fParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -2113.078f, 3276.096f, 37.7325f };
					*fParam2 = 62.113f;
					*fParam3 = 1f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1300.61f, -3400.856f, 12.9452f };
					*fParam2 = 28.2234f;
					*fParam3 = 5f;
					break;
				
				case 1:
					*uParam1 = { -1300.13f, -3397.689f, 12.9452f };
					*fParam2 = 65.8332f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1301.792f, -3392.742f, 12.9452f };
					*fParam2 = 323.2079f;
					*fParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -1307.278f, -3392.964f, 16.0027f };
					*fParam2 = 296.486f;
					*fParam3 = 1f;
					break;
			}
			break;
		
		case 3:
			*fParam3 = 1f;
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 572.3206f, -3126.495f, 17.7686f };
					*fParam2 = 183.7487f;
					break;
				
				case 1:
					*uParam1 = { 563.9862f, -3118.138f, 17.7687f };
					*fParam2 = 91.0942f;
					break;
				
				case 2:
					*uParam1 = { 580.0829f, -3117.409f, 17.7686f };
					*fParam2 = 97.2584f;
					break;
				
				case 3:
					*uParam1 = { 520.6996f, -3119.512f, 17.714f };
					*fParam2 = 119.4985f;
					break;
				
				case 4:
					*uParam1 = { 541.4325f, -3119.131f, 7.566f };
					*fParam2 = 181.8911f;
					break;
				
				case 5:
					*uParam1 = { 586.7628f, -3118.98f, 17.7149f };
					*fParam2 = 271.86f;
					break;
				
				case 6:
					*uParam1 = { 594.2654f, -3122.402f, 5.0693f };
					*fParam2 = 89.4349f;
					break;
				
				case 7:
					*uParam1 = { 550.7189f, -3131.083f, 16.3604f };
					*fParam2 = 172.4657f;
					break;
				
				case 8:
					*uParam1 = { 587.6816f, -3131.081f, 16.3706f };
					*fParam2 = 200.5195f;
					break;
			}
			break;
	}
}

int func_211(int iParam0, int iParam1, vector3 vParam2, float fParam3, float fParam4, int iParam5)//Position - 0xB506
{
	float fVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_B, iParam0))
				{
					MISC::CLEAR_AREA(vParam2, 2f, 1, 0, 0, false);
					MISC::SET_BIT(&(Local_110.f_B), iParam0);
				}
				if (func_31(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 50f, 0, 0, 0, 0))
				{
					if (func_209(&(Local_110.f_D[iParam0]), 26, iParam1, vParam2, fParam3, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), iParam5);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1, 0);
						if (func_1077() == 1)
						{
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 10, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 0, 1, 0, false);
						}
						else
						{
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 0);
						}
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), joaat("weapon_advancedrifle"), 25000, true);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 0, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 42, true);
						unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 200, 0);
						NETWORK::_SET_NETWORK_OBJECT_NON_CONTACT(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_D[iParam0]), vParam2, fParam4, 0, 0);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_212(var uParam0, float fParam1, float fParam2)//Position - 0xB756
{
	switch (func_1077())
	{
		case 0:
			*uParam0 = { -1166.844f, 4925.441f, 221.9988f };
			*fParam1 = 346.3493f;
			*fParam2 = 5f;
			break;
		
		case 1:
			*uParam0 = { -2113.965f, 3287.681f, 31.8103f };
			*fParam1 = 155.4586f;
			*fParam2 = 5f;
			break;
		
		case 2:
			*uParam0 = { -1301.891f, -3396.512f, 12.9452f };
			*fParam1 = 235.3724f;
			*fParam2 = 5f;
			break;
		
		case 3:
			*uParam0 = { 547.5576f, -3198.299f, 5.0693f };
			*fParam1 = 22.5507f;
			*fParam2 = 1f;
			break;
	}
}

int func_213()//Position - 0xB807
{
	int iVar0;
	
	switch (func_1077())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_01");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_01");
			break;
	}
	return iVar0;
}

int func_214()//Position - 0xB85A
{
	int iVar0;
	
	switch (func_1077())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_02");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_02");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armboss_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_02");
			break;
	}
	return iVar0;
}

int func_215(var uParam0)//Position - 0xB8AD
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_216(var uParam0)//Position - 0xB8D6
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_217()//Position - 0xB8F5
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 29))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 28))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 25))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 26))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_112, 26);
					}
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 26))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 27))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_112, 27);
						}
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 27))
					{
						MISC::SET_BIT(&iLocal_112, 25);
					}
				}
			}
		}
	}
}

void func_218(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xB9A7
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
	
	if (func_361(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_359() || iParam2 == 27)
	{
		if (func_305(iParam1, iParam2, uParam3, Global_180518, 0, func_357(), sParam7))
		{
			func_304(1);
			if ((!func_302() && !func_300()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
			{
				if (func_299())
				{
					func_296();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_295(1);
						Global_180518 = 0;
						iVar19 = 4294967295;
						if (Global_1805F5 != 1)
						{
							func_294(iParam1, 0, 0);
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
								if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_34(iVar3, 0))
									{
										if ((func_293(iVar3) || Global_24FBF9[iVar3 /*413*/].f_EC != 4294967295) || func_142(iVar3))
										{
											iVar9 = iVar3;
											if (func_20(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_292(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_289(CAM::_0xDC9DA9E8789F5246(), 0) && func_288(CAM::_0xDC9DA9E8789F5246()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_287())
							{
								if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_18();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_286(iVar3) && func_281(iVar3, iParam2)) && func_1202(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
								Var6 = { func_276(iVar3) };
								if (iVar3 == CAM::_0xDC9DA9E8789F5246())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_45(iVar3) };
								iVar5 = func_270(iVar3);
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
									if (!func_287())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_265(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_264(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_257(iVar3, 0);
								if (bVar2)
								{
									if (func_19(iVar3, 1) && iVar1[iVar9] != 4294967295)
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
								if (func_256(iParam5))
								{
									func_255(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_255(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_1202(iVar3, 0, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_18();
							}
							if (func_286(iVar3))
							{
								if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
									Var6 = { func_276(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_45(iVar3) };
									iVar5 = func_270(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_180518++;
									iVar16 = func_257(iVar3, 1);
									if (bVar2)
									{
										if (func_19(iVar3, 1))
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
									func_232(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							func_229(uParam3, iParam1);
						}
						func_228(&(uParam3->f_15));
						func_227();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
						{
							func_226(uParam3, iParam1);
							func_225(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_21), 7);
						}
						func_226(uParam3, iParam1);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							MISC::SET_BIT(&(uParam3->f_21), 11);
						}
						if (func_221(uParam3))
						{
							Global_1805F5 = 1;
						}
						func_219(uParam3);
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
			func_227();
			func_295(0);
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

void func_219(var uParam0)//Position - 0xBFF7
{
	if (!func_9(&(uParam0->f_15)))
	{
		func_8(&(uParam0->f_15), 0, 0);
	}
	else if (func_6(&(uParam0->f_15), 250, 0))
	{
		func_228(&(uParam0->f_15));
		func_220(0);
	}
}

void func_220(bool bParam0)//Position - 0xC035
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

int func_221(var uParam0)//Position - 0xC07B
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_25);
	if (iVar3 != func_18() && func_1202(iVar3, 0, 1))
	{
		Var2 = { func_45(iVar3) };
		iVar1 = func_224(uParam0, uParam0->f_25);
		if (func_223(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_222(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_222(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_222(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_222(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_222(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_222(uParam0, iVar0, 0);
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

void func_222(var uParam0, int iParam1, int iParam2)//Position - 0xC1A8
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xC1BA
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_224(var uParam0, int iParam1)//Position - 0xC1CA
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_225(int iParam0, bool bParam1, int iParam2)//Position - 0xC1DA
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

void func_226(var uParam0, int iParam1)//Position - 0xC210
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_23);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(&(uParam0->f_21), 10);
	}
}

void func_227()//Position - 0xC247
{
	if (Global_1805F5 != 0)
	{
		Global_1805F5 = 0;
	}
}

void func_228(var uParam0)//Position - 0xC25C
{
	uParam0->f_1 = 0;
}

void func_229(var uParam0, int iParam1)//Position - 0xC269
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_18())
		{
			if (func_1202(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_231(uParam0->f_26[iVar0 /*2*/], 0);
					func_230(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1841F3[iVar0 /*790*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC2DC
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

int func_231(int iParam0, bool bParam1)//Position - 0xC318
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

void func_232(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xC34C
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_254() && iParam4 < func_253())
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
				func_252("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
			}
			func_252(sParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_252("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
			}
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			func_252("");
			if (uParam3->f_6C == 6)
			{
				func_252("");
			}
			else
			{
				func_252(&sParam5);
			}
			func_237(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_236(uParam3))
			{
				func_235("DPAD_FRIEND");
			}
			else if (func_234(uParam3))
			{
				func_235("DPAD_FRIEND");
			}
			else if (func_233(uParam3))
			{
				func_235("DPAD_CREW");
			}
			else
			{
				func_235("");
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

bool func_233(var uParam0)//Position - 0xC471
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 6);
}

bool func_234(var uParam0)//Position - 0xC482
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 5);
}

void func_235(char* sParam0)//Position - 0xC493
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_236(var uParam0)//Position - 0xC4A5
{
	if (func_234(uParam0) && func_233(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_237(var uParam0, int iParam1)//Position - 0xC4C6
{
	if (func_251(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(121);
	}
	else if (func_242(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(122);
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam1 /*413*/].f_19A, 0))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(123);
	}
	else
	{
		if (func_238())
		{
			uParam0->f_24 = 0;
		}
		GRAPHICS::SET_SEETHROUGH(uParam0->f_24);
	}
}

int func_238()//Position - 0xC547
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_240() || func_239())
		{
			return 1;
		}
	}
	return 0;
}

var func_239()//Position - 0xC56C
{
	return Global_255C02.f_E;
}

int func_240()//Position - 0xC57A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_239();
	}
	return func_241(Global_440000.f_1FEDE);
}

int func_241(int iParam0)//Position - 0xC59E
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

int func_242(int iParam0)//Position - 0xC5D8
{
	if ((func_1202(iParam0, 0, 1) && func_246()) && func_243(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_243(int iParam0, bool bParam1)//Position - 0xC605
{
	return func_244(iParam0, bParam1, 1);
}

int func_244(int iParam0, bool bParam1, int iParam2)//Position - 0xC616
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_245(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_18() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0, int iParam1)//Position - 0xC672
{
	if (iParam0 != func_18())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_18())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_246()//Position - 0xC6C1
{
	if (func_159(CAM::_0xDC9DA9E8789F5246()) || func_250())
	{
		if (!func_247(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_247(int iParam0, int iParam1)//Position - 0xC6F1
{
	if (func_249(iParam0) == iParam1)
	{
		return func_248(iParam0);
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xC70E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_249(int iParam0)//Position - 0xC734
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

int func_250()//Position - 0xC753
{
	switch (func_288(CAM::_0xDC9DA9E8789F5246()))
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

int func_251(int iParam0)//Position - 0xC791
{
	if (func_238())
	{
		if (func_1202(iParam0, 0, 1))
		{
			return func_20(iParam0);
		}
	}
	if ((func_1202(iParam0, 0, 1) && func_246()) && func_245(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_252(char* sParam0)//Position - 0xC7D9
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_253()//Position - 0xC7E7
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

int func_254()//Position - 0xC803
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18051A)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_255(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xC81B
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_254() && iParam3 < func_253())
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
					func_252("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam9);
				}
				if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_235(sParam16);
				}
				else
				{
					func_252(&(uParam2->f_1));
				}
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_252("");
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
				if (func_287())
				{
					func_252("");
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
						func_235(&(uParam2->f_68));
					}
					else
					{
						func_252("");
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
					func_252("");
				}
				if (uParam2->f_6C == 6)
				{
					func_252("");
				}
				else
				{
					func_252(&sParam4);
				}
				func_237(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_252("");
					func_252("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_236(uParam2))
				{
					func_235("DPAD_FRIEND");
				}
				else if (func_234(uParam2))
				{
					func_235("DPAD_FRIEND");
				}
				else if (func_233(uParam2))
				{
					func_235("DPAD_CREW");
				}
				else
				{
					func_235("");
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

int func_256(int iParam0)//Position - 0xCB67
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

int func_257(int iParam0, bool bParam1)//Position - 0xCB8B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_159(iParam0)) && !func_262(iParam0))
	{
		iVar0 = func_261();
	}
	iVar1 = func_260(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_258(iVar1);
	}
	return iVar0;
}

int func_258(int iParam0)//Position - 0xCBD5
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_259(iParam0);
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

var func_259(int iParam0)//Position - 0xCC98
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_260(int iParam0)//Position - 0xCCAF
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_44(iParam0)];
		}
	}
	return 4294967295;
}

int func_261()//Position - 0xCCE1
{
	return 21;
}

bool func_262(int iParam0)//Position - 0xCCEB
{
	return func_263(iParam0, 20);
}

bool func_263(int iParam0, int iParam1)//Position - 0xCCFB
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

char* func_264(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xCD16
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

int func_265(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xCEA2
{
	if (func_269(iParam3))
	{
		*fParam1 = (func_266(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_256(iParam3))
	{
		*fParam1 = (func_266(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_266(int iParam0, int iParam1)//Position - 0xCEF2
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
				return func_268(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_267(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_267(float fParam0)//Position - 0xCF95
{
	return (fParam0 / 1.609344f);
}

float func_268(float fParam0)//Position - 0xCFA5
{
	return (fParam0 / 0.3048f);
}

int func_269(int iParam0)//Position - 0xCFB5
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

int func_270(int iParam0)//Position - 0xD011
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	if (iVar0 == 4294967295)
	{
		func_271(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_271(int iParam0, bool bParam1)//Position - 0xD047
{
	if (!func_1202(iParam0, 0, 1))
	{
		return;
	}
	if (func_273(iParam0) != 4294967295)
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
	if (func_272(iParam0))
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

int func_272(int iParam0)//Position - 0xD0B3
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

int func_273(int iParam0)//Position - 0xD0E5
{
	int iVar0;
	
	if (!func_1202(iParam0, 0, 1))
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
			func_274(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_274(int iParam0)//Position - 0xD164
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
	func_275(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_275(var uParam0)//Position - 0xD21A
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

struct<4> func_276(int iParam0)//Position - 0xD247
{
	char cVar0[32];
	
	if (func_1202(iParam0, 0, 1))
	{
		Global_2633E1 = { func_45(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_223(Global_2633E1))
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
		if (func_280(&Global_2633E1))
		{
			Global_26339B = { func_278(iParam0) };
			func_277(&Global_26339B, &cVar0);
		}
	}
	return cVar0;
}

void func_277(var uParam0, char* sParam1)//Position - 0xD2C8
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_278(int iParam0)//Position - 0xD2DA
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_279(iParam0))
	{
		return Global_140879[CAM::_0xDC9DA9E8789F5246() /*35*/];
	}
	Var0 = { func_45(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_279(int iParam0)//Position - 0xD316
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	return 0;
}

int func_280(var uParam0)//Position - 0xD32C
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

int func_281(int iParam0, int iParam1)//Position - 0xD352
{
	if (iParam1 == 26)
	{
		if ((func_285(iParam0) || func_284(iParam0)) || func_283(iParam0))
		{
			return 0;
		}
	}
	if (!func_282(iParam0))
	{
		return 0;
	}
	if ((!func_293(iParam0) && Global_24FBF9[iParam0 /*413*/].f_EC == 4294967295) && !func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_282(int iParam0)//Position - 0xD3C1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

bool func_283(int iParam0)//Position - 0xD3DA
{
	if (func_285(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

int func_284(int iParam0)//Position - 0xD400
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

bool func_285(int iParam0)//Position - 0xD43E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

int func_286(int iParam0)//Position - 0xD456
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_34(iParam0, 0))
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

int func_287()//Position - 0xD49B
{
	switch (func_288(CAM::_0xDC9DA9E8789F5246()))
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
	switch (func_249(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_262(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_288(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_247(CAM::_0xDC9DA9E8789F5246(), 236))
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)//Position - 0xD5D7
{
	if (func_158(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_289(int iParam0, int iParam1)//Position - 0xD5FA
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_290(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_290(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)//Position - 0xD660
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
	return func_291(iParam0, 0);
	return 0;
}

int func_291(int iParam0, int iParam1)//Position - 0xD6BA
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

void func_292(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD70F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((func_293(iVar1) || Global_24FBF9[iVar1 /*413*/].f_EC != 4294967295) || func_142(iVar1))
				{
					if (func_16(iVar1, iParam1, 0))
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

int func_293(int iParam0)//Position - 0xD799
{
	if (func_1202(iParam0, 0, 1))
	{
		if (func_1202(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, CAM::_0xDC9DA9E8789F5246()) || func_288(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_294(int iParam0, int iParam1, int iParam2)//Position - 0xD7DA
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_295(bool bParam0)//Position - 0xD808
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

void func_296()//Position - 0xD83A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
	{
		if (func_298())
		{
			func_297();
		}
	}
}

void func_297()//Position - 0xD85C
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

bool func_298()//Position - 0xD8A7
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

int func_299()//Position - 0xD8BD
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0) && func_298())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1) && func_298())
	{
		return 1;
	}
	return 0;
}

int func_300()//Position - 0xD8FE
{
	if (func_298())
	{
		if (func_301(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_301(int iParam0)//Position - 0xD925
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

int func_302()//Position - 0xD9A5
{
	if (func_298())
	{
		if (func_303(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0)//Position - 0xD9CC
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

void func_304(int iParam0)//Position - 0xDA5E
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

int func_305(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0xDA8C
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_356(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_355();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_354())
		{
			if (func_353() > 0 && Global_18051A)
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
		if (!func_339())
		{
			func_338(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
	{
		func_338(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_13)))
	{
		if (func_353() == 1)
		{
			func_337(bVar3, iParam0, 0);
			func_8(&(uParam2->f_13), 0, 0);
			func_338(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_26862F.f_11E2), 5);
		}
	}
	if (func_9(&(uParam2->f_13)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_13), 10000, 0) || (func_353() == 0 && !bParam5))
		{
			func_338(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_336();
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
					func_336();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_337(bVar3, iParam0, 0))
				{
					func_294(iParam0, 0, 0);
					sVar1 = func_334(iParam1, &(Global_440000.f_1FEE5), bParam4);
					Var0 = { func_332(iParam1) };
					if (bParam4)
					{
						func_329(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 26)
					{
						func_322(iParam0, func_326(uParam2), func_323(uParam2), 4294967295);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_315(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_313(iParam0, sVar5, func_314(), 4294967295);
					}
					else if (func_238())
					{
						uParam2->f_22 = Global_180519;
						func_329(iParam0, sVar1, &Var0, 1, 4294967295, Global_180519, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180519;
						func_329(iParam0, sVar1, "", 0, 4294967295, Global_180519, 1);
					}
					else
					{
						iVar6 = func_306(iParam1);
						func_329(iParam0, sVar1, &Var0, 1, iVar6, 4294967295, 1);
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

int func_306(int iParam0)//Position - 0xDD5F
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_312())
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
			if (func_311(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 20;
			}
			if (func_310(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_309(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 2;
	}
	if (func_307())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_307()//Position - 0xDEAB
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_40();
	}
	return func_308(Global_440000.f_1FEDE);
}

int func_308(int iParam0)//Position - 0xDECF
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

bool func_309(int iParam0)//Position - 0xDF09
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 4;
}

bool func_310(int iParam0)//Position - 0xDF1E
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

bool func_311(int iParam0)//Position - 0xDF33
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_312()//Position - 0xDF48
{
	return Global_440000.f_1 == 0;
}

void func_313(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xDF58
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_235(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_235("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_314()//Position - 0xDFB7
{
	switch (func_288(CAM::_0xDC9DA9E8789F5246()))
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

char* func_315(var uParam0)//Position - 0xE00F
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
	switch (func_288(CAM::_0xDC9DA9E8789F5246()))
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
			if (func_318())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_317(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_317(1))
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
			if (func_316(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_316(int iParam0)//Position - 0xE43B
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

bool func_317(bool bParam0)//Position - 0xE46D
{
	return func_243(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_318()//Position - 0xE47F
{
	return (func_321() && func_319(func_320()));
}

bool func_319(int iParam0)//Position - 0xE498
{
	return func_245(iParam0, 1);
}

int func_320()//Position - 0xE4A7
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23;
}

bool func_321()//Position - 0xE4BE
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148;
}

void func_322(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xE4D4
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_235(sParam1);
		}
		else if (func_249(CAM::_0xDC9DA9E8789F5246()) == 133)
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
		func_235("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_323(var uParam0)//Position - 0xE55B
{
	int iVar0;
	
	iVar0 = func_249(CAM::_0xDC9DA9E8789F5246());
	if (func_325())
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
			switch (func_324())
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

int func_324()//Position - 0xE706
{
	if (func_249(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

bool func_325()//Position - 0xE729
{
	return Global_184174;
}

char* func_326(var uParam0)//Position - 0xE735
{
	int iVar0;
	
	iVar0 = func_249(CAM::_0xDC9DA9E8789F5246());
	if (func_325())
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
			if (func_328() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_328() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_324())
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
			if (func_327() == 1)
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

int func_327()//Position - 0xE92A
{
	return Global_26862F.f_12C7;
}

int func_328()//Position - 0xE939
{
	if (func_249(CAM::_0xDC9DA9E8789F5246()) == 132)
	{
		return Global_26862F.f_12C2;
	}
	return 4294967295;
}

void func_329(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE95C
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_252(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_235(sParam1);
		}
		if (func_354() && iParam6)
		{
			if (func_331())
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
			func_235(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (func_330(CAM::_0xDC9DA9E8789F5246()))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(166);
			}
			else if (func_40())
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(220);
			}
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_330(int iParam0)//Position - 0xEA1D
{
	if (func_311(iParam0) || func_310(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_331()//Position - 0xEA3F
{
	return Global_18051A;
}

struct<4> func_332(int iParam0)//Position - 0xEA4B
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_333(CAM::_0xDC9DA9E8789F5246()) || func_309(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_238() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_26, 16);
	}
	return Var0;
}

bool func_333(int iParam0)//Position - 0xEAE6
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 5;
}

char* func_334(int iParam0, char* sParam1, bool bParam2)//Position - 0xEAFB
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_238() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_335();
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

char* func_335()//Position - 0xEC5F
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

void func_336()//Position - 0xECA3
{
	Global_90A3 = 1;
}

bool func_337(bool bParam0, int iParam1, bool bParam2)//Position - 0xECAF
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

void func_338(int iParam0, var uParam1, bool bParam2)//Position - 0xECEF
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 7);
	Global_180518 = 0;
	func_227();
	Global_180517 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_13)))
		{
			func_228(&(uParam1->f_13));
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

int func_339()//Position - 0xED61
{
	if (func_352())
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (!func_349())
	{
		return 0;
	}
	if (!func_347())
	{
		return 0;
	}
	if (func_346(8, 4294967295))
	{
		return 0;
	}
	if (func_353() == 2)
	{
		return 0;
	}
	if (Global_26862F.f_11B2)
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	else if (!func_75(CAM::_0xDC9DA9E8789F5246(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_344(1) || func_342(1)) || Global_434C.f_7C) || Global_434C)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_341() && Global_19BACA == 2)
	{
		return 0;
	}
	if (func_118(CAM::_0xDC9DA9E8789F5246()) && !func_341())
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
	if (func_340(0))
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

bool func_340(int iParam0)//Position - 0xEEC9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_27, iParam0);
}

bool func_341()//Position - 0xEEE0
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

int func_342(bool bParam0)//Position - 0xEF02
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_343(AUDIO::_0x0626A247D2405330()))
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

int func_343(int iParam0)//Position - 0xEFED
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

bool func_344(bool bParam0)//Position - 0xF04A
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

bool func_345()//Position - 0xF073
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_346(int iParam0, int iParam1)//Position - 0xF08A
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

int func_347()//Position - 0xF0C5
{
	if (func_348() == 0)
	{
		return 1;
	}
	return 0;
}

int func_348()//Position - 0xF0DA
{
	return Global_1406D2.f_12;
}

int func_349()//Position - 0xF0E8
{
	if (func_350())
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

bool func_350()//Position - 0xF127
{
	return Global_1406B6;
}

bool func_351()//Position - 0xF133
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 5;
}

bool func_352()//Position - 0xF148
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_353()//Position - 0xF15D
{
	return Global_14E0B5.f_44;
}

int func_354()//Position - 0xF16B
{
	if (Global_180519 > 16)
	{
		return 1;
	}
	return 0;
}

float func_355()//Position - 0xF181
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_356(int iParam0)//Position - 0xF1A5
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

int func_357()//Position - 0xF1CE
{
	if (func_358(CAM::_0xDC9DA9E8789F5246()))
	{
		return Global_141784;
	}
	return 0;
}

int func_358(int iParam0)//Position - 0xF1E9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_34(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_359()//Position - 0xF20C
{
	if (func_357())
	{
		return 1;
	}
	if (func_283(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_325())
	{
		return 1;
	}
	if (func_159(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_249(CAM::_0xDC9DA9E8789F5246()))
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
				if (!func_360(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_360(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_360(CAM::_0xDC9DA9E8789F5246()))
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

bool func_360(int iParam0)//Position - 0xF2E7
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

int func_361(int iParam0)//Position - 0xF2FF
{
	if (iParam0 == 27)
	{
		if ((func_159(CAM::_0xDC9DA9E8789F5246()) && !func_262(CAM::_0xDC9DA9E8789F5246())) && !func_247(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_158(CAM::_0xDC9DA9E8789F5246(), 0) && func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
		if (func_362(CAM::_0xDC9DA9E8789F5246()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_362(int iParam0)//Position - 0xF370
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_159(iParam0) && !func_285(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8));
	bVar2 = func_262(iParam0);
	uVar3 = func_375();
	uVar4 = func_366();
	if ((bVar1 && (func_248(iParam0) || func_365(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_364(iParam0)) && !func_363(iParam0)))
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

bool func_363(int iParam0)//Position - 0xF42E
{
	return func_263(iParam0, 19);
}

int func_364(int iParam0)//Position - 0xF43E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_263(iParam0, 9);
	}
	return 0;
}

int func_365(int iParam0)//Position - 0xF45C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_366()//Position - 0xF482
{
	if ((func_263(CAM::_0xDC9DA9E8789F5246(), 21) || func_263(CAM::_0xDC9DA9E8789F5246(), 22)) || func_372())
	{
		return 1;
	}
	if (func_368())
	{
		func_367(22);
		return 1;
	}
	return 0;
}

void func_367(int iParam0)//Position - 0xF4C7
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

int func_368()//Position - 0xF4E4
{
	if (func_158(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if ((func_375() && !func_371()) || func_370(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			return 1;
		}
		else
		{
			func_369(27);
		}
	}
	return 0;
}

void func_369(int iParam0)//Position - 0xF527
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

bool func_370(int iParam0, int iParam1)//Position - 0xF544
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

bool func_371()//Position - 0xF55D
{
	return Global_1406A0.f_1;
}

bool func_372()//Position - 0xF56B
{
	return func_373(306, 4294967295);
}

int func_373(int iParam0, int iParam1)//Position - 0xF57B
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_374(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_374(int iParam0)//Position - 0xF5A7
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_36();
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

bool func_375()//Position - 0xF5DB
{
	return Global_1406A0;
}

bool func_376()//Position - 0xF5E7
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 5);
}

void func_377()//Position - 0xF5FE
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
				func_378(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_378(int iParam0)//Position - 0xF63B
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (func_1077() == 1)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 11))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 15))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 16))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 15))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 10))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0))
									{
										if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
										{
											iVar5 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0);
											if (iVar5 == NETWORK::NET_TO_VEH(Local_110.f_1D[0]))
											{
												if (Var0.f_3)
												{
													if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
													{
														if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
														{
															iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
															if (PED::IS_PED_A_PLAYER(iVar1))
															{
																iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
																if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
																{
																	if (iVar3 == CAM::_0xDC9DA9E8789F5246())
																	{
																		MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 11);
																		if (!func_263(CAM::_0xDC9DA9E8789F5246(), 20))
																		{
																			if (func_376())
																			{
																				func_381(0);
																				func_379();
																			}
																		}
																	}
																}
																else
																{
																	MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 16);
																}
															}
															else
															{
																MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 15);
															}
														}
													}
												}
												else if (!func_263(CAM::_0xDC9DA9E8789F5246(), 20))
												{
													if (func_376())
													{
														if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
														{
															if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
															{
																iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																if (PED::IS_PED_A_PLAYER(iVar1))
																{
																	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
																	if (iVar3 == CAM::_0xDC9DA9E8789F5246())
																	{
																		func_381(0);
																		func_379();
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_1077() == 2)
		{
			iVar6 = 0;
			while (iVar6 < 15)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iVar6]))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_2, iVar6))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
								if (iVar2 == NETWORK::NET_TO_PED(Local_110.f_D[iVar6]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
									{
										if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
										{
											iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
											if (PED::IS_PED_A_PLAYER(iVar1))
											{
												iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
												if (iVar3 == CAM::_0xDC9DA9E8789F5246())
												{
													MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_2), iVar6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar6++;
			}
		}
		if (func_376())
		{
			if (!func_263(CAM::_0xDC9DA9E8789F5246(), 20))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
									if (PED::IS_PED_A_PLAYER(iVar1))
									{
										iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
										if (iVar3 == CAM::_0xDC9DA9E8789F5246())
										{
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
											{
												iVar7 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
												if (iVar7 == Local_110.f_5)
												{
													func_381(0);
													func_379();
												}
												else if (iVar7 == Local_110.f_7)
												{
													func_381(0);
													func_379();
												}
												else if (func_19(iVar4, 1))
												{
													if (Local_110.f_8 > 4294967295)
													{
														iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_8));
														if (func_16(iVar4, iVar8, 1))
														{
															func_381(0);
															func_379();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_379()//Position - 0xF985
{
	if (!func_380(CAM::_0xDC9DA9E8789F5246()))
	{
		func_367(25);
	}
}

bool func_380(int iParam0)//Position - 0xF99F
{
	return func_263(iParam0, 25);
}

void func_381(int iParam0)//Position - 0xF9AF
{
	if (!func_262(CAM::_0xDC9DA9E8789F5246()))
	{
		if (iParam0 || func_362(CAM::_0xDC9DA9E8789F5246()) != 0)
		{
			func_367(20);
			if (func_159(CAM::_0xDC9DA9E8789F5246()))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 8);
				}
			}
		}
	}
}

void func_382()//Position - 0xFA16
{
	struct<8> Var0;
	
	switch (Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5)
	{
		case 0:
			if (func_1093())
			{
				Var0 = { func_1056() };
				func_1055(86, "BIGM_ASLTN", &Var0, 1, 4294967295, 2, 1);
				func_1030(4294967295, 0, 0, 4294967295, 0, 0);
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 1;
			}
			else
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 2;
			}
			break;
		
		case 1:
			func_1024();
			func_1021();
			func_1020();
			func_1011();
			func_1007();
			func_1004();
			func_1003();
			func_1002();
			func_700();
			if (Local_110.f_33 == 2)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					HUD::REMOVE_BLIP(&iLocal_121);
				}
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 2;
			}
			else if (Local_110.f_33 == 3)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 3;
			}
			else if (Local_110.f_33 == 4)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 4;
			}
			break;
		
		case 2:
			func_699();
			func_1024();
			func_683();
			func_1021();
			func_1020();
			func_660();
			func_577();
			func_1011();
			func_528();
			func_527();
			func_1004();
			func_525();
			func_1003();
			func_434();
			func_1002();
			func_700();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 1))
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 3;
			}
			else if (Local_110.f_33 == 3)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 3;
			}
			else if (Local_110.f_33 == 4)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 4;
			}
			else if (func_425())
			{
				MISC::SET_BIT(&iLocal_112, 24);
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_110.f_33 == 4)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 = 4;
			}
			break;
		
		case 4:
			func_1112();
			break;
	}
	if (Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 < 3)
	{
		func_383();
	}
}

void func_383()//Position - 0xFBE2
{
	vector3 vVar0;
	
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (func_1077() == 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
		{
			vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_1D[0]), false) };
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
	{
		vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_C), false) };
	}
	if (!func_424(vVar0, 0f, 0f, 0f, 0))
	{
		func_384(159, vVar0, &uLocal_134, 1140457472, 1144750080, 0);
	}
}

void func_384(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0xFC70
{
	float fVar0;
	float fVar1;
	
	if ((((func_159(CAM::_0xDC9DA9E8789F5246()) && !func_285(CAM::_0xDC9DA9E8789F5246())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 8)) && (func_248(CAM::_0xDC9DA9E8789F5246()) || func_365(CAM::_0xDC9DA9E8789F5246()))) || func_39(vParam1))
	{
		return;
	}
	Global_196EED = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vParam1);
	func_422(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_364(CAM::_0xDC9DA9E8789F5246()) || func_421(CAM::_0xDC9DA9E8789F5246()))
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
		if (!func_370(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			func_420(vParam1, 1, 0);
		}
		if (!*uParam2 && func_1202(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 1;
			if (func_419(iParam0))
			{
				GRAPHICS::_0x54E22EA2C1956A8D(func_418(iParam0));
				if (func_417(iParam0, 4294967295))
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
			if (func_416(iParam0))
			{
				fVar1 = func_415(iParam0);
				if (fVar1 != 1f)
				{
					func_412(fVar1);
					MISC::SET_BIT(&(Global_196EED.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_411(iParam0) && func_364(CAM::_0xDC9DA9E8789F5246()))
				{
					func_409(1);
					func_408(2);
				}
			}
			func_367(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_263(CAM::_0xDC9DA9E8789F5246(), 19))
			{
				func_369(19);
			}
		}
		if (*uParam2 && func_1202(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 0;
			if (func_419(iParam0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0))
				{
					GRAPHICS::_0x54E22EA2C1956A8D(1f);
					HUD::_0x14621BB1DF14E2B2(5);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 0);
				}
			}
			if (func_416(iParam0))
			{
				func_407();
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 1);
			}
			if (iParam5 && !func_159(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_288(CAM::_0xDC9DA9E8789F5246()) != 152)
				{
					func_386();
				}
			}
			if (func_340(2))
			{
				func_409(0);
				func_385(2);
			}
		}
	}
}

void func_385(int iParam0)//Position - 0xFEE3
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_27), iParam0);
}

void func_386()//Position - 0xFEFA
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_405();
	func_389(1, 1, 0);
	func_387();
}

void func_387()//Position - 0xFF30
{
	func_388(0, 0);
}

void func_388(int iParam0, int iParam1)//Position - 0xFF3E
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_389(bool bParam0, bool bParam1, bool bParam2)//Position - 0xFF56
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
		func_404();
	}
	if (!bParam2)
	{
		func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_391(0);
	func_390();
}

void func_390()//Position - 0xFFF5
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_391(bool bParam0)//Position - 0x1001C
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

void func_392(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1003C
{
	if (bParam0)
	{
		if (func_403())
		{
			func_402();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_400();
		func_396(8, 0, 0, 0, 0);
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
		func_393();
	}
}

void func_393()//Position - 0x10103
{
	if (func_403() && !func_395())
	{
		func_402();
	}
	if (func_395())
	{
		func_394();
	}
	else
	{
		func_400();
		func_396(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_394()//Position - 0x1014B
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_395()//Position - 0x10193
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x101D2
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_18())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_397())
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

int func_397()//Position - 0x10271
{
	if (((func_288(CAM::_0xDC9DA9E8789F5246()) == 229 || func_288(CAM::_0xDC9DA9E8789F5246()) == 191) || func_399()) || func_398())
	{
		return 0;
	}
	return 1;
}

var func_398()//Position - 0x102B1
{
	return Global_1805F4;
}

int func_399()//Position - 0x102BD
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_400()//Position - 0x102D2
{
	if (func_403() && !func_395())
	{
		func_402();
	}
	func_401();
	Global_24B2CE.f_2BF = 0;
}

void func_401()//Position - 0x102FB
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

void func_402()//Position - 0x10336
{
	if (func_395())
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

int func_403()//Position - 0x103A4
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_404()//Position - 0x103E3
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_405()//Position - 0x103FC
{
	func_406();
	Global_24B2CE.f_8C5 = 0;
}

void func_406()//Position - 0x10410
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

void func_407()//Position - 0x1043C
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

void func_408(int iParam0)//Position - 0x10483
{
	MISC::SET_BIT(&(Global_26862F.f_1313.f_27), iParam0);
}

void func_409(int iParam0)//Position - 0x1049A
{
	if (func_410() && iParam0)
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

int func_410()//Position - 0x104CF
{
	if ((((Global_EC6C9 != 4294967295 && Global_EC6C9 != 33) && Global_EC6C9 != 35) && Global_EC6C9 != 37) && Global_EC6C9 != 21)
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)//Position - 0x10515
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

void func_412(float fParam0)//Position - 0x10565
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_413())
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

int func_413()//Position - 0x105D1
{
	switch (func_414())
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

int func_414()//Position - 0x10605
{
	return Global_6373;
}

float func_415(int iParam0)//Position - 0x10610
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

int func_416(int iParam0)//Position - 0x107A4
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

int func_417(int iParam0, int iParam1)//Position - 0x1086C
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

float func_418(int iParam0)//Position - 0x109ED
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

int func_419(int iParam0)//Position - 0x10AA5
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

void func_420(vector3 vParam0, int iParam1, int iParam2)//Position - 0x10BA3
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

int func_421(int iParam0)//Position - 0x10BCD
{
	if (func_20(iParam0))
	{
		if (func_364(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_422(int iParam0, float fParam1)//Position - 0x10BEC
{
	int iVar0;
	
	iVar0 = func_423(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_379();
	}
}

int func_423(int iParam0)//Position - 0x10C12
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

bool func_424(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x10C88
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_425()//Position - 0x10CCF
{
	bool bVar0;
	
	if (func_428())
	{
		bVar0 = true;
	}
	else if (func_427())
	{
		bVar0 = true;
	}
	else if (func_426(CAM::_0xDC9DA9E8789F5246()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), AUDIO::_0x0626A247D2405330()))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 2))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 2);
				}
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 1);
				OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_110.f_C));
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 0);
				unk_0x6EA08575DF560580(NETWORK::NET_TO_OBJ(Local_110.f_C), false);
			}
		}
	}
	return bVar0;
}

int func_426(int iParam0)//Position - 0x10D7B
{
	return Global_1841F3[iParam0 /*790*/].f_C4;
}

bool func_427()//Position - 0x10D8E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 20);
}

int func_428()//Position - 0x10DA0
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_17E.f_5, 0))
	{
		return 1;
	}
	if (func_430() && Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_62 != 3)
	{
		return 1;
	}
	if (func_429() && Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_62 != 3)
	{
		return 1;
	}
	if (Global_248A90)
	{
		return 1;
	}
	if (Global_1806E7.f_14)
	{
		return 1;
	}
	return 0;
}

bool func_429()//Position - 0x10E14
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 5);
}

int func_430()//Position - 0x10E25
{
	if (((func_433() || func_427()) || func_432()) || func_431())
	{
		return 1;
	}
	return 0;
}

bool func_431()//Position - 0x10E57
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 1);
}

bool func_432()//Position - 0x10E68
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02, 2);
}

bool func_433()//Position - 0x10E79
{
	return Global_255C02.f_24B;
}

void func_434()//Position - 0x10E88
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
	{
		if (func_1093())
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
			{
				if (func_436(82, func_524(), 0, 0))
				{
					MISC::SET_BIT(&iLocal_112, 6);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_112, 6);
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 15))
	{
		if (func_1077() == 0 || func_1077() == 3)
		{
			if (func_1093())
			{
				if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
				{
					if (Local_110.f_5 != 4294967295 || Local_110.f_7 != 4294967295)
					{
						if (func_436(82, func_435(), 0, 0))
						{
							MISC::SET_BIT(&iLocal_112, 15);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_112, 15);
			}
		}
	}
}

char* func_435()//Position - 0x10F3F
{
	switch (func_1077())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_436(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x10F6D
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = 4294967197;
	return func_437(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_437(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10F96
{
	var uVar0;
	int iVar1;
	
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_438(&uVar0, iParam0, func_523(), sParam1, iVar1, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, 4294967295);
}

int func_438(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x10FCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_522(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_521(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_515(iParam6))
	{
		return 0;
	}
	if (func_512(iVar0, iVar1, iVar2))
	{
		if (func_511())
		{
			return 0;
		}
		func_510();
		return func_445(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_444(iParam4))
	{
		return 0;
	}
	func_439(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_439(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x110B4
{
	Global_14C73C.f_28.f_1 = iParam0;
	Global_14C73C.f_28.f_2 = iParam1;
	Global_14C73C.f_28.f_3 = iParam2;
	StringCopy(&(Global_14C73C.f_28.f_4), sParam3, 16);
	Global_14C73C.f_28.f_8 = iParam4;
	Global_14C73C.f_28.f_9 = iParam5;
	Global_14C73C.f_28.f_E = iParam6;
	func_440(iParam4);
	func_510();
	Global_14C73C.f_28.f_D = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 7000);
}

void func_440(int iParam0)//Position - 0x11121
{
	if (func_443(iParam0))
	{
		func_442();
		return;
	}
	func_441();
}

void func_441()//Position - 0x1113D
{
	Global_14C73C.f_28.f_A = 0;
}

void func_442()//Position - 0x1114E
{
	Global_14C73C.f_28.f_A = 1;
}

int func_443(int iParam0)//Position - 0x1115F
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_444(int iParam0)//Position - 0x111A7
{
	return iParam0 > Global_14C73C.f_28.f_8;
}

int func_445(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x111BA
{
	struct<2> Var0;
	
	func_509();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_506(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_503(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_506(uParam0, sParam3, sParam4);
		}
		return func_487(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_486(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_476(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_475(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_446(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_446(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x112B4
{
	bool bVar0;
	
	func_474();
	bVar0 = true;
	if (func_448(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_447(120000);
		return 1;
	}
	return 0;
}

void func_447(int iParam0)//Position - 0x112EB
{
	Global_14C73C.f_28.f_B = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam0);
	Global_14C73C.f_28.f_C = 1;
}

int func_448(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x1130E
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_270(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(HUD::_0x13C4B962653A5280(), Global_14C73C.f_28.f_D))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_473(sParam5, bParam6, &iVar3);
	uVar5 = func_471(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_470(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_452(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 0))
	{
		func_451();
	}
	func_474();
	func_450();
	func_449();
	return 1;
}

void func_449()//Position - 0x11460
{
	Global_14C73C.f_39 = 0;
	Global_14C73C.f_39.f_1 = 0;
}

void func_450()//Position - 0x11478
{
	Global_14C73C.f_28 = 3;
}

void func_451()//Position - 0x11487
{
	MISC::SET_BIT(&Global_94F, 8);
}

int func_452(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x11498
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = 4294967197;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_453(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_C12 = iParam6;
			MISC::SET_BIT(&Global_41212A, 0);
		}
		return 1;
	}
	return 0;
}

int func_453(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x11504
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_464();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_38B1 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_38B1 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_38B1 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
			{
				return 0;
			}
		}
		if (Global_41211B == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_463() == 0)
	{
		func_461();
		return 0;
	}
	func_460(Global_41211A);
	StringCopy(&(Global_411C39[Global_41211A /*104*/]), sParam1, 64);
	Global_411C39[Global_41211A /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_411C39[Global_41211A /*104*/].f_18 = iParam2;
	}
	Global_411C39[Global_41211A /*104*/].f_19 = iParam7;
	Global_411C39[Global_41211A /*104*/].f_1A = uParam8;
	Global_411C39[Global_41211A /*104*/].f_1D = uParam9;
	Global_411C39[Global_41211A /*104*/].f_1E = uParam12;
	Global_411C39[Global_41211A /*104*/].f_1F = uParam11;
	Global_411C39[Global_41211A /*104*/].f_1C = 0;
	Global_411C39[Global_41211A /*104*/].f_20 = iParam3;
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_21), sParam4, 64);
	Global_411C39[Global_41211A /*104*/].f_31 = iParam6;
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_32), sParam5, 64);
	Global_411C39[Global_41211A /*104*/].f_42 = iParam13;
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_53), sParam15, 64);
	func_464();
	switch (iParam16)
	{
		case 3:
			Global_411C39[Global_41211A /*104*/].f_63[Global_38B1] = 1;
			break;
		
		case 0:
			Global_411C39[Global_41211A /*104*/].f_63[0] = 1;
			break;
		
		case 2:
			Global_411C39[Global_41211A /*104*/].f_63[2] = 1;
			break;
		
		case 1:
			Global_411C39[Global_41211A /*104*/].f_63[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_38B1)
		{
			case 0:
				func_459(0);
				break;
			
			case 1:
				func_459(1);
				break;
			
			case 2:
				func_459(2);
				break;
			
			case 3:
				func_459(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_41211B = 1;
				break;
			
			case 0:
				Global_41211B = 1;
				break;
			
			case 2:
				Global_41211B = 1;
				break;
			
			case 1:
				Global_41211B = 1;
				break;
			}
	}
	Global_41FB[Global_41211A] = 0;
	if (bParam10)
	{
		func_464();
		if (Global_3878)
		{
			StringCopy(&Global_38A6, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_38B1)
			{
				case 0:
					StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_458())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, 1);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_457(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_454(1);
			func_457(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

void func_454(int iParam0)//Position - 0x118C6
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
	
	Global_41FA = 0;
	Global_BAC = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B88[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_456(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar2 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar2 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_235(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_455(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19E56.f_3721[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19E56.f_3721[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19E56.f_3721[iVar3 /*104*/].f_63[Global_38B1] == 1)
											{
												Global_41FA++;
											}
										}
									}
									iVar3++;
								}
								func_455(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11625)
								{
									iVar4 = 0;
									iVar4 = Global_411C38;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_411C39[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_411C39[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_411C39[iVar5 /*104*/].f_63[Global_38B1] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_455(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_38B1)
									{
										case 0:
											iVar6 = Global_919C;
											break;
										
										case 1:
											iVar6 = Global_919D;
											break;
										
										case 2:
											iVar6 = Global_919E;
											break;
										
										default:
											break;
									}
									func_455(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_455(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_235(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_955);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 2)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_235(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar8 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar8 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_235(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar8);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_235(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_956[iVar1 /*15*/]), "CELL_BENWEB")) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_235(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_455(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_455(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_455(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x11E5F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_235(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_235(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_235(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_235(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_235(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

bool func_456(int iParam0)//Position - 0x11F12
{
	return Global_8D15 == iParam0;
}

void func_457(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x11F20
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

bool func_458()//Position - 0x11F83
{
	return Global_140859;
}

void func_459(int iParam0)//Position - 0x11F8F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19E56.f_36C7[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_460(int iParam0)//Position - 0x11FAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_411C39[iParam0 /*104*/].f_12 = iVar0;
	Global_411C39[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_411C39[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_411C39[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_411C39[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_411C39[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_461()//Position - 0x1202E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_41211A = 11;
	Global_411C39[Global_41211A /*104*/].f_12 = 4294967295;
	Global_411C39[Global_41211A /*104*/].f_12.f_1 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_2 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_3 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_462(Global_411C39[iVar2 /*104*/].f_12, Global_411C39[Global_41211A /*104*/].f_12))
		{
			Global_41211A = iVar2;
		}
		iVar2++;
	}
	Global_411C39[Global_41211A /*104*/].f_18 = 1;
}

int func_462(struct<6> Param0, struct<6> Param1)//Position - 0x120D8
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_463()//Position - 0x121C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_411C39[iVar2 /*104*/].f_18 == 0)
		{
			Global_41211A = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41211A = 11;
	Global_411C39[Global_41211A /*104*/].f_12 = 4294967295;
	Global_411C39[Global_41211A /*104*/].f_12.f_1 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_2 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_3 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_411C39[iVar2 /*104*/].f_18 == 0 || Global_411C39[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_462(Global_411C39[iVar2 /*104*/].f_12, Global_411C39[Global_41211A /*104*/].f_12))
			{
				Global_41211A = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_41211A == 11)
	{
		return 0;
	}
	Global_411C39[Global_41211A /*104*/].f_63[0] = 0;
	Global_411C39[Global_41211A /*104*/].f_63[1] = 0;
	Global_411C39[Global_41211A /*104*/].f_63[2] = 0;
	return 1;
}

void func_464()//Position - 0x122EE
{
	if (func_456(14))
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
		Global_38B1 = func_465();
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

var func_465()//Position - 0x12390
{
	func_466();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_466()//Position - 0x123A9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_469(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_468(AUDIO::_0x0626A247D2405330());
			if (func_467(iVar0) && (!func_456(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_467(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_467(int iParam0)//Position - 0x124A6
{
	return iParam0 < 3;
}

int func_468(int iParam0)//Position - 0x124B2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_469(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_469(int iParam0)//Position - 0x124EF
{
	if (func_467(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_470(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x12519
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_453(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_C12 = iParam10;
			MISC::SET_BIT(&Global_41212A, 0);
		}
		return 1;
	}
	return 0;
}

int func_471(int iParam0, int iParam1)//Position - 0x1259B
{
	if (iParam0 == 4294967197)
	{
		return 4294967197;
	}
	func_472(2, iParam1);
	return iParam0;
}

void func_472(int iParam0, var uParam1)//Position - 0x125BA
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_473(char* sParam0, bool bParam1, int iParam2)//Position - 0x1266B
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_472(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

void func_474()//Position - 0x126A8
{
	Global_14C73C.f_28.f_9 = 4;
}

int func_475(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x126B9
{
	bool bVar0;
	
	func_474();
	bVar0 = false;
	return func_448(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_476(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x126E0
{
	bool bVar0;
	
	bVar0 = false;
	return func_477(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_477(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x12703
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_270(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(HUD::_0x13C4B962653A5280(), Global_14C73C.f_28.f_D))
			{
				return 0;
			}
		}
		Global_41F3 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_473(sParam5, bParam6, &iVar3);
	uVar5 = func_471(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_485(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_479(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 0))
	{
		func_451();
	}
	func_478();
	func_450();
	func_449();
	return 1;
}

void func_478()//Position - 0x1285A
{
	Global_14C73C.f_28.f_9 = 3;
}

int func_479(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x1286B
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = 4294967197;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_480(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_C12 = iParam6;
			Global_BB1[3 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
			Global_BFE = iParam0;
			MISC::SET_BIT(&Global_94F, 1);
			MISC::SET_BIT(&Global_94F, 7);
		}
		return 1;
	}
	return 0;
}

int func_480(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x12903
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_464();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_38B1 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_38B1 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_38B1 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
			{
				return 0;
			}
		}
		if (Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_484() == 0)
	{
		func_482();
		return 0;
	}
	func_481(Global_41F9);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/]), sParam1, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = iParam2;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_19 = iParam7;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1A = uParam8;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1D = uParam9;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1E = uParam12;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1F = uParam11;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1C = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_21), sParam4, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_32), sParam5, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_53), sParam15, 64);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
		Global_C11 = 4;
		func_459(0);
		func_459(2);
		func_459(1);
	}
	else
	{
		func_464();
		switch (iParam16)
		{
			case 3:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[Global_38B1] = 1;
				break;
			
			case 0:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_38B1)
			{
				case 0:
					func_459(0);
					Global_C11 = 0;
					break;
				
				case 1:
					func_459(1);
					Global_C11 = 1;
					break;
				
				case 2:
					func_459(2);
					Global_C11 = 2;
					break;
				
				case 3:
					func_459(3);
					Global_C11 = 3;
					break;
				
				default:
					Global_C11 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
		{
			Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_41FB[Global_41F9] = 0;
	if (bParam10)
	{
		func_464();
		if (Global_3878)
		{
			StringCopy(&Global_38A6, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_38B1)
			{
				case 0:
					StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_458())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, 1);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_457(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_454(1);
			func_457(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

void func_481(int iParam0)//Position - 0x12DB9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_19E56.f_3721[iParam0 /*104*/].f_12 = iVar0;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_482()//Position - 0x12E4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_483(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
		{
			Global_41F9 = iVar2;
		}
		iVar2++;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = 1;
}

int func_483(struct<6> Param0, struct<6> Param1)//Position - 0x12F16
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_484()//Position - 0x13001
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0)
		{
			Global_41F9 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0 || Global_19E56.f_3721[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_483(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
			{
				Global_41F9 = iVar2;
			}
		}
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_41F9 == 34)
	{
		return 0;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 0;
	return 1;
}

int func_485(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x13169
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 10);
	iVar0 = 3;
	if (func_480(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_C12 = iParam10;
			Global_BB1[3 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
			Global_BFE = iParam0;
			StringCopy(&Global_BFF, sParam5, 64);
			MISC::SET_BIT(&Global_94F, 1);
			MISC::SET_BIT(&Global_94F, 7);
		}
		return 1;
	}
	return 0;
}

int func_486(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x1321E
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	func_478();
	bVar0 = true;
	if (func_477(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_447(120000);
		return 1;
	}
	return 0;
}

int func_487(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x13270
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 4))
	{
		bVar0 = func_502(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_493(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 3))
		{
			func_492(1);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 5))
		{
			func_491(1);
		}
		func_490();
		func_450();
		func_489();
		func_488();
		return 1;
	}
	return 0;
}

void func_488()//Position - 0x13313
{
	Global_26A91B = 0;
}

void func_489()//Position - 0x13320
{
	Global_14C73C.f_39 = 1;
	Global_14C73C.f_39.f_1 = 0;
}

void func_490()//Position - 0x13338
{
	Global_14C73C.f_28.f_9 = 1;
}

void func_491(int iParam0)//Position - 0x13349
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_951, 0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
	}
}

void func_492(int iParam0)//Position - 0x1336A
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 20);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
	}
}

int func_493(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1338D
{
	func_501(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	Global_280001 = 0;
	return func_494(sParam3, iParam4, bParam7);
}

int func_494(char* sParam0, int iParam1, bool bParam2)//Position - 0x133DB
{
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam1 > Global_3DD0)
			{
				if (Global_3DD5 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
					Global_3DD9 = 0;
					Global_3DD8 = 0;
					Global_38B0 = 0;
				}
				else
				{
					func_500();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_346(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_499();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_41B2 = Global_41B3;
		Global_3C51.f_172 = Global_41AB;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3DCA = Global_3DCB;
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam2)
			{
				func_464();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_38B1.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_388F == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (func_498())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11625)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
				}
			}
			if (func_497())
			{
				return 0;
			}
			else
			{
				switch (Global_38B1.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
				{
					return 0;
				}
			}
			func_496();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_495();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DD0 || iParam1 == Global_3DD0)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_500();
	}
	return 0;
}

void func_495()//Position - 0x136A7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_3962[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_3DCE = 1;
}

void func_496()//Position - 0x136D8
{
	Global_3E03 = Global_3E02;
	Global_3DFD = Global_3DFE;
	Global_3E2C = { Global_3E20 };
	Global_3E32 = { Global_3E26 };
	Global_3E05 = Global_3E04;
	Global_3E4A = { Global_3E38 };
	Global_3E50 = { Global_3E3E };
	Global_3E56 = { Global_3E44 };
	Global_3E5C = { Global_3E62 };
	Global_6A2 = Global_6A3;
	Global_6A4 = Global_6A5;
	Global_3DD9 = Global_3DDA;
	Global_3DDB = Global_3DDC;
	Global_3DDD = { Global_3DED };
	Global_3DD2 = Global_3DD3;
	Global_41C6 = 0;
	Global_3DFF = 0;
	Global_3E00 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 16);
}

int func_497()//Position - 0x1376D
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_498()//Position - 0x13794
{
	int iVar0;
	int iVar1;
	
	if (Global_11625)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_499()//Position - 0x1382D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3B07[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3B07[iVar0 /*10*/].f_1), "", 24);
		Global_3B07[iVar0 /*10*/].f_7 = 0;
		Global_3B07[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3B07.f_A1 = 4294967197;
	Global_3B07.f_A2 = { 0f, 0f, 0f };
}

void func_500()//Position - 0x13884
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

void func_501(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x138DB
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = iParam5;
	if (iParam3 == 0)
	{
		Global_41A9 = 1;
		Global_41A7 = 0;
	}
	else
	{
		Global_41A9 = 0;
		Global_41A7 = 1;
	}
	if (iParam4 == 0)
	{
		Global_41AA = 1;
		Global_41A8 = 0;
	}
	else
	{
		Global_41AA = 0;
		Global_41A8 = 1;
	}
}

int func_502(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x13931
{
	func_501(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DFE = 1;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	Global_280001 = 0;
	return func_494(sParam3, iParam4, bParam7);
}

int func_503(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x1397F
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (func_505(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_504();
		func_490();
		func_450();
		func_489();
		func_488();
		return 1;
	}
	return 0;
}

void func_504()//Position - 0x139D1
{
	Global_41C8 = 0;
}

bool func_505(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x139DD
{
	func_501(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 1;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 1;
	Global_3E04 = 0;
	StringCopy(&Global_3E62, sParam5, 24);
	Global_280001 = 0;
	return func_494(sParam3, iParam4, bParam8);
}

int func_506(var uParam0, char* sParam1, char* sParam2)//Position - 0x13A32
{
	if (func_508(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_507();
		func_450();
		func_489();
		return 1;
	}
	return 0;
}

void func_507()//Position - 0x13A5D
{
	Global_14C73C.f_28.f_9 = 2;
}

bool func_508(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13A6E
{
	func_501(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DD7 = 0;
	Global_3DDC = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_280001 = 0;
	return func_494(sParam2, iParam3, 0);
}

void func_509()//Position - 0x13ABC
{
	Global_14C73C.f_37 = Global_14C73C.f_28.f_1;
	Global_14C73C.f_37.f_1 = Global_14C73C.f_28.f_A;
}

void func_510()//Position - 0x13AE2
{
	Global_14C73C.f_28 = 1;
}

bool func_511()//Position - 0x13AF1
{
	return Global_14C73C.f_28 == 1;
}

int func_512(int iParam0, int iParam1, int iParam2)//Position - 0x13B01
{
	if (!func_513(iParam0))
	{
		return 0;
	}
	if (Global_14C73C.f_28.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_14C73C.f_28.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_513(int iParam0)//Position - 0x13B40
{
	if (!func_514())
	{
		return 0;
	}
	if (!Global_14C73C.f_28.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_514()//Position - 0x13B68
{
	if (Global_14C73C.f_28 == 0)
	{
		return 0;
	}
	return 1;
}

int func_515(int iParam0)//Position - 0x13B7F
{
	if (func_520())
	{
		return 0;
	}
	if (func_519())
	{
		return 0;
	}
	if (func_518(0))
	{
		return 0;
	}
	if (Global_1406D2.f_12 != 0)
	{
		return 0;
	}
	if (Global_193F0F || func_517())
	{
		return 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 6))
	{
		if (func_516())
		{
			return 0;
		}
	}
	return 1;
}

bool func_516()//Position - 0x13BE3
{
	return NETWORK::IS_TIME_LESS_THAN(HUD::_0x13C4B962653A5280(), Global_15093F);
}

int func_517()//Position - 0x13BF7
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_518(int iParam0)//Position - 0x13C0F
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

bool func_519()//Position - 0x13C69
{
	return Global_14C73C.f_28 == 3;
}

bool func_520()//Position - 0x13C79
{
	return func_497();
}

int func_521(int iParam0, int iParam1, int iParam2)//Position - 0x13C85
{
	if (!func_519())
	{
		return 0;
	}
	return func_512(iParam0, iParam1, iParam2);
}

int func_522(char* sParam0, char* sParam1)//Position - 0x13CA3
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_523()//Position - 0x13CBD
{
	return "TXTMSG";
}

char* func_524()//Position - 0x13CC9
{
	switch (func_1077())
	{
		case 0:
			return "GB_ASLT_MALT";
		
		case 1:
			return "GB_ASLT_MZAN";
		
		case 2:
			return "GB_ASLT_MAIR";
		
		case 3:
			return "GB_ASLT_MMER";
		
		default:
	}
	return "";
}

void func_525()//Position - 0x13D11
{
	vector3 vVar0;
	
	if (func_1077() == 0)
	{
		vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false) };
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 7))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_526(), true) < 200f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
				{
					MISC::SET_BIT(&iLocal_113, 7);
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_526(), true) < 121f)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
		}
	}
}

Vector3 func_526()//Position - 0x13D83
{
	vector3 vVar0;
	
	switch (func_1077())
	{
		case 0:
			vVar0 = { -1166.252f, 4926.183f, 222.0286f };
			break;
		
		case 1:
			vVar0 = { -2115.022f, 3295.797f, 31.8103f };
			break;
		
		case 2:
			vVar0 = { -1289.853f, -3388.459f, 12.9452f };
			break;
		
		case 3:
			vVar0 = { 542.5379f, -3196.361f, 5.0693f };
			break;
	}
	return vVar0;
}

void func_527()//Position - 0x13E08
{
	int iVar0;
	
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (!func_263(CAM::_0xDC9DA9E8789F5246(), 20))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 18))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), iLocal_133, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), iLocal_133, false);
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 18);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 18);
			}
		}
		else if (WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar0, 1))
		{
			if (iLocal_133 != iVar0)
			{
				iLocal_133 = iVar0;
			}
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 18))
	{
		MISC::SET_BIT(&iLocal_112, 18);
	}
}

void func_528()//Position - 0x13EB5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (!func_539())
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 10))
	{
		if (Local_110.f_33 > 1)
		{
			if (func_537())
			{
				if (!func_536())
				{
					if (!func_535())
					{
						HUD::_0x14621BB1DF14E2B2(func_534());
						MISC::SET_BIT(&iLocal_112, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), func_534(), 0);
						HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
					}
					else if (func_533())
					{
						HUD::_0x14621BB1DF14E2B2(func_534());
						MISC::SET_BIT(&iLocal_112, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), func_534(), 0);
						HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
					}
				}
			}
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
	{
		if (func_537())
		{
			PLAYER::_0xBC9490CA15AEA8FB(CAM::_0xDC9DA9E8789F5246());
			PLAYER::_0x4669B3ED80F24B4E(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (Local_110.f_5 != 4294967295)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 11))
		{
			if (Local_110.f_5 == NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				HUD::_0x14621BB1DF14E2B2(func_534());
				PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), func_534(), 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				MISC::SET_BIT(&iLocal_112, 11);
			}
			else if (func_531())
			{
				iVar0 = func_530();
				if (iVar0 != func_18())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 10))
					{
						HUD::_0x14621BB1DF14E2B2(func_534());
						MISC::SET_BIT(&iLocal_112, 10);
					}
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
						{
							if (func_529(AUDIO::_0x0626A247D2405330(), PLAYER::GET_PLAYER_PED(iVar0), 1) <= 200f)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), func_534(), 0);
								HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
								MISC::SET_BIT(&iLocal_112, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_531())
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 11);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 11))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 11);
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 8))
		{
			iVar1 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
			if (iLocal_125 != iVar1)
			{
				iLocal_125 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_1093())
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), func_526(), true);
					if (fVar2 < 150f)
					{
						PLAYER::_0xBC9490CA15AEA8FB(CAM::_0xDC9DA9E8789F5246());
						PLAYER::_0x4669B3ED80F24B4E(CAM::_0xDC9DA9E8789F5246());
					}
				}
			}
		}
		else if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			if (iLocal_125 > 0)
			{
				HUD::_0x14621BB1DF14E2B2(func_534());
				PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), iLocal_125, 0);
				HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 8);
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 8))
	{
		MISC::SET_BIT(&iLocal_112, 8);
	}
}

float func_529(int iParam0, int iParam1, bool bParam2)//Position - 0x14144
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

int func_530()//Position - 0x141A2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_110.f_5;
	if (iVar1 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

int func_531()//Position - 0x141D7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_530();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	iVar1 = func_532();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_532()//Position - 0x1421F
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_533()//Position - 0x14234
{
	return (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 11) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 12)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 13)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 14));
}

int func_534()//Position - 0x14276
{
	switch (func_1077())
	{
		case 1:
			return Global_40001.f_3033;
		
		case 2:
			return Global_40001.f_3035;
		
		case 0:
			return Global_40001.f_3032;
		
		case 3:
			return Global_40001.f_3034;
		
		default:
	}
	return 5;
}

int func_535()//Position - 0x142C8
{
	switch (func_1077())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_536()//Position - 0x142E4
{
	switch (func_1077())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_537()//Position - 0x14306
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1077();
	switch (iVar0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_526(), true) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
				if (func_538(vVar1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
				if (func_538(vVar1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_526(), true) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_538(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x14400
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_539()//Position - 0x15154
{
	if (!func_541(1, 1, 1))
	{
		return 0;
	}
	if (func_366())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 11))
		{
			if (!func_540())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
				{
					MISC::SET_BIT(&iLocal_113, 11);
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 1);
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_113, 11);
			}
		}
		return 0;
	}
	if (func_362(CAM::_0xDC9DA9E8789F5246()) < 1)
	{
		return 0;
	}
	if (func_1093())
	{
		return 1;
	}
	if (func_376())
	{
		return 1;
	}
	return 0;
}

bool func_540()//Position - 0x151E0
{
	int iVar0;
	
	iVar0 = func_1077();
	return iVar0 == 1;
}

int func_541(bool bParam0, bool bParam1, bool bParam2)//Position - 0x151F2
{
	if (func_576(CAM::_0xDC9DA9E8789F5246(), 29))
	{
		return 0;
	}
	if (func_370(CAM::_0xDC9DA9E8789F5246(), 21))
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
	if (!func_282(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_143(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_575())
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (func_458())
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_76(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!func_347())
	{
		return 0;
	}
	if (func_370(CAM::_0xDC9DA9E8789F5246(), 0) || func_370(CAM::_0xDC9DA9E8789F5246(), 3))
	{
		return 0;
	}
	if ((func_370(CAM::_0xDC9DA9E8789F5246(), 12) || func_370(CAM::_0xDC9DA9E8789F5246(), 14)) || func_370(CAM::_0xDC9DA9E8789F5246(), 13))
	{
		return 0;
	}
	if (func_571(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_546())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_545())
		{
			return 0;
		}
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (func_157(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_517())
	{
		return 0;
	}
	if (func_544(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_543())
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (func_542(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0)//Position - 0x1539B
{
	if (Global_24FBF9[iParam0 /*413*/].f_105.f_4 != 0 || Global_24FBF9[iParam0 /*413*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_543()//Position - 0x153CF
{
	return Global_197632.f_D1F != 4294967295;
}

int func_544(int iParam0)//Position - 0x153E0
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

bool func_545()//Position - 0x1541F
{
	return Global_16C64.f_148 > 0;
}

int func_546()//Position - 0x15430
{
	int iVar0;
	
	iVar0 = func_288(CAM::_0xDC9DA9E8789F5246());
	if (((func_570(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_18) || func_569(CAM::_0xDC9DA9E8789F5246())) || func_568(CAM::_0xDC9DA9E8789F5246())) || func_563(CAM::_0xDC9DA9E8789F5246()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_561(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_560(iVar0) || func_559(iVar0))
		{
			return 1;
		}
	}
	if (func_558(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_559(iVar0))
		{
			return 1;
		}
	}
	if (func_557(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_556(iVar0))
		{
			return 1;
		}
	}
	if (func_555(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_554(iVar0))
		{
			return 1;
		}
	}
	if (func_553(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_552(iVar0))
		{
			return 1;
		}
	}
	if (func_551(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_550(iVar0))
		{
			return 1;
		}
	}
	if (func_55(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_549(iVar0))
		{
			if (func_547(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_547(int iParam0)//Position - 0x15571
{
	if (func_548(iParam0) != func_18())
	{
		return func_548(iParam0) == func_44(iParam0);
	}
	return 0;
}

int func_548(int iParam0)//Position - 0x15597
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_23;
}

int func_549(int iParam0)//Position - 0x155AC
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

int func_550(int iParam0)//Position - 0x155E4
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

int func_551(int iParam0)//Position - 0x15610
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x15657
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_553(int iParam0)//Position - 0x15671
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_554(int iParam0)//Position - 0x156B8
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

int func_555(int iParam0)//Position - 0x156D8
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_556(int iParam0)//Position - 0x1571E
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

int func_557(int iParam0)//Position - 0x15744
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_558(int iParam0)//Position - 0x1578A
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_559(int iParam0)//Position - 0x157D0
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

int func_560(int iParam0)//Position - 0x157F6
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

int func_561(int iParam0)//Position - 0x1584C
{
	if (func_562(Global_1841F3[iParam0 /*790*/].f_111.f_18, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_562(int iParam0, int iParam1)//Position - 0x1586F
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

int func_563(int iParam0)//Position - 0x1594C
{
	if (func_564(Global_1841F3[iParam0 /*790*/].f_111.f_18, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_564(int iParam0, bool bParam1, bool bParam2)//Position - 0x15970
{
	if (bParam2)
	{
		return func_565(CAM::_0xDC9DA9E8789F5246(), 0);
	}
	if (bParam1)
	{
		if (func_565(CAM::_0xDC9DA9E8789F5246(), 0))
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

bool func_565(int iParam0, bool bParam1)//Position - 0x15A4B
{
	if (Global_184156 != func_18())
	{
		if (!func_567(Global_184156))
		{
			return 0;
		}
		if (bParam1)
		{
			if (CAM::_0xDC9DA9E8789F5246() != Global_184156)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_184156 /*413*/].f_C3, 24) || func_566(Global_184156))
				{
					return 1;
				}
			}
		}
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 24);
}

int func_566(int iParam0)//Position - 0x15AB7
{
	if (iParam0 != func_18())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 9);
	}
	return 0;
}

int func_567(int iParam0)//Position - 0x15ADD
{
	if (iParam0 != func_18())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 2);
	}
	return 0;
}

int func_568(int iParam0)//Position - 0x15B09
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_569(int iParam0)//Position - 0x15B4F
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_570(int iParam0)//Position - 0x15B95
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

int func_571(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0x15BC4
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
		if (func_569(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_558(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_568(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_557(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_555(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_553(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_574(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_551(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_573(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_55(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_572(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_572(int iParam0)//Position - 0x15CD7
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_573(int iParam0)//Position - 0x15D1E
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_574(int iParam0)//Position - 0x15D65
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_18())
			{
				return func_56(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

bool func_575()//Position - 0x15DC5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

bool func_576(int iParam0, int iParam1)//Position - 0x15DE1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

void func_577()//Position - 0x15DFC
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	
	if (Local_110.f_3 != 1)
	{
		return;
	}
	if (!func_539())
	{
		if (iLocal_124 != 4294967294)
		{
			if (iLocal_124 > 4294967295)
			{
				iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_124);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
					if (iVar2 != CAM::_0xDC9DA9E8789F5246())
					{
						func_658(iVar2, 421, 0, 0);
						if (!func_1093())
						{
							func_657(iVar2, 1, 0, 0);
							func_656(iVar2, 0, 0, 0);
							func_655(iVar2, 0);
							func_652(iVar2, Global_40001.f_2FD2, 0, 0);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_122))
			{
				HUD::REMOVE_BLIP(&iLocal_122);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
			iLocal_124 = 4294967294;
			func_651();
		}
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_21(Local_110.f_1D[0]))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_1D[0])))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_1D[0]), 4294967295, 0) == AUDIO::_0x0626A247D2405330())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 8))
						{
							MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 8);
							func_379();
							func_381(0);
							if (HUD::DOES_BLIP_EXIST(iLocal_122))
							{
								HUD::REMOVE_BLIP(&iLocal_122);
							}
						}
					}
					else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 8))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 8);
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 8))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 8);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 8))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 8);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 8))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 8);
		}
		if (iLocal_124 != Local_110.f_7)
		{
			if (func_21(Local_110.f_1D[0]))
			{
				if (Local_110.f_7 == 4294967295)
				{
					if (func_539())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
						{
							iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_124);
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
								if (iVar2 != CAM::_0xDC9DA9E8789F5246())
								{
									func_658(iVar2, 421, 0, 0);
									if (!func_1093())
									{
										func_657(iVar2, 1, 0, 0);
										func_656(iVar2, 0, 0, 0);
										func_655(iVar2, 0);
										func_652(iVar2, Global_40001.f_2FD2, 0, 0);
									}
								}
							}
						}
					}
					func_648();
				}
				else
				{
					iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_7);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						if (func_539())
						{
							if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
								if (HUD::DOES_BLIP_EXIST(iLocal_122))
								{
									HUD::REMOVE_BLIP(&iLocal_122);
								}
								if (iVar2 != CAM::_0xDC9DA9E8789F5246())
								{
									if (!func_1093())
									{
										if (!func_646())
										{
											func_658(iVar2, 421, 1, 0);
											func_656(iVar2, 1, 1, 0);
											func_657(iVar2, 1, 1, 0);
											func_655(iVar2, 1);
											func_652(iVar2, Global_40001.f_2FD2, 1, 0);
										}
										else
										{
											func_658(iVar2, 421, 1, 0);
											func_652(iVar2, Global_40001.f_2FD2, 1, 0);
										}
									}
									else if (func_646())
									{
										func_658(iVar2, 421, 1, 0);
										func_652(iVar2, Global_40001.f_2FD2, 1, 0);
									}
									else
									{
										func_658(iVar2, 421, 1, 0);
										func_656(iVar2, 1, 1, 0);
										func_657(iVar2, 1, 1, 0);
										func_655(iVar2, 1);
										func_652(iVar2, Global_40001.f_2FD2, 1, 0);
									}
								}
								if (iVar2 != CAM::_0xDC9DA9E8789F5246())
								{
									func_619("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 1, 0);
								}
							}
						}
					}
				}
				iLocal_124 = Local_110.f_7;
				if (iLocal_124 == 4294967295)
				{
				}
			}
		}
		if (func_539())
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) > 2)
			{
				if (iLocal_124 == 4294967295)
				{
					if (func_1093())
					{
						if (!func_618("GB_AST_RETV"))
						{
							func_615("GB_AST_RETV", 0);
						}
					}
					else if (func_376())
					{
						if (!func_618("GB_AST_DESR"))
						{
							func_615("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_124 == NETSHOP::_NETWORK_SHOP_BASKET_START())
				{
					if (func_1093())
					{
						if (!func_618("GB_AST_DROPV"))
						{
							func_615("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_614();
					if (iVar2 != func_18())
					{
						if (func_1074(1))
						{
							iVar3 = func_532();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_618("GB_AST_DROPBV"))
								{
									iVar0 = func_260(iVar2);
									if (iVar0 > 4294967295)
									{
										uVar1 = func_258(iVar0);
										func_602("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_618("GB_AST_DESR"))
							{
								func_615("GB_AST_DESR", 0);
							}
						}
						else if (!func_618("GB_AST_DESR"))
						{
							func_615("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_124 == 4294967295)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
			func_648();
		}
		else if (iLocal_124 == NETSHOP::_NETWORK_SHOP_BASKET_START())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_122))
			{
				HUD::REMOVE_BLIP(&iLocal_122);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8))
			{
				if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_120))
					{
						iLocal_120 = HUD::ADD_BLIP_FOR_COORD(func_24());
						HUD::SET_BLIP_ROUTE(iLocal_120, true);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_120))
				{
					HUD::REMOVE_BLIP(&iLocal_120);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_122))
			{
				HUD::REMOVE_BLIP(&iLocal_122);
			}
			iVar2 = func_614();
			if (iVar2 != func_18())
			{
				if (func_1074(1))
				{
					iVar3 = func_532();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
							{
								if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
								{
									if (!HUD::DOES_BLIP_EXIST(iLocal_120))
									{
										iLocal_120 = HUD::ADD_BLIP_FOR_COORD(func_24());
										HUD::SET_BLIP_ROUTE(iLocal_120, true);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(iLocal_120))
							{
								HUD::REMOVE_BLIP(&iLocal_120);
							}
						}
					}
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 2))
		{
			if (func_376())
			{
				if (!func_601(86))
				{
					if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
					{
						if (func_595(0, 1, 1, 1))
						{
							sVar5 = func_589(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
							iVar6 = func_588(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
							if (func_1074(1))
							{
								func_587("GB_AST_HELP3", sVar5, iVar6, 4294967295);
							}
							else
							{
								func_587("GB_AST_HELP6", sVar5, iVar6, 4294967295);
							}
							func_586(1);
							MISC::SET_BIT(&iLocal_112, 2);
						}
					}
				}
			}
		}
		func_580();
	}
	func_578();
}

void func_578()//Position - 0x1647A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (!func_539())
	{
		return;
	}
	if (!func_1093() && !func_376())
	{
		return;
	}
	bVar6 = false;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
	{
		if (func_21(Local_110.f_1D[0]))
		{
			if (Local_110.f_7 == 4294967295)
			{
				if (!func_376())
				{
					HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				else
				{
					HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_614();
				if (iVar5 != func_18())
				{
					if (!func_1074(1))
					{
						HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_532();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_579(NETWORK::NET_TO_VEH(Local_110.f_1D[0]), iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x1656A
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar1);
	fVar3 = ((vVar1.z - vVar0.z) / 2f);
	fVar4 = (vVar1.z - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	GRAPHICS::DRAW_MARKER(2, unk_0x8000C77B5F336760(iParam0, true) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_580()//Position - 0x16601
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_614();
	vVar1 = { func_24() };
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_1D[0]))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 9))
			{
				if (iVar0 == CAM::_0xDC9DA9E8789F5246())
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), vVar1, 6f, 6f, 2f, true, true, 0))
						{
							func_581(NETWORK::NET_TO_VEH(Local_110.f_1D[0]), &uLocal_142, 0, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_1D[0])))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_110.f_1D[0]), 1);
							}
							MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_581(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x166BF
{
	int iVar0;
	int iVar1;
	
	if (!func_584(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_1202(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, 0))
					{
						func_582(func_583(iVar1), 0, 0f, 0, 0, 0, 4294967295);
					}
				}
				iVar0++;
			}
			*uParam1 = HUD::_0x13C4B962653A5280();
		}
	}
	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	else
	{
		if (bParam3)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 1);
		}
		unk_0x346478B12F69D4E3(iParam0, false);
		if (bParam2)
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_582(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16775
{
	struct<9> Var0;
	
	Var0 = 325218053;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_583(int iParam0)//Position - 0x167CE
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_584(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x167E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_585(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == AUDIO::_0x0626A247D2405330())
				{
				}
				else if (iParam2 && PED::IS_PED_A_PLAYER(iVar2))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
					{
						if (!bParam5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_585(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x16893
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, 3466132403) == 1)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(iParam0, false), unk_0x8000C77B5F336760(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = 4294967295;
		}
	}
	return iVar0;
}

void func_586(int iParam0)//Position - 0x1692E
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_317(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_298())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_587(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x16965
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_588(int iParam0)//Position - 0x16990
{
	int iVar0;
	
	iVar0 = func_260(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_258(iVar0);
	}
	return 1;
}

char* func_589(int iParam0)//Position - 0x169B0
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		sVar0 = func_594(&(Global_18CD5B[iParam0 /*560*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_73 != Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_73)
	{
		sVar0 = func_592(iParam0, 0);
		return sVar0;
	}
	if (((func_263(iParam0, 28) || func_263(CAM::_0xDC9DA9E8789F5246(), 28)) || func_591(iParam0)) && !func_590(iParam0))
	{
		return func_592(iParam0, 0);
	}
	iVar1 = func_44(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != CAM::_0xDC9DA9E8789F5246())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_592(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		sVar0 = func_594(&(Global_18CD5B[iVar1 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_592(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_590(int iParam0)//Position - 0x16AB6
{
	struct<13> Var0;
	
	Var0 = { func_45(iParam0) };
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

int func_591(int iParam0)//Position - 0x16AE6
{
	struct<13> Var0;
	
	if (iParam0 != func_18())
	{
		Var0 = { func_45(iParam0) };
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

char* func_592(int iParam0, bool bParam1)//Position - 0x16B3F
{
	if (!bParam1)
	{
		if (func_243(iParam0, 1))
		{
			return func_593();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_593()//Position - 0x16B66
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_594(var uParam0)//Position - 0x16B76
{
	return uParam0;
}

int func_595(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x16B80
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_600())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_352())
	{
		return 0;
	}
	if (func_575())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_75(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_599(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_598())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (Global_180517)
	{
		return 0;
	}
	if (func_597())
	{
		return 0;
	}
	if (func_596())
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (Global_10B8E)
	{
		return 0;
	}
	if (Global_26AAFF)
	{
		return 0;
	}
	return 1;
}

bool func_596()//Position - 0x16C6D
{
	return Global_255C02.f_244;
}

bool func_597()//Position - 0x16C7C
{
	return Global_255C02.f_2DD;
}

bool func_598()//Position - 0x16C8B
{
	return Global_252F9E.f_BD4.f_242;
}

int func_599(int iParam0)//Position - 0x16C9D
{
	if (Global_24FBF9[iParam0 /*413*/].f_D0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_600()//Position - 0x16CB9
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_601(int iParam0)//Position - 0x16CDB
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 == iParam0;
}

void func_602(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x16CF2
{
	if (func_603(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_140740 = 15;
		Global_140740.f_38 = iParam3;
		Global_140740.f_39 = uParam4;
		Global_140740.f_36 = iParam1;
	}
}

int func_603(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x16D2D
{
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
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam2) > 63)
	{
		return 0;
	}
	if (func_613(sParam0, sParam1, sParam2) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_607();
	Global_140740 = 10;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	StringCopy(&(Global_140740.f_20), sParam2, 64);
	Global_140740.f_3A = uParam4;
	Global_140740.f_38 = uParam4;
	func_606();
	func_605(bParam3);
	func_604();
	return 1;
}

void func_604()//Position - 0x16E0F
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_605(bool bParam0)//Position - 0x16E22
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_606()//Position - 0x16E48
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

void func_607()//Position - 0x16E6D
{
	func_609();
	func_608(0);
}

void func_608(bool bParam0)//Position - 0x16E7E
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

void func_609()//Position - 0x16F10
{
	if (!func_612())
	{
	}
	if (func_611())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_610();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_610()//Position - 0x16F39
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

int func_611()//Position - 0x171AB
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_612()//Position - 0x171C1
{
	if (!func_611())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_610();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_613(char* sParam0, char* sParam1, char* sParam2)//Position - 0x171E7
{
	if (!func_611())
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
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_140740.f_10)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_140740.f_20));
}

int func_614()//Position - 0x17265
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_110.f_7;
	if (iVar1 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

void func_615(char* sParam0, bool bParam1)//Position - 0x1729A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_616(sParam0))
	{
		return;
	}
	func_607();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_606();
	func_605(bParam1);
	func_604();
}

bool func_616(char* sParam0)//Position - 0x17305
{
	if (!func_611())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_617(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_617(char* sParam0)//Position - 0x17349
{
	if (!func_611())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

int func_618(char* sParam0)//Position - 0x1737B
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_611())
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
	return func_616(sParam0);
}

int func_619(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x173CC
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		if ((iVar1 != 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_440000.f_1EBA3[iVar1] != 4294967295)
			{
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_644(iVar1, iParam1, 0));
			}
			else
			{
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_627(iParam1, 4294967294, 1, 0, 0));
			}
		}
		else
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(func_627(iParam1, 4294967294, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_625(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2633E1 = { func_45(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1))
			{
				iVar3 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_26339B.f_16), "Leader") && Global_26339B.f_1E == 0)
				{
					iVar3 = 1;
				}
				if (Global_26339B.f_15 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_624(&Var2) };
					}
					iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar4, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar3, 0, Global_26339B, &Var2, Global_140CDE, Global_140CDF, Global_140CE0);
				}
				else
				{
					iVar0 = HUD::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar4, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar3, 0, Global_26339B, Global_140CDE, Global_140CDF, Global_140CE0);
				}
			}
			else
			{
				iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_620(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_620(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1758C
{
	int iVar0;
	
	if ((!func_623() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_34(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_621(iParam2);
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

int func_621(int iParam0)//Position - 0x17694
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_622(iVar0);
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

void func_622(int iParam0)//Position - 0x176F6
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_623()//Position - 0x1772F
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

struct<16> func_624(char* sParam0)//Position - 0x17740
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_625(char* sParam0)//Position - 0x1776B
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_626(&cVar0);
}

var func_626(char[4] cParam0)//Position - 0x1778F
{
	return cParam0;
}

int func_627(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x17799
{
	int iVar0;
	int iVar1;
	
	if (func_118(iParam0) && !bParam4)
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
	if (((func_118(CAM::_0xDC9DA9E8789F5246()) || (func_643() && func_642())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_641();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_1202(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_644(iParam1, iParam0, 0);
							}
							else
							{
								return func_637(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_637(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_644(iParam1, iParam0, 0);
				}
				else
				{
					return func_628(0, 4294967295, 0);
				}
			}
			else
			{
				return func_628(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_644(iParam1, iParam0, 0);
		}
		else
		{
			return func_637(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_637(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_628(bool bParam0, int iParam1, bool bParam2)//Position - 0x17979
{
	return func_629(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_629(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1798F
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_635() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_634(iParam2, iVar0);
		}
		else
		{
			return func_634(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_117(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_633(1);
				}
				else
				{
					return func_633(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_630(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_630(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_633(1);
	}
	return func_633(0);
}

int func_630(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x17A83
{
	int iVar0;
	
	iVar0 = func_632(iParam0, iParam1, iParam3);
	if (func_631(Global_440000.f_1FEDE, 1))
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

int func_631(int iParam0, bool bParam1)//Position - 0x17B9B
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

int func_632(int iParam0, int iParam1, int iParam2)//Position - 0x17BEC
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
			if (!func_117(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_633(bool bParam0)//Position - 0x17C33
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_634(int iParam0, int iParam1)//Position - 0x17C4A
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_632(iParam1, iParam0, 4);
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

int func_635()//Position - 0x17C98
{
	if (func_636() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_636()//Position - 0x17CB5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_637(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x17CCD
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
			if (func_639(1))
			{
				iVar3 = func_260(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_258(iVar3);
				}
			}
			if ((func_152(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_117(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_633(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_638(1);
			}
			else
			{
				return func_629(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_633(1);
			}
			else
			{
				return func_629(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_260(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_258(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_638(bool bParam0)//Position - 0x17E71
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_639(int iParam0)//Position - 0x17E88
{
	if ((func_239() || func_640()) || (func_40() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_640()//Position - 0x17EB7
{
	return Global_255C02.f_F;
}

var func_641()//Position - 0x17EC5
{
	return Global_240006.f_2;
}

bool func_642()//Position - 0x17ED3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_643()//Position - 0x17EE4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_644(int iParam0, int iParam1, bool bParam2)//Position - 0x17F01
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_639(1))
	{
		iVar2 = func_260(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_258(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_18())
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
			iVar0 = func_629(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_645(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_117(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_638(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_645(int iParam0)//Position - 0x18091
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

int func_646()//Position - 0x18166
{
	switch (func_1077())
	{
		case 1:
			return func_647();
		
		case 0:
		case 2:
		case 3:
			return func_531();
		
		default:
	}
	return 0;
}

int func_647()//Position - 0x1819E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_614();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	iVar1 = func_532();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_648()//Position - 0x181E6
{
	if (HUD::DOES_BLIP_EXIST(iLocal_122))
	{
		return;
	}
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (func_362(CAM::_0xDC9DA9E8789F5246()) < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_122))
		{
			HUD::REMOVE_BLIP(&iLocal_122);
		}
		return;
	}
	iLocal_122 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_1D[0]));
	HUD::_0xC4278F70131BAA6D(iLocal_122, 1);
	HUD::_0x75A16C3DA34F1245(iLocal_122, 1);
	HUD::SET_BLIP_PRIORITY(iLocal_122, 12);
	HUD::SET_BLIP_SPRITE(iLocal_122, 421);
	HUD::SET_BLIP_SCALE(iLocal_122, Global_40001.f_2FD2);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_122, "GB_AST_RHN");
	if (func_1093())
	{
		func_649(&iLocal_122, 9);
	}
	else
	{
		func_649(&iLocal_122, 6);
	}
	if (func_1093())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 0))
		{
			HUD::SET_BLIP_FLASHES(iLocal_122, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_122, 7000);
			HUD::FLASH_MINIMAP_DISPLAY();
			MISC::SET_BIT(&iLocal_112, 0);
		}
	}
}

void func_649(int iParam0, int iParam1)//Position - 0x182CA
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_650(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_650(int iParam0)//Position - 0x182F0
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

void func_651()//Position - 0x18558
{
	if (!func_611())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_607();
}

void func_652(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x18585
{
	var uVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_24DCF5.f_2EA[iParam0]), &(Global_24DCF5.f_455[iParam0]), &(Global_24DCF5.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_224[iParam0] = uParam1;
		}
	}
}

int func_653(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x185D7
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

int func_654(int iParam0)//Position - 0x1869C
{
	if (iParam0 == func_18())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_413())
	{
		return 1;
	}
	return 0;
}

void func_655(int iParam0, bool bParam1)//Position - 0x186C5
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

void func_656(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x18720
{
	var uVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_24DCF5.f_32C[iParam0]), &(Global_24DCF5.f_497[iParam0]), &(Global_24DCF5.f_16C), bParam1, iParam0, bParam3, &uVar0))
	{
		func_655(iParam0, bParam2);
	}
}

void func_657(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x18768
{
	var uVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_24DCF5.f_266[iParam0]), &(Global_24DCF5.f_3D1[iParam0]), &(Global_24DCF5.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1C1[iParam0] = iParam1;
		}
	}
}

void func_658(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x187BA
{
	bool bVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_24DCF5.f_245[iParam0]), &(Global_24DCF5.f_3B0[iParam0]), &(Global_24DCF5.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_659();
		}
	}
}

void func_659()//Position - 0x18815
{
	Global_24DCF5.f_5E4 = 1;
}

void func_660()//Position - 0x18825
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar9;
	var uVar10;
	char* sVar11;
	int iVar12;
	
	if (Local_110.f_3 == 1)
	{
		return;
	}
	if (!func_539())
	{
		if (iLocal_123 != 4294967294)
		{
			if (iLocal_123 > 4294967295)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_123);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
					if (iVar0 != CAM::_0xDC9DA9E8789F5246())
					{
						func_658(iVar0, 457, 0, 0);
						if (!func_1093())
						{
							func_657(iVar0, 1, 0, 0);
							func_656(iVar0, 0, 0, 0);
							func_655(iVar0, 0);
							func_652(iVar0, Global_40001.f_2FD2, 0, 0);
						}
						else if (Local_110.f_9 > 4294967295)
						{
							iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_657(iVar0, 1, 0, 0);
									func_656(iVar0, 0, 0, 0);
									func_655(iVar0, 0);
									func_652(iVar0, Global_40001.f_2FD2, 0, 0);
								}
							}
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::REMOVE_BLIP(&iLocal_119);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
			iLocal_123 = 4294967294;
			func_651();
		}
		return;
	}
	if (iLocal_123 != Local_110.f_5)
	{
		if (Local_110.f_5 == 4294967295)
		{
			if (func_539())
			{
				if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_123);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (iVar0 != CAM::_0xDC9DA9E8789F5246())
						{
							func_658(iVar0, 457, 0, 0);
							if (!func_1093())
							{
								func_657(iVar0, 1, 0, 0);
								func_656(iVar0, 0, 0, 0);
								func_655(iVar0, 0);
								func_652(iVar0, Global_40001.f_2FD2, 0, 0);
							}
							else if (Local_110.f_9 > 4294967295)
							{
								iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9);
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_657(iVar0, 1, 0, 0);
										func_656(iVar0, 0, 0, 0);
										func_655(iVar0, 0);
										func_652(iVar0, Global_40001.f_2FD2, 0, 0);
									}
								}
							}
						}
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
					{
						func_682("GB_AST_TCKD", 1);
					}
				}
			}
		}
		else
		{
			if (iLocal_123 != 4294967295)
			{
				if (iLocal_123 > 4294967295)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_123);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (iVar0 != CAM::_0xDC9DA9E8789F5246())
						{
							if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
							{
								func_658(iVar0, 457, 0, 0);
								if (!func_1093())
								{
									func_657(iVar0, 1, 0, 0);
									func_656(iVar0, 0, 0, 0);
									func_655(iVar0, 0);
									func_652(iVar0, Global_40001.f_2FD2, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_5);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				if (func_539())
				{
					if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (func_1202(iVar0, 1, 1))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_119))
							{
								HUD::REMOVE_BLIP(&iLocal_119);
							}
							if (iVar0 != CAM::_0xDC9DA9E8789F5246())
							{
								if (!func_1093())
								{
									if (!func_531())
									{
										func_658(iVar0, 457, 1, 0);
										func_656(iVar0, 1, 1, 0);
										func_657(iVar0, 1, 1, 0);
										func_655(iVar0, 1);
										func_652(iVar0, Global_40001.f_2FD2, 1, 0);
									}
									else
									{
										func_658(iVar0, 457, 1, 0);
										func_652(iVar0, Global_40001.f_2FD2, 1, 0);
									}
								}
								else if (func_531())
								{
									func_658(iVar0, 457, 1, 0);
									func_652(iVar0, Global_40001.f_2FD2, 1, 0);
								}
								else
								{
									func_658(iVar0, 457, 1, 0);
									func_656(iVar0, 1, 1, 0);
									func_657(iVar0, 1, 1, 0);
									func_655(iVar0, 1);
									func_652(iVar0, Global_40001.f_2FD2, 1, 0);
								}
							}
							if (iVar0 != CAM::_0xDC9DA9E8789F5246())
							{
								func_619("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_123 = Local_110.f_5;
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), AUDIO::_0x0626A247D2405330()))
				{
					MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 2);
					func_681(1);
					func_379();
					if (func_376())
					{
						func_381(0);
						MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 6);
					}
					if (!func_680())
					{
						func_679(1, 0, 0);
					}
					if (PED::IS_PED_IN_ANY_SUB(AUDIO::_0x0626A247D2405330()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_C))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), 1, 1);
							MISC::SET_BIT(&iLocal_112, 12);
						}
					}
					else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 12))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 12);
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 13);
					}
					iLocal_127 = AUDIO::GET_SOUND_ID();
					if (func_317(1))
					{
						unk_0x1190AB7024CBD8CB(iLocal_127, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0x1190AB7024CBD8CB(iLocal_127, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					if (func_678(AUDIO::_0x0626A247D2405330()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_C))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), 1, 1);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_C), vLocal_115, 0, 0, 1);
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), AUDIO::_0x0626A247D2405330()))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 2);
				if (func_680())
				{
					func_679(0, 0, 0);
				}
				if (NETSHOP::_NETWORK_SHOP_BASKET_START() != Local_110.f_8)
				{
					func_681(0);
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 12))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 12);
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 13);
				}
			}
			else
			{
				if (func_678(AUDIO::_0x0626A247D2405330()))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_C))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_C), vLocal_115, 0, 0, 1);
					}
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 12))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 13))
					{
						if (func_595(0, 1, 1, 1))
						{
							func_677("GB_ASLT_SUB", 4294967295);
							MISC::SET_BIT(&iLocal_112, 13);
						}
					}
				}
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 2))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 2);
	}
	if (iLocal_123 == 4294967295)
	{
		if (func_539())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
				{
					func_676();
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 5))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
				{
					MISC::SET_BIT(&iLocal_112, 5);
					HUD::REMOVE_BLIP(&iLocal_119);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
			{
				if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[0]))
					{
						if (!func_10(Local_110.f_D[0]))
						{
							HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &uVar6);
							GRAPHICS::DRAW_MARKER(2, unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_D[0]), true) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
						}
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_120))
		{
			HUD::REMOVE_BLIP(&iLocal_120);
		}
	}
	else if (iLocal_123 == NETSHOP::_NETWORK_SHOP_BASKET_START())
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_119))
		{
			HUD::REMOVE_BLIP(&iLocal_119);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_120))
				{
					iLocal_120 = HUD::ADD_BLIP_FOR_COORD(func_24());
					HUD::SET_BLIP_ROUTE(iLocal_120, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_120))
		{
			HUD::REMOVE_BLIP(&iLocal_120);
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_119))
		{
			HUD::REMOVE_BLIP(&iLocal_119);
		}
		iVar0 = func_530();
		if (iVar0 != func_18())
		{
			if (func_1074(1))
			{
				iVar1 = func_532();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
						{
							if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_120))
								{
									iLocal_120 = HUD::ADD_BLIP_FOR_COORD(func_24());
									HUD::SET_BLIP_ROUTE(iLocal_120, true);
								}
							}
						}
						else if (HUD::DOES_BLIP_EXIST(iLocal_120))
						{
							HUD::REMOVE_BLIP(&iLocal_120);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_539())
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_532();
						if (func_1074(1))
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), 0))
								{
									func_579(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), iVar3, iVar4, iVar5, 0);
								}
								else
								{
									GRAPHICS::DRAW_MARKER(2, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar0), true) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 4))
	{
		MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 4);
	}
	if (func_539())
	{
		if (func_362(CAM::_0xDC9DA9E8789F5246()) > 2)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 6))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
				{
					if (iLocal_123 == 4294967295)
					{
						if (func_1093())
						{
							if (!func_618("GB_AST_RETP"))
							{
								func_615("GB_AST_RETP", 0);
							}
						}
						else if (func_376())
						{
							if (!func_618("GB_AST_RETP"))
							{
								func_615("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_123 == NETSHOP::_NETWORK_SHOP_BASKET_START())
					{
						if (!func_618("GB_AST_DROP"))
						{
							func_615("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_530();
						if (iVar0 != func_18())
						{
							if (func_1074(1))
							{
								iVar1 = func_532();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_618("GB_AST_DROPB"))
									{
										iVar9 = func_260(iVar0);
										if (iVar9 > 4294967295)
										{
											uVar10 = func_258(iVar9);
											func_602("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar10, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_618("GB_AST_RETNG"))
									{
										func_673("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_618("GB_AST_RETGR"))
								{
									sVar11 = func_589(iVar0);
									func_670("GB_AST_RETGR", sVar11, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_618("GB_AST_RETNG"))
								{
									func_673("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_618("GB_AST_RETGR"))
							{
								sVar11 = func_589(iVar0);
								func_670("GB_AST_RETGR", sVar11, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_669() };
					if (!func_618(&Var8))
					{
						func_615(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_651();
		}
	}
	else
	{
		func_651();
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 2))
	{
		if (func_376())
		{
			if (!func_601(86))
			{
				if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
				{
					if (func_595(0, 1, 1, 1))
					{
						sVar11 = func_589(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
						iVar12 = func_588(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
						if (func_1074(1))
						{
							if (Local_110.f_5 > 4294967295)
							{
								func_587("GB_AST_HELP2", sVar11, iVar12, 4294967295);
							}
							else
							{
								func_587("GB_AST_HELP22", sVar11, iVar12, 4294967295);
							}
						}
						else if (Local_110.f_5 > 4294967295)
						{
							func_587("GB_AST_HELP5", sVar11, iVar12, 4294967295);
						}
						else
						{
							func_587("GB_AST_HELP52", sVar11, iVar12, 4294967295);
						}
						func_586(1);
						MISC::SET_BIT(&iLocal_112, 2);
					}
				}
			}
		}
	}
	func_663();
	func_662();
	func_661();
}

void func_661()//Position - 0x19391
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!func_539())
	{
		return;
	}
	if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_C) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_110.f_C), 0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_110.f_C)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 3) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
				{
					HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
					GRAPHICS::DRAW_MARKER(2, unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_110.f_C), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
				}
			}
		}
	}
}

void func_662()//Position - 0x1944C
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	iVar0 = func_530();
	vVar1 = { func_24() };
	if (HUD::DOES_BLIP_EXIST(iLocal_120))
	{
		HUD::GET_HUD_COLOUR(12, &iVar2, &iVar3, &iVar4, &uVar5);
		GRAPHICS::DRAW_MARKER(1, vVar1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, iVar2, iVar3, iVar4, 100, 0, 0, 2, 0, 0, 0, false);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 3))
	{
		if (iVar0 == CAM::_0xDC9DA9E8789F5246())
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), vVar1, 6f, 6f, 2f, false, true, 0))
				{
					MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 3);
				}
			}
		}
	}
}

void func_663()//Position - 0x194F3
{
	vector3 vVar0;
	bool bVar1;
	struct<35> Var2;
	
	switch (iLocal_128)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
			{
				vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_110.f_C), true) };
				if (!func_424(vLocal_130, 0f, 0f, 0f, 0))
				{
					vLocal_130 = { 0f, 0f, 0f };
				}
				if (func_664(vVar0, iLocal_129, 0))
				{
					iLocal_128++;
				}
				if (iLocal_128 == 0)
				{
					iLocal_129++;
				}
				if (iLocal_129 >= 36)
				{
					iLocal_129 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_110.f_5 == 4294967295)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_C))
				{
					bVar1 = true;
					if (func_424(vLocal_130, 0f, 0f, 0f, 0))
					{
						vLocal_130 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_110.f_C), true) };
					}
				}
			}
			else if (Local_110.f_5 == NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_C))
				{
					if (func_424(vLocal_130, 0f, 0f, 0f, 0))
					{
						vLocal_130 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_110.f_C), true) };
					}
					bVar1 = true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_110.f_C);
				}
			}
			if (bVar1)
			{
				Var2.f_5 = 1115815936;
				Var2.f_D = 2;
				Var2.f_14 = 2;
				Var2.f_20 = 3212836864;
				Var2.f_22 = 1;
				Var2.f_3 = 0;
				Var2.f_5 = 1f;
				Var2.f_D[0 /*3*/] = { vLocal_130 };
				Var2.f_14[0] = 8f;
				Var2.f_14[0] = 100f;
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_C))
				{
					if (func_49(vLocal_130, 20f, &vLocal_131, &uLocal_132, &Var2))
					{
						vLocal_131 = { vLocal_131 + Vector(0.5f, 0f, 0f) };
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), AUDIO::_0x0626A247D2405330()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_110.f_C));
						}
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_C), vLocal_131, 0, 0, 1);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_110.f_C), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 1);
						MISC::SET_BIT(&iLocal_113, 3);
						iLocal_128 = 0;
					}
				}
			}
			else if (Local_110.f_5 != NETSHOP::_NETWORK_SHOP_BASKET_START())
			{
				vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_110.f_C), true) };
				if (!func_664(vVar0, iLocal_129, 0))
				{
					iLocal_128 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 3))
	{
		if (func_595(0, 1, 1, 1))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_113, 3);
			func_677("GB_HLP_WRP", 4294967295);
		}
	}
}

int func_664(vector3 vParam0, int iParam1, float fParam2)//Position - 0x19752
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_668(iParam1))
	{
		func_665(iParam1, &vVar0, &vVar1, &fVar2, fParam2);
		return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true);
	}
	return 0;
}

void func_665(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)//Position - 0x19789
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	
	vVar0 = { func_667(iParam0) };
	uVar1 = func_666(iParam0);
	vVar2 = { 0f, 1f, 0f };
	func_73(&vVar2, 0f, 0f, uVar1);
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	*uParam1 = { vVar0 + vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_666(int iParam0)//Position - 0x19839
{
	return Global_3D2298[iParam0 /*45*/].f_7;
}

Vector3 func_667(int iParam0)//Position - 0x1984B
{
	return Global_3D2298[iParam0 /*45*/].f_4;
}

int func_668(int iParam0)//Position - 0x1985F
{
	if (iParam0 > 4294967295 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

struct<8> func_669()//Position - 0x1987D
{
	struct<8> Var0;
	
	switch (func_1077())
	{
		case 0:
			StringCopy(&Var0, "GB_ASLT_CUL", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_ASLT_GEN", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_ASLT_AIR", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_ASLT_MER", 32);
			break;
	}
	return Var0;
}

void func_670(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x198D7
{
	if (func_671(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140740 = 16;
		Global_140740.f_38 = iParam2;
	}
}

int func_671(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x198FC
{
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
	if (func_672(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_607();
	Global_140740 = 3;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = iParam3;
	Global_140740.f_38 = iParam3;
	func_606();
	func_605(bParam2);
	func_604();
	return 1;
}

bool func_672(char* sParam0, char* sParam1)//Position - 0x199A6
{
	if (!func_611())
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

void func_673(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x199FE
{
	func_674(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_674(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x19A16
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
	if (func_675(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	uVar0 = Global_140740.f_36;
	func_607();
	Global_140740 = 9;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = iParam3;
	Global_140740.f_38 = iParam3;
	Global_140740.f_36 = uVar0;
	func_606();
	func_605(bParam2);
	func_604();
	return 1;
}

bool func_675(char* sParam0, char* sParam1)//Position - 0x19AE0
{
	if (!func_611())
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

void func_676()//Position - 0x19B38
{
	if (func_362(CAM::_0xDC9DA9E8789F5246()) < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_119))
		{
			HUD::REMOVE_BLIP(&iLocal_119);
		}
		return;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_119))
	{
		return;
	}
	iLocal_119 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_110.f_C));
	HUD::SET_BLIP_PRIORITY(iLocal_119, 12);
	HUD::SET_BLIP_SPRITE(iLocal_119, 457);
	HUD::_0xC4278F70131BAA6D(iLocal_119, 1);
	HUD::_0x75A16C3DA34F1245(iLocal_119, 1);
	HUD::SET_BLIP_SCALE(iLocal_119, Global_40001.f_2FD2);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_119, "GB_AST_BLIP");
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
	{
		if (func_1093())
		{
			func_649(&iLocal_119, 18);
		}
		else
		{
			func_649(&iLocal_119, 18);
		}
	}
	else
	{
		func_649(&iLocal_119, 6);
	}
	if (func_1093())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 0))
		{
			HUD::SET_BLIP_FLASHES(iLocal_119, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_119, 7000);
			HUD::FLASH_MINIMAP_DISPLAY();
			MISC::SET_BIT(&iLocal_112, 0);
		}
	}
}

void func_677(char* sParam0, int iParam1)//Position - 0x19C1C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_678(int iParam0)//Position - 0x19C33
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_234D5;
}

void func_679(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19C5E
{
	bool bVar0;
	
	bVar0 = true;
	if (!bParam2)
	{
		if ((!bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (bParam1)
			{
				if (!func_248(CAM::_0xDC9DA9E8789F5246()))
				{
					bVar0 = false;
				}
			}
			else if (!func_262(CAM::_0xDC9DA9E8789F5246()))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Global_1801DD != bParam0)
		{
			Global_1801DD = bParam0;
		}
	}
}

bool func_680()//Position - 0x19CC2
{
	return Global_1801DD;
}

void func_681(bool bParam0)//Position - 0x19CCE
{
	if (bParam0)
	{
		if (!func_263(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) != 0)
			{
				func_367(9);
			}
		}
	}
	else if (func_263(CAM::_0xDC9DA9E8789F5246(), 9))
	{
		func_369(9);
	}
}

int func_682(char* sParam0, int iParam1)//Position - 0x19D14
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_620(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_683()//Position - 0x19D40
{
	struct<8> Var0;
	char[] cVar1[8];
	int iVar2;
	
	if (func_366())
	{
		return;
	}
	if (func_362(CAM::_0xDC9DA9E8789F5246()) == 0)
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 5))
	{
		if (!func_1093())
		{
			if (((Local_110.f_5 != 4294967295 || Local_110.f_7 != 4294967295) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 16)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 20))
			{
				MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 5);
				OBJECT::_0x78857FC65CADB909(1);
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_C))
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), false, 1);
				}
				cVar1 = func_589(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
				iVar2 = func_588(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
				if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
				{
					Var0 = { func_698(1) };
					if (func_539())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 0)
						{
							func_684(86, "BIGM_ASLTN", &Var0, cVar1, iVar2, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
					}
					func_1030(4294967295, 0, 0, 4294967295, 0, 0);
				}
				else
				{
					Var0 = { func_698(0) };
					if (func_539())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 0)
						{
							func_684(86, "BIGM_ASLTN", &Var0, cVar1, iVar2, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
					}
					func_1030(4294967295, 0, 0, 4294967295, 0, 0);
				}
				func_409(1);
			}
		}
	}
}

int func_684(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x19E8A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_685(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_685(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x19EC5
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
	func_697(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_45), 2);
	return func_686(&Var0);
}

int func_686(var uParam0)//Position - 0x19F79
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_696(uParam0, uParam0->f_11);
	func_695(uParam0);
	if (func_40())
	{
		func_695(uParam0);
	}
	if (func_694(uParam0->f_1))
	{
		func_687();
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
				func_687();
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
				if (func_301(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
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

void func_687()//Position - 0x1A14A
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
	func_688();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_688()//Position - 0x1A17D
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_692(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_689(&(Global_252F9E.f_BD4.f_1));
}

void func_689(var uParam0)//Position - 0x1A1BE
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_691(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_690(0);
}

void func_690(int iParam0)//Position - 0x1A265
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_691(bool bParam0)//Position - 0x1A279
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_692(var uParam0)//Position - 0x1A2A4
{
	func_693(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_693(var uParam0)//Position - 0x1A2CE
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

int func_694(int iParam0)//Position - 0x1A34D
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_695(var uParam0)//Position - 0x1A44F
{
	if (func_303(uParam0->f_1))
	{
		uParam0->f_48 = func_261();
	}
}

void func_696(var uParam0, int iParam1)//Position - 0x1A46A
{
	if (func_303(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_18() || !func_1202(iParam1, 0, 1))
	{
		return;
	}
	if (func_301(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_627(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

void func_697(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1A4C1
{
	uParam1->f_11 = func_18();
	uParam1->f_12 = func_18();
	uParam1->f_13 = func_18();
	uParam1->f_14 = func_18();
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

struct<8> func_698(bool bParam0)//Position - 0x1A53F
{
	struct<8> Var0;
	
	if (bParam0)
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLV", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
		}
	}
	else
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLVO", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			}
	}
	return Var0;
}

void func_699()//Position - 0x1A5EE
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 12))
		{
			if (func_365(CAM::_0xDC9DA9E8789F5246()))
			{
				MISC::SET_BIT(&iLocal_113, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 1);
			}
			else if (func_362(CAM::_0xDC9DA9E8789F5246()) < 1)
			{
				MISC::SET_BIT(&iLocal_113, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 1);
			}
		}
		else if (!func_365(CAM::_0xDC9DA9E8789F5246()))
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), false, 1);
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_113, 12);
			}
		}
	}
}

void func_700()//Position - 0x1A688
{
	int iVar0;
	int iVar1;
	struct<20> Var2;
	char* sVar3;
	char[] cVar4[8];
	char[] cVar5[8];
	char[] cVar6[8];
	char[] cVar7[8];
	char* sVar8;
	char* sVar9;
	int iVar10;
	
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = 4294967295;
	Var2.f_12 = 4294967295;
	Var2.f_13 = 4294967295;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 1))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 6))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8))
			{
				func_1001(&sVar3, &cVar4, &cVar5, &cVar6, &cVar7, &sVar8);
				if (func_539())
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_6);
					if (iVar0 == CAM::_0xDC9DA9E8789F5246())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(87, "GB_WINNER", &sVar3, 1, 4294967295, 2, 1);
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
						{
							MISC::SET_BIT(&iLocal_112, 17);
							func_900(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
						}
						func_719(159, 1, &Var2, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
					}
					else if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						iVar1 = func_532();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
							{
								sVar9 = func_718();
								iVar10 = func_588(CAM::_0xDC9DA9E8789F5246());
								func_684(87, "GB_WINNER", &cVar4, sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
							if (func_1094() == Local_110.f_8)
							{
								func_719(159, 1, &Var2, 0);
							}
							else
							{
								func_719(159, 0, &Var2, 0);
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
						}
						else
						{
							if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar9 = func_589(iVar0);
									iVar10 = func_588(iVar0);
								}
								else
								{
									sVar9 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar10 = 1;
								}
								if (func_1077() != 1)
								{
									func_684(88, "GB_WORK_OVER", &cVar5, sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
								}
								else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8))
								{
									func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
								}
							}
							func_719(159, 0, &Var2, 0);
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
							func_719(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar9 = func_589(iVar0);
								iVar10 = func_588(iVar0);
							}
							else
							{
								sVar9 = PLAYER::GET_PLAYER_NAME(iVar0);
								iVar10 = 1;
							}
							if (func_1077() != 1)
							{
								func_684(88, "GB_WORK_OVER", &cVar5, sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8))
							{
								func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
							}
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
						{
							MISC::SET_BIT(&iLocal_112, 17);
							func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_113, 6);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 10))
			{
				if (Local_110.f_6 > 4294967295)
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_6);
				}
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar9 = func_589(iVar0);
									iVar10 = func_588(iVar0);
								}
								else
								{
									sVar9 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar10 = 1;
								}
								func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
							}
							else
							{
								func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, 4294967295, 2, 1);
							}
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else if (Local_110.f_6 > 4294967295)
					{
						if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
						{
							iVar1 = func_532();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == CAM::_0xDC9DA9E8789F5246())
								{
									if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
									{
										func_1055(87, "GB_WINNER", "BIGM_ASL_DESY", 1, 4294967295, 2, 1);
									}
								}
								else if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
								{
									iVar10 = func_588(CAM::_0xDC9DA9E8789F5246());
									sVar9 = func_718();
									func_684(87, "GB_WINNER", "BIGM_ASL_DESG", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
								}
								if (func_1093() || func_376())
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
									{
										MISC::SET_BIT(&iLocal_112, 17);
										func_900(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
									}
								}
								if (Local_110.f_6 == CAM::_0xDC9DA9E8789F5246())
								{
									func_719(159, 1, &Var2, 0);
								}
								else
								{
									func_719(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar9 = func_589(iVar0);
										iVar10 = func_588(iVar0);
									}
									else
									{
										sVar9 = PLAYER::GET_PLAYER_NAME(iVar0);
										iVar10 = 1;
									}
									func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
								}
								if (func_1093() || func_376())
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
									{
										MISC::SET_BIT(&iLocal_112, 17);
										func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
									}
								}
								func_719(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == CAM::_0xDC9DA9E8789F5246())
						{
							if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
							{
								func_1055(87, "GB_WINNER", "BIGM_ASL_DESY", 1, 4294967295, 2, 1);
							}
							if (func_1093() || func_376())
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
								{
									MISC::SET_BIT(&iLocal_112, 17);
									func_900(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
								}
							}
							func_719(159, 1, &Var2, 0);
						}
						else
						{
							if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar9 = func_589(iVar0);
									iVar10 = func_588(iVar0);
								}
								else
								{
									sVar9 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar10 = 1;
								}
								func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
							}
							if (func_1093() || func_376())
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
								{
									MISC::SET_BIT(&iLocal_112, 17);
									func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
								}
							}
							func_719(159, 0, &Var2, 0);
						}
					}
					else if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							sVar9 = func_718();
							iVar10 = func_588(CAM::_0xDC9DA9E8789F5246());
							func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, 4294967295, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_113, 6);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 15))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, 4294967295, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							sVar9 = func_718();
							iVar10 = func_588(CAM::_0xDC9DA9E8789F5246());
							func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, 4294967295, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_113, 6);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 18))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, 4294967295, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							sVar9 = func_718();
							iVar10 = func_588(CAM::_0xDC9DA9E8789F5246());
							func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar9, iVar10, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, 4294967295, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
							{
								MISC::SET_BIT(&iLocal_112, 17);
								func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_113, 6);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3))
			{
				func_1001(&sVar3, &cVar4, &cVar5, &cVar6, &cVar7, &sVar8);
				if (func_539())
				{
					if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", &sVar8, 1, 4294967295, 2, 1);
						}
					}
					else if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
					{
						func_1055(88, "GB_WORK_OVER", &sVar8, 1, 4294967295, 2, 1);
					}
				}
				if (func_1093() || func_376())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
					{
						MISC::SET_BIT(&iLocal_112, 17);
						func_900(0, 7, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					}
				}
				func_719(159, 0, &Var2, 0);
				MISC::SET_BIT(&iLocal_113, 6);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
						}
					}
					else if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
					{
						func_1055(88, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, 4294967295, 2, 1);
					}
				}
				if (func_1093() || func_376())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
					{
						MISC::SET_BIT(&iLocal_112, 17);
						func_900(0, 8, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					}
				}
				func_719(159, 0, &Var2, 0);
				MISC::SET_BIT(&iLocal_113, 6);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 9))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, 4294967295, 2, 1);
						}
					}
					else if (func_362(CAM::_0xDC9DA9E8789F5246()) > 1)
					{
						func_1055(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, 4294967295, 2, 1);
					}
				}
				if (func_1093() || func_376())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
					{
						MISC::SET_BIT(&iLocal_112, 17);
						func_900(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					}
				}
				func_719(159, 0, &Var2, 0);
				MISC::SET_BIT(&iLocal_113, 6);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 6))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 8))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 19))
				{
					iLocal_126 = 4294967295;
					AUDIO::STOP_SOUND(iLocal_126);
				}
				func_651();
				MISC::SET_BIT(&iLocal_113, 8);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 20))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
					AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_122))
			{
				HUD::REMOVE_BLIP(&iLocal_122);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_121))
			{
				HUD::REMOVE_BLIP(&iLocal_121);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::REMOVE_BLIP(&iLocal_119);
			}
			func_717();
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 29))
			{
				MISC::SET_BIT(&iLocal_112, 29);
			}
			if (func_701(&uLocal_135, 1, 0))
			{
				MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 1);
			}
		}
	}
}

int func_701(var uParam0, bool bParam1, int iParam2)//Position - 0x1B368
{
	bool bVar0;
	
	func_367(29);
	if ((*uParam0 > 0 && !func_298()) && func_362(CAM::_0xDC9DA9E8789F5246()) != 0)
	{
		if (!func_716())
		{
			func_715();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_196EED.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_26862F.f_11DE), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_714(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_708(iParam2);
				func_714(uParam0, 2);
			}
			break;
		
		case 2:
			func_708(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_702(func_703(0)))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_714(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 2);
				func_714(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 2);
			return 1;
	}
	return 0;
}

int func_702(char* sParam0)//Position - 0x1B4E2
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_703(int iParam0)//Position - 0x1B4F5
{
	if (((func_706(CAM::_0xDC9DA9E8789F5246()) || func_705(CAM::_0xDC9DA9E8789F5246())) || func_318()) || iParam0)
	{
		if (func_705(CAM::_0xDC9DA9E8789F5246()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_290(func_704()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_704()//Position - 0x1B557
{
	return Global_19135D;
}

bool func_705(int iParam0)//Position - 0x1B563
{
	return func_291(func_288(iParam0), 0);
}

bool func_706(int iParam0)//Position - 0x1B576
{
	return func_707(func_288(iParam0));
}

int func_707(int iParam0)//Position - 0x1B588
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148 && func_245(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23, 1))
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

void func_708(int iParam0)//Position - 0x1B66A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_1202(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !CAM::IS_SCREEN_FADED_OUT()) && !func_263(CAM::_0xDC9DA9E8789F5246(), 22)) && func_362(CAM::_0xDC9DA9E8789F5246()) != 0) && !func_712(func_713())) && !func_706(CAM::_0xDC9DA9E8789F5246())) && !func_711(func_288(CAM::_0xDC9DA9E8789F5246()))) && !func_710(func_288(CAM::_0xDC9DA9E8789F5246())))
		{
			MISC::SET_BIT(&(Global_26862F.f_11DE), 1);
			func_709(func_703(iParam0), 4294967295);
			func_586(1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 0);
		}
	}
}

void func_709(char* sParam0, int iParam1)//Position - 0x1B74E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_710(int iParam0)//Position - 0x1B765
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

int func_711(int iParam0)//Position - 0x1B7BB
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

int func_712(int iParam0)//Position - 0x1B80B
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

int func_713()//Position - 0x1B831
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

void func_714(var uParam0, int iParam1)//Position - 0x1BDBC
{
	*uParam0 = iParam1;
}

void func_715()//Position - 0x1BDC9
{
	Global_258852 = 1;
}

int func_716()//Position - 0x1BDD6
{
	if (((((((func_288(CAM::_0xDC9DA9E8789F5246()) == 170 || func_288(CAM::_0xDC9DA9E8789F5246()) == 219) || func_288(CAM::_0xDC9DA9E8789F5246()) == 221) || func_288(CAM::_0xDC9DA9E8789F5246()) == 220) || func_288(CAM::_0xDC9DA9E8789F5246()) == 216) || func_288(CAM::_0xDC9DA9E8789F5246()) == 215) || func_288(CAM::_0xDC9DA9E8789F5246()) == 214) || func_288(CAM::_0xDC9DA9E8789F5246()) == 218)
	{
		return 1;
	}
	if (func_558(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

void func_717()//Position - 0x1BE77
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 9))
	{
		MISC::SET_BIT(&iLocal_113, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_540())
					{
						func_658(iVar1, 421, 0, 0);
					}
					else
					{
						func_658(iVar1, 457, 0, 0);
					}
					func_657(iVar1, 1, 0, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_718()//Position - 0x1BEEB
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_44(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 != func_18())
	{
		if (iVar0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (((func_263(iVar0, 28) || func_263(CAM::_0xDC9DA9E8789F5246(), 28)) || func_591(iVar0)) && !func_590(iVar0))
			{
				return func_592(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_592(iVar0, 0);
			}
		}
		sVar1 = func_594(&(Global_18CD5B[iVar0 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_592(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_719(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x1BF9C
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
	
	func_898(iParam0, &fVar2, &fVar3);
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
			iVar1 = (iVar1 + func_897(iParam0, uParam2->f_D));
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
			iVar0 = (iVar0 + func_896(iParam0));
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
	if (func_894(iParam0))
	{
		if (bParam1)
		{
			if (func_893(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				func_892();
			}
			else
			{
				func_891();
			}
		}
		else
		{
			func_890();
		}
	}
	func_874(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_872(iParam0, uParam2, &iVar0, &iVar5);
	func_850(iParam0, uParam2, &iVar0, &iVar5);
	func_836(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_819(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26862F.f_1313.f_175 = iVar4;
	}
	else
	{
		Global_26862F.f_1313.f_175 = iVar5;
	}
	iVar8 = func_320();
	if (iVar8 != func_18() && iParam0 != 148)
	{
		if (func_19(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			if (!func_16(CAM::_0xDC9DA9E8789F5246(), iVar8, 1))
			{
				func_810(&iVar0, 1);
			}
		}
	}
	func_806(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_196EF6.f_A = iVar1;
		func_805();
		func_762(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_196EF6.f_9 = iVar0;
		iVar13 = func_532();
		if (iVar13 != func_18())
		{
			func_761(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_1074(1);
		if (iParam0 == 168)
		{
			if (!func_760())
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_759())
			{
				if (!func_760())
				{
					Var15 = { func_758() };
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_757(Var15)), func_756(Var15), iVar5);
				}
			}
			else if (func_760())
			{
				func_745(3438960429, iVar0, &iVar16, 0, 1, 0);
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
			if (func_744())
			{
				if (!func_760())
				{
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_757(func_743(CAM::_0xDC9DA9E8789F5246()))), 5, iVar5);
				}
			}
			else if (func_760())
			{
				func_745(3438960429, iVar0, &iVar17, 0, 1, 0);
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
			if (func_744())
			{
				if (!func_760())
				{
					iVar18 = func_739(uParam2->f_10, iVar5);
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
			else if (func_760())
			{
				func_745(463142405, iVar0, &iVar20, 0, 1, 0);
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
			if (func_760())
			{
				func_745(1407278493, iVar0, &iVar21, 0, 1, 0);
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
			if (func_744())
			{
				if (!func_760())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_14, iVar5);
				}
			}
			else if (func_760())
			{
				func_745(3438960429, iVar0, &iVar22, 0, 1, 0);
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
			if (func_760())
			{
				func_745(3333932415, iVar0, &iVar23, 0, 1, 0);
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
			if (func_760())
			{
				func_745(1135468152, iVar0, &iVar24, 0, 1, 0);
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
			if (func_760())
			{
				func_745(3660240660, iVar0, &iVar25, 0, 1, 0);
				Global_410C0F[iVar25 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar25 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar25 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_760())
		{
			func_745(3438960429, iVar0, &iVar26, 0, 1, 0);
			Global_410C0F[iVar26 /*80*/].f_6 = uVar11;
			Global_410C0F[iVar26 /*80*/].f_7 = uVar12;
			Global_410C0F[iVar26 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0xECDF3A47BBA3F980(uVar11, uVar12, iVar0, bVar14);
		}
		func_738(iParam0, iVar0);
		if (func_737(iParam0))
		{
			if (func_736(iParam0) > 4294967295)
			{
				func_735(func_736(iParam0), iVar0);
			}
		}
		Global_258AE3 = iVar0;
		func_734(&Global_25841E, 0, 0);
	}
	if (func_364(CAM::_0xDC9DA9E8789F5246()) || func_262(CAM::_0xDC9DA9E8789F5246()))
	{
		func_725(iParam0);
	}
	if (func_707(iParam0))
	{
		Global_196F08.f_D = iVar0;
		Global_196F08.f_E = iVar1;
	}
	if (func_711(iParam0))
	{
		Global_196F3E.f_D = iVar0;
		Global_196F3E.f_E = iVar1;
	}
	if (func_556(iParam0))
	{
		Global_196F7D.f_C = iVar0;
		Global_196F7D.f_D = iVar1;
	}
	if (func_554(iParam0))
	{
		Global_196FA9.f_C = iVar0;
		Global_196FA9.f_D = iVar1;
	}
	if (func_552(iParam0))
	{
		Global_196FDF.f_C = iVar0;
		Global_196FDF.f_D = iVar1;
	}
	if (func_710(iParam0))
	{
		if (func_724(iParam0))
		{
			Global_197030.f_C = iVar0;
			Global_197030.f_D = iVar1;
		}
		else if (func_720(iParam0))
		{
			Global_197065.f_C = iVar0;
			Global_197065.f_D = iVar1;
		}
	}
}

int func_720(int iParam0)//Position - 0x1C75F
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_721(func_722(CAM::_0xDC9DA9E8789F5246()))))
	{
		return 1;
	}
	return 0;
}

int func_721(int iParam0)//Position - 0x1C7E8
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

int func_722(int iParam0)//Position - 0x1C820
{
	if (func_288(iParam0) == 237 || func_288(iParam0) == 250)
	{
		return func_723(iParam0);
	}
	return 4294967295;
}

int func_723(int iParam0)//Position - 0x1C84D
{
	if (func_158(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_B0;
	}
	return 4294967295;
}

int func_724(int iParam0)//Position - 0x1C870
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_725(int iParam0)//Position - 0x1C884
{
	if (func_733(CAM::_0xDC9DA9E8789F5246()) && func_759())
	{
		if (func_560(iParam0))
		{
			func_728(8657, 4294967295);
		}
		else if (func_727(iParam0))
		{
			func_728(8659, 4294967295);
		}
		else if (func_291(iParam0, 1))
		{
			func_728(8660, 4294967295);
		}
		else if (func_726(iParam0))
		{
			func_728(8661, 4294967295);
		}
	}
}

int func_726(int iParam0)//Position - 0x1C8EE
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

int func_727(int iParam0)//Position - 0x1C91A
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

void func_728(int iParam0, int iParam1)//Position - 0x1C946
{
	int iVar0;
	
	iVar0 = func_732(iParam0, func_374(iParam1), 0);
	iVar0++;
	if (!func_731(iParam0))
	{
		func_730(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_729(iParam0, iVar0, iParam1, 1);
	}
}

void func_729(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1C987
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_374(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_374(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_374(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_374(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_374(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_374(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_374(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_374(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_374(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_374(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_374(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_374(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_374(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_374(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_374(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_374(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_374(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_374(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_374(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_374(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_374(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_374(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_374(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_374(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_374(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_374(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_374(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_374(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_374(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_374(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_374(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_374(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_374(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_730(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1D192
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_374(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_731(int iParam0)//Position - 0x1D1C2
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

int func_732(int iParam0, int iParam1, int iParam2)//Position - 0x1D3CC
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_374(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_733(int iParam0)//Position - 0x1D3FE
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_73, 14);
}

void func_734(var uParam0, bool bParam1, bool bParam2)//Position - 0x1D424
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

void func_735(int iParam0, int iParam1)//Position - 0x1D461
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

int func_736(int iParam0)//Position - 0x1D4D3
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

int func_737(int iParam0)//Position - 0x1D5B4
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

void func_738(int iParam0, int iParam1)//Position - 0x1D61C
{
	if (func_733(CAM::_0xDC9DA9E8789F5246()) && func_759())
	{
		if (func_560(iParam0) && iParam1 > 0)
		{
			func_730(8658, (func_732(8658, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

int func_739(int iParam0, int iParam1)//Position - 0x1D660
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_742(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_740(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_740(int iParam0, int iParam1)//Position - 0x1D689
{
	return (func_741(iParam0) * iParam1);
}

int func_741(int iParam0)//Position - 0x1D69A
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

float func_742(int iParam0, int iParam1)//Position - 0x1D73A
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

int func_743(int iParam0)//Position - 0x1D852
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_AE[5 /*12*/];
}

bool func_744()//Position - 0x1D878
{
	return func_20(CAM::_0xDC9DA9E8789F5246());
}

void func_745(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1D888
{
	int iVar0;
	
	if (!func_760())
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
				func_746(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_746(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_746(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_746(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_746(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1DDF5
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_760())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_36()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_753(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_752(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_747(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_747(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1DFA0
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_748(iParam0);
	}
}

void func_748(int iParam0)//Position - 0x1DFD8
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_760())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_751(iParam0))
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
		func_749(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_749(var uParam0)//Position - 0x1E02C
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
	func_750(&(uParam0->f_D));
	func_750(&(uParam0->f_D.f_D));
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

void func_750(var uParam0)//Position - 0x1E133
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

int func_751(int iParam0)//Position - 0x1E17B
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_752(int iParam0, int iParam1)//Position - 0x1E1A5
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_753(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1E1B9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_760())
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
				func_754(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_754(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x1E2F5
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
	iVar1 = func_583(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_755();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_755()//Position - 0x1E387
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_756(int iParam0)//Position - 0x1E397
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

char* func_757(int iParam0)//Position - 0x1E4DD
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

struct<2> func_758()//Position - 0x1E6BF
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_BC;
}

bool func_759()//Position - 0x1E6D8
{
	return func_319(CAM::_0xDC9DA9E8789F5246());
}

int func_760()//Position - 0x1E6E8
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_761(int iParam0, var uParam1, var uParam2)//Position - 0x1E6FF
{
	*uParam1 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
	*uParam2 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_762(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x1E72D
{
	return func_763(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_763(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x1E74F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_773(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_769(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_764(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_764(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x1E7C8
{
	vector3 vVar0;
	
	vVar0 = { func_767(iParam0, 1) };
	if (iParam0 == func_766(AUDIO::_0x0626A247D2405330()))
	{
		func_765(1);
	}
	func_769(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_765(int iParam0)//Position - 0x1E7FC
{
	Global_252F9E.f_75E = iParam0;
}

int func_766(int iParam0)//Position - 0x1E80D
{
	return iParam0;
}

Vector3 func_767(int iParam0, bool bParam1)//Position - 0x1E817
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
	if (iParam0 == func_768(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_768(int iParam0)//Position - 0x1E8DB
{
	return iParam0;
}

void func_769(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x1E8E5
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
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_772(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_771();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_770();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_770()//Position - 0x1E9FC
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_771()//Position - 0x1EA26
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_772(vector3 vParam0, var uParam1, var uParam2)//Position - 0x1EA41
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

var func_773(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1EADA
{
	var uVar0;
	
	uVar0 = func_774(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_774(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1EAFD
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_804(CAM::_0xDC9DA9E8789F5246()) || func_803(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_307() || func_802(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_801(sParam2))
	{
	}
	if (func_800())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_798(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_797(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_795(0, &iVar1);
					break;
				
				case 3:
					func_795(1, &iVar1);
					break;
				
				case 1:
					func_793(&iVar1);
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
			func_792(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_784((func_791(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_792(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_779(iVar1);
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
				func_775((func_777(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_775((func_777(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_775(int iParam0)//Position - 0x1ECFB
{
	if (func_800())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_776(joaat("mpply_globalxp"), iParam0);
	}
}

void func_776(int iParam0, int iParam1)//Position - 0x1ED26
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_777(int iParam0)//Position - 0x1ED42
{
	if (iParam0 > 4294967295)
	{
		if (func_1202(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_778(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_778(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_778(int iParam0)//Position - 0x1ED93
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

void func_779(int iParam0)//Position - 0x1EDB1
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_45(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_782(func_783(&Var0));
			if (iVar1 == 0)
			{
				func_781(&Global_150A08, iParam0);
				func_780(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_781(&Global_150A09, iParam0);
				func_780(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_781(&Global_150A0A, iParam0);
				func_780(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_781(&Global_150A0B, iParam0);
				func_780(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_781(&Global_150A0C, iParam0);
				func_780(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_780(int iParam0, int iParam1)//Position - 0x1EE85
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

void func_781(var uParam0, int iParam1)//Position - 0x1EFAA
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_782(int iParam0)//Position - 0x1EFBB
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

int func_783(var uParam0)//Position - 0x1F018
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

void func_784(int iParam0, int iParam1, int iParam2)//Position - 0x1F03B
{
	if (func_800())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_374(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_374(4294967295)])
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
		if (func_790(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_788(iParam0, 1);
		}
		func_729(639, iParam0, 4294967295, 1);
		func_730(640, func_788(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_374(4294967295)] = iParam0;
		func_785(7, 0);
	}
}

void func_785(int iParam0, int iParam1)//Position - 0x1F15C
{
	int iVar0;
	
	if (func_787(iParam0, iParam1))
	{
		iVar0 = func_786();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_786()//Position - 0x1F17F
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

int func_787(int iParam0, var uParam1)//Position - 0x1F1B4
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

int func_788(int iParam0, bool bParam1)//Position - 0x1F23A
{
	if (bParam1)
	{
	}
	return func_789(iParam0, 0);
}

int func_789(int iParam0, int iParam1)//Position - 0x1F24E
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

int func_790(int iParam0)//Position - 0x1F30D
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

int func_791(int iParam0)//Position - 0x1F332
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_374(4294967295)];
			}
			else if (func_790(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_374(4294967295)];
	}
	return 0;
}

void func_792(int iParam0, int iParam1, int iParam2)//Position - 0x1F38F
{
	int iVar0;
	
	iVar0 = func_732(iParam0, func_374(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_731(iParam0))
	{
		func_730(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_729(iParam0, iVar0, iParam2, 1);
	}
}

void func_793(int iParam0)//Position - 0x1F3D1
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_117(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_46(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_794(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_794(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_794(int iParam0, int iParam1)//Position - 0x1F4BC
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_795(bool bParam0, int iParam1)//Position - 0x1F4DD
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
				if (func_1202(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_46(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_1202(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_796(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_46(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_794(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_794(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_796(int iParam0, int iParam1)//Position - 0x1F5F5
{
	return SYSTEM::VDIST(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_797(int iParam0)//Position - 0x1F611
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_794(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_798(int iParam0)//Position - 0x1F648
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_791(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_791(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_799(8000, 0, 0) > 0)
	{
		if (func_799(8000, 0, 0) < (iParam0 + func_791(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_799(8000, 0, 0) - func_791(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_799(int iParam0, bool bParam1, int iParam2)//Position - 0x1F6AC
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

int func_800()//Position - 0x1F6D4
{
	return 1;
}

int func_801(char* sParam0)//Position - 0x1F6DD
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

int func_802(int iParam0)//Position - 0x1F716
{
	return func_552(func_288(iParam0));
}

bool func_803(int iParam0)//Position - 0x1F728
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_804(int iParam0)//Position - 0x1F73D
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_805()//Position - 0x1F752
{
	Global_258851 = 1;
}

void func_806(int iParam0, var uParam1, var uParam2)//Position - 0x1F75F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_340(7))
	{
		return;
	}
	iVar0 = func_809(iParam0);
	iVar1 = func_808(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_26862F.f_1313.f_103, HUD::_0x13C4B962653A5280()));
	if (func_807(iParam0) != 4294967295)
	{
		if (iVar2 > func_807(iParam0))
		{
			iVar2 = func_807(iParam0);
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

int func_807(int iParam0)//Position - 0x1F809
{
	if (func_291(iParam0, 0) || func_727(iParam0))
	{
		return Global_40001.f_47B4;
	}
	if (func_560(iParam0))
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

int func_808(int iParam0)//Position - 0x1F90C
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
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_51B9;
			}
			break;
		
		case 226:
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_51A5;
			}
			break;
		
		case 227:
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_51B1;
			}
			break;
		
		case 229:
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_563D;
			}
			break;
		
		case 230:
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_569D;
			}
			break;
		
		case 233:
			if (func_1074(0) || func_317(0))
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
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_5CFB;
			}
			break;
		
		case 238:
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_5D6A;
			}
			break;
		
		case 249:
			if (func_1074(0) || func_317(0))
			{
				return Global_40001.f_5D7A;
			}
			break;
	}
	return 0;
}

int func_809(int iParam0)//Position - 0x1FE09
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
			if (!func_744())
			{
				return Global_40001.f_45E1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_744())
			{
				return Global_40001.f_463C;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_744())
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
			if (func_317(0))
			{
				return Global_40001.f_51B8;
			}
			break;
		
		case 226:
			if (func_317(0))
			{
				return Global_40001.f_51A4;
			}
			break;
		
		case 227:
			if (func_317(0))
			{
				return Global_40001.f_51B0;
			}
			break;
		
		case 229:
			if (func_317(0))
			{
				return Global_40001.f_563C;
			}
			break;
		
		case 230:
			if (func_317(0))
			{
				return Global_40001.f_569C;
			}
			break;
		
		case 233:
			if (func_317(0))
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
			if (func_317(0))
			{
				return Global_40001.f_5CFA;
			}
			break;
		
		case 238:
			if (func_317(0))
			{
				return Global_40001.f_5D69;
			}
			break;
		
		case 249:
			if (func_317(0))
			{
				return Global_40001.f_5D79;
			}
			break;
	}
	return 0;
}

void func_810(int iParam0, int iParam1)//Position - 0x202B1
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_744())
		{
			if (func_1074(0))
			{
				if (!func_317(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_532()))
					{
						if (func_818() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_818());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_816(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_815("GB_BCUT_TICK1", func_532(), iVar0, 0, 0, 1, 1);
						}
						func_814(20);
						func_811(func_532(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_811(int iParam0, int iParam1, int iParam2)//Position - 0x20352
{
	struct<8> Var0;
	
	if (func_1202(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_813(iParam0);
		func_812(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_583(iParam0));
	}
}

void func_812(var uParam0, var uParam1)//Position - 0x203A8
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_813(int iParam0)//Position - 0x203C2
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_814(int iParam0)//Position - 0x203D6
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_815(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x203FF
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_627(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_625(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_620(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_816(int iParam0, bool bParam1)//Position - 0x20497
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_817(1);
	}
	else
	{
		iVar1 = func_817(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_817(bool bParam0)//Position - 0x204C9
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_818()//Position - 0x204EF
{
	return Global_40001.f_2FF4;
}

void func_819(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x204FE
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
	
	bVar18 = func_317(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_744())
		{
			iVar17 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar17 = func_532();
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
				iVar2 = func_835(Global_1841F3[iVar11 /*790*/].f_300, *uParam3);
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
			iVar10 = func_834(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == CAM::_0xDC9DA9E8789F5246())
				{
					func_833("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_197030.f_31 = *uParam3;
			if (iVar17 == CAM::_0xDC9DA9E8789F5246())
			{
				if (iVar2 > 0)
				{
					func_832(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_830(*uParam3);
				}
				iVar6 = func_829(&uVar5);
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
						func_814(140);
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
								if (func_828(iVar23))
								{
									func_820(iVar23, 1, 198210293);
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
					func_814(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_820(int iParam0, int iParam1, int iParam2)//Position - 0x20765
{
	var uVar0;
	
	uVar0 = func_822(iParam0);
	func_821(iParam0, uVar0, iParam1, iParam2);
}

void func_821(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x20781
{
	struct<8> Var0;
	
	Var0 = 2440128305;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_813(iParam0);
	func_812(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_18())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_583(iParam0));
		}
	}
}

int func_822(int iParam0)//Position - 0x207E7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_827();
	iVar0 = func_825(iParam0, iVar0);
	iVar1 = Global_18CD5B[func_532() /*560*/].f_B.f_198;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_39EC));
	if (iVar0 < func_824())
	{
		iVar0 = func_824();
	}
	if (iVar0 > func_823())
	{
		iVar0 = func_823();
	}
	return iVar0;
}

int func_823()//Position - 0x20840
{
	return Global_40001.f_39ED;
}

int func_824()//Position - 0x2084F
{
	return Global_40001.f_3E84;
}

int func_825(int iParam0, int iParam1)//Position - 0x2085E
{
	int iVar0;
	
	iVar0 = (func_893(iParam0) * func_826());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_826()//Position - 0x2087C
{
	return Global_40001.f_3E83;
}

var func_827()//Position - 0x2088B
{
	return Global_40001.f_2FEC;
}

int func_828(int iParam0)//Position - 0x2089A
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (func_16(iParam0, CAM::_0xDC9DA9E8789F5246(), 0))
			{
				if (!func_263(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_829(var uParam0)//Position - 0x208D3
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
			if (!func_34(iVar2, 0) && !func_16(iVar2, CAM::_0xDC9DA9E8789F5246(), 1))
			{
				iVar1++;
			}
			else if (func_34(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_830(int iParam0)//Position - 0x2093F
{
	func_831(iParam0, 7236);
}

void func_831(int iParam0, int iParam1)//Position - 0x20950
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_732(iParam1, 4294967295, 0);
	func_730(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_832(int iParam0)//Position - 0x20979
{
	func_831(iParam0, 7231);
}

int func_833(char* sParam0, int iParam1, int iParam2)//Position - 0x2098A
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_620(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_834(int iParam0)//Position - 0x209BF
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

int func_835(struct<5> Param0, int iParam1)//Position - 0x209F3
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

void func_836(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x20A5D
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
	bVar16 = func_317(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_744())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_532();
		}
		if (iVar15 != 4294967295)
		{
			if (uParam1->f_10 == 8)
			{
				iVar0 = (func_848(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_839(uParam1->f_10) + uParam1->f_8);
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
			iVar2 = func_740(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_739(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_838(*iParam2) > 0)
			{
				if (iVar15 == CAM::_0xDC9DA9E8789F5246())
				{
					func_833("SMTICK_RONCUT", func_838(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_838(*iParam2));
			}
			if (iVar15 == CAM::_0xDC9DA9E8789F5246())
			{
				func_837(iVar2, iVar9);
				iVar6 = func_829(&uVar5);
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
						func_814(44);
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
								if (func_828(iVar20))
								{
									func_820(iVar20, 1, 1160415507);
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
					func_814(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_837(int iParam0, int iParam1)//Position - 0x20CA3
{
	if (iParam0 > 0)
	{
		func_831(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_831(iParam1, 6117);
	}
}

int func_838(int iParam0)//Position - 0x20CC9
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

int func_839(int iParam0)//Position - 0x20D09
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_846())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_848(CAM::_0xDC9DA9E8789F5246());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_841(func_842(func_845(iVar0), 4294967295, 4294967295));
		if (func_840(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_840(int iParam0)//Position - 0x20D67
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

int func_841(int iParam0)//Position - 0x20E17
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

int func_842(int iParam0, int iParam1, int iParam2)//Position - 0x20F07
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_844(iParam0, iParam1);
	iVar2 = func_843(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_843(int iParam0)//Position - 0x20F4D
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

int func_844(int iParam0, int iParam1)//Position - 0x212EF
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_36();
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

int func_845(int iParam0)//Position - 0x21644
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

bool func_846()//Position - 0x218AE
{
	return func_847() != 0;
}

int func_847()//Position - 0x218BC
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_FF;
}

int func_848(int iParam0)//Position - 0x218D4
{
	if (iParam0 != func_18() && func_849(iParam0))
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF.f_3;
	}
	return 0;
}

int func_849(int iParam0)//Position - 0x21905
{
	if (iParam0 != func_18())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF != 0;
	}
	return 0;
}

void func_850(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x2192A
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
	
	bVar17 = func_317(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_744())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_532();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_743(iVar15);
			iVar0 = (func_871(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_867(iVar15, iVar16, iVar1);
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
				func_864(iVar16, iVar2);
				if (func_860(iVar16) >= Global_40001.f_4FE3 || iVar2 >= Global_40001.f_4FE3)
				{
					func_851(5);
				}
				iVar6 = func_829(&uVar5);
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
						func_814(108);
					}
					else
					{
						func_814(110);
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
								if (func_828(iVar20))
								{
									func_820(iVar20, 1, 2389839094);
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
					func_814(112);
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

void func_851(int iParam0)//Position - 0x21B65
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_4FD7)
			{
				if (func_853(Global_40001.f_4FD8))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_4FD9)
			{
				if (func_853(Global_40001.f_4FDA))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_4FDB)
			{
				if (func_853(Global_40001.f_4FDC))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_4FDD)
			{
				if (func_853(Global_40001.f_4FDE))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_4FDF)
			{
				if (func_853(Global_40001.f_4FE0))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_4FE1)
			{
				if (func_853(Global_40001.f_4FE2))
				{
					func_833("CLOTHAWDSTRAP3", Global_40001.f_4FE3, 1);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_4FE4)
			{
				if (func_853(Global_40001.f_4FE5))
				{
					func_833("CLOTHAWDSTRAP5", Global_40001.f_5069, 1);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_4FE7)
			{
				if (func_853(Global_40001.f_4FE8))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_4FE9)
			{
				if (func_853(Global_40001.f_4FEA))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_4FEB)
			{
				if (func_853(Global_40001.f_4FEC))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_4FED)
			{
				if (func_853(Global_40001.f_4FEE))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_4FEF)
			{
				if (func_853(Global_40001.f_4FF0))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_4FF1)
			{
				if (func_853(Global_40001.f_4FF2))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_4FF3)
			{
				if (func_853(Global_40001.f_4FF4))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_4FF5)
			{
				if (func_853(Global_40001.f_4FF6))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_852(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x21E62
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
		Global_2633E1 = { func_45(CAM::_0xDC9DA9E8789F5246()) };
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
	func_620(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_853(int iParam0)//Position - 0x21F56
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_857(15417, 4294967295, 4294967295))
			{
				func_856(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_857(15418, 4294967295, 4294967295))
			{
				func_856(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_857(15425, 4294967295, 4294967295))
			{
				func_856(15425, 1, 4294967295, 1);
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
			if (!func_857(15405, 4294967295, 4294967295))
			{
				func_856(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_857(15393, 4294967295, 4294967295))
			{
				func_856(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_857(15409, 4294967295, 4294967295))
			{
				func_856(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_857(15396, 4294967295, 4294967295))
			{
				func_856(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_857(15412, 4294967295, 4294967295))
			{
				func_856(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_857(15403, 4294967295, 4294967295))
			{
				func_856(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_857(15389, 4294967295, 4294967295))
			{
				func_856(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_857(15398, 4294967295, 4294967295))
			{
				func_856(15398, 1, 4294967295, 1);
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
			if (!func_857(15400, 4294967295, 4294967295))
			{
				func_856(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_857(15408, 4294967295, 4294967295))
			{
				func_856(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_857(15411, 4294967295, 4294967295))
			{
				func_856(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_857(15397, 4294967295, 4294967295))
			{
				func_856(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_857(15413, 4294967295, 4294967295))
			{
				func_856(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_857(15391, 4294967295, 4294967295))
			{
				func_856(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_857(15388, 4294967295, 4294967295))
			{
				func_856(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_857(15401, 4294967295, 4294967295))
			{
				func_856(15401, 1, 4294967295, 1);
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
			if (!func_857(15394, 4294967295, 4294967295))
			{
				func_856(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_857(15406, 4294967295, 4294967295))
			{
				func_856(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_857(15395, 4294967295, 4294967295))
			{
				func_856(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_857(15410, 4294967295, 4294967295))
			{
				func_856(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_857(15407, 4294967295, 4294967295))
			{
				func_856(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_857(15414, 4294967295, 4294967295))
			{
				func_856(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_857(15415, 4294967295, 4294967295))
			{
				func_856(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_857(15399, 4294967295, 4294967295))
			{
				func_856(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_857(15404, 4294967295, 4294967295))
			{
				func_856(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_857(15392, 4294967295, 4294967295))
			{
				func_856(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_857(15390, 4294967295, 4294967295))
			{
				func_856(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_857(15402, 4294967295, 4294967295))
			{
				func_856(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_857(15416, 4294967295, 4294967295))
			{
				func_856(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_373(209, 4294967295))
			{
				func_854(209, 1, 4294967295, 1);
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
			if (!func_857(15426, 4294967295, 4294967295))
			{
				func_856(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_857(15422, 4294967295, 4294967295))
			{
				func_856(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_857(15423, 4294967295, 4294967295))
			{
				func_856(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_857(15421, 4294967295, 4294967295))
			{
				func_856(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_857(15427, 4294967295, 4294967295))
			{
				func_856(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_857(15419, 4294967295, 4294967295))
			{
				func_856(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_857(15420, 4294967295, 4294967295))
			{
				func_856(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_854(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22ACB
{
	int iVar0;
	
	if (func_855())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_374(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_855()//Position - 0x22AFD
{
	return 1;
	return 0;
}

int func_856(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x22B0A
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
		iParam2 = func_36();
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

int func_857(int iParam0, int iParam1, int iParam2)//Position - 0x23072
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_36();
	}
	iVar1 = func_859(iParam0, iParam1);
	uVar2 = func_858(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_858(int iParam0)//Position - 0x230AF
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

int func_859(int iParam0, int iParam1)//Position - 0x233C7
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_36();
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

int func_860(int iParam0)//Position - 0x236BF
{
	int iVar0;
	
	iVar0 = func_862(iParam0);
	return func_732(func_861(iVar0), 4294967295, 0);
}

int func_861(int iParam0)//Position - 0x236DB
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

int func_862(int iParam0)//Position - 0x23735
{
	int iVar0;
	
	if (func_863(iParam0))
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

int func_863(int iParam0)//Position - 0x23777
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_864(int iParam0, int iParam1)//Position - 0x23796
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_862(iParam0);
	iVar1 = func_861(iVar0);
	iVar2 = (func_732(iVar1, 4294967295, 0) + iParam1);
	func_730(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_842(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iVar0 /*12*/] != 0)
			{
				iVar1 = func_861(iVar0);
				iVar3 = (iVar3 + func_732(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_866(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_865(9357, iVar5, 4294967295, 1);
	}
}

var func_865(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2384B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_36();
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

int func_866(int iParam0)//Position - 0x23D89
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

int func_867(int iParam0, int iParam1, int iParam2)//Position - 0x23DC9
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_756(iParam1);
	if (func_863(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_41C2;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C7);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CC);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_41C1;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C6);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CB);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_41C0;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C5);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CA);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_41BE;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C3);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C8);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_41BF;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C4);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C9);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_51C0;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_51C2);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_51C1);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_868(int iParam0, int iParam1, int iParam2)//Position - 0x23FA1
{
	int iVar0;
	
	if (func_870(iParam0, iParam1))
	{
		iVar0 = func_869(iParam0, iParam1);
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_869(int iParam0, int iParam1)//Position - 0x23FDC
{
	int iVar0;
	
	if (func_863(iParam1) && iParam0 != func_18())
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

int func_870(int iParam0, int iParam1)//Position - 0x24029
{
	int iVar0;
	
	if (func_863(iParam1) && iParam0 != func_18())
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

int func_871(int iParam0, int iParam1)//Position - 0x24074
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1))
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

void func_872(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x240D3
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
			if (func_759())
			{
				Var0 = { func_758() };
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
				iVar6 = func_867(CAM::_0xDC9DA9E8789F5246(), Var0, *uParam3);
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
				iVar10 = func_829(&uVar9);
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
					func_814(86);
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (func_317(0))
			{
				Var14 = { func_873(func_532()) };
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
				iVar20 = func_867(func_532(), Var14, *uParam3);
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

struct<2> func_873(int iParam0)//Position - 0x24376
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_BC;
}

void func_874(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x2438D
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
		if (func_20(CAM::_0xDC9DA9E8789F5246()))
		{
			if (bParam1)
			{
				func_889();
			}
			func_888();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(CAM::_0xDC9DA9E8789F5246()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_880(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B1));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_879(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_829(&uVar2);
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
						func_814(44);
					}
				}
				func_877(*iParam3);
				func_876();
				Global_26862F.f_1313.f_174 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_828(iVar9))
						{
							func_820(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(CAM::_0xDC9DA9E8789F5246()))
		{
			func_875();
		}
	}
}

void func_875()//Position - 0x244F9
{
	int iVar0;
	
	iVar0 = Global_27304E[func_36()];
	iVar0++;
	func_729(3667, iVar0, 4294967295, 1);
}

void func_876()//Position - 0x2451E
{
	int iVar0;
	
	iVar0 = Global_273054[func_36()];
	iVar0++;
	func_729(3666, iVar0, 4294967295, 1);
}

void func_877(int iParam0)//Position - 0x24543
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_273057[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_729(3668, iVar0, 4294967295, 1);
	if (func_842(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_878(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_865(7666, iVar2, 4294967295, 1);
	}
}

int func_878(int iParam0)//Position - 0x245A5
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

var func_879(int iParam0)//Position - 0x2477D
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

int func_880(int iParam0)//Position - 0x2497D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_887(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_886(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_885(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_881(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_881(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_885(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_881(int iParam0)//Position - 0x249F9
{
	int iVar0;
	
	if (func_884(iParam0))
	{
		iVar0 = func_882(func_883(iParam0));
		return func_732(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_882(int iParam0)//Position - 0x24A22
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

int func_883(int iParam0)//Position - 0x24A75
{
	int iVar0;
	
	if (func_884(iParam0))
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

int func_884(int iParam0)//Position - 0x24AB7
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_885(int iParam0)//Position - 0x24AD6
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

int func_886(int iParam0, int iParam1)//Position - 0x24B4E
{
	int iVar0;
	
	if (func_884(iParam0))
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

int func_887(int iParam0)//Position - 0x24B94
{
	int iVar0;
	
	if (func_884(iParam0))
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

void func_888()//Position - 0x24BD5
{
	int iVar0;
	
	iVar0 = Global_27304B[func_36()];
	iVar0++;
	Global_27304B[func_36()] = iVar0;
	func_729(3665, iVar0, 4294967295, 1);
}

void func_889()//Position - 0x24C06
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_273048[func_36()];
	iVar1 = Global_273051[func_36()];
	iVar0++;
	iVar1++;
	Global_273048[func_36()] = iVar0;
	Global_273051[func_36()] = iVar1;
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_78 = iVar1;
	func_729(3663, iVar0, 4294967295, 1);
	func_729(3664, iVar1, 4294967295, 1);
}

void func_890()//Position - 0x24C72
{
	if (func_744())
	{
		Global_255F11.f_BFC.f_86 = 0;
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
	}
}

void func_891()//Position - 0x24CA4
{
	if (func_744())
	{
		if (Global_255F11.f_BFC.f_86 < 10)
		{
			Global_255F11.f_BFC.f_86++;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

void func_892()//Position - 0x24CEE
{
	if (func_744())
	{
		if (Global_255F11.f_BFC.f_86 > 0)
		{
			Global_255F11.f_BFC.f_86 = (Global_255F11.f_BFC.f_86 - 1);
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

int func_893(int iParam0)//Position - 0x24D37
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_1C;
}

int func_894(int iParam0)//Position - 0x24D4C
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
			if (func_1074(1) && !func_317(1))
			{
				if (func_895(func_532()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_895(int iParam0)//Position - 0x24DC1
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 26);
}

int func_896(int iParam0)//Position - 0x24DE7
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

int func_897(int iParam0, bool bParam1)//Position - 0x2518C
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
			if (func_744())
			{
				return Global_40001.f_4917;
			}
			else if (bParam1)
			{
				return Global_40001.f_4918;
			}
			break;
		
		case 188:
			if (func_744())
			{
				return Global_40001.f_496B;
			}
			else if (bParam1)
			{
				return Global_40001.f_496C;
			}
			break;
		
		case 225:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51B4;
				}
				else
				{
					return Global_40001.f_51B5;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_51B6;
			}
			break;
		
		case 226:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51A0;
				}
				else
				{
					return Global_40001.f_51A1;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_51A2;
			}
			break;
		
		case 227:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51AC;
				}
				else
				{
					return Global_40001.f_51AD;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_51AE;
			}
			break;
		
		case 229:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5638;
				}
				else
				{
					return Global_40001.f_5639;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_563A;
			}
			break;
		
		case 230:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5698;
				}
				else
				{
					return Global_40001.f_5699;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_569A;
			}
			break;
		
		case 233:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5872;
				}
				else
				{
					return Global_40001.f_5873;
				}
			}
			else if (func_759())
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
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5CF6;
				}
				else
				{
					return Global_40001.f_5CF7;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_5CF8;
			}
			break;
		
		case 238:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D65;
				}
				else
				{
					return Global_40001.f_5D66;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_5D67;
			}
			break;
		
		case 249:
			if (func_744() && !func_759())
			{
				if (func_895(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D75;
				}
				else
				{
					return Global_40001.f_5D76;
				}
			}
			else if (func_759())
			{
				return Global_40001.f_5D77;
			}
			break;
	}
	return 0;
}

void func_898(int iParam0, var uParam1, var uParam2)//Position - 0x2587F
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_899(iParam0))
	{
		if (!func_744())
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
	if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_707(iParam0))
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
	else if (func_707(iParam0))
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
	iVar0 = func_320();
	if (iVar0 != func_18())
	{
		if (func_16(CAM::_0xDC9DA9E8789F5246(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_899(int iParam0)//Position - 0x25AE2
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

void func_900(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x25B26
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_249(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_4 = func_1000();
		Global_19700D.f_5 = func_999();
		if (func_365(CAM::_0xDC9DA9E8789F5246()) || func_248(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_19700D.f_6 = 1;
		}
		else
		{
			Global_19700D.f_6 = 0;
		}
		Global_19700D.f_1 = func_995(bParam9);
		Global_19700D.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_19700D.f_9 = func_994(bParam0);
		Global_19700D.f_A = iParam1;
		Global_19700D.f_11 = Global_19700D.f_2;
		Global_19700D.f_12 = Global_19700D.f_2;
		Global_19700D.f_13 = func_993();
		Global_19700D.f_15 = (Global_19700D.f_8 - Global_19700D.f_7);
		if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_19700D.f_17 = func_994(func_317(1));
		}
		Global_19700D.f_18 = func_992(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_1C = func_991(CAM::_0xDC9DA9E8789F5246());
		if (Global_19700D.f_18 > 2)
		{
			Global_19700D.f_18 = 2;
		}
		func_989(iVar0);
	}
	else
	{
		iVar0 = func_288(CAM::_0xDC9DA9E8789F5246());
	}
	if (func_707(iVar0))
	{
		Global_196F08.f_2 = func_1000();
		Global_196F08.f_3 = func_999();
		Global_196F08.f_32 = iParam4;
		Global_196F08.f_33 = iParam5;
		Global_196F08.f_A = NETWORK::_GET_POSIX_TIME();
		Global_196F08.f_14 = (Global_196F08.f_A - Global_196F08.f_9);
		Global_196F08.f_C = iParam1;
		Global_196F08.f_13 = func_983(iVar0, bParam0, func_988(bParam3));
		if (bParam0)
		{
			Global_196F08.f_B = 1;
		}
		else
		{
			Global_196F08.f_B = 0;
		}
		if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F08.f_8 = 1;
		}
		else
		{
			Global_196F08.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_196F08.f_2B = 0;
			Global_196F08.f_2D = func_982(func_532(), iParam2);
			Global_196F08.f_2F = iParam7;
			Global_196F08.f_2E = iParam6;
			Global_196F08.f_34 = func_981(func_532(), iParam2);
		}
		func_979(iVar0);
	}
	else if (func_711(iVar0))
	{
		Global_196F3E.f_2 = func_1000();
		Global_196F3E.f_3 = func_999();
		Global_196F3E.f_A = NETWORK::_GET_POSIX_TIME();
		Global_196F3E.f_13 = (Global_196F3E.f_A - Global_196F3E.f_9);
		Global_196F3E.f_C = iParam1;
		if (bParam0)
		{
			Global_196F3E.f_B = 1;
		}
		else
		{
			Global_196F3E.f_B = 0;
		}
		if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F3E.f_8 = 1;
		}
		else
		{
			Global_196F3E.f_8 = 0;
		}
		func_977(iVar0);
	}
	else if (func_556(iVar0))
	{
		Global_196F7D.f_2 = func_1000();
		Global_196F7D.f_3 = func_999();
		Global_196F7D.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196F7D.f_12 = (Global_196F7D.f_9 - Global_196F7D.f_8);
		Global_196F7D.f_B = iParam1;
		Global_196F7D.f_7 = func_993();
		Global_196F7D.f_2A = func_975(func_36(), 5);
		iVar1 = CAM::_0xDC9DA9E8789F5246();
		iVar2 = func_743(iVar1);
		Global_196F7D.f_1C = iVar2;
		Global_196F7D.f_1D = func_994((func_974(iVar1) || func_973(iVar1)));
		Global_196F7D.f_1E = func_994(func_972(iVar1));
		Global_196F7D.f_20 = func_994(func_971(iVar1));
		Global_196F7D.f_21 = func_994(func_970(iVar1));
		Global_196F7D.f_22 = func_994(func_969(iVar1));
		Global_196F7D.f_23 = func_994(func_968(0, iVar1) == 1);
		Global_196F7D.f_24 = func_994(func_967(iVar1));
		Global_196F7D.f_25 = func_994(func_966(iVar1));
		Global_196F7D.f_26 = func_994(func_965(iVar1));
		Global_196F7D.f_27 = func_994(func_868(iVar1, iVar2, 0));
		Global_196F7D.f_28 = func_994(func_868(iVar1, iVar2, 2));
		Global_196F7D.f_29 = func_994(func_868(iVar1, iVar2, 1));
		if (func_964(iVar1))
		{
			Global_196F7D.f_1F = 2;
		}
		else if (func_963(iVar1))
		{
			Global_196F7D.f_1F = 1;
		}
		if (bParam0)
		{
			Global_196F7D.f_A = 1;
		}
		else
		{
			Global_196F7D.f_A = 0;
		}
		if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_6 = 1;
		}
		else
		{
			Global_196F7D.f_6 = 0;
		}
		Global_196F7D.f_15 = 4294967294;
		Global_196F7D.f_16 = 4294967294;
		func_961(iVar0);
	}
	else if (func_554(iVar0))
	{
		Global_196FA9.f_2 = func_1000();
		Global_196FA9.f_3 = func_999();
		if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196FA9.f_6 = 1;
		}
		else
		{
			Global_196FA9.f_6 = 0;
		}
		Global_196FA9.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196FA9.f_A = func_994(bParam0);
		Global_196FA9.f_B = iParam1;
		Global_196FA9.f_11 = func_960(func_320());
		Global_196FA9.f_12 = (Global_196FA9.f_9 - Global_196FA9.f_8);
		Global_196FA9.f_14 = iParam8;
		Global_196FA9.f_15 = 4294967294;
		Global_196FA9.f_16 = 4294967294;
		Global_196FA9.f_1B = func_959();
		Global_196FA9.f_1D = func_732(6107, 4294967295, 0);
		Global_196FA9.f_1E = func_732(6103, 4294967295, 0);
		Global_196FA9.f_1F = func_732(6104, 4294967295, 0);
		Global_196FA9.f_20 = func_732(6106, 4294967295, 0);
		Global_196FA9.f_21 = func_732(6105, 4294967295, 0);
		Global_196FA9.f_22 = func_732(6108, 4294967295, 0);
		Global_196FA9.f_24 = func_994(func_317(1));
		Global_196FA9.f_25 = func_957();
		func_942();
		func_940(iVar0);
	}
	else if (func_552(iVar0))
	{
		Global_196FDF.f_2 = func_1000();
		Global_196FDF.f_3 = func_999();
		if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196FDF.f_6 = 1;
		}
		else
		{
			Global_196FDF.f_6 = 0;
		}
		Global_196FDF.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196FDF.f_A = func_994(bParam0);
		Global_196FDF.f_B = iParam1;
		Global_196FDF.f_12 = (Global_196FDF.f_9 - Global_196FDF.f_8);
		Global_196FDF.f_14 = iParam8;
		Global_196FDF.f_17 = Global_C0073;
		Global_196FDF.f_24 = Global_C0073.f_1;
		Global_196FDF.f_18 = func_732(6157, 4294967295, 0);
		Global_196FDF.f_19 = func_732(6162, 4294967295, 0);
		Global_196FDF.f_1A = func_732(6163, 4294967295, 0);
		Global_196FDF.f_1B = func_994((((func_939() || func_938()) || func_937()) || func_936(CAM::_0xDC9DA9E8789F5246())));
		Global_196FDF.f_1C = func_732(6164, 4294967295, 0);
		Global_196FDF.f_1D = func_994(func_935());
		Global_196FDF.f_23 = 4294967295;
		Global_196FDF.f_26 = 4294967295;
		Global_196FDF.f_27 = Global_196FDF.f_4;
		Global_196FDF.f_28 = Global_196FDF.f_5;
		Global_196FDF.f_29 = func_1000();
		Global_196FDF.f_2A = func_994(func_317(1));
		Global_196FDF.f_2C = Global_196FDF.f_12;
		func_933(iVar0);
	}
	else if (func_720(iVar0))
	{
		if (Global_197065.f_2 == 4294967295)
		{
			Global_197065.f_2 = func_1000();
		}
		if (Global_197065.f_3 == 4294967295)
		{
			Global_197065.f_3 = func_999();
		}
		if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_197065.f_6 = 1;
		}
		else
		{
			Global_197065.f_6 = 0;
		}
		Global_197065.f_1 = func_995(0);
		Global_197065.f_7 = func_993();
		Global_197065.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_197065.f_A = func_994(bParam0);
		Global_197065.f_B = iParam1;
		if (func_532() != 4294967295)
		{
			Global_197065.f_11 = func_932(func_532());
		}
		Global_197065.f_12 = (Global_197065.f_9 - Global_197065.f_8);
		Global_197065.f_13 = Global_26862F.f_185C;
		Global_197065.f_1C = func_991(CAM::_0xDC9DA9E8789F5246());
		Global_197065.f_1D = func_994(func_931(CAM::_0xDC9DA9E8789F5246()));
		Global_197065.f_1E = func_994(func_930(CAM::_0xDC9DA9E8789F5246()));
		Global_197065.f_1F = func_929(CAM::_0xDC9DA9E8789F5246());
		if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197065.f_21 = func_994(func_317(1));
		}
		if (Global_197065.f_22 > 2)
		{
			Global_197065.f_22 = 2;
		}
		func_927(iVar0);
	}
	else if (func_724(iVar0))
	{
		Global_197030.f_2 = func_1000();
		Global_197030.f_3 = func_999();
		if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_197030.f_6 = 1;
		}
		else
		{
			Global_197030.f_6 = 0;
		}
		Global_197030.f_1 = func_995(0);
		Global_197030.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_197030.f_A = func_994(bParam0);
		Global_197030.f_B = iParam1;
		Global_197030.f_12 = (Global_197030.f_9 - Global_197030.f_8);
		Global_197030.f_1C = func_991(CAM::_0xDC9DA9E8789F5246());
		if (Global_197030.f_1C)
		{
			Global_197030.f_1D = func_926(CAM::_0xDC9DA9E8789F5246());
		}
		else
		{
			Global_197030.f_1D = 0;
		}
		Global_197030.f_1E = func_910(CAM::_0xDC9DA9E8789F5246(), 4, 4294967295);
		Global_197030.f_1F = func_929(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_20 = func_994(func_909(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_21 = func_994(func_908(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_22 = func_994(func_907(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_23 = func_994(func_906(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_24 = func_905(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_25 = func_904(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_27 = func_903(CAM::_0xDC9DA9E8789F5246());
		if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197030.f_29 = func_994(func_317(1));
		}
		if (Global_197030.f_2A > 2)
		{
			Global_197030.f_2A = 2;
		}
		func_901(iVar0);
	}
	else
	{
		Global_196EF6.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_196EF6.f_7 = 1;
		}
		else
		{
			Global_196EF6.f_7 = 0;
		}
		Global_196EF6.f_8 = iParam1;
		if (Global_196EF6.f_4 == 0)
		{
			if ((func_364(CAM::_0xDC9DA9E8789F5246()) || func_363(CAM::_0xDC9DA9E8789F5246())) || func_262(CAM::_0xDC9DA9E8789F5246()))
			{
				Global_196EF6.f_4 = 1;
			}
		}
	}
}

void func_901(int iParam0)//Position - 0x2657E
{
	unk_0x2D7A9B577E72385E(&Global_197030);
	func_902();
}

void func_902()//Position - 0x26592
{
	struct<53> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Var0.f_1D = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
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
	Global_197030 = { Var0 };
}

int func_903(int iParam0)//Position - 0x266BB
{
	if (iParam0 != func_18())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 12);
	}
	return 0;
}

int func_904(int iParam0)//Position - 0x266E5
{
	if (iParam0 != func_18())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 10);
	}
	return 0;
}

int func_905(int iParam0)//Position - 0x2670F
{
	if (iParam0 != func_18())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 11);
	}
	return 0;
}

bool func_906(int iParam0)//Position - 0x26739
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 4);
}

bool func_907(int iParam0)//Position - 0x26764
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 3);
}

bool func_908(int iParam0)//Position - 0x2678F
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 2);
}

bool func_909(int iParam0)//Position - 0x267BA
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 1);
}

int func_910(int iParam0, int iParam1, int iParam2)//Position - 0x267E5
{
	if (iParam0 == func_18() || !func_925(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_920(iParam0, iParam2);
		
		case 1:
			return func_918(iParam0, iParam2);
		
		case 3:
			return func_917(iParam0);
		
		case 2:
			return func_912(iParam0, iParam2);
		
		case 4:
			return func_911(iParam0);
		
		default:
	}
	return 0;
}

bool func_911(int iParam0)//Position - 0x26861
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 6);
}

int func_912(int iParam0, int iParam1)//Position - 0x2688C
{
	switch (iParam1)
	{
		case 10:
			return func_916(iParam0);
		
		case 11:
			return func_915(iParam0);
		
		case 12:
			return func_914(iParam0);
		
		case 13:
			return func_913(iParam0);
		
		default:
	}
	return 0;
}

bool func_913(int iParam0)//Position - 0x268D8
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 15);
}

bool func_914(int iParam0)//Position - 0x26904
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 14);
}

bool func_915(int iParam0)//Position - 0x26930
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 13);
}

bool func_916(int iParam0)//Position - 0x2695C
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 12);
}

bool func_917(int iParam0)//Position - 0x26988
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 5);
}

int func_918(int iParam0, int iParam1)//Position - 0x269B3
{
	switch (iParam1)
	{
		case 5:
			return func_919(iParam0);
		
		case 6:
			return func_909(iParam0);
		
		case 7:
			return func_908(iParam0);
		
		case 8:
			return func_907(iParam0);
		
		case 9:
			return func_906(iParam0);
		
		default:
	}
	return 0;
}

bool func_919(int iParam0)//Position - 0x26A0E
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 0);
}

int func_920(int iParam0, int iParam1)//Position - 0x26A39
{
	switch (iParam1)
	{
		case 0:
			return func_924(iParam0);
		
		case 1:
			return func_923(iParam0);
		
		case 2:
			return func_922(iParam0);
		
		case 3:
			return func_921(iParam0);
		
		case 4:
			return func_929(iParam0);
		
		default:
	}
	return 0;
}

bool func_921(int iParam0)//Position - 0x26A94
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 10);
}

bool func_922(int iParam0)//Position - 0x26AC0
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 9);
}

bool func_923(int iParam0)//Position - 0x26AEC
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 8);
}

bool func_924(int iParam0)//Position - 0x26B18
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 7);
}

bool func_925(int iParam0)//Position - 0x26B43
{
	return (iParam0 != 4294967295 && iParam0 != 6);
}

int func_926(int iParam0)//Position - 0x26B58
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_910(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_910(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_910(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_910(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_927(int iParam0)//Position - 0x26BB7
{
	unk_0x6481F441CE5CA40E(&Global_197065);
	func_928();
}

void func_928()//Position - 0x26BCB
{
	struct<39> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Global_197065 = { Var0 };
}

bool func_929(int iParam0)//Position - 0x26CBE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 31);
}

bool func_930(int iParam0)//Position - 0x26CDB
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 0);
}

bool func_931(int iParam0)//Position - 0x26D06
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 19);
}

var func_932(int iParam0)//Position - 0x26D32
{
	return Global_1841F3[iParam0 /*790*/].f_D3.f_6;
}

void func_933(int iParam0)//Position - 0x26D47
{
	unk_0x0360568A8CE21561(&Global_196FDF);
	func_934();
}

void func_934()//Position - 0x26D5B
{
	struct<46> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Global_196FDF = { Var0 };
	Global_196FDF.f_10 = 0;
}

bool func_935()//Position - 0x26E69
{
	return func_732(6156, 4294967295, 0) != 0;
}

int func_936(int iParam0)//Position - 0x26E7C
{
	if (iParam0 != func_18())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_106 != 0;
	}
	return 0;
}

bool func_937()//Position - 0x26EA2
{
	return func_732(6164, 4294967295, 0) == 3;
}

bool func_938()//Position - 0x26EB5
{
	return func_732(6164, 4294967295, 0) == 2;
}

bool func_939()//Position - 0x26EC8
{
	return func_732(6164, 4294967295, 0) == 1;
}

void func_940(int iParam0)//Position - 0x26EDB
{
	unk_0x04824802BBD52BB4(&Global_196FA9);
	func_941();
}

void func_941()//Position - 0x26EEF
{
	struct<54> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Global_196FA9 = { Var0 };
	Global_196FA9.f_17 = 0;
	Global_196FA9.f_18 = 0;
	Global_196FA9.f_10 = 0;
}

void func_942()//Position - 0x2703B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_953(12));
		func_952(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_142958[iVar1 /*141*/].f_42 != 0 && func_944(Global_142958[iVar1 /*141*/].f_42, 1))
			{
				if (Global_26862F.f_375 != iVar1)
				{
					if (func_943(Global_142958[iVar1 /*141*/].f_42))
					{
						if (Global_142958[iVar1 /*141*/].f_42 != 0)
						{
							iVar3 = Global_142958[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0:
								Global_196FA9.f_26 = iVar3;
								break;
							
							case 1:
								Global_196FA9.f_27 = iVar3;
								break;
							
							case 2:
								Global_196FA9.f_28 = iVar3;
								break;
							
							case 3:
								Global_196FA9.f_29 = iVar3;
								break;
							
							case 4:
								Global_196FA9.f_2A = iVar3;
								break;
							
							case 5:
								Global_196FA9.f_2B = iVar3;
								break;
							
							case 6:
								Global_196FA9.f_2C = iVar3;
								break;
							
							case 7:
								Global_196FA9.f_2D = iVar3;
								break;
							
							case 8:
								Global_196FA9.f_2E = iVar3;
								break;
							
							case 9:
								Global_196FA9.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_943(int iParam0)//Position - 0x27181
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		return 1;
	}
	return 0;
}

int func_944(int iParam0, bool bParam1)//Position - 0x272BD
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
		if (!func_951())
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
		if ((((!func_950() && !func_949()) && !func_948()) && !func_947()) && !func_951())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_948())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_946(iParam0))
		{
			return 0;
		}
	}
	if (!func_945(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_945(int iParam0)//Position - 0x2743D
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_760())
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

int func_946(int iParam0)//Position - 0x27509
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

int func_947()//Position - 0x29206
{
	return 0;
}

int func_948()//Position - 0x2920F
{
	return 1;
}

int func_949()//Position - 0x29218
{
	return 1;
}

int func_950()//Position - 0x29221
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_951()//Position - 0x2923A
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

void func_952(int iParam0, int iParam1, bool bParam2)//Position - 0x292F5
{
	if (Global_40001.f_2742)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1962F6[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = 4294967295;
	}
}

int func_953(int iParam0)//Position - 0x29335
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_956(iParam0);
		return func_955(iVar0);
	}
	return (func_954(iParam0, 4294967295) * iParam0);
}

int func_954(int iParam0, int iParam1)//Position - 0x29446
{
	if (iParam0 == 4294967295)
	{
		if (iParam1 >= 1)
		{
			if (func_564(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_570(iParam1))
			{
				return 0;
			}
			else if (func_562(iParam1, 4294967295))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 <= 124 && iParam1 > 0)
			{
				if (Global_1004B2[iParam1 /*1951*/].f_21 == 2)
				{
					return 3;
				}
				else if (Global_1004B2[iParam1 /*1951*/].f_21 == 6)
				{
					return 8;
				}
				else if (Global_1004B2[iParam1 /*1951*/].f_21 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
	}
	return 0;
}

int func_955(int iParam0)//Position - 0x2963F
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return 4294967295;
}

int func_956(int iParam0)//Position - 0x29670
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return 4294967295;
}

var func_957()//Position - 0x29696
{
	var uVar0;
	
	uVar0 = func_958();
	if (!func_744())
	{
		if (func_532() != func_18())
		{
			uVar0 = func_992(func_532()) + 1;
		}
	}
	return uVar0;
}

int func_958()//Position - 0x296C5
{
	return func_992(CAM::_0xDC9DA9E8789F5246()) + 1;
}

int func_959()//Position - 0x296D7
{
	return func_732(6113, 4294967295, 0);
}

int func_960(int iParam0)//Position - 0x296E8
{
	if (func_19(iParam0, 1))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_19A;
	}
	return 4294967295;
}

void func_961(int iParam0)//Position - 0x2970C
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F080E7F4F761E28(&Global_196F7D);
	func_962();
}

void func_962()//Position - 0x29726
{
	struct<44> Var0;
	
	Global_196F7D = { Var0 };
	Global_196F7D.f_17 = 0;
	Global_196F7D.f_18 = 0;
	Global_196F7D.f_10 = 0;
}

bool func_963(int iParam0)//Position - 0x2974F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 12);
}

bool func_964(int iParam0)//Position - 0x2976C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 13);
}

int func_965(int iParam0)//Position - 0x29789
{
	if (iParam0 != func_18())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 12) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 13)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_966(int iParam0)//Position - 0x297EA
{
	if (iParam0 != func_18())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_967(int iParam0)//Position - 0x29848
{
	if (iParam0 != func_18())
	{
		if (((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 5)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_968(int iParam0, int iParam1)//Position - 0x298F1
{
	if (iParam1 == func_18())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 0))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 3))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 6))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 9))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 12))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 15))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 18))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 21))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 1))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 4))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 7))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 10))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 13))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 16))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 19))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 22))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 2))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 5))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 8))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 11))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 14))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 17))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 20))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 23))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_969(int iParam0)//Position - 0x29C45
{
	if (iParam0 != func_18())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 6) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 7)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_970(int iParam0)//Position - 0x29CA4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 8);
}

bool func_971(int iParam0)//Position - 0x29CC1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 7);
}

bool func_972(int iParam0)//Position - 0x29CDD
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 9);
}

bool func_973(int iParam0)//Position - 0x29D07
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 11);
}

bool func_974(int iParam0)//Position - 0x29D31
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 10);
}

int func_975(int iParam0, int iParam1)//Position - 0x29D5B
{
	return func_732(func_976(iParam1), iParam0, 0);
}

int func_976(int iParam0)//Position - 0x29D70
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_977(int iParam0)//Position - 0x29DCA
{
	if (iParam0 == 0)
	{
	}
	unk_0x446AB56E5D45010D(&Global_196F3E);
	func_978();
}

void func_978()//Position - 0x29DE4
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

void func_979(int iParam0)//Position - 0x29F4E
{
	if (iParam0 == 0)
	{
	}
	unk_0xF1381B4DBB31FA25(&Global_196F08);
	func_980();
}

void func_980()//Position - 0x29F68
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

int func_981(int iParam0, int iParam1)//Position - 0x2A09C
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_868(iParam0, iParam1, 2);
	bVar1 = func_868(iParam0, iParam1, 1);
	bVar2 = func_868(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_982(int iParam0, int iParam1)//Position - 0x2A152
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1))
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

int func_983(int iParam0, bool bParam1, bool bParam2)//Position - 0x2A1B1
{
	int iVar0;
	int iVar1;
	
	if (func_560(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_44A1;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_44A0;
		}
		else
		{
			iVar0 = Global_40001.f_448E;
		}
		iVar1 = 19;
	}
	else if (func_559(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_291(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_448D;
			iVar1 = 20;
		}
	}
	else if (func_707(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_44A1;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_44A0;
		}
		else
		{
			iVar0 = Global_40001.f_448E;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_987(func_532()), func_986(func_532()), func_1000(), func_999(), iVar1, iVar0);
	}
	func_985(iVar0);
	func_984(iVar0);
	return iVar0;
}

void func_984(int iParam0)//Position - 0x2A2A4
{
	int iVar0;
	
	iVar0 = func_732(3968, 4294967295, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1C1 = iVar0;
	func_730(3968, iVar0, 4294967295, 1, 0);
}

void func_985(int iParam0)//Position - 0x2A2F2
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 + iParam0);
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 < 4294957297)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
	else if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 > 9999)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
}

int func_986(int iParam0)//Position - 0x2A36C
{
	if (iParam0 == func_18())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_987(int iParam0)//Position - 0x2A391
{
	if (iParam0 == func_18())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
}

int func_988(bool bParam0)//Position - 0x2A3B6
{
	if (bParam0)
	{
		return 0;
	}
	if (func_364(CAM::_0xDC9DA9E8789F5246()) || func_262(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

void func_989(var uParam0)//Position - 0x2A3E5
{
	unk_0x316DB59CD14C1774(&Global_19700D);
	func_990();
}

void func_990()//Position - 0x2A3F9
{
	struct<35> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Global_19700D = { Var0 };
}

int func_991(int iParam0)//Position - 0x2A4DA
{
	if (iParam0 != func_18())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_139 != 0;
	}
	return 0;
}

int func_992(int iParam0)//Position - 0x2A500
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_13;
}

int func_993()//Position - 0x2A515
{
	int iVar0;
	
	if (func_759())
	{
		return 4;
	}
	else if (func_744())
	{
		if (func_895(CAM::_0xDC9DA9E8789F5246()))
		{
			return 8;
		}
		return 6;
	}
	if (func_317(1))
	{
		iVar0 = func_960(CAM::_0xDC9DA9E8789F5246());
		if (iVar0 == 4294967295)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1074(1))
	{
		if (func_895(func_532()))
		{
			return 9;
		}
		return 7;
	}
	return 4294967294;
}

int func_994(bool bParam0)//Position - 0x2A588
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_995(bool bParam0)//Position - 0x2A59A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	if (bParam0)
	{
		iVar0 = func_249(CAM::_0xDC9DA9E8789F5246());
	}
	else
	{
		iVar0 = func_288(CAM::_0xDC9DA9E8789F5246());
	}
	if (iVar0 != 4294967295)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_998(CAM::_0xDC9DA9E8789F5246());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_997(CAM::_0xDC9DA9E8789F5246());
			if (func_721(func_722(CAM::_0xDC9DA9E8789F5246())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_997(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_996(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_996(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_996(int iParam0)//Position - 0x2A6D2
{
	if (func_288(CAM::_0xDC9DA9E8789F5246()) == 238 || func_288(CAM::_0xDC9DA9E8789F5246()) == 249)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C9;
	}
	return 4294967295;
}

int func_997(int iParam0)//Position - 0x2A70B
{
	if (func_288(CAM::_0xDC9DA9E8789F5246()) == 237 || func_288(CAM::_0xDC9DA9E8789F5246()) == 250)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C8;
	}
	return 4294967295;
}

int func_998(int iParam0)//Position - 0x2A744
{
	if (func_249(iParam0) == 236)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C7;
	}
	return 4294967295;
}

int func_999()//Position - 0x2A769
{
	if (Global_196EF6.f_3 != 0)
	{
		return Global_196EF6.f_3;
	}
	return 4294967295;
}

int func_1000()//Position - 0x2A785
{
	if (Global_196EF6.f_2 != 0)
	{
		return Global_196EF6.f_2;
	}
	return 4294967295;
}

void func_1001(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x2A7A1
{
	switch (func_1077())
	{
		case 0:
		case 2:
		case 3:
			StringCopy(sParam0, "BIGM_ASLTYD", 16);
			StringCopy(sParam1, "BIGM_ASLTWD", 16);
			StringCopy(sParam2, "BIGM_ASLTWRF", 16);
			StringCopy(sParam3, "BIGM_ASLTYD", 16);
			StringCopy(sParam4, "BIGM_ASLTWRF2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "BIGM_ASLTYV", 16);
			StringCopy(sParam1, "BIGM_ASLTWV", 16);
			StringCopy(sParam2, "BIGM_ASLTWFV", 16);
			StringCopy(sParam3, "BIGM_ASLTYV", 16);
			StringCopy(sParam4, "BIGM_ASLTWFV2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN2", 16);
			break;
	}
}

void func_1002()//Position - 0x2A830
{
	if (func_263(CAM::_0xDC9DA9E8789F5246(), 20) || func_364(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 20))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			MISC::SET_BIT(&iLocal_112, 20);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 21))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_START"))
			{
				MISC::SET_BIT(&iLocal_112, 21);
			}
		}
		else if (Local_110.f_5 == 4294967295 && Local_110.f_7 == 4294967295)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 22))
			{
				if (Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 > 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_COLLECT"))
					{
						MISC::SET_BIT(&iLocal_112, 22);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 23))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 23);
						}
					}
				}
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 23))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_DELIVER"))
			{
				MISC::SET_BIT(&iLocal_112, 23);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 22))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 22);
				}
			}
		}
	}
}

void func_1003()//Position - 0x2A930
{
	if (func_540())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 10))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
			{
				if (!func_21(Local_110.f_1D[0]))
				{
					MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 10);
				}
			}
		}
	}
}

void func_1004()//Position - 0x2A980
{
	int iVar0;
	
	if (func_1077() != 2)
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 11))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 12))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, true, 0))
				{
					MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 12);
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 12))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 13))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (MISC::IS_BULLET_IN_AREA(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 13);
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iVar0]))
			{
				if (!func_10(Local_110.f_D[iVar0]))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 14))
					{
						if (func_1005(NETWORK::NET_TO_PED(Local_110.f_D[iVar0])))
						{
							MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_1005(int iParam0)//Position - 0x2AAD3
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	if (func_1006())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(CAM::_0xDC9DA9E8789F5246(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_1006()//Position - 0x2AB45
{
	return Global_1805F3;
}

void func_1007()//Position - 0x2AB51
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 7))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_121))
		{
			func_1009();
		}
		if (func_539())
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) > 2)
			{
				if (!func_618("GB_ASLT_GO"))
				{
					func_671("GB_ASLT_GO", func_1008(), 0, 0);
				}
			}
			else
			{
				func_651();
			}
		}
		else
		{
			func_651();
		}
		if (func_537())
		{
			MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1), 7);
		}
	}
	func_434();
}

char* func_1008()//Position - 0x2ABD1
{
	switch (func_1077())
	{
		case 0:
			return "GB_ASLT_GO0";
		
		case 1:
			return "GB_ASLT_GO1";
		
		case 2:
			return "GB_ASLT_GO2";
		
		case 3:
			return "GB_ASLT_GO4";
		
		default:
	}
	return "";
}

void func_1009()//Position - 0x2AC19
{
	vector3 vVar0;
	
	if (func_362(CAM::_0xDC9DA9E8789F5246()) < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_121))
		{
			HUD::REMOVE_BLIP(&iLocal_121);
		}
		return;
	}
	vVar0 = { func_1010() };
	if (func_1093())
	{
		if (!func_424(vVar0, 0f, 0f, 0f, 0))
		{
			iLocal_121 = HUD::ADD_BLIP_FOR_COORD(vVar0);
			HUD::SET_BLIP_ROUTE(iLocal_121, true);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 0))
			{
				HUD::SET_BLIP_FLASHES(iLocal_121, 1);
				HUD::SET_BLIP_FLASH_TIMER(iLocal_121, 7000);
				HUD::FLASH_MINIMAP_DISPLAY();
				MISC::SET_BIT(&iLocal_112, 0);
			}
		}
	}
}

Vector3 func_1010()//Position - 0x2AC9D
{
	vector3 vVar0;
	
	switch (func_1077())
	{
		case 0:
			vVar0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			vVar0 = { func_526() };
			break;
	}
	return vVar0;
}

void func_1011()//Position - 0x2ACEB
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	bool bVar5;
	int iVar6;
	
	func_1019();
	vVar4 = { func_526() };
	if (!func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
		{
			iVar6 = 1;
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
	{
		iVar6 = 1;
	}
	if (((iVar6 && func_539()) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 3)) && !func_571(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (func_1093())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 16))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 16))
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar4, false);
					if (func_1077() == 1)
					{
						fVar3 = 350f;
					}
					else
					{
						fVar3 = 200f;
					}
					if (fVar2 < fVar3)
					{
						func_392(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
						func_1016();
						MISC::SET_BIT(&iLocal_112, 16);
					}
				}
				else
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vVar4, false);
					if (func_1077() == 1)
					{
						fVar3 = 350f;
					}
					else
					{
						fVar3 = 200f;
					}
					if (fVar2 > fVar3)
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 16);
						func_400();
						func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
					}
				}
			}
			else
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 16))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 16);
					func_400();
					func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
				}
				bVar5 = true;
			}
		}
		else
		{
			bVar5 = true;
		}
		if (!bVar5)
		{
			return;
		}
		vVar1 = { func_1015() };
		if (func_424(vVar1, 0f, 0f, 0f, 0))
		{
			return;
		}
		vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false) };
		switch (func_1077())
		{
			case 1:
				if (!func_538(vVar0, 3, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, 3212836864);
					func_420(vVar1, 1, 0);
				}
				else if (func_538(vVar1, 3, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, 3212836864);
					func_420(vVar1, 1, 0);
				}
				else
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, 3212836864);
					func_420(vVar1, 1, 0);
				}
				break;
			
			case 2:
				if (!func_538(vVar0, 2, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, 3212836864);
					func_420(vVar1, 1, 0);
				}
				else if (func_538(vVar1, 2, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, 3212836864);
					func_420(vVar1, 1, 0);
				}
				else
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, 3212836864);
					func_420(vVar1, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_396(10, 0, 0, 0, 0);
				func_1014(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, 3212836864);
				func_420(vVar1, 1, 0);
				break;
		}
	}
	else
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 16))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 16);
			func_400();
			func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 7))
		{
			func_390();
			func_1012();
		}
	}
}

void func_1012()//Position - 0x2B141
{
	if (Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_1013();
	}
}

void func_1013()//Position - 0x2B15A
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		if (!Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = 3212836864;
	Global_24D471 = { Var0 };
	Global_24D471.f_6 = 4294967295;
}

void func_1014(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x2B1B7
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = 3212836864;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		if (!Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		Global_24D471.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_24D471.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_A = 0;
	Var0.f_B = { 0f, 0f, 0f };
	Var0.f_E = { 0f, 0f, 0f };
	Var0.f_11 = 0f;
	Var0.f_15 = fParam7;
	Var0.f_16 = iParam8;
	if (func_156(CAM::_0xDC9DA9E8789F5246()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_17 = 1;
		}
		else
		{
			Var0.f_17 = 0;
		}
	}
	else
	{
		Var0.f_17 = 0;
	}
	if (Var0.f_15 < 1f)
	{
		Var0.f_15 = 1f;
	}
	Var0.f_18 = iParam9;
	Var0.f_1A = iParam10;
	Var0.f_1B = iParam12;
	Global_24D471 = { Var0 };
}

Vector3 func_1015()//Position - 0x2B2E0
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	if (func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
		{
			if (func_21(Local_110.f_1D[0]))
			{
				vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_1D[0]), true) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
	{
		vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_C), true) };
	}
	return vVar0;
}

void func_1016()//Position - 0x2B349
{
	int iVar0;
	
	iVar0 = func_1077();
	switch (iVar0)
	{
		case 0:
			func_1017(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_1017(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_1017(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_1017(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_1017(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_1017(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_1017(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_1017(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_1017(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_1017(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_1017(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_1017(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_1017(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_1017(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_1017(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_1017(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_1017(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_1017(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_1017(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_1017(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_1017(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_1017(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_1017(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_1017(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_1017(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_1017(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_1017(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_1017(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_1017(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_1017(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_1017(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_1017(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_1017(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_1017(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_1017(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_1017(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_1017(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_1017(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_1017(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_1017(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_1017(vector3 vParam0, float fParam1, int iParam2)//Position - 0x2B80A
{
	func_1018(vParam0, fParam1, iParam2);
}

void func_1018(vector3 vParam0, var uParam1, var uParam2)//Position - 0x2B81E
{
	if (!Global_24B2CE.f_6C8)
	{
	}
	if (Global_24B2CE.f_2BF < 100)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_24B2CE.f_2BF.f_1[Global_24B2CE.f_2BF /*5*/] = { vParam0 };
		Global_24B2CE.f_2BF.f_1[Global_24B2CE.f_2BF /*5*/].f_3 = uParam1;
		Global_24B2CE.f_2BF.f_1[Global_24B2CE.f_2BF /*5*/].f_4 = uParam2;
		Global_24B2CE.f_2BF++;
	}
}

void func_1019()//Position - 0x2B8A8
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
		{
			if (func_21(Local_110.f_1D[0]))
			{
				vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_110.f_1D[0]), true) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
	{
		vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_OBJ(Local_110.f_C), true) };
	}
	if (!func_424(vVar0, 0f, 0f, 0f, 0))
	{
		if (func_539())
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
				fVar2 = SYSTEM::VDIST2(vVar0, vVar1);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 3))
				{
					if (fVar2 <= 250000f)
					{
						MISC::SET_BIT(&iLocal_112, 3);
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
					{
						if (func_538(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 3, 1000, 0))
						{
							MISC::SET_BIT(&iLocal_112, 3);
						}
					}
				}
				else if (fVar2 > 562500f)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6) || (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6) && !func_538(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 3, 1000, 0)))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 3);
					}
				}
			}
		}
	}
}

void func_1020()//Position - 0x2B9F6
{
	if (func_376())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 9))
			{
				if (func_375())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), true, 1);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_C), AUDIO::_0x0626A247D2405330()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_110.f_C));
						}
					}
					MISC::SET_BIT(&iLocal_112, 9);
				}
			}
			else if (!func_366())
			{
				if (!func_375())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_C), false, 1);
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 9);
				}
			}
		}
	}
}

void func_1021()//Position - 0x2BA8F
{
	struct<8> Var0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 1))
	{
		if (func_1093())
		{
			if (func_362(CAM::_0xDC9DA9E8789F5246()) >= 1)
			{
				if (!func_601(86))
				{
					if (func_595(0, 1, 1, 1))
					{
						Var0 = { func_1023() };
						func_709(&Var0, 4294967295);
						func_586(1);
						MISC::SET_BIT(&iLocal_112, 1);
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_112, 1);
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 2))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 1))
		{
			if (func_1093())
			{
				if (Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_5 > 1)
				{
					if (func_595(0, 1, 1, 1))
					{
						if (func_595(0, 1, 1, 1))
						{
							Var0 = { func_1022() };
							func_709(&Var0, 4294967295);
							func_586(1);
							MISC::SET_BIT(&iLocal_113, 2);
						}
					}
				}
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 10))
	{
		if (func_1093())
		{
			if (((Local_110.f_5 != 4294967295 || Local_110.f_7 != 4294967295) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 16)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 20))
			{
				if (func_595(0, 1, 1, 1))
				{
					func_709("GB_SGHT_RVL", 4294967295);
					func_586(1);
					MISC::SET_BIT(&iLocal_113, 10);
				}
			}
		}
	}
}

struct<8> func_1022()//Position - 0x2BBC6
{
	struct<8> Var0;
	
	switch (func_1077())
	{
		case 0:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_AST_RTNK", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_AST_RPCK2", 32);
			break;
	}
	return Var0;
}

struct<8> func_1023()//Position - 0x2BC20
{
	struct<8> Var0;
	
	if (func_744())
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
		}
	}
	else
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4G", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			}
	}
	return Var0;
}

void func_1024()//Position - 0x2BCD1
{
	int iVar0;
	
	if (!func_9(&(Local_110.f_36)))
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_1029(&(Local_110.f_36), 0, 0));
	if (!func_539())
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_1, 1))
	{
		return;
	}
	if (func_362(CAM::_0xDC9DA9E8789F5246()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 19))
		{
			iLocal_126 = AUDIO::GET_SOUND_ID();
			unk_0x1190AB7024CBD8CB(iLocal_126, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			MISC::SET_BIT(&iLocal_112, 19);
		}
	}
	func_1028(iVar0);
	if (iVar0 > 30000)
	{
		func_1025(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else if (iVar0 >= 0)
	{
		func_1025(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_1025(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
}

void func_1025(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2BDDE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_1027(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_1026(7, iVar0);
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

void func_1026(int iParam0, int iParam1)//Position - 0x2BF2C
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_1027(int iParam0, int iParam1)//Position - 0x2BF45
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

void func_1028(int iParam0)//Position - 0x2BF5E
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 29))
	{
		func_217();
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 30))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_112, 30);
				MISC::SET_BIT(&iLocal_112, 28);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 0))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					MISC::SET_BIT(&iLocal_113, 0);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 31))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					MISC::SET_BIT(&iLocal_112, 31);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_113, 1);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 28);
						}
					}
				}
			}
		}
	}
}

int func_1029(var uParam0, bool bParam1, bool bParam2)//Position - 0x2C071
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

void func_1030(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x2C0B8
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_249(CAM::_0xDC9DA9E8789F5246());
		Global_19700D = iVar0;
		Global_19700D.f_1 = iParam0;
		if (func_532() != func_18())
		{
			Global_19700D.f_2 = func_987(func_532());
			Global_19700D.f_3 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_19700D.f_2), &(Global_19700D.f_3));
		}
		Global_19700D.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_19700D.f_1C = func_991(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_D = 0;
		Global_19700D.f_E = 0;
		if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_19700D.f_17 = func_994(func_317(1));
		}
	}
	else
	{
		iVar0 = func_288(CAM::_0xDC9DA9E8789F5246());
	}
	if (iParam2 || func_707(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_196F08 = iVar0;
		if (func_560(iVar0))
		{
			Global_196F08.f_1 = 4;
		}
		else if (func_559(iVar0))
		{
			Global_196F08.f_1 = 5;
		}
		else if (func_291(iVar0, 0))
		{
			Global_196F08.f_1 = 2;
			if (func_726(iVar0))
			{
				Global_196F08.f_1 = 3;
			}
		}
		else
		{
			Global_196F08.f_1 = 1;
		}
		if (func_532() != func_18())
		{
			Global_196F08.f_4 = func_987(func_532());
			Global_196F08.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_196F08.f_6), &(Global_196F08.f_7));
		}
		Global_196F08.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_196F08.f_1B = 1;
			Global_196F08.f_1C = 1;
		}
		if (iParam0 != 4294967295)
		{
			Global_196F08.f_1A = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_196F08.f_28 = func_756(iParam1);
			Global_196F08.f_29 = func_1054();
			Global_196F08.f_2A = func_871(CAM::_0xDC9DA9E8789F5246(), iParam1);
			Global_196F08.f_2C = func_982(CAM::_0xDC9DA9E8789F5246(), iParam1);
		}
		if (!func_744() || iVar0 != 192)
		{
			Global_196F08.f_35 = 0;
		}
	}
	else if (func_556(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_196F7D = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_196F7D = iParam0 + 1;
		}
		else
		{
			Global_196F7D = func_1053(CAM::_0xDC9DA9E8789F5246());
		}
		switch (iVar0)
		{
			case 225:
				if (func_723(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					Global_196F7D.f_1 = 0;
				}
				else
				{
					Global_196F7D.f_1 = 1;
				}
				break;
			
			case 226:
				Global_196F7D.f_1 = 2;
				break;
			
			case 227:
				Global_196F7D.f_1 = 3;
				break;
		}
		Global_196F7D.f_15 = 1;
		Global_196F7D.f_16 = 1;
		if (func_532() != func_18())
		{
			Global_196F7D.f_4 = func_987(func_532());
			Global_196F7D.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_196F7D.f_4), &(Global_196F7D.f_5));
		}
		Global_196F7D.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196F7D.f_14 = iParam0;
		}
	}
	else if (func_711(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
		}
		Global_196F3E = iVar0;
		Global_196F08.f_1 = 1;
		if (func_532() != func_18())
		{
			Global_196F3E.f_4 = func_987(func_532());
			Global_196F3E.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_196F3E.f_6), &(Global_196F3E.f_7));
		}
		Global_196F3E.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196F3E.f_15 = iParam0;
		}
	}
	else if (func_554(iVar0))
	{
		Global_196FA9 = iVar0;
		Global_196FA9.f_1 = iParam0;
		Global_196FA9.f_15 = 1;
		Global_196FA9.f_16 = 1;
		if (func_532() != func_18())
		{
			Global_196FA9.f_4 = func_987(func_532());
			Global_196FA9.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_196FA9.f_4), &(Global_196FA9.f_5));
		}
		Global_196FA9.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196FA9.f_14 = iParam0;
		}
		Global_196FA9.f_1B = func_975(func_36(), 5);
		Global_196FA9.f_1C = func_994(func_849(CAM::_0xDC9DA9E8789F5246()));
		Global_196FA9.f_1D = func_732(6107, 4294967295, 0);
		Global_196FA9.f_1E = func_732(6103, 4294967295, 0);
		Global_196FA9.f_1F = func_732(6104, 4294967295, 0);
		Global_196FA9.f_20 = func_732(6106, 4294967295, 0);
		Global_196FA9.f_21 = func_732(6105, 4294967295, 0);
		Global_196FA9.f_22 = func_732(6108, 4294967295, 0);
		Global_196FA9.f_7 = func_993();
		Global_196FA9.f_33 = func_994(bParam4);
	}
	else if (func_552(iVar0))
	{
		Global_196FDF = iVar0;
		Global_196FDF.f_1 = iParam0;
		Global_196FDF.f_15 = 1;
		Global_196FDF.f_16 = 1;
		if (func_532() != func_18())
		{
			Global_196FDF.f_4 = func_987(func_532());
			Global_196FDF.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_196FDF.f_4), &(Global_196FDF.f_5));
		}
		Global_196FDF.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196FDF.f_14 = iParam0;
		}
		Global_196FDF.f_18 = func_732(6157, 4294967295, 0);
		Global_196FDF.f_19 = func_732(6162, 4294967295, 0);
		Global_196FDF.f_1A = func_732(6163, 4294967295, 0);
		Global_196FDF.f_1B = func_994((((func_939() || func_938()) || func_937()) || func_936(CAM::_0xDC9DA9E8789F5246())));
		Global_196FDF.f_1C = func_732(6164, 4294967295, 0);
		Global_196FDF.f_1D = func_994(func_935());
		Global_196FDF.f_1F = 0;
		Global_196FDF.f_1E = 0;
		Global_196FDF.f_20 = 0;
		Global_196FDF.f_21 = 0;
		Global_196FDF.f_22 = 0;
		Global_196FDF.f_10 = 0;
		Global_196FDF.f_7 = func_993();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_721(func_722(CAM::_0xDC9DA9E8789F5246()))))
	{
		Global_197065 = iVar0;
		Global_197065.f_1 = iParam0;
		Global_197065.f_15 = 1;
		Global_197065.f_16 = 1;
		Global_197065.f_7 = func_993();
		if (func_532() != func_18())
		{
			Global_197065.f_4 = func_987(func_532());
			Global_197065.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_197065.f_4), &(Global_197065.f_5));
		}
		if (func_532() != 4294967295)
		{
			Global_197065.f_11 = func_932(func_532());
		}
		Global_197065.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_197065.f_1C = func_991(CAM::_0xDC9DA9E8789F5246());
		Global_197065.f_10 = 0;
		Global_197065.f_18 = 0;
		Global_197065.f_17 = 0;
		if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197065.f_21 = func_994(func_317(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_197030 = iVar0;
		Global_197030.f_1 = iParam0;
		Global_197030.f_15 = 1;
		Global_197030.f_16 = 1;
		Global_197030.f_7 = func_993();
		Global_197030.f_18 = 0;
		Global_197030.f_17 = 0;
		Global_197030.f_10 = 0;
		if (func_532() != func_18())
		{
			Global_197030.f_4 = func_987(func_532());
			Global_197030.f_5 = func_986(func_532());
		}
		Global_197030.f_1C = func_991(CAM::_0xDC9DA9E8789F5246());
		if (Global_197030.f_1C)
		{
			Global_197030.f_1D = func_926(CAM::_0xDC9DA9E8789F5246());
		}
		else
		{
			Global_197030.f_1D = 0;
		}
		Global_197030.f_1E = func_910(CAM::_0xDC9DA9E8789F5246(), 4, 4294967295);
		Global_197030.f_1F = func_929(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_20 = func_994(func_909(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_21 = func_994(func_908(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_22 = func_994(func_907(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_23 = func_994(func_906(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_24 = func_905(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_25 = func_904(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_27 = func_903(CAM::_0xDC9DA9E8789F5246());
		if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197030.f_29 = func_994(func_317(1));
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_197030.f_4), &(Global_197030.f_5));
		}
		Global_197030.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_197030.f_1C = func_991(CAM::_0xDC9DA9E8789F5246());
	}
	else
	{
		if (func_532() != func_18())
		{
			Global_196EF6 = func_987(func_532());
			Global_196EF6.f_1 = func_986(func_532());
		}
		Global_196EF6.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_196EF6.f_D = func_1052();
		Global_196EF6.f_F = 0;
		if (func_1074(1))
		{
			if (func_320() == func_532())
			{
				Global_196EF6.f_F = 1;
			}
		}
		if (func_1051())
		{
			Global_196F7D.f_1C = 1;
		}
		if (((((func_1050() || func_1049()) || func_1048()) || func_1047()) || func_1045()) || func_1044(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_1E = 1;
		}
		if (func_1042(func_1043(joaat("TRAILERSMALL2"))))
		{
			Global_196F7D.f_20 = 1;
		}
		if (func_1034(func_1041(joaat("CADDY"))))
		{
			Global_196F7D.f_1F = 1;
		}
		if (func_974(CAM::_0xDC9DA9E8789F5246()) || func_973(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_1D = 1;
		}
		if (func_970(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_21 = 1;
			Global_196F7D.f_22 = 1;
		}
		if (func_971(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_24 = 1;
		}
		if (func_968(0, CAM::_0xDC9DA9E8789F5246()) == 1)
		{
			Global_196F7D.f_23 = 1;
		}
		if (func_1033(CAM::_0xDC9DA9E8789F5246(), 3, &uVar1))
		{
			Global_196F7D.f_25 = 1;
		}
		if (func_1033(CAM::_0xDC9DA9E8789F5246(), 7, &uVar1))
		{
			Global_196F7D.f_26 = 1;
		}
		if (func_1032(CAM::_0xDC9DA9E8789F5246()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1031(CAM::_0xDC9DA9E8789F5246(), iVar2);
				if (func_868(CAM::_0xDC9DA9E8789F5246(), iVar3, 0))
				{
					Global_196F7D.f_27 = 1;
				}
				if (func_868(CAM::_0xDC9DA9E8789F5246(), iVar3, 2))
				{
					Global_196F7D.f_28 = 1;
				}
				if (func_868(CAM::_0xDC9DA9E8789F5246(), iVar3, 1))
				{
					Global_196F7D.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1031(int iParam0, int iParam1)//Position - 0x2CB25
{
	var uVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_863(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/]))
	{
		uVar0 = Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/];
	}
	return uVar0;
}

int func_1032(int iParam0)//Position - 0x2CB7E
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1033(int iParam0, int iParam1, var uParam2)//Position - 0x2CBC0
{
	int iVar0;
	
	if (iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_968(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1034(int iParam0)//Position - 0x2CBFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_1039(11, 4294967295) == 0)
	{
		return 0;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = (iParam0 + func_953(11));
		func_952(iVar1, &iVar0, 1);
		iVar2 = func_1039(func_1036(iVar1), 4294967295);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_732(func_1035(4, iVar0), 4294967295, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1035(int iParam0, int iParam1)//Position - 0x2CC76
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_1036(int iParam0)//Position - 0x3246A
{
	int iVar0;
	
	if (iParam0 < 261)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0 >= func_953(iVar0) && iParam0 < func_1037(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_1037(int iParam0)//Position - 0x324AD
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_956(iParam0);
		return func_1038(iVar0);
	}
	return (func_954(iParam0, 4294967295) * iParam0 + 1);
}

int func_1038(int iParam0)//Position - 0x325C1
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return 4294967295;
}

int func_1039(int iParam0, int iParam1)//Position - 0x325F2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 4294967295)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_40001.f_41D8)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_956(iParam0);
		if (iVar1 == 0 && func_732(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_1040(4294967295) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_991(CAM::_0xDC9DA9E8789F5246()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_150A87[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_273025[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 21)
		{
			return 0;
		}
		return Global_272FA8[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_1040(int iParam0)//Position - 0x326CD
{
	if (!Global_40001.f_5BE2)
	{
		return 0;
	}
	return func_732(7207, iParam0, 0) != 0;
}

int func_1041(int iParam0)//Position - 0x326F0
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
			break;
		
		case joaat("BOXVILLE5"):
			return 1;
			break;
		
		case joaat("WASTELANDER"):
			return 2;
			break;
		
		case joaat("PHANTOM2"):
			return 3;
			break;
		
		case joaat("VOLTIC2"):
			return 4;
			break;
		
		case joaat("DUNE4"):
			return 5;
			break;
		
		case joaat("DUNE5"):
			return 5;
			break;
		
		case joaat("RUINER2"):
			return 6;
			break;
		
		case joaat("BLAZER5"):
			return 7;
			break;
	}
	return 4294967295;
}

int func_1042(int iParam0)//Position - 0x32779
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = iParam0 + 157;
		func_952(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_732(func_1035(4, iVar0), 4294967295, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1043(int iParam0)//Position - 0x327BF
{
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
			return 0;
			break;
	}
	return 4294967295;
}

int func_1044(int iParam0)//Position - 0x327DC
{
	if (iParam0 != func_18())
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_14A != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1045()//Position - 0x32805
{
	return func_732(func_1046(3), 4294967295, 0) != 0;
}

int func_1046(int iParam0)//Position - 0x3281A
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 9954;
}

bool func_1047()//Position - 0x32886
{
	return func_732(6163, 4294967295, 0) != 0;
}

bool func_1048()//Position - 0x32899
{
	return func_732(5380, 4294967295, 0) != 0;
}

bool func_1049()//Position - 0x328AC
{
	return func_732(3828, 4294967295, 0) != 0;
}

bool func_1050()//Position - 0x328BF
{
	return func_732(3223, 4294967295, 0) != 0;
}

bool func_1051()//Position - 0x328D2
{
	return func_732(5379, 4294967295, 0) != 0;
}

int func_1052()//Position - 0x328E5
{
	int iVar0;
	
	iVar0 = func_532();
	if (iVar0 != func_18())
	{
		return Global_18CD5B[iVar0 /*560*/].f_B.f_5D;
	}
	return 0;
}

int func_1053(int iParam0)//Position - 0x3290D
{
	if (func_288(iParam0) == 225 || func_288(iParam0) == 226)
	{
		return func_723(iParam0);
	}
	return 4294967295;
}

var func_1054()//Position - 0x3293A
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_870(CAM::_0xDC9DA9E8789F5246(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_1055(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3296C
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
	func_697(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_686(&Var0);
}

struct<8> func_1056()//Position - 0x329DC
{
	struct<8> Var0;
	
	switch (func_1077())
	{
		case 0:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "BIGM_ASLDV", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
	}
	return Var0;
}

void func_1057()//Position - 0x32A36
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_110.f_23[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_D[iVar0]))
				{
					if (func_1062(Local_110.f_D[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_D[iVar0]))
						{
							if (!func_10(Local_110.f_D[iVar0]))
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_D[iVar0]), 2852500626) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_D[iVar0]), 2852500626) != 0)
								{
									if (func_1077() == 2)
									{
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_D[iVar0]), false);
									}
									BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_D[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_1058(Local_110.f_D[iVar0], &(Local_116[iVar0 /*8*/]), 3212836864, 0, 0, 0, 0, 4294967295, 4294967295, 1);
		}
		iVar0++;
	}
}

void func_1058(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x32B40
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_1061())
		{
			Global_252F9E = CAM::_0xDC9DA9E8789F5246();
		}
		if (bParam3)
		{
			func_1060(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1060(NETWORK::NET_TO_PED(iParam0), iParam1, 4294967295, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_1059(iParam1);
	}
}

void func_1059(int iParam0)//Position - 0x32BBB
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::_SET_PED_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_1060(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x32C2D
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == 4294967295)
			{
				HUD::_SET_PED_AI_BLIP(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::_SET_AI_BLIP_TYPE(iParam0, iParam2);
			HUD::_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == 4294967295)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		HUD::_IS_AI_BLIP_ALWAYS_SHOWN(iParam0, iParam4);
		HUD::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = HUD::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == 4294967295)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == 4294967295)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == 4294967295)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1061()//Position - 0x32E02
{
	return Global_140842;
}

int func_1062(int iParam0)//Position - 0x32E0E
{
	if (unk_0xDD5EE7D9FC37FA16(iParam0))
	{
		return 1;
	}
	if (func_1063(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1063(int iParam0)//Position - 0x32E31
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_1064(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1064(int iParam0)//Position - 0x32E61
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_1065()//Position - 0x32E83
{
	int iVar0;
	int iVar1;
	
	if (Local_110 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != CAM::_0xDC9DA9E8789F5246())
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3, iVar0))
						{
							if (func_540())
							{
								func_658(iVar1, 421, 0, 0);
							}
							else
							{
								func_658(iVar1, 457, 0, 0);
							}
							MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3), iVar0);
						}
					}
					else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3, iVar0))
					{
						if (func_540())
						{
							func_658(iVar1, 421, 0, 0);
						}
						else
						{
							func_658(iVar1, 457, 0, 0);
						}
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3), iVar0);
					}
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3, iVar0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_1066()//Position - 0x32F77
{
	if (func_1077() == 0)
	{
		if (func_25() == 0)
		{
			func_1067("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_1067(char* sParam0)//Position - 0x32F97
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_C, 11))
		{
			if (func_1068(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_D, 26))
				{
					MISC::SET_BIT(&(Global_2401A9[iVar1 /*26*/].f_D), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_1068(var uParam0)//Position - 0x3301B
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = 0;
	iVar2 = func_1070(uParam0);
	if (iVar2 == 4294967295)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_1069(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_1069(var uParam0)//Position - 0x33082
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = func_1070(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 62:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_1070(var uParam0)//Position - 0x330F9
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return 4294967295;
	}
	if (func_1072(uParam0->f_1))
	{
		if (func_1071(uParam0))
		{
			return 9999;
		}
		return 4294967295;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 62:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == CAM::_0xDC9DA9E8789F5246())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (Global_14010B.f_5)
			{
				return 4294967295;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 4294967295;
	}
	else if (uParam0->f_2 < 32)
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_1071(var uParam0)//Position - 0x33369
{
	if (Global_249797)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1072(int iParam0)//Position - 0x3338E
{
	return iParam0 == 9999;
}

void func_1073()//Position - 0x3339C
{
	if (func_1077() != 1 && func_1077() != 2)
	{
		return;
	}
	if (func_1077() != 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
		{
			NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_1D[0], 1);
		}
	}
}

bool func_1074(bool bParam0)//Position - 0x333DD
{
	return func_19(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

void func_1075()//Position - 0x333EF
{
	if (OBJECT::_DOES_DOOR_EXIST(1343869835))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1343869835, 1, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(1343869835, 1f, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(207506449))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(207506449, 1, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(207506449, 1f, 0, 0);
	}
}

void func_1076()//Position - 0x3343F
{
	Global_1964DE = 1;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26A741, 0))
	{
		MISC::SET_BIT(&Global_26A741, 0);
		MISC::SET_BIT(&Global_1964DF, 0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26A741, 1))
	{
		MISC::SET_BIT(&Global_26A741, 1);
		MISC::SET_BIT(&Global_1964DF, 1);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26A741, 5))
	{
		MISC::SET_BIT(&Global_26A741, 5);
		MISC::SET_BIT(&Global_1964DF, 5);
	}
	if (OBJECT::_DOES_DOOR_EXIST(3939230146))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3939230146, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(3713987790))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3713987790, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(2868514821))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2868514821, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(745417724))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(2989662390))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2989662390, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(2751792219))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2751792219, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(3483196299))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3483196299, 0, 0, 0);
	}
}

int func_1077()//Position - 0x33551
{
	if (Local_110.f_3 != 4294967295)
	{
		return Local_110.f_3;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_110.f_3 == 4294967295)
		{
			if (Local_110.f_3 == 4294967295)
			{
				if (Global_26862F.f_160C != 4294967295)
				{
					Local_110.f_3 = Global_26862F.f_160C;
				}
				else
				{
					Local_110.f_3 = 1;
				}
			}
		}
	}
	return Local_110.f_3;
}

void func_1078(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x335A1
{
	float fVar0;
	
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 != iParam0)
	{
		func_1092(4294967295);
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 = iParam0;
		if (func_1091() != 4294967295)
		{
			func_1090(4294967295);
		}
		if (func_1089() != 4294967295)
		{
			func_1088(4294967295);
		}
		func_1087(iParam2);
		func_1085(iParam0);
		if (!func_416(iParam0))
		{
			fVar0 = func_415(iParam0);
			if (fVar0 != 1f)
			{
				func_412(fVar0);
				MISC::SET_BIT(&(Global_196EED.f_3), 1);
			}
		}
		if (!func_419(iParam0) || iParam3)
		{
			if (func_417(iParam0, iParam2) && iParam3 == 1)
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
		if (func_375())
		{
			func_367(27);
		}
		if (bParam1)
		{
			if (!func_366())
			{
				func_409(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 0))
			{
				func_814(6);
			}
			func_1084();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_159(CAM::_0xDC9DA9E8789F5246()) && func_364(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 8);
		}
		func_1080();
		if (func_1079(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_196EED.f_3), 6);
		}
		Global_26862F.f_185C = 0;
	}
}

int func_1079(int iParam0)//Position - 0x337BE
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

void func_1080()//Position - 0x33808
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_1083();
	iVar2 = func_44(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_1081(iVar1, CAM::_0xDC9DA9E8789F5246()))
			{
				unk_0xB7BCAAFF114A94F2(CAM::_0xDC9DA9E8789F5246(), iVar1, iVar3);
				unk_0xB7BCAAFF114A94F2(iVar1, CAM::_0xDC9DA9E8789F5246(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_1081(int iParam0, int iParam1)//Position - 0x33878
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_1082(iParam0) == func_44(iParam1) || func_1082(iParam1) == func_44(iParam0));
	}
	return 0;
}

int func_1082(int iParam0)//Position - 0x338BA
{
	if (func_19(iParam0, 1))
	{
		return Global_18CD5B[func_44(iParam0) /*560*/].f_B.f_1BB;
	}
	return func_18();
}

int func_1083()//Position - 0x338E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_532();
	if (iVar0 != func_18())
	{
		if (func_1202(iVar0, 0, 1))
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

void func_1084()//Position - 0x33926
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

void func_1085(int iParam0)//Position - 0x339C4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_732(3791, 4294967295, 0);
	iVar1 = func_1086(iParam0);
	if (iVar1 != 4294967295)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_730(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_1086(int iParam0)//Position - 0x339F9
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

void func_1087(int iParam0)//Position - 0x33A90
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_B0 != iParam0)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_B0 = iParam0;
	}
}

void func_1088(int iParam0)//Position - 0x33ABF
{
	if (Global_26862F.f_1313.f_14B != iParam0)
	{
		Global_26862F.f_1313.f_14B = iParam0;
	}
}

int func_1089()//Position - 0x33AE2
{
	return Global_26862F.f_1313.f_14B;
}

void func_1090(int iParam0)//Position - 0x33AF4
{
	if (Global_26862F.f_1313.f_14A != iParam0)
	{
		Global_26862F.f_1313.f_14A = iParam0;
	}
}

int func_1091()//Position - 0x33B17
{
	return Global_26862F.f_1313.f_14A;
}

void func_1092(int iParam0)//Position - 0x33B29
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_20 = iParam0;
}

int func_1093()//Position - 0x33B42
{
	int iVar0;
	
	iVar0 = func_1094();
	if (iVar0 > 4294967295)
	{
		if (Local_110.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1094()//Position - 0x33B64
{
	int iVar0;
	
	if (Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_4 != 4294967295)
	{
		return Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_4;
	}
	if (func_20(CAM::_0xDC9DA9E8789F5246()))
	{
		Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_4 = NETSHOP::_NETWORK_SHOP_BASKET_START();
		if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_110.f_8)
		{
			func_681(1);
		}
	}
	else if (func_19(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		iVar0 = func_532();
		if (iVar0 != func_18())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/].f_4;
}

int func_1095()//Position - 0x33BF1
{
	if (func_540())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
		{
			return 0;
		}
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
	{
		return 0;
	}
	return 1;
}

int func_1096()//Position - 0x33C27
{
	return Local_110;
}

int func_1097(int iParam0)//Position - 0x33C31
{
	return Local_111[iParam0 /*6*/];
}

int func_1098(bool bParam0)//Position - 0x33C3F
{
	if (func_1102(1))
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
		if (func_320() == func_18() || !func_1202(func_320(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_547(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_1101(CAM::_0xDC9DA9E8789F5246()) && func_1099(func_1100(CAM::_0xDC9DA9E8789F5246()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1099(int iParam0, int iParam1)//Position - 0x33CC2
{
	return func_56(iParam0) == iParam1;
}

int func_1100(int iParam0)//Position - 0x33CD3
{
	if (iParam0 != func_18() && func_1202(iParam0, 1, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_135.f_D;
	}
	return 4294967295;
}

int func_1101(int iParam0)//Position - 0x33D04
{
	if (iParam0 != func_18() && func_1202(iParam0, 1, 1))
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135, 4);
	}
	return 0;
}

int func_1102(bool bParam0)//Position - 0x33D38
{
	bool bVar0;
	
	if (!func_1074(1))
	{
		bVar0 = false;
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_18())
		{
			if (func_1202(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 0, 1))
			{
				if ((Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 4 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 8) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_1103(func_288(CAM::_0xDC9DA9E8789F5246())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_814(31);
				if (func_707(func_288(CAM::_0xDC9DA9E8789F5246())))
				{
					func_814(81);
				}
				if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_18() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
				{
					Global_18C773 = func_627(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_319(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
					{
						func_814(88);
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

int func_1103(int iParam0)//Position - 0x33E8A
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

int func_1104()//Position - 0x341AD
{
	var uVar0;
	
	func_1108(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1107())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_1106())
	{
		return 1;
	}
	if (func_1105(157))
	{
		if (!func_433())
		{
			return 1;
		}
	}
	if (func_1105(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_413() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_413()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1105(int iParam0)//Position - 0x34237
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1106()//Position - 0x3424E
{
	return Global_25824F;
}

bool func_1107()//Position - 0x3425A
{
	return Global_255C02.f_246;
}

void func_1108(var uParam0)//Position - 0x34269
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
					func_1109(iVar0);
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

void func_1109(int iParam0)//Position - 0x342DC
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1202(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1110(iVar2, &bVar3))
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

int func_1110(int iParam0, var uParam1)//Position - 0x3435D
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

void func_1111()//Position - 0x343BC
{
	SYSTEM::WAIT(0);
}

void func_1112()//Position - 0x343C9
{
	int iVar0;
	
	if (func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_1D[0]))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 5))
			{
				if (!func_1074(1))
				{
					if (func_21(Local_110.f_1D[0]))
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), NETWORK::NET_TO_VEH(Local_110.f_1D[0])))
							{
								BRAIN::TASK_LEAVE_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_1164();
	OBJECT::_0x78857FC65CADB909(1);
	func_681(0);
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_1093() || func_376())
			{
				MISC::SET_BIT(&iLocal_112, 17);
				Global_196EF6.f_2 = Local_110.f_3F;
				Global_196EF6.f_3 = Local_110.f_40;
				func_900(0, 4, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
	{
		func_1162(func_1077(), 4294967295, 4294967295, 3212836864);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 4))
	{
		func_408(8);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	}
	if (Local_110.f_3 == 1)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), false);
	}
	HUD::_0x14621BB1DF14E2B2(5);
	if (!func_1161())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_C))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_C))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_110.f_C);
				ENTITY::DELETE_ENTITY(&iVar0);
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_112, 29);
	}
	if (func_680())
	{
		func_679(0, 0, 0);
	}
	func_1118(1, 0);
	if (Global_26862F.f_160C != 4294967295)
	{
		Global_26862F.f_160C = 4294967295;
	}
	func_1117();
	if (func_1077() == 3)
	{
		func_1116();
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 1))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_217();
	func_1114();
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 19))
	{
		AUDIO::STOP_SOUND(iLocal_126);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 16))
	{
		func_400();
		func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_1113();
}

void func_1113()//Position - 0x345F6
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_1114()//Position - 0x34602
{
	struct<6> Var0;
	
	if (func_1077() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_1115(Var0);
		}
	}
}

void func_1115(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)//Position - 0x3462A
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_C, 11))
		{
			if (func_1068(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_D, 26))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_2401A9[iVar1 /*26*/].f_D), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_1116()//Position - 0x346AD
{
	if (OBJECT::_DOES_DOOR_EXIST(1343869835))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1343869835, 0, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(1343869835, 0f, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(207506449))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(207506449, 0, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(207506449, 0f, 0, 0);
	}
}

void func_1117()//Position - 0x346FD
{
	if (Global_1964DE)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1964DF, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_26A741, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1964DF, 1))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_26A741, 1);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1964DF, 5))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_26A741, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(3939230146))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3939230146, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(3713987790))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3713987790, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(2868514821))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2868514821, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(2989662390))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2989662390, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(2751792219))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(2751792219, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(3483196299))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(3483196299, 1, 0, 0);
		}
		Global_1964DF = 0;
	}
	Global_1964DE = 0;
}

void func_1118(bool bParam0, int iParam1)//Position - 0x347FD
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
		func_1159();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 4);
	}
	if ((func_759() && iParam1 != 0) && Global_40001.f_41D5)
	{
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 190 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 192)
		{
			func_1141(CAM::_0xDC9DA9E8789F5246(), iParam1, 1, 0);
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
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 14) && !func_159(CAM::_0xDC9DA9E8789F5246()))
		{
			func_409(0);
		}
	}
	else if (func_1139(CAM::_0xDC9DA9E8789F5246()) != 4294967295)
	{
		func_1092(4294967295);
	}
	func_1138(func_18());
	if (func_340(16))
	{
		func_385(16);
	}
	func_1135(0);
	func_1087(4294967295);
	func_1134();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1133(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1131(iVar1);
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
	iVar2 = func_713();
	if ((func_290(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1130(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_560(iVar2))
	{
		func_1127(4294967295, 1);
	}
	else if (((((func_712(iVar2) || func_1126(iVar2)) || func_1125(iVar2)) || func_556(iVar2)) || func_554(iVar2)) || func_552(iVar2))
	{
	}
	else
	{
		func_1127(4294967295, 1);
	}
	func_369(19);
	func_369(20);
	func_369(21);
	func_369(22);
	func_369(27);
	func_385(3);
	func_385(4);
	func_385(7);
	func_1124();
	if (func_364(CAM::_0xDC9DA9E8789F5246()))
	{
		func_681(0);
	}
	func_369(29);
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_18();
	if (Global_26862F.f_1313.f_23 != 0)
	{
		Global_26862F.f_1313.f_23 = 0;
	}
	if (bParam0)
	{
		func_386();
	}
	if (!func_159(CAM::_0xDC9DA9E8789F5246()))
	{
		func_407();
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
		func_1123("IMPEXP_SELFDES", 0);
		func_1121("IMPEXP_SELFDES");
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 8);
	}
	func_1119(iVar2, 0);
}

void func_1119(int iParam0, bool bParam1)//Position - 0x34BC6
{
	if (bParam1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1120(iParam0));
			MISC::SET_BIT(&(Global_196EED.f_3), 9);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1120(iParam0));
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 9);
	}
}

char* func_1120(int iParam0)//Position - 0x34C22
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

void func_1121(char* sParam0)//Position - 0x34C9C
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
					func_464();
					Global_19E56.f_3721[iVar0 /*104*/].f_63[Global_38B1] = 0;
					if (func_1122(iVar0))
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

int func_1122(int iParam0)//Position - 0x34D50
{
	if ((Global_19E56.f_3721[iParam0 /*104*/].f_63[0] == 1 || Global_19E56.f_3721[iParam0 /*104*/].f_63[1] == 1) || Global_19E56.f_3721[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1123(char* sParam0, int iParam1)//Position - 0x34DA5
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

void func_1124()//Position - 0x34EBD
{
	if (func_380(CAM::_0xDC9DA9E8789F5246()))
	{
		func_369(25);
	}
}

int func_1125(int iParam0)//Position - 0x34ED6
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

int func_1126(int iParam0)//Position - 0x34EF6
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1127(int iParam0, bool bParam1)//Position - 0x34F21
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_713();
	}
	if (iParam0 > 0)
	{
		if (func_532() != func_18())
		{
			if (func_548(CAM::_0xDC9DA9E8789F5246()) == CAM::_0xDC9DA9E8789F5246())
			{
				Global_26366D.f_5D[func_1129(iParam0)] = 1;
			}
		}
		iVar0 = func_1129(159);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(157);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(148);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(164);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(142);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(152);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(166);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(170);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(173);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(179);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(200);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(201);
		if (func_1128(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(182);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(183);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(185);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(186);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(180);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(195);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(197);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(198);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(207);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(208);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(209);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(214);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(215);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(216);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(217);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(218);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(219);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(220);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(221);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1128(int iParam0, int iParam1, bool bParam2)//Position - 0x3559D
{
	if (bParam2)
	{
		if ((!func_263(CAM::_0xDC9DA9E8789F5246(), 19) && !func_263(CAM::_0xDC9DA9E8789F5246(), 20)) && !func_263(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			return 0;
		}
	}
	if (Global_26366D.f_5D[iParam0] == 1 && func_9(&(Global_26366D[iParam0 /*2*/])))
	{
		if (func_1029(&(Global_26366D[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_26366D.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1129(int iParam0)//Position - 0x35623
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

void func_1130(int iParam0)//Position - 0x35825
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_713();
	}
	if (iParam0 > 0)
	{
		if (func_532() != func_18())
		{
			Global_26366D.f_5D[func_1129(iParam0)] = 1;
		}
		iVar0 = func_1129(155);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(163);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(160);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(153);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(162);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(154);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(171);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(172);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(199);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(194);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(193);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(210);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(205);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(189);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(211);
		if (func_1128(iVar0, Global_40001.f_30CE, 0))
		{
			func_228(&(Global_26366D[iVar0 /*2*/]));
			func_8(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1131(int iParam0)//Position - 0x35B56
{
	if (!func_424(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/], func_1132(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/] = { func_1132() };
	}
	if (!func_424(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/], func_1132(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/] = { func_1132() };
	}
}

Vector3 func_1132()//Position - 0x35BD8
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1133(int iParam0)//Position - 0x35BE4
{
	if (!func_424(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/], func_1132(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/] = { func_1132() };
	}
	if (!func_424(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/], func_1132(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/] = { func_1132() };
	}
}

void func_1134()//Position - 0x35C62
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_1803FE = { Var0 };
	Global_1803FE.f_D = func_18();
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1801DE, 3))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_1801DE, 3);
	}
}

void func_1135(bool bParam0)//Position - 0x35CBC
{
	if (bParam0)
	{
		if (!func_576(CAM::_0xDC9DA9E8789F5246(), 14))
		{
			func_1137(14);
		}
	}
	else if (func_576(CAM::_0xDC9DA9E8789F5246(), 14))
	{
		func_1136(14);
	}
}

void func_1136(int iParam0)//Position - 0x35CF3
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_1137(int iParam0)//Position - 0x35D10
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_1138(int iParam0)//Position - 0x35D2D
{
	if (func_20(CAM::_0xDC9DA9E8789F5246()))
	{
		if (CAM::_0xDC9DA9E8789F5246() != iParam0)
		{
			if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB != iParam0)
			{
				Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_1139(int iParam0)//Position - 0x35D7C
{
	if (func_1140(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_20;
	}
	return 4294967295;
}

int func_1140(int iParam0, int iParam1)//Position - 0x35D9F
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_1141(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x35DDA
{
	int iVar0;
	
	if (func_870(iParam0, iParam1) && func_1158(iParam0, iParam1))
	{
		iVar0 = func_869(iParam0, iParam1);
		func_1145(iVar0, bParam2, bParam3);
		func_1142(iVar0, 1);
	}
}

void func_1142(int iParam0, bool bParam1)//Position - 0x35E15
{
	if (!func_1144(iParam0))
	{
		return;
	}
	func_856(func_1143(iParam0), bParam1, 4294967295, 1);
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_6 = bParam1;
}

int func_1143(int iParam0)//Position - 0x35E51
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

bool func_1144(int iParam0)//Position - 0x35EAB
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1145(int iParam0, bool bParam1, bool bParam2)//Position - 0x35EC0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_1031(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (!bParam1)
	{
		func_1157(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2634DD[iParam0];
		iVar0 = func_1156(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1975A4 = 4294967295;
		}
		func_1155(iParam0, 0, bParam2);
	}
	else if (func_1153(iParam0, bParam2))
	{
		iVar0 = func_1152(iVar2, 0);
		iVar3 = func_982(CAM::_0xDC9DA9E8789F5246(), iVar2);
		iVar4 = func_1151(iVar2, bParam2);
		iVar5 = func_1152(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1150(iVar2) && func_1149(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1157(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1148(CAM::_0xDC9DA9E8789F5246(), iVar2) > 0)
		{
			func_1147(iParam0, (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 - (func_1151(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1152(iVar2, bParam2) / func_1148(CAM::_0xDC9DA9E8789F5246(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1150(iVar2) && func_1149(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1146(CAM::_0xDC9DA9E8789F5246(), iVar2, iVar0, bParam2);
}

void func_1146(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x36031
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_863(iParam1))
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

void func_1147(int iParam0, int iParam1)//Position - 0x360A5
{
	if (iParam0 != 4294967295 && iParam1 != Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2)
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1148(int iParam0, int iParam1)//Position - 0x360EA
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1))
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

int func_1149(int iParam0, int iParam1)//Position - 0x36149
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1) && func_1150(iParam1))
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

bool func_1150(int iParam0)//Position - 0x361B3
{
	return func_756(iParam0) == 5;
}

int func_1151(int iParam0, bool bParam1)//Position - 0x361C3
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_756(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_41B8;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BD;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_41B7;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BC;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_41B6;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BB;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_41B4;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41B9;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_41B5;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BA;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_51CE;
				if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51CF;
				}
			}
			else
			{
				uVar0 = Global_40001.f_51BE;
				if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51BF;
				}
			}
			break;
	}
	return uVar0;
}

int func_1152(int iParam0, bool bParam1)//Position - 0x362FA
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_756(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_41A5;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AE);
			}
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B3);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_41A6;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AD);
			}
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B2);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_41A7;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AC);
			}
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B1);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_41A8;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AA);
			}
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41AF);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_41A9;
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AB);
			}
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
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
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
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
			if (func_868(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
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
			if (func_1149(CAM::_0xDC9DA9E8789F5246(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1153(int iParam0, bool bParam1)//Position - 0x36504
{
	if (bParam1)
	{
		return func_857(15384, 4294967295, 4294967295);
	}
	return func_857(func_1154(iParam0), 4294967295, 4294967295);
}

int func_1154(int iParam0)//Position - 0x36529
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

void func_1155(int iParam0, bool bParam1, bool bParam2)//Position - 0x36583
{
	if (bParam2)
	{
		func_856(15384, bParam1, 4294967295, 1);
		return;
	}
	func_856(func_1154(iParam0), bParam1, 4294967295, 1);
}

int func_1156(int iParam0, bool bParam1)//Position - 0x365AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2634DD[iParam0];
	iVar1 = func_1031(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2634E4;
	}
	if (func_1150(iVar1))
	{
		if (func_1149(CAM::_0xDC9DA9E8789F5246(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1157(int iParam0, int iParam1, bool bParam2)//Position - 0x365F6
{
	if (bParam2)
	{
		Global_2634E4 = iParam1;
		return;
	}
	Global_2634DD[iParam0] = iParam1;
}

int func_1158(int iParam0, int iParam1)//Position - 0x36616
{
	int iVar0;
	
	if (func_870(iParam0, iParam1))
	{
		iVar0 = func_869(iParam0, iParam1);
		if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_4 > 0 && Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1159()//Position - 0x3666A
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 28);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 29);
	func_1160(24);
}

void func_1160(int iParam0)//Position - 0x36692
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_1161()//Position - 0x366BB
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 24))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 4))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 8))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 9))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 10))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 15))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_1162(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36769
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_196EF6;
	Var1.f_1 = Global_196EF6.f_1;
	Var1.f_2 = Global_196EF6.f_2;
	Var1.f_3 = Global_196EF6.f_3;
	Var1.f_4 = Global_196EF6.f_4;
	Var1.f_5 = Global_196EF6.f_5;
	Var1.f_6 = Global_196EF6.f_6;
	Var1.f_7 = Global_196EF6.f_7;
	Var1.f_8 = Global_196EF6.f_8;
	Var1.f_9 = Global_196EF6.f_9;
	Var1.f_A = Global_196EF6.f_A;
	Var1.f_B = Global_196EF6.f_B;
	Var1.f_C = Global_196EF6.f_C;
	Var1.f_D = Global_196EF6.f_E;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_E = Global_196EF6.f_F;
			Var2.f_F = Global_196EF6.f_10;
			Var2.f_10 = Global_196EF6.f_11;
			unk_0x6899EB66155B3500(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_E = Global_196EF6.f_F;
			Var3.f_F = uParam0;
			Var3.f_10 = iParam1;
			unk_0x536E90877E33B644(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_E = Global_196EF6.f_F;
			Var4.f_F = uParam0;
			unk_0x3A6ACC2FAB290CDC(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_E = Global_196EF6.f_F;
			Var5.f_F = uParam0;
			Var5.f_10 = iParam1;
			unk_0x4071F63CF95F324E(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_E = Global_196EF6.f_F;
			Var6.f_F = uParam0;
			unk_0x217787AB4F2FB1E9(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_E = Global_196EF6.f_F;
			Var7.f_F = uParam0;
			Var7.f_10 = iParam1;
			Var7.f_11 = iParam2;
			unk_0x63FAAF4414D8B3D5(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_E = uParam0;
			Var8.f_F = iParam1;
			Var8.f_10 = iParam2;
			Var8.f_11 = Global_196EF6.f_F;
			unk_0xFDDF5012CAC01420(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_F = uParam0;
			Var9.f_10 = iParam1;
			Var9.f_11 = iParam2;
			Var9.f_E = iParam3;
			Var9.f_12 = Global_196EF6.f_F;
			unk_0x26687349CB68A516(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_E = uParam0;
			Var10.f_F = iParam1;
			Var10.f_10 = iParam2;
			Var10.f_11 = Global_196EF6.f_F;
			unk_0x37D5D670955A5AA7(&Var10);
		}
	}
	func_1163();
}

void func_1163()//Position - 0x36A07
{
	struct<18> Var0;
	
	Global_196EF6 = { Var0 };
}

void func_1164()//Position - 0x36A1B
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 17))
		{
			vVar0 = { 200f, 200f, 200f };
			vVar1 = { func_24() };
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar1 - vVar0, vVar1 + vVar0, true, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_1), 17);
		}
	}
}

void func_1165(struct<21> Param0)//Position - 0x36A74
{
	func_1200(func_1201(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(15);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(5);
	func_1199(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_110, 65);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_111, 193);
	if (!func_1198())
	{
		func_1112();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1197();
		func_1166(0, 0);
		if (func_340(8))
		{
			func_385(8);
		}
		Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*6*/] = 0;
	}
	else
	{
		func_1112();
	}
}

void func_1166(int iParam0, int iParam1)//Position - 0x36AFB
{
	func_1196();
	if (func_547(CAM::_0xDC9DA9E8789F5246()))
	{
		func_1169(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1168(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_196EE8, 0);
				break;
			}
	}
	if (!func_744() && !func_19(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_372())
		{
			func_408(3);
		}
	}
	func_408(4);
	if (func_1074(0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_532();
	}
	if (func_707(iParam0))
	{
		func_980();
		Global_196F08.f_12 = func_960(func_320());
	}
	else if (func_711(func_1139(CAM::_0xDC9DA9E8789F5246())))
	{
		func_978();
		Global_196F3E.f_12 = func_960(func_320());
	}
	func_1167();
}

void func_1167()//Position - 0x36BD7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14B91C.f_216[iVar0 /*42*/].f_1 = func_18();
		Global_14B91C.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1168(int iParam0, bool bParam1)//Position - 0x36C11
{
	return func_16(CAM::_0xDC9DA9E8789F5246(), iParam0, bParam1);
}

void func_1169(bool bParam0)//Position - 0x36C25
{
	int iVar0;
	
	func_1160(33);
	func_1160(34);
	func_1160(35);
	func_1160(36);
	func_1160(37);
	func_1160(38);
	func_1160(39);
	func_1160(40);
	func_1160(43);
	func_1160(41);
	func_1160(54);
	func_1160(42);
	func_1160(47);
	func_1195(23);
	func_1195(24);
	func_1160(92);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 2);
	func_1194();
	func_1189();
	func_1184();
	func_1179();
	func_1171();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26862F.f_1313.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1170(3))
	{
		func_1195(3);
	}
	else if (func_1170(4))
	{
		func_1195(4);
	}
	else if (func_1170(5))
	{
		func_1195(5);
	}
	else if (func_1170(6))
	{
		func_1195(6);
	}
	else if (func_1170(7))
	{
		func_1195(7);
	}
	else if (((((((((((((((((func_1170(0) || func_1170(1)) || func_1170(2)) || func_1170(8)) || func_1170(9)) || func_1170(10)) || func_1170(11)) || func_1170(12)) || func_1170(13)) || func_1170(14)) || func_1170(15)) || func_1170(16)) || func_1170(17)) || func_1170(18)) || func_1170(19)) || func_1170(20)) || func_1170(21)) || func_1170(22))
	{
		func_1195(8);
		func_1195(0);
		func_1195(1);
		func_1195(2);
		func_1195(9);
		func_1195(10);
		func_1195(11);
		func_1195(12);
		func_1195(13);
		func_1195(14);
		func_1195(15);
		func_1195(16);
		func_1195(17);
		func_1195(18);
		func_1195(19);
		func_1195(20);
		func_1195(21);
		func_1195(22);
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

bool func_1170(int iParam0)//Position - 0x36E83
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_E[iVar0], iVar1);
}

void func_1171()//Position - 0x36EAC
{
	int iVar0;
	
	if (func_1178())
	{
		func_1177(8);
		func_1177(9);
		func_1177(10);
		func_1177(12);
		func_1177(13);
		func_1177(14);
		func_1177(19);
		func_1177(20);
		func_1177(21);
		func_1177(22);
		func_1177(23);
		func_1177(24);
		func_1177(25);
		func_1177(26);
		func_1177(15);
		func_1177(16);
		func_1177(17);
		func_1177(18);
		func_1177(35);
		func_1177(45);
		func_1177(46);
		if (func_1176(11))
		{
			func_1177(11);
			iVar0 = func_732(7226, 4294967295, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_730(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_1176(48))
	{
		if (func_1175(151, 3))
		{
			func_1174(151, 3);
		}
		func_1177(48);
	}
	if (func_1176(49))
	{
		if (func_1175(152, 3))
		{
			func_1174(152, 3);
		}
		func_1177(49);
	}
	if (func_1176(50))
	{
		if (func_1175(153, 3))
		{
			func_1174(153, 3);
		}
		func_1177(50);
	}
	if (func_1176(51))
	{
		if (func_1175(func_1172(), 3))
		{
			func_1174(func_1172(), 3);
		}
		func_1177(51);
	}
}

int func_1172()//Position - 0x36FF6
{
	if (func_1173())
	{
		Global_19E56.f_6D76[154 /*29*/].f_18[Global_38B1] = 1;
	}
	return 154;
}

int func_1173()//Position - 0x3701A
{
	int iVar0;
	
	iVar0 = func_44(CAM::_0xDC9DA9E8789F5246());
	if (((iVar0 != CAM::_0xDC9DA9E8789F5246() && iVar0 != func_18()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_1174(int iParam0, int iParam1)//Position - 0x3705B
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

int func_1175(int iParam0, int iParam1)//Position - 0x3709E
{
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_1176(int iParam0)//Position - 0x370C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_1A[iVar0], iVar1);
}

void func_1177(int iParam0)//Position - 0x370EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_1A[iVar0]), iVar1);
}

int func_1178()//Position - 0x37115
{
	if (((((((((((((((((((((func_1176(8) || func_1176(9)) || func_1176(10)) || func_1176(12)) || func_1176(11)) || func_1176(13)) || func_1176(14)) || func_1176(19)) || func_1176(20)) || func_1176(21)) || func_1176(22)) || func_1176(23)) || func_1176(24)) || func_1176(25)) || func_1176(26)) || func_1176(15)) || func_1176(16)) || func_1176(17)) || func_1176(18)) || func_1176(35)) || func_1176(45)) || func_1176(46))
	{
		return 1;
	}
	return 0;
}

void func_1179()//Position - 0x37227
{
	if (func_1183())
	{
		func_1182(0);
		func_1182(1);
		func_1182(2);
		func_1182(3);
		func_1182(4);
		func_1182(5);
		if (func_1181(32))
		{
			if (func_1175(func_1180(), 3))
			{
				func_1174(func_1180(), 3);
			}
			func_1182(32);
		}
	}
}

int func_1180()//Position - 0x3727B
{
	if (func_1173())
	{
		Global_19E56.f_6D76[12 /*29*/].f_18[Global_38B1] = 1;
	}
	return 12;
}

bool func_1181(int iParam0)//Position - 0x3729F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_17[iVar0], iVar1);
}

void func_1182(int iParam0)//Position - 0x372C8
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_17[iVar0]), iVar1);
}

int func_1183()//Position - 0x372F1
{
	if ((((func_1181(1) || func_1181(0)) || func_1181(2)) || func_1181(4)) || func_1181(5))
	{
		return 1;
	}
	return 0;
}

void func_1184()//Position - 0x37332
{
	if (func_1188())
	{
		func_1187(0);
		func_1187(1);
		func_1187(2);
		func_1187(3);
		func_1187(4);
		func_1187(5);
		func_1187(6);
		func_1187(7);
		if (func_1186(8))
		{
			func_1187(8);
		}
		if (func_1186(15))
		{
			if (func_1175(func_1185(), 3))
			{
				func_1174(func_1185(), 3);
			}
			func_1187(15);
		}
	}
}

int func_1185()//Position - 0x3739F
{
	if (func_1173())
	{
		Global_19E56.f_6D76[20 /*29*/].f_18[Global_38B1] = 1;
	}
	return 20;
}

bool func_1186(int iParam0)//Position - 0x373C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_15[iVar0], iVar1);
}

void func_1187(int iParam0)//Position - 0x373EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_15[iVar0]), iVar1);
}

int func_1188()//Position - 0x37415
{
	if ((((((((func_1186(0) || func_1186(1)) || func_1186(2)) || func_1186(3)) || func_1186(4)) || func_1186(5)) || func_1186(6)) || func_1186(7)) || func_1186(8))
	{
		return 1;
	}
	return 0;
}

void func_1189()//Position - 0x37483
{
	if (func_1193())
	{
		func_1192(0);
		func_1192(1);
		func_1192(2);
		func_1192(3);
		func_1192(4);
		func_1192(5);
		func_1192(6);
		func_1192(7);
		func_1192(8);
		func_1192(9);
		func_1192(10);
		func_1192(11);
		func_1192(12);
		if (func_1191(13))
		{
			if (func_1175(func_1190(), 3))
			{
				func_1174(func_1190(), 3);
			}
			func_1192(13);
		}
	}
}

int func_1190()//Position - 0x374FF
{
	if (func_1173())
	{
		Global_19E56.f_6D76[76 /*29*/].f_18[Global_38B1] = 1;
	}
	return 76;
}

bool func_1191(int iParam0)//Position - 0x37523
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_13[iVar0], iVar1);
}

void func_1192(int iParam0)//Position - 0x3754C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_13[iVar0]), iVar1);
}

int func_1193()//Position - 0x37575
{
	if ((((((((((((func_1191(0) || func_1191(1)) || func_1191(2)) || func_1191(3)) || func_1191(4)) || func_1191(5)) || func_1191(6)) || func_1191(7)) || func_1191(8)) || func_1191(9)) || func_1191(10)) || func_1191(11)) || func_1191(12))
	{
		return 1;
	}
	return 0;
}

void func_1194()//Position - 0x37613
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26862F.f_1313.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_1195(int iParam0)//Position - 0x3763B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_E[iVar0]), iVar1);
}

void func_1196()//Position - 0x37664
{
	struct<14> Var0;
	
	Global_196EF6 = { Var0 };
	Global_196EF6.f_E = 0;
	Global_196EF6.f_F = 0;
}

void func_1197()//Position - 0x37686
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_180824[iVar0], 3947353312);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 3947353312, Global_180824[iVar0]);
		iVar0++;
	}
}

int func_1198()//Position - 0x376C5
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_1107())
		{
			return 0;
		}
		if (func_1105(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_1199(int iParam0, int iParam1, bool bParam2)//Position - 0x3771E
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1113();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1061())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1113();
					}
					else
					{
						return 0;
					}
				}
				if (func_1107())
				{
					if (!bParam2)
					{
						func_1113();
					}
					else
					{
						return 0;
					}
				}
				if (func_1105(155))
				{
					if (!bParam2)
					{
						func_1113();
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
					func_1113();
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
				func_1113();
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
			func_1113();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1200(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x37833
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1113();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_1201(int iParam0)//Position - 0x37852
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

int func_1202(int iParam0, bool bParam1, bool bParam2)//Position - 0x37EE8
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

