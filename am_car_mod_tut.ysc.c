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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 32;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 32;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	vector3 vLocal_138[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<21> Local_151 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_139 = 4294967295;
	func_202(ScriptParam_151);
	while (true)
	{
		func_201();
		if (func_192())
		{
			func_182();
		}
		switch (func_181(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_180() == 2)
				{
					vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 2;
				}
				else if (func_180() == 6)
				{
					vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_180() == 2)
				{
					if (!func_179(0))
					{
						func_74();
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2, 1))
					{
						func_8();
					}
				}
				else if (func_180() == 6)
				{
					vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(vLocal_61.f_2));
				if (func_5(&(vLocal_61.f_2)))
				{
					vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 6;
				}
				break;
			
			case 3:
				vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 6;
			
			case 6:
				func_182();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_180())
			{
				case 0:
					vLocal_61.x = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						vLocal_61.x = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1AE
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_61.y, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1C7
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_3()//Position - 0x1D6
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_137 == 0)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 0);
			MISC::SET_BIT(&iLocal_140, 1);
		}
		iVar0 = iLocal_137;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_138[iLocal_137 /*3*/].f_2, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iLocal_137 /*790*/].f_92, 4))
				{
				}
			}
		}
		iLocal_137++;
		if (iLocal_137 == 32)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 1))
			{
				MISC::SET_BIT(&(vLocal_61.f_1), 0);
			}
			MISC::SET_BIT(&iLocal_140, 0);
			iLocal_137 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)//Position - 0x26F
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

int func_5(var uParam0)//Position - 0x2B9
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

void func_6(var uParam0)//Position - 0x2E2
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x301
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

void func_8()//Position - 0x346
{
	if (iLocal_139 != 4294967295)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
		iLocal_139 = 4294967295;
	}
	MISC::SET_BIT(&(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2), 0);
	MISC::SET_BIT(&(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2), 1);
	func_70(10, 0);
	func_69(0);
	func_30(1);
	func_23();
	func_9(43, 1, 0);
	func_9(42, 1, 0);
}

void func_9(int iParam0, bool bParam1, int iParam2)//Position - 0x3A8
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0, 0))
		{
			if (iParam2 && Global_16C64.f_12[iParam0])
			{
				if (func_21(iParam0) == 3 && !func_20(iParam0))
				{
					func_19(iParam0);
					func_18(iParam0, 0, 0);
					func_11(iParam0, 1, 0);
					func_10(iParam0);
				}
				else
				{
					func_18(iParam0, 1, 0);
					func_10(iParam0);
				}
			}
			else
			{
				func_18(iParam0, 0, 0);
				func_11(iParam0, 1, 0);
				func_10(iParam0);
			}
		}
		else
		{
			func_11(iParam0, 1, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0, 0))
	{
		func_11(iParam0, 0, 0);
		func_11(iParam0, 1, 0);
		func_10(iParam0);
	}
}

void func_10(int iParam0)//Position - 0x467
{
	Global_16C64.f_AC[iParam0] = 1;
	Global_16C64.f_AB = 1;
}

void func_11(int iParam0, int iParam1, bool bParam2)//Position - 0x481
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
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), 4294967295, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4F3
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_13(int iParam0)//Position - 0x523
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_14();
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

int func_14()//Position - 0x557
{
	return Global_1407E0;
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x563
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_13(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x595
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

int func_17()//Position - 0x898
{
	return Global_6373;
}

void func_18(int iParam0, int iParam1, bool bParam2)//Position - 0x8A3
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
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), 4294967295, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_19E56.f_29C[iParam0]), iParam1);
	}
}

void func_19(int iParam0)//Position - 0x915
{
	if (Global_16C64.f_12[iParam0])
	{
		func_18(iParam0, 10, 1);
		func_18(iParam0, 19, 1);
	}
}

bool func_20(int iParam0)//Position - 0x93C
{
	return func_22(iParam0, 5, 1);
}

int func_21(int iParam0)//Position - 0x94C
{
	switch (iParam0)
	{
		case 4294967295:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
	}
	return 6;
}

int func_22(int iParam0, int iParam1, bool bParam2)//Position - 0xBF3
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
		if (func_17() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_15(func_16(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_23()//Position - 0xC5D
{
	if (!func_29())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_24();
}

void func_24()//Position - 0xC8A
{
	func_26();
	func_25(0);
}

void func_25(bool bParam0)//Position - 0xC9B
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

void func_26()//Position - 0xD29
{
	if (!func_28())
	{
	}
	if (func_29())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_27();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_27()//Position - 0xD52
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

int func_28()//Position - 0xFC4
{
	if (!func_29())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_27();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_29()//Position - 0xFEA
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

void func_30(bool bParam0)//Position - 0x1000
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1406BE)
	{
		if (!func_68())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1806DA[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_65(CAM::_0xDC9DA9E8789F5246(), bParam0);
	iVar2 = func_63(iVar1, bParam0);
	if (!func_62(4294967295))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1806DA[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1806DA[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 252)
	{
		iVar3 = func_61(iVar4);
		if (iVar2 >= iVar3 && iVar3 != 4294967295)
		{
			if (func_59(iVar4))
			{
				func_50(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_44(func_45(59, 0, 0), 0);
	func_40(func_45(135, 0, 0), 1);
	func_38(func_45(22, 0, 0), func_45(73, 0, 0));
	if (func_68())
	{
		if (func_37(77, 4294967295))
		{
			func_36(1);
			func_35(1);
		}
	}
	if (func_34() || func_33())
	{
		func_31(77, 1, 4294967295, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_9(28, 1, 0);
			func_9(29, 1, 0);
			func_9(30, 1, 0);
			func_9(31, 1, 0);
			func_9(32, 1, 0);
			func_9(33, 1, 0);
			func_9(34, 1, 0);
			func_9(35, 1, 0);
			func_9(36, 1, 0);
			func_9(37, 1, 0);
			func_9(38, 1, 0);
		}
	}
	if (func_45(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_EC6CB = 0;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x11A6
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_13(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_32()//Position - 0x11D8
{
	return 1;
	return 0;
}

bool func_33()//Position - 0x11E5
{
	return Global_14084D;
}

bool func_34()//Position - 0x11F1
{
	return Global_14084F;
}

void func_35(bool bParam0)//Position - 0x11FD
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_9(28, bParam0, 0);
	func_9(30, bParam0, 0);
	func_9(31, bParam0, 0);
	func_9(33, bParam0, 0);
	func_9(34, bParam0, 0);
	func_9(38, bParam0, 0);
}

void func_36(bool bParam0)//Position - 0x1246
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_9(29, bParam0, 0);
	func_9(32, bParam0, 0);
	func_9(36, bParam0, 0);
	func_9(35, bParam0, 0);
	func_9(37, bParam0, 0);
}

int func_37(int iParam0, int iParam1)//Position - 0x1286
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_13(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)//Position - 0x12B2
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_9(0, bParam0, 1);
	func_9(1, bParam0, 1);
	func_9(2, bParam0, 1);
	func_9(3, bParam0, 1);
	func_9(4, bParam0, 1);
	func_9(5, bParam0, 1);
	func_9(6, bParam0, 1);
	func_9(7, bParam0, bVar0);
	func_9(8, bParam0, 1);
	func_9(9, bParam0, 1);
	func_9(10, bParam0, 1);
	func_9(11, bParam0, 1);
	func_9(12, bParam0, bVar0);
	func_9(13, bParam0, 1);
	func_9(21, bParam0, 1);
	func_9(14, bParam0, 1);
	func_9(15, bParam0, 1);
	func_9(16, bParam0, 1);
	func_9(17, bParam0, 1);
	func_9(18, bParam0, 1);
	func_9(19, bParam0, 1);
	func_9(20, bParam0, 1);
	func_9(22, bParam0, 1);
	func_9(23, bParam0, 1);
	func_9(24, bParam0, 1);
	func_9(25, bParam0, 1);
	func_9(26, bParam0, 1);
	func_9(27, bParam0, 1);
	func_39(1, !bParam1);
	if (!bVar0)
	{
		func_19(12);
	}
}

void func_39(int iParam0, bool bParam1)//Position - 0x13DA
{
	if (bParam1)
	{
		Global_16C64.f_9[iParam0] = 1;
	}
	else
	{
		Global_16C64.f_9[iParam0] = 0;
	}
}

void func_40(bool bParam0, bool bParam1)//Position - 0x1400
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = func_179(0);
	if (Global_40001.f_3F == 1 && func_45(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(44))
		{
			func_19(44);
		}
	}
	if (bParam0)
	{
		if (func_41(0) > 1)
		{
			MISC::SET_BIT(&(Global_26862F.f_6BC), 10);
		}
	}
}

int func_41(int iParam0)//Position - 0x1486
{
	int iVar0;
	
	if (Global_1964D0[iParam0 /*8*/] == 4294967295)
	{
		iVar0 = func_15(func_43(iParam0), 4294967295, 0);
		if (iVar0 == 4294967295)
		{
			func_42(iParam0, 0);
			iVar0 = 0;
		}
		Global_1964D0[iParam0 /*8*/] = iVar0;
	}
	return Global_1964D0[iParam0 /*8*/];
}

void func_42(int iParam0, int iParam1)//Position - 0x14CA
{
	Global_1964D0[iParam0 /*8*/] = iParam1;
	func_12(func_43(iParam0), iParam1, 4294967295, 1, 0);
}

int func_43(int iParam0)//Position - 0x14EB
{
	switch (iParam0)
	{
		case 0:
			return 8489;
		
		default:
	}
	return 8489;
}

void func_44(bool bParam0, bool bParam1)//Position - 0x1509
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = func_179(0);
	func_9(39, bParam0, 0);
	func_9(40, bParam0, 0);
	func_9(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(43, bParam0, 0);
		func_9(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(39))
		{
			func_19(39);
		}
		if (!func_20(40))
		{
			func_19(40);
		}
		if (!func_20(41))
		{
			func_19(41);
		}
		if (!func_20(42))
		{
			func_19(42);
		}
		if (!func_20(43))
		{
			func_19(43);
		}
	}
}

bool func_45(int iParam0, bool bParam1, bool bParam2)//Position - 0x15BA
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1D95 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_47(CAM::_0xDC9DA9E8789F5246(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_40001.f_126C == 1)
		{
			return 1;
		}
	}
	if (func_34() || func_33())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_46())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806DA[iVar1], iVar0);
}

int func_46()//Position - 0x1728
{
	int iVar0;
	
	if (Global_1406BE)
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B8, 23))
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	iVar0 = Global_150A75[func_13(4294967295)];
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_26862F.f_6B8), 23);
		return 1;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)//Position - 0x178E
{
	var uVar0;
	int iVar1;
	
	if (!func_68())
	{
		return 0;
	}
	if (func_49())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_285, iVar1);
}

int func_48(int iParam0)//Position - 0x17D6
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		default:
	}
	return 1;
}

bool func_49()//Position - 0x193E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92, 3);
}

void func_50(int iParam0, bool bParam1)//Position - 0x1958
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 4294967295)
	{
		if (bParam1)
		{
			if (!func_58(4294967295))
			{
				if (!func_68())
				{
					return;
				}
			}
			if (!func_58(4294967295))
			{
				if (iParam0 == 30)
				{
					if (!func_57() && !func_56())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_55())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_58(4294967295))
				{
					if (!func_51())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1806DA[iVar1]), iVar0);
	}
}

int func_51()//Position - 0x19F1
{
	int iVar0;
	
	if (func_54(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	iVar0 = Global_150A75[func_13(4294967295)];
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 2))
	{
		func_52(1);
		return 1;
	}
	return 0;
}

void func_52(bool bParam0)//Position - 0x1A29
{
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_8E, 25))
		{
			func_53(CAM::_0xDC9DA9E8789F5246(), 12);
			MISC::SET_BIT(&(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_8E), 25);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_8E, 25))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_8E), 25);
	}
}

void func_53(int iParam0, int iParam1)//Position - 0x1A96
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	MISC::SET_BIT(&(Global_1841F3[iParam0 /*790*/].f_285), iVar1);
}

bool func_54(int iParam0)//Position - 0x1ABC
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 25);
}

int func_55()//Position - 0x1AEB
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B8, 6))
	{
		return 1;
	}
	iVar0 = Global_150A75[func_13(4294967295)];
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B8, 6))
		{
			MISC::SET_BIT(&(Global_26862F.f_6B8), 6);
		}
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return 0;
}

bool func_56()//Position - 0x1B54
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92, 7);
}

int func_57()//Position - 0x1B6E
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(121, 4294967295);
}

bool func_58(int iParam0)//Position - 0x1B9E
{
	return func_37(123, iParam0);
}

int func_59(int iParam0)//Position - 0x1BAE
{
	int iVar0;
	int iVar1;
	
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_15(func_60(iParam0), 4294967295, 0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1DE0
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		
		case 1:
			return 1201;
		
		case 2:
			return 1202;
		
		case 3:
			return 1203;
		
		case 4:
			return 1204;
		
		case 5:
			return 1206;
		
		case 6:
			return 3815;
		
		case 7:
			return 4018;
		
		case 8:
			return 5472;
		
		default:
	}
	return 1200;
}

int func_61(int iParam0)//Position - 0x1E80
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
			if (!func_58(4294967295))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return 4294967295;
}

int func_62(int iParam0)//Position - 0x2142
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(119, iParam0);
}

int func_63(int iParam0, bool bParam1)//Position - 0x2173
{
	if (bParam1)
	{
	}
	return func_64(iParam0, 0);
}

int func_64(int iParam0, int iParam1)//Position - 0x2187
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

int func_65(int iParam0, bool bParam1)//Position - 0x2246
{
	if (bParam1)
	{
	}
	return func_66(iParam0);
}

int func_66(int iParam0)//Position - 0x2259
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_13(4294967295)];
			}
			else if (func_67(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_13(4294967295)];
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x22B6
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

int func_68()//Position - 0x22DB
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(120, 4294967295);
}

void func_69(bool bParam0)//Position - 0x230B
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92), 18);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92), 18);
	}
}

void func_70(int iParam0, bool bParam1)//Position - 0x2341
{
	if (bParam1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0, iParam0))
		{
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0), iParam0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0, iParam0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0), iParam0);
	}
}

void func_71(int iParam0, bool bParam1)//Position - 0x23A4
{
	if (bParam1)
	{
	}
	if (HUD::DOES_BLIP_EXIST(Global_16C64.f_DF[iParam0]))
	{
	}
}

void func_72(int iParam0, bool bParam1)//Position - 0x23C2
{
	switch (iParam0)
	{
		case 39:
			func_73(39, bParam1);
			break;
		
		case 40:
			func_73(40, bParam1);
			break;
		
		case 41:
			func_73(41, bParam1);
			break;
		
		case 42:
			func_73(42, bParam1);
			break;
		
		case 43:
			func_73(43, bParam1);
			break;
		
		case 44:
			func_73(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_73(int iParam0, bool bParam1)//Position - 0x243A
{
	if (bParam1)
	{
		if (!func_22(iParam0, 8, 0))
		{
			func_18(iParam0, 8, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 8, 0))
	{
		func_11(iParam0, 8, 0);
		func_10(iParam0);
	}
}

void func_74()//Position - 0x2481
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	switch (vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1)
	{
		case 0:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2, 0))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 5))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 10);
							}
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
								}
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 7))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 7);
								}
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 8))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 8);
								}
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 11))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 11);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 2))
								{
									if (iLocal_139 != 4294967295)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = 4294967295;
									}
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
									func_175("FM_CTUT_CAR", 0);
									MISC::SET_BIT(&iLocal_140, 2);
								}
							}
							else
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 2))
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 2);
								}
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
								if ((!func_148(iVar0, 0, &uVar1) || !func_147(iVar0)) || func_146(ENTITY::GET_ENTITY_MODEL(iVar0)))
								{
									if (func_145())
									{
										func_144(0);
									}
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
									{
										GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
									}
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 7))
									{
										func_175("FM_CTUT_ANO", 0);
										MISC::SET_BIT(&iLocal_140, 7);
									}
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 8))
									{
										if (func_139())
										{
											if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
											{
												if (iLocal_148 > 0)
												{
													if (func_146(ENTITY::GET_ENTITY_MODEL(iVar0)))
													{
														func_138("FM_CTUT_PRM", 4294967295);
														MISC::SET_BIT(&iLocal_140, 8);
														MISC::SET_BIT(&iLocal_140, 11);
														func_7(&uLocal_145, 0, 0);
													}
													else if (!func_147(iVar0))
													{
														MISC::SET_BIT(&iLocal_140, 8);
														func_138("FM_CTUT_DRI", 4294967295);
													}
													else if (!func_148(iVar0, 0, &uVar1))
													{
														MISC::SET_BIT(&iLocal_140, 8);
														func_138("FM_CTUT_HMD", 4294967295);
													}
												}
											}
										}
									}
									else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 11))
									{
										if (func_137(&uLocal_145, 30000, 0))
										{
											if (func_146(ENTITY::GET_ENTITY_MODEL(iVar0)))
											{
												if (func_139())
												{
													func_138("FM_CTUT_PRM", 4294967295);
													func_136(&uLocal_145);
													func_7(&uLocal_145, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 7))
									{
										GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 7);
									}
									if (!func_145())
									{
										func_144(1);
									}
									if (func_135("FM_CTUT_HMD"))
									{
										GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
									}
									if (!func_134() || (func_134() && PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())))
									{
										if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
										{
											func_175("FM_CTUT_MOD", 0);
											MISC::SET_BIT(&iLocal_140, 3);
											func_136(&uLocal_141);
											func_7(&uLocal_141, 0, 0);
											if (!func_133(CAM::_0xDC9DA9E8789F5246()))
											{
												func_69(1);
											}
											if (iLocal_139 == 4294967295)
											{
												iLocal_139 = func_117(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), 4, 4294967295);
												if (iLocal_139 != 4294967295)
												{
													func_72(iLocal_139, 1);
													func_71(iLocal_139, 1);
												}
											}
										}
									}
									else if (func_134() && !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
									{
										if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
										{
											MISC::SET_BIT(&iLocal_140, 3);
										}
									}
								}
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 4))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
								{
									if (func_137(&uLocal_141, 10000, 0))
									{
										if (!HUD::IS_PAUSE_MENU_ACTIVE())
										{
											if (!func_116())
											{
												if (func_139())
												{
													MISC::SET_BIT(&iLocal_140, 4);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 10))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 9))
								{
									func_175("FM_IHELP_LCP", 0);
									if (iLocal_139 != 4294967295)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = 4294967295;
									}
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 2);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 7);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 8);
									MISC::SET_BIT(&iLocal_140, 10);
								}
							}
							if (func_145())
							{
								if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
										if ((!func_148(iVar0, 0, &uVar2) || !func_147(iVar0)) || func_146(ENTITY::GET_ENTITY_MODEL(iVar0)))
										{
											func_144(0);
										}
									}
									else
									{
										func_144(0);
									}
								}
							}
						}
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3) || (func_134() && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 10)))
					{
						if (func_134())
						{
							if (((func_135("FM_IHELP_CAR") || func_135("FM_IHELP_MOD")) || func_135("FM_CMOD_GPS")) || func_135("FM_CMOD_STOL"))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
							if (func_113("FM_IHELP_LCP"))
							{
								func_23();
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 9))
							{
								if (func_111())
								{
									MISC::SET_BIT(&iLocal_140, 9);
									MISC::SET_BIT(&(Global_26862F.f_6B6), 25);
									if (func_113("FM_CTUT_MOD"))
									{
										func_23();
									}
								}
							}
							if (func_110())
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B6, 25))
								{
									MISC::SET_BIT(&(Global_26862F.f_6B6), 25);
								}
								if (!func_109(CAM::_0xDC9DA9E8789F5246()))
								{
									if (!func_108(CAM::_0xDC9DA9E8789F5246()))
									{
										func_107(1);
										iLocal_147 = 1;
										func_30(1);
									}
								}
								if ((func_113("FM_CTUT_RSP") || func_113("FM_IHELP_PTRK")) || func_113("FM_IHELP_PINS"))
								{
									func_23();
								}
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 9))
							{
								if (func_106(CAM::_0xDC9DA9E8789F5246()) || (!func_104() && func_103()))
								{
									iVar3 = func_100(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0));
									if (iVar3 > 0)
									{
										if (!func_113("FM_CTUT_REP"))
										{
											func_175("FM_CTUT_REP", 0);
										}
									}
									else if (!func_98())
									{
										if (!func_113("FM_CTUT_RSP"))
										{
											func_175("FM_CTUT_RSP", 0);
										}
									}
									else if (!func_96())
									{
										if (!func_113("FM_IHELP_PTRK"))
										{
											func_175("FM_IHELP_PTRK", 0);
										}
									}
									else if (!func_93())
									{
										if (!func_113("FM_IHELP_PINS"))
										{
											func_175("FM_IHELP_PINS", 0);
										}
									}
								}
							}
						}
						else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 9))
						{
							if (!func_110())
							{
								if (CAM::IS_SCREEN_FADED_IN())
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 9);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 10);
									func_23();
									iLocal_139 = 4294967295;
									func_85(CAM::_0xDC9DA9E8789F5246(), 1, 0);
								}
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2, 0))
							{
								MISC::SET_BIT(&(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2), 0);
							}
						}
					}
					else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 9))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 9);
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 10);
						func_23();
						iLocal_139 = 4294967295;
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 5))
					{
						if (((func_82(CAM::_0xDC9DA9E8789F5246(), 1) || func_81()) || func_80() > 0) || (!func_78() && !func_134()))
						{
							MISC::SET_BIT(&iLocal_140, 5);
							func_23();
						}
					}
					else if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) || func_134())
					{
						if (CAM::IS_SCREEN_FADED_IN())
						{
							if ((((!func_82(CAM::_0xDC9DA9E8789F5246(), 1) && !func_81()) && func_80() == 0) && func_78()) || func_134())
							{
								if (!func_77(&uLocal_143))
								{
									func_7(&uLocal_143, 0, 0);
								}
								else if (func_137(&uLocal_143, 7000, 0) || func_134())
								{
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 5);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 2);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 3);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 7);
									GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_140, 10);
									func_136(&uLocal_143);
									if (iLocal_139 != 4294967295)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = 4294967295;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2, 1))
	{
		if (func_76())
		{
			func_8();
		}
		else
		{
			func_75();
		}
	}
}

void func_75()//Position - 0x2C2E
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) != 0)
	{
		return;
	}
	if (func_134())
	{
		return;
	}
	switch (iLocal_148)
	{
		case 0:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_138("FM_IHELP_CAR", 4294967295);
				iLocal_148++;
			}
			break;
		
		case 1:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_138("FM_IHELP_MOD", 4294967295);
					iLocal_148++;
				}
			}
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_77(&uLocal_149))
							{
								func_7(&uLocal_149, 0, 0);
							}
							else if (func_137(&uLocal_149, 1000, 0))
							{
								func_138("FM_CMOD_GPS", 4294967295);
								iLocal_148++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_137(&uLocal_149, 1000, 0))
					{
						func_138("FM_CMOD_STOL", 4294967295);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 4:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_137(&uLocal_149, 5000, 0))
					{
						func_138("FM_IHELP_BLP", 4294967295);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 5:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_148++;
				}
			}
			break;
	}
}

int func_76()//Position - 0x2DB7
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_138[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

bool func_77(var uParam0)//Position - 0x2DD6
{
	return uParam0->f_1;
}

int func_78()//Position - 0x2DE2
{
	if (func_79() == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()//Position - 0x2DF7
{
	return Global_1406D2.f_12;
}

int func_80()//Position - 0x2E05
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C5;
}

bool func_81()//Position - 0x2E1A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

int func_82(int iParam0, bool bParam1)//Position - 0x2E36
{
	if (bParam1)
	{
		if (func_83(iParam0))
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

bool func_83(int iParam0)//Position - 0x2E62
{
	return func_84(iParam0);
}

bool func_84(int iParam0)//Position - 0x2E70
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

void func_85(int iParam0, bool bParam1, int iParam2)//Position - 0x2E8A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_78())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			iVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_91(CAM::_0xDC9DA9E8789F5246(), 0) && !func_90()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_24FBF9[iParam0 /*413*/].f_F4 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_89(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(iVar25, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x86195BFC9E6E3412(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_0x7350823473013C02(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					func_88();
					func_87();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_24FBF9[iParam0 /*413*/].f_F5 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_24B2CE.f_A67)
				{
					Global_24B2CE.f_A67 = 0;
				}
			}
			else
			{
				if (!func_89(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(iVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
						}
					}
					if (func_86(Global_440000.f_2559E))
					{
						unk_0x346478B12F69D4E3(iVar25, true);
					}
				}
				if (Global_140842)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar25) && !PED::IS_PED_IN_ANY_VEHICLE(iVar25, 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_86(int iParam0)//Position - 0x32A3
{
	return iParam0 == 17;
}

void func_87()//Position - 0x32B0
{
	vector3 vVar0;
	
	Global_252F9E.f_4CC = 0;
	Global_252F9E.f_4CD = 0;
	Global_252F9E.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252F9E.f_4D3 = 4294967295;
	Global_252F9E.f_4D4 = 0;
	Global_24B2CE.f_A72 = { vVar0 };
}

void func_88()//Position - 0x32FD
{
	Global_24B2CE.f_2B3 = 0;
	Global_24B2CE.f_A9D = 0;
	Global_24B2CE.f_1FD = 0;
	Global_24B2CE.f_255 = 0;
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 0;
	Global_24B2CE.f_A70 = 0;
}

int func_89(int iParam0)//Position - 0x333B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 2500551826);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90()//Position - 0x336C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_91(int iParam0, int iParam1)//Position - 0x337D
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_92(4294967295, 0) == 8;
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

int func_92(int iParam0, bool bParam1)//Position - 0x33C8
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_14();
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

int func_93()//Position - 0x3409
{
	if (Global_16C64.f_577)
	{
		return 1;
	}
	if (func_94() >= 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_142958[func_94() /*141*/].f_66, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()//Position - 0x3440
{
	if (Global_200000[func_95() /*12745*/].f_1FF2.f_2 >= 261)
	{
		Global_200000[func_95() /*12745*/].f_1FF2.f_2 = 4294967295;
		return 4294967295;
	}
	return Global_200000[func_95() /*12745*/].f_1FF2.f_2;
}

int func_95()//Position - 0x3483
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_96()//Position - 0x3490
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_97(iVar0, 1) || Global_16C64.f_576)
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, bool bParam1)//Position - 0x34CB
{
	if (Global_11625)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_HASH_FROM_PLAYER_HANDLE(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_98()//Position - 0x351D
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_99(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_99(int iParam0)//Position - 0x354A
{
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_100(int iParam0)//Position - 0x355B
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x501FBD68F448BD5B(iParam0))
	{
		iVar8 += 50;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0xFB105E9EBBF3756D(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0xFB105E9EBBF3756D(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iParam0))
	{
		iVar10 += 20;
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 4))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xC805218EB7BC043F(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x75FEEDD856FE96B7(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (AUDIO::_0x5DB8010EE71FDEF2(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_102(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_2CAE));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_40001.f_2CAE)))
		{
			iVar4 = Global_40001.f_2CAC;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_40001.f_2CAD)
		{
			iVar0 = Global_40001.f_2CAD;
		}
	}
	else if (func_101(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_2CB1));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_40001.f_2CB1)))
		{
			iVar4 = Global_40001.f_2CAF;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_40001.f_2CB0)
		{
			iVar0 = Global_40001.f_2CB0;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_101(int iParam0)//Position - 0x38DB
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("TECHNICAL2"):
		case joaat("BOXVILLE5"):
		case joaat("WASTELANDER"):
		case joaat("PHANTOM2"):
		case joaat("VOLTIC2"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("RUINER2"):
		case joaat("BLAZER5"):
			return 1;
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)//Position - 0x392C
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return 1;
			break;
		
		case joaat("SABREGT2"):
			if (!Global_40001.f_370C)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("TORNADO5"):
			if (!Global_40001.f_370D)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("VIRGO2"):
			if (!Global_40001.f_370B)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("MINIVAN2"):
			if (!Global_40001.f_370E)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SLAMVAN3"):
			if (!Global_40001.f_3710)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("FACTION3"):
			if (!Global_40001.f_370F)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("COMET3"):
			if (Global_40001.f_486A)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("DIABLOUS2"):
			if (Global_40001.f_486C)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("FCR2"):
			if (Global_40001.f_4870)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ELEGY"):
			if (Global_40001.f_486D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("NERO2"):
			if (Global_40001.f_4874)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ITALIGTB2"):
			if (Global_40001.f_4872)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("SPECTER2"):
			if (Global_40001.f_4877)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("TECHNICAL3"):
			if (Global_40001.f_500D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("INSURGENT3"):
			if (Global_40001.f_500E)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

bool func_103()//Position - 0x3CA2
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_104()//Position - 0x3CB7
{
	if (((((func_105(39) || func_105(40)) || func_105(41)) || func_105(42)) || func_105(43)) || func_105(44))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)//Position - 0x3D09
{
	return func_22(iParam0, 20, 1);
}

bool func_106(int iParam0)//Position - 0x3D1A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_92, 19);
}

void func_107(bool bParam0)//Position - 0x3D3F
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92), 20);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92), 20);
	}
}

bool func_108(int iParam0)//Position - 0x3D75
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_92, 20);
}

bool func_109(int iParam0)//Position - 0x3D9A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_92, 21);
}

int func_110()//Position - 0x3DBF
{
	if (!func_96())
	{
		return 0;
	}
	if (!func_93())
	{
		return 0;
	}
	if (!func_98())
	{
		return 0;
	}
	return 1;
}

int func_111()//Position - 0x3DEC
{
	if (((((func_112(39) || func_112(40)) || func_112(41)) || func_112(42)) || func_112(43)) || func_112(44))
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x3E3E
{
	return func_22(iParam0, 6, 1);
}

int func_113(char* sParam0)//Position - 0x3E4E
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_29())
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
	return func_114(sParam0);
}

bool func_114(char* sParam0)//Position - 0x3E9F
{
	if (!func_29())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_115(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_115(char* sParam0)//Position - 0x3EE3
{
	if (!func_29())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

bool func_116()//Position - 0x3F15
{
	return Global_140859;
}

int func_117(vector3 vParam0, int iParam1, int iParam2)//Position - 0x3F21
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (iParam1 == 6 || iParam1 == func_21(iVar0))
		{
			iVar4 = iVar0;
			if (func_132(iVar4))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_118(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 4294967295))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_118(int iParam0, bool bParam1)//Position - 0x3FA2
{
	switch (iParam0)
	{
		case 4294967295:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_129(Global_17447);
			break;
		
		case 46:
			if (Global_184157 != func_128())
			{
				if (func_127(Global_184157))
				{
					return func_120(2, 2);
				}
				else if (func_119(Global_184157))
				{
					return func_120(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_119(int iParam0)//Position - 0x45CE
{
	if (iParam0 != func_128())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_120(int iParam0, int iParam1)//Position - 0x462C
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184157 != func_128())
	{
		if (iParam1 == 3)
		{
			if (func_121(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[Global_184157 /*790*/].f_111.f_FA, 4))
			{
				if (func_121(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[Global_184157 /*790*/].f_111.f_FA, 5))
			{
				if (func_121(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_121(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x46DA
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_126(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_126(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_124(iParam0) };
	}
	else
	{
		Var2 = { func_123(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_122(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_122(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_122(vector3 vParam0, float fParam1)//Position - 0x476F
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_123(int iParam0)//Position - 0x47B3
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_124(int iParam0)//Position - 0x4937
{
	return func_125(iParam0);
}

struct<6> func_125(int iParam0)//Position - 0x4945
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_126(int iParam0, var uParam1)//Position - 0x540C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x548E
{
	if (iParam0 != func_128())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_128()//Position - 0x54EC
{
	return 4294967295;
}

Vector3 func_129(int iParam0)//Position - 0x54F5
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_130() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_130()//Position - 0x5700
{
	return func_131(CAM::_0xDC9DA9E8789F5246());
}

var func_131(int iParam0)//Position - 0x5710
{
	return MISC::GET_BITS_IN_RANGE(Global_24FBF9[iParam0 /*413*/].f_135.f_3, 28, 31);
}

bool func_132(int iParam0)//Position - 0x572D
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_16C64.f_DF[39]);
			break;
		
		case 40:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_16C64.f_DF[40]);
			break;
		
		case 41:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_16C64.f_DF[41]);
			break;
		
		case 42:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_16C64.f_DF[42]);
			break;
		
		case 43:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_16C64.f_DF[43]);
			break;
		
		case 44:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_16C64.f_DF[44]);
			break;
	}
	return bVar0;
}

bool func_133(int iParam0)//Position - 0x57D4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_92, 18);
}

int func_134()//Position - 0x57F9
{
	if (((((func_20(39) || func_20(40)) || func_20(41)) || func_20(42)) || func_20(43)) || func_20(44))
	{
		return 1;
	}
	return 0;
}

bool func_135(char* sParam0)//Position - 0x584B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_136(var uParam0)//Position - 0x585E
{
	uParam0->f_1 = 0;
}

int func_137(var uParam0, int iParam1, bool bParam2)//Position - 0x586B
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_138(char* sParam0, int iParam1)//Position - 0x58C9
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_139()//Position - 0x58E0
{
	if (((((((((((((!func_4(CAM::_0xDC9DA9E8789F5246(), 1, 1) || PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || func_143(8, 4294967295)) || func_143(15, 4294967295)) || func_142()) || func_143(3, 4294967295)) || HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) || func_82(CAM::_0xDC9DA9E8789F5246(), 1)) || func_81()) || func_103()) || func_141()) || func_140()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	return 1;
}

var func_140()//Position - 0x5993
{
	return Global_252F9E.f_BD4.f_242;
}

bool func_141()//Position - 0x59A5
{
	return Global_16C64.f_148 > 0;
}

var func_142()//Position - 0x59B6
{
	return Global_248AB9;
}

bool func_143(int iParam0, int iParam1)//Position - 0x59C2
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

void func_144(bool bParam0)//Position - 0x59FD
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_26862F.f_6B9), 4);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6B9), 4);
	}
}

bool func_145()//Position - 0x5A25
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B9, 4);
}

int func_146(int iParam0)//Position - 0x5A39
{
	switch (iParam0)
	{
		case joaat("ADDER"):
		case joaat("BULLET"):
		case joaat("CARBONIZZARE"):
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("COQUETTE"):
		case joaat("ENTITYXF"):
		case joaat("EXEMPLAR"):
		case joaat("FELTZER2"):
		case joaat("INFERNUS"):
		case joaat("JB700"):
		case joaat("MONROE"):
		case joaat("NINEF"):
		case joaat("NINEF2"):
		case joaat("RAPIDGT2"):
		case joaat("RAPIDGT"):
		case joaat("STINGER"):
		case joaat("STINGERGT"):
		case joaat("SUPERD"):
		case joaat("VACCA"):
		case joaat("ZTYPE"):
		case joaat("AKUMA"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("DOUBLE"):
		case joaat("HEXER"):
		case joaat("ELEGY2"):
		case joaat("KHAMELION"):
		case joaat("HOTKNIFE"):
		case joaat("CARBONRS"):
		case joaat("VOLTIC"):
		case joaat("COMET2"):
		case joaat("SURANO"):
		case joaat("BANSHEE"):
		case joaat("BLAZER3"):
		case joaat("JESTER"):
		case joaat("MASSACRO"):
		case joaat("TURISMOR"):
		case joaat("ZENTORNO"):
		case joaat("HUNTLEY"):
		case joaat("ALPHA"):
		case joaat("PARADISE"):
		case joaat("BIFTA"):
		case joaat("KALAHARI"):
		case joaat("BTYPE"):
		case joaat("THRUST"):
		case joaat("DUBSTA3"):
		case joaat("BLADE"):
		case joaat("GLENDALE"):
		case joaat("RHAPSODY"):
		case joaat("WARRENER"):
		case joaat("PANTO"):
		case joaat("PIGALLE"):
		case joaat("COQUETTE2"):
		case joaat("MONSTER"):
		case joaat("SOVEREIGN"):
		case joaat("INNOVATION"):
		case joaat("HAKUCHOU"):
		case joaat("FUROREGT"):
		case joaat("BOXVILLE4"):
		case joaat("CASCO"):
		case joaat("DINGHY3"):
		case joaat("ENDURO"):
		case joaat("GBURRITO2"):
		case joaat("GUARDIAN"):
		case joaat("HYDRA"):
		case joaat("INSURGENT"):
		case joaat("INSURGENT2"):
		case joaat("KURUMA"):
		case joaat("KURUMA2"):
		case joaat("LECTRO"):
		case joaat("MULE3"):
		case joaat("SAVAGE"):
		case joaat("TECHNICAL"):
		case joaat("VALKYRIE"):
		case joaat("VELUM2"):
		case joaat("BLISTA2"):
		case joaat("DODO"):
		case joaat("DUKES"):
		case joaat("MARSHALL"):
		case joaat("STALION"):
		case joaat("SUBMERSIBLE2"):
		case joaat("BLISTA3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("BUFFALO3"):
		case joaat("DOMINATOR2"):
		case joaat("DUKES2"):
		case joaat("GAUNTLET2"):
		case joaat("STALION2"):
		case joaat("BLIMP2"):
		case joaat("JESTER2"):
		case joaat("MASSACRO2"):
		case joaat("RATLOADER2"):
		case joaat("SLAMVAN"):
		case joaat("BARRACKS3"):
		case joaat("SLAMVAN2"):
		case joaat("BRAWLER"):
		case joaat("CHINO"):
		case joaat("COQUETTE3"):
		case joaat("FELTZER3"):
		case joaat("LUXOR2"):
		case joaat("OSIRIS"):
		case joaat("SWIFT2"):
		case joaat("T20"):
		case joaat("TORO"):
		case joaat("VINDICATOR"):
		case joaat("VIRGO"):
		case joaat("WINDSOR"):
		case joaat("FACTION"):
		case joaat("MOONBEAM"):
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
		case joaat("BTYPE2"):
		case joaat("LURCHER"):
		case joaat("FACTION3"):
		case joaat("MINIVAN2"):
		case joaat("SABREGT2"):
		case joaat("SLAMVAN3"):
		case joaat("TORNADO5"):
		case joaat("VIRGO2"):
		case joaat("VIRGO3"):
		case joaat("BALLER3"):
		case joaat("BALLER4"):
		case joaat("BALLER5"):
		case joaat("BALLER6"):
		case joaat("COG55"):
		case joaat("COG552"):
		case joaat("COGNOSCENTI"):
		case joaat("COGNOSCENTI2"):
		case joaat("MAMBA"):
		case joaat("NIGHTSHADE"):
		case joaat("SCHAFTER3"):
		case joaat("SCHAFTER5"):
		case joaat("SCHAFTER4"):
		case joaat("SCHAFTER6"):
		case joaat("VERLIERER2"):
		case joaat("TAMPA"):
		case joaat("BANSHEE2"):
		case joaat("SULTANRS"):
		case joaat("BTYPE3"):
		case joaat("BESTIAGTS"):
		case joaat("BRICKADE"):
		case joaat("FMJ"):
		case joaat("NIMBUS"):
		case joaat("PFISTER811"):
		case joaat("PROTOTIPO"):
		case joaat("RUMPO3"):
		case joaat("SEVEN70"):
		case joaat("TUG"):
		case joaat("VOLATUS"):
		case joaat("WINDSOR2"):
		case joaat("XLS"):
		case joaat("XLS2"):
		case joaat("REAPER"):
		case joaat("LE7B"):
		case joaat("OMNIS"):
		case joaat("TROPOS"):
		case joaat("BRIOSO"):
		case joaat("TROPHYTRUCK"):
		case joaat("TROPHYTRUCK2"):
		case joaat("CONTENDER"):
		case joaat("CLIFFHANGER"):
		case joaat("BF400"):
		case joaat("TYRUS"):
		case joaat("SHEAVA"):
		case joaat("RALLYTRUCK"):
		case joaat("TAMPA2"):
		case joaat("GARGOYLE"):
		case joaat("LYNX"):
		case joaat("AVARUS"):
		case joaat("BLAZER4"):
		case joaat("CHIMERA"):
		case joaat("DAEMON2"):
		case joaat("DEFILER"):
		case joaat("ESSKEY"):
		case joaat("FAGGIO3"):
		case joaat("FAGGIO"):
		case joaat("HAKUCHOU2"):
		case joaat("MANCHEZ"):
		case joaat("NIGHTBLADE"):
		case joaat("RAPTOR"):
		case joaat("RATBIKE"):
		case joaat("SANCTUS"):
		case joaat("SHOTARO"):
		case joaat("TORNADO6"):
		case joaat("VORTEX"):
		case joaat("WOLFSBANE"):
		case joaat("YOUGA2"):
		case joaat("ZOMBIEA"):
		case joaat("ZOMBIEB"):
		case joaat("COMET2"):
		case joaat("COMET3"):
		case joaat("DIABLOUS"):
		case joaat("DIABLOUS2"):
		case joaat("ELEGY2"):
		case joaat("ELEGY"):
		case joaat("FCR"):
		case joaat("FCR2"):
		case joaat("ITALIGTB"):
		case joaat("ITALIGTB2"):
		case joaat("NERO"):
		case joaat("NERO2"):
		case joaat("PENETRATOR"):
		case joaat("SPECTER"):
		case joaat("SPECTER2"):
		case joaat("TEMPESTA"):
		case joaat("BLAZER5"):
		case joaat("BOXVILLE5"):
		case joaat("DUNE4"):
		case joaat("DUNE5"):
		case joaat("PHANTOM2"):
		case joaat("RUINER2"):
		case joaat("RUINER3"):
		case joaat("TECHNICAL2"):
		case joaat("VOLTIC2"):
		case joaat("WASTELANDER"):
		case joaat("GP1"):
		case joaat("INFERNUS2"):
		case joaat("RUSTON"):
		case joaat("TURISMO2"):
		case joaat("ARDENT"):
		case joaat("VAGNER"):
		case joaat("CHEETAH2"):
		case joaat("NIGHTSHARK"):
		case joaat("TORERO"):
		case joaat("XA21"):
		case joaat("APC"):
		case joaat("HALFTRACK"):
		case joaat("DUNE3"):
		case joaat("TRAILERSMALL2"):
		case joaat("INSURGENT3"):
		case joaat("TECHNICAL3"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("CYCLONE"):
		case joaat("RAPIDGT3"):
		case joaat("RETINUE"):
		case joaat("VISIONE"):
		case joaat("VIGILANTE"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DELUXO"):
		case joaat("STROMBERG"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
		case joaat("AKULA"):
		case joaat("THRUSTER"):
		case joaat("BARRAGE"):
		case joaat("VOLATOL"):
		case joaat("COMET4"):
		case 2445973230:
		case 1741861769:
		case joaat("SENTINEL3"):
		case joaat("YOSEMITE"):
		case joaat("SC1"):
		case joaat("AUTARCH"):
		case joaat("GT500"):
		case joaat("HUSTLER"):
		case joaat("REVOLTER"):
		case joaat("PARIAH"):
		case joaat("RAIDEN"):
		case joaat("SAVESTRA"):
		case joaat("RIATA"):
		case joaat("HERMES"):
		case joaat("COMET5"):
		case joaat("Z190"):
		case joaat("VISERIS"):
		case joaat("KAMACHO"):
		case joaat("GB200"):
		case joaat("FAGALOA"):
		case joaat("ELLIE"):
		case joaat("ISSI3"):
		case joaat("MICHELLI"):
		case joaat("FLASHGT"):
		case joaat("HOTRING"):
		case joaat("TEZERACT"):
		case joaat("TYRANT"):
		case joaat("DOMINATOR3"):
		case joaat("TAIPAN"):
		case joaat("ENTITY2"):
		case joaat("JESTER3"):
		case joaat("CHEBUREK"):
		case joaat("CARACARA"):
		case joaat("SEASPARROW"):
		case joaat("MULE4"):
		case joaat("POUNDER2"):
		case joaat("SPEEDO4"):
		case joaat("OPPRESSOR2"):
		case joaat("SCRAMJET"):
		case joaat("FREECRAWLER"):
		case joaat("MENACER"):
		case joaat("PATRIOT2"):
		case joaat("STAFFORD"):
		case joaat("SWINGER"):
		case joaat("TERBYTE"):
		case joaat("STRIKEFORCE"):
		case joaat("PBUS2"):
		case joaat("BLIMP3"):
		case joaat("CLIQUE"):
		case joaat("DEVESTE"):
		case joaat("DEVIANT"):
		case joaat("IMPALER"):
		case joaat("SCARAB"):
		case joaat("SCHLAGEN"):
		case joaat("TOROS"):
		case joaat("VAMOS"):
		case joaat("TULIP"):
		case joaat("MONSTER3"):
		case joaat("IMPALER2"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("ITALIGTO"):
		case joaat("DEATHBIKE"):
		case joaat("SLAMVAN4"):
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
		case joaat("RCBANDITO"):
		case joaat("ZR380"):
			return 1;
			break;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x6288
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (iVar0 == AUDIO::_0x0626A247D2405330())
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, bool bParam1, var uParam2)//Position - 0x62B2
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_173(iVar0, bParam1, uParam2) && !func_172(CAM::_0xDC9DA9E8789F5246())) && !func_157(iParam0))
	{
		return 0;
	}
	if (func_172(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_156(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_155(CAM::_0xDC9DA9E8789F5246()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_153(iParam0)) && !bVar1) && !(func_152(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_150(CAM::_0xDC9DA9E8789F5246())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("CERBERUS"):
			case joaat("CERBERUS2"):
			case joaat("CERBERUS3"):
			case joaat("MONSTER3"):
			case joaat("MONSTER4"):
			case joaat("MONSTER5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_149(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("SENTINEL2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_149(int iParam0)//Position - 0x6420
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

int func_150(int iParam0)//Position - 0x645B
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_151(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_151(int iParam0)//Position - 0x64A2
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

int func_152(int iParam0)//Position - 0x67FC
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)//Position - 0x683E
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HALFTRACK"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("BRUISER"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			return 1;
			break;
		
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (func_154(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x68D1
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_151(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x6918
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_151(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x695E
{
	switch (iParam0)
	{
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
			return 1;
			break;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x6993
{
	if (func_171(CAM::_0xDC9DA9E8789F5246()) || func_170(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_158(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x69C2
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_161(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_HASH_FROM_PLAYER_HANDLE(CAM::_0xDC9DA9E8789F5246()))
		{
			if (func_159(iParam0))
			{
				return 1;
			}
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("ARDENT"):
				case joaat("NIGHTSHARK"):
				case joaat("DELUXO"):
				case joaat("STROMBERG"):
				case joaat("COMET4"):
				case joaat("REVOLTER"):
				case joaat("SAVESTRA"):
				case joaat("VISERIS"):
				case joaat("CARACARA"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_159(int iParam0)//Position - 0x6A77
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (func_160(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x6AAD
{
	switch (iParam0)
	{
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("HALFTRACK"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("VIGILANTE"):
		case joaat("BARRAGE"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
			return 1;
			break;
	}
	return 0;
}

int func_161(int iParam0, bool bParam1)//Position - 0x6B06
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_163(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_26862F.f_122 == iParam0)
				{
					return 1;
				}
				else if (func_162(iParam0) != 4294967295 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x6B61
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_252F9E.f_26F[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_163(int iParam0, int iParam1)//Position - 0x6B9B
{
	if (iParam1 == 0)
	{
		if (func_102(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_169();
			break;
		
		case joaat("SABREGT"):
			if (Global_40001.f_370C)
			{
				return func_168();
			}
			break;
		
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_40001.f_370D)
			{
				return func_168();
			}
			break;
		
		case joaat("VIRGO3"):
			if (Global_40001.f_370B)
			{
				return func_168();
			}
			break;
		
		case joaat("MINIVAN"):
			if (Global_40001.f_370E)
			{
				return func_168();
			}
			break;
		
		case joaat("SLAMVAN"):
			if (Global_40001.f_3710)
			{
				return func_168();
			}
			break;
		
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_167();
			break;
		
		case joaat("COMET2"):
			if (Global_40001.f_486A)
			{
				return func_166();
			}
			break;
		
		case joaat("DIABLOUS"):
			if (Global_40001.f_486C)
			{
				return func_166();
			}
			break;
		
		case joaat("FCR"):
			if (Global_40001.f_4870)
			{
				return func_166();
			}
			break;
		
		case joaat("ELEGY2"):
			if (Global_40001.f_486D)
			{
				return func_166();
			}
			break;
		
		case joaat("NERO"):
			if (Global_40001.f_4874)
			{
				return func_166();
			}
			break;
		
		case joaat("ITALIGTB"):
			if (Global_40001.f_4872)
			{
				return func_166();
			}
			break;
		
		case joaat("SPECTER"):
			if (Global_40001.f_4877)
			{
				return func_166();
			}
			break;
		
		case joaat("TECHNICAL"):
			if (Global_40001.f_500D)
			{
				return func_165();
			}
			break;
		
		case joaat("INSURGENT"):
			if (Global_40001.f_500E)
			{
				return func_165();
			}
			break;
		
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_164();
			break;
		
		case joaat("GLENDALE"):
			return func_164();
			break;
		
		case joaat("IMPALER"):
			return func_164();
			break;
		
		case joaat("ISSI3"):
			return func_164();
			break;
		
		case joaat("GARGOYLE"):
			return func_164();
			break;
		
		case joaat("DOMINATOR"):
			return func_164();
			break;
		
		case joaat("DOMINATOR2"):
			return func_164();
			break;
		
		case joaat("IMPERATOR"):
			return func_164();
			break;
		
		case joaat("IMPERATOR2"):
			return func_164();
			break;
		
		case joaat("IMPERATOR3"):
			return func_164();
			break;
		
		case joaat("DEATHBIKE"):
			return func_164();
			break;
		
		case joaat("DEATHBIKE2"):
			return func_164();
			break;
		
		case joaat("DEATHBIKE3"):
			return func_164();
			break;
		
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_164();
			break;
	}
	return 0;
}

bool func_164()//Position - 0x6F0F
{
	return DLC::IS_DLC_PRESENT(1927191088);
}

bool func_165()//Position - 0x6F20
{
	return DLC::IS_DLC_PRESENT(2067165443);
}

bool func_166()//Position - 0x6F31
{
	return DLC::IS_DLC_PRESENT(3337689893);
}

bool func_167()//Position - 0x6F42
{
	return DLC::IS_DLC_PRESENT(210122941);
}

bool func_168()//Position - 0x6F53
{
	return DLC::IS_DLC_PRESENT(2400444888);
}

bool func_169()//Position - 0x6F64
{
	return DLC::IS_DLC_PRESENT(1630677557);
}

int func_170(int iParam0)//Position - 0x6F75
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_128())
			{
				return func_151(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x6FD4
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_128())
			{
				return func_151(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x7034
{
	if (iParam0 != func_128())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_151(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_173(int iParam0, bool bParam1, var uParam2)//Position - 0x707B
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("POLICE") || iParam0 == joaat("POLICEOLD1")) || iParam0 == joaat("POLICEOLD2")) || iParam0 == joaat("POLICE2")) || iParam0 == joaat("POLICE3")) || iParam0 == joaat("POLICE4")) || iParam0 == joaat("FBI")) || iParam0 == joaat("FBI2")) || iParam0 == joaat("POLMAV")) || iParam0 == joaat("POLICEB")) || iParam0 == joaat("POLICET")) || iParam0 == joaat("RIOT")) || iParam0 == joaat("SHERIFF")) || iParam0 == joaat("PRANGER")) || iParam0 == joaat("SHERIFF2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("AMBULANCE") || iParam0 == joaat("FIRETRUK")) || iParam0 == joaat("TAXI")) || iParam0 == joaat("LGUARD")) || iParam0 == joaat("RIPLEY")) || iParam0 == joaat("DILETTANTE2")) || iParam0 == joaat("AIRBUS")) || iParam0 == joaat("AIRTUG"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("BURRITO") || iParam0 == joaat("RUMPO2")) || iParam0 == joaat("SPEEDO")) || iParam0 == joaat("SPEEDO2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("SCORCHER") || iParam0 == joaat("BMX")) || iParam0 == joaat("CRUISER")) || iParam0 == joaat("FIXTER"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("CADDY") || iParam0 == joaat("FORKLIFT")) || iParam0 == joaat("CADDY2")) || iParam0 == joaat("CRUSADER")) || iParam0 == joaat("TRIBIKE")) || iParam0 == joaat("TRIBIKE2")) || iParam0 == joaat("TRIBIKE3")) || iParam0 == joaat("TRACTOR")) || iParam0 == joaat("TRACTOR2")) || iParam0 == joaat("MOWER")) || iParam0 == joaat("TORNADO4")) || iParam0 == joaat("DOCKTUG")) || iParam0 == joaat("STRETCH")) || iParam0 == joaat("BISON2")) || iParam0 == joaat("BISON3")) || iParam0 == joaat("BENSON")) || iParam0 == joaat("POUNDER")) || iParam0 == joaat("SUBMERSIBLE")) || iParam0 == joaat("EMPEROR3")) || iParam0 == joaat("DUNE2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_155(CAM::_0xDC9DA9E8789F5246()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("BLAZER")) && iParam0 != joaat("BLAZER3")) && iParam0 != joaat("BLAZER4")) && iParam0 != joaat("BLAZER5")) && iParam0 != joaat("CHIMERA")) && iParam0 != joaat("TRAILERLARGE")) && iParam0 != joaat("TRAILERSMALL2")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("MONSTER"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("INSURGENT") || iParam0 == joaat("TECHNICAL")) || iParam0 == joaat("LIMO2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_174(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("INSURGENT") || iParam0 == joaat("INSURGENT2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_174(int iParam0)//Position - 0x7493
{
	switch (iParam0)
	{
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("FORKLIFT"):
			return 1;
			break;
	}
	return 0;
}

void func_175(char* sParam0, bool bParam1)//Position - 0x74BC
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_114(sParam0))
	{
		return;
	}
	func_24();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_178();
	func_177(bParam1);
	func_176();
}

void func_176()//Position - 0x7527
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_177(bool bParam0)//Position - 0x753A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_178()//Position - 0x7560
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

int func_179(bool bParam0)//Position - 0x7585
{
	int iVar0;
	
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_6B3, 26))
		{
			iVar0 = func_15(1191, 4294967295, 0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_37(122, 4294967295);
}

int func_180()//Position - 0x75E6
{
	return vLocal_61.x;
}

int func_181(int iParam0)//Position - 0x75F0
{
	return vLocal_138[iParam0 /*3*/];
}

void func_182()//Position - 0x75FE
{
	func_23();
	func_70(10, 0);
	if (func_55())
	{
		func_184();
	}
	if (iLocal_139 != 4294967295)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
	}
	if (!func_179(0))
	{
		if (func_108(CAM::_0xDC9DA9E8789F5246()) || iLocal_147)
		{
			func_31(122, 1, 4294967295, 1);
		}
	}
	func_69(0);
	func_183();
}

void func_183()//Position - 0x7664
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_184()//Position - 0x7670
{
	if (!func_191(1, 4294967295))
	{
		func_189(1, 4294967295);
	}
	if (func_116() && func_17() == 0)
	{
	}
	else
	{
		unk_0xAB45F8F9A6832E2B(0);
	}
	if (func_188(1))
	{
		NETWORK::_NETWORK_BLOCK_INVITES_2(1);
	}
	else
	{
		NETWORK::_NETWORK_BLOCK_INVITES_2(0);
	}
	Global_255C02.f_278 = 0;
	if (func_185())
	{
		if (!func_37(133, 4294967295))
		{
			func_31(133, 1, 4294967295, 1);
		}
	}
}

int func_185()//Position - 0x76DA
{
	if (func_187() && func_186(0))
	{
		return 1;
	}
	return 0;
}

var func_186(int iParam0)//Position - 0x76F8
{
	return Global_140675[iParam0];
}

var func_187()//Position - 0x7708
{
	return func_186(func_14() + 1);
}

bool func_188(int iParam0)//Position - 0x771A
{
	return Global_193FA3.f_10[iParam0 /*44*/].f_3;
}

void func_189(int iParam0, int iParam1)//Position - 0x772E
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_14();
	}
	Global_150A02 = 0;
	if (MISC::_0x5AA3BEFA29F03AD4() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			iVar1 = func_190(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = func_190(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			func_31(121, 0, iParam1, 1);
			func_31(122, 0, iParam1, 1);
			func_31(125, 0, iParam1, 1);
			func_12(1303, 0, iParam1, 1, 0);
			func_12(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_190(int iParam0)//Position - 0x7819
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_14();
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

bool func_191(int iParam0, int iParam1)//Position - 0x787C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_14();
	}
	iVar0 = func_190(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, iParam0);
}

int func_192()//Position - 0x78A8
{
	var uVar0;
	
	func_198(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_197())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_196())
	{
		return 1;
	}
	if (func_195(157))
	{
		if (!func_194())
		{
			return 1;
		}
	}
	if (func_195(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_193() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_193()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_193()//Position - 0x7932
{
	switch (func_17())
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

bool func_194()//Position - 0x7966
{
	return Global_255C02.f_24B;
}

int func_195(int iParam0)//Position - 0x7975
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_196()//Position - 0x798C
{
	return Global_25824F;
}

bool func_197()//Position - 0x7998
{
	return Global_255C02.f_246;
}

void func_198(var uParam0)//Position - 0x79A7
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
					func_199(iVar0);
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

void func_199(int iParam0)//Position - 0x7A1A
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_4(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_200(iVar2, &bVar3))
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

int func_200(int iParam0, var uParam1)//Position - 0x7A9B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
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

void func_201()//Position - 0x7AFA
{
	SYSTEM::WAIT(0);
}

void func_202(struct<21> Param0)//Position - 0x7B07
{
	func_208(func_209(Param0), Param0);
	func_206(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&vLocal_61, 78);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_138, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_205())
	{
		func_182();
	}
	func_70(10, 1);
	func_203();
}

void func_203()//Position - 0x7B52
{
	unk_0xAB45F8F9A6832E2B(1);
	func_204(1, 4294967295);
	NETWORK::_NETWORK_BLOCK_INVITES_2(1);
	if (func_37(133, 4294967295))
	{
		func_31(133, 0, 4294967295, 1);
	}
	Global_255C02.f_278 = 1;
}

void func_204(int iParam0, int iParam1)//Position - 0x7B85
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_14();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			break;
		
		default:
			iVar1 = func_190(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			break;
	}
}

int func_205()//Position - 0x7C19
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
		if (func_197())
		{
			return 0;
		}
		if (func_195(155))
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

int func_206(int iParam0, int iParam1, bool bParam2)//Position - 0x7C72
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_183();
			}
			else
			{
				return 0;
			}
		}
		if (!func_207())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_183();
					}
					else
					{
						return 0;
					}
				}
				if (func_197())
				{
					if (!bParam2)
					{
						func_183();
					}
					else
					{
						return 0;
					}
				}
				if (func_195(155))
				{
					if (!bParam2)
					{
						func_183();
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
					func_183();
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
				func_183();
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
			func_183();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_207()//Position - 0x7D87
{
	return Global_140842;
}

void func_208(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7D93
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_183();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_209(int iParam0)//Position - 0x7DB2
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

