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
	struct<19> Local_103 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_104 = 0;
	struct<4> Local_105[32];
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_265(CAM::_0xDC9DA9E8789F5246(), 0, 1))
	{
		func_257(ScriptParam_114);
	}
	else
	{
		func_254();
	}
	while (true)
	{
		func_253();
		if (func_243() || func_239(16))
		{
			func_254();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_254();
		}
		switch (func_238(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_237() == 1)
				{
					func_236();
					Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/] = 1;
				}
				else if (func_237() == 4)
				{
					Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_237() == 1)
				{
					func_122();
				}
				else if (func_237() == 4)
				{
					func_14();
					Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_103.f_12));
				if (func_12(&(Local_103.f_12)))
				{
					Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/] = 4;
			
			case 4:
				func_254();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_237())
			{
				case 0:
					Local_103 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_103 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1C5
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1D9
{
	if (Local_103.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x1EE
{
	struct<14> Var0;
	
	switch (Local_103.f_7)
	{
		case 0:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 0))
			{
				Local_103.f_7 = 1;
			}
			else if (func_9(&(Local_103.f_8), 480000, 0))
			{
				Var0.f_2 = 2924886668;
				func_7(Var0, func_8(1));
				MISC::SET_BIT(&(Local_103.f_1), 1);
				Local_103.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()//Position - 0x267
{
	if (!func_9(&(Local_103.f_A), Local_103.f_C, 0))
	{
		if (func_9(&(Local_103.f_D), Local_103.f_F, 0))
		{
			Local_103.f_11++;
			Local_103.f_10 = func_6();
			func_5(&(Local_103.f_D));
		}
	}
	else
	{
		Local_103.f_7 = 2;
	}
}

void func_5(var uParam0)//Position - 0x2B2
{
	uParam0->f_1 = 0;
}

int func_6()//Position - 0x2BF
{
	switch (Local_103.f_11)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_103.f_10;
}

void func_7(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x320
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_8(int iParam0)//Position - 0x34D
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_265(iVar2, 0, 0))
			{
				if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x3AA
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x408
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

void func_11()//Position - 0x44D
{
	int iVar0;
	
	if (Local_103 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_112)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_112));
			if (func_265(iVar0, 1, 1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105[iLocal_112 /*4*/].f_1, 0))
					{
						iLocal_113 = 1;
						MISC::SET_BIT(&(Local_103.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_112++;
	if (iLocal_112 == NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (iLocal_113 == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_103.f_1), 0);
			}
		}
		else
		{
			iLocal_113 = 0;
		}
		iLocal_112 = 0;
	}
}

int func_12(var uParam0)//Position - 0x4E5
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

void func_13(var uParam0)//Position - 0x50E
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()//Position - 0x52D
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 1))
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) >= (Local_103.f_10 - 1)) && Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_2 < 10)
		{
			Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_2++;
		}
		if (Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_2 * Global_40001.f_1F34);
			Global_258AE3 = iVar0;
			func_100(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_97(iVar0, 1, 1, 0);
				if (func_96())
				{
					func_84(2251272238, iVar0, &uVar2, 0, 0, 0);
				}
				else
				{
					NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_83())
			{
				func_70(12, "DSC_PASS0", 0, 0, 4294967197);
			}
			else
			{
				func_70(12, "DSC_PASS1", 0, 0, 4294967197);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, 4294967295, 3212836864, 2);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 4))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 5))
				{
					func_15(66, 1, 4294967295);
				}
			}
		}
		MISC::SET_BIT(&iLocal_106, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x64F
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)//Position - 0x676
{
	int iVar0;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_18(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)//Position - 0x69A
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x6C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x6FA
{
	return Global_1407E0;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x706
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
	func_69(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_48 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)//Position - 0x777
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_35(uParam0, uParam0->f_11);
	func_32(uParam0);
	if (func_31())
	{
		func_32(uParam0);
	}
	if (func_30(uParam0->f_1))
	{
		func_23();
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
				func_23();
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
				if (func_22(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
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

int func_22(int iParam0)//Position - 0x948
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

void func_23()//Position - 0x9C8
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
	func_24();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_24()//Position - 0x9FB
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_28(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_25(&(Global_252F9E.f_BD4.f_1));
}

void func_25(var uParam0)//Position - 0xA3C
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
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_234 = 0;
	}
	if (!Global_11731)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_11732)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_27(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_26(0);
}

void func_26(int iParam0)//Position - 0xAE2
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_27(bool bParam0)//Position - 0xAF6
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_28(var uParam0)//Position - 0xB21
{
	func_29(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_29(var uParam0)//Position - 0xB4B
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

int func_30(int iParam0)//Position - 0xBCA
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_31()//Position - 0xCCC
{
	return Global_255C02.f_10;
}

void func_32(var uParam0)//Position - 0xCDA
{
	if (func_34(uParam0->f_1))
	{
		uParam0->f_48 = func_33();
	}
}

int func_33()//Position - 0xCF5
{
	return 21;
}

int func_34(int iParam0)//Position - 0xCFF
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

void func_35(var uParam0, int iParam1)//Position - 0xD91
{
	if (func_34(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_68() || !func_265(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_36(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_36(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xDE8
{
	int iVar0;
	int iVar1;
	
	if (func_64(iParam0) && !bParam4)
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
	if (((func_64(CAM::_0xDC9DA9E8789F5246()) || (func_63() && func_62())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_61();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_265(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_59(iParam1, iParam0, 0);
							}
							else
							{
								return func_47(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_47(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_59(iParam1, iParam0, 0);
				}
				else
				{
					return func_37(0, 4294967295, 0);
				}
			}
			else
			{
				return func_37(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_59(iParam1, iParam0, 0);
		}
		else
		{
			return func_47(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_47(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_37(bool bParam0, int iParam1, bool bParam2)//Position - 0xFC8
{
	return func_38(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_38(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xFDE
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_45() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_44(iParam2, iVar0);
		}
		else
		{
			return func_44(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_43(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_42(1);
				}
				else
				{
					return func_42(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_39(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_39(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_42(1);
	}
	return func_42(0);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x10D2
{
	int iVar0;
	
	iVar0 = func_41(iParam0, iParam1, iParam3);
	if (func_40(Global_440000.f_1FEDE, 1))
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

int func_40(int iParam0, bool bParam1)//Position - 0x11EA
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

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x123B
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
			if (!func_43(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_42(bool bParam0)//Position - 0x1282
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x1299
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

int func_44(int iParam0, int iParam1)//Position - 0x1464
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_41(iParam1, iParam0, 4);
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

int func_45()//Position - 0x14B2
{
	if (func_46() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_46()//Position - 0x14CF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x14E7
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
			if (func_56(1))
			{
				iVar3 = func_52(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_50(iVar3);
				}
			}
			if ((func_49(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_43(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_42(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_48(1);
			}
			else
			{
				return func_38(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_42(1);
			}
			else
			{
				return func_38(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_52(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_50(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_48(bool bParam0)//Position - 0x168B
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_49(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16A2
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

int func_50(int iParam0)//Position - 0x171A
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_51(iParam0);
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

var func_51(int iParam0)//Position - 0x17DD
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_52(int iParam0)//Position - 0x17F4
{
	if (!iParam0 == func_68())
	{
		if (func_54(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_53(iParam0)];
		}
	}
	return 4294967295;
}

int func_53(int iParam0)//Position - 0x1826
{
	if (iParam0 != func_68())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_68();
}

bool func_54(int iParam0, bool bParam1)//Position - 0x1849
{
	if (!bParam1)
	{
		if (func_55(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_68();
}

int func_55(int iParam0)//Position - 0x1874
{
	if (iParam0 != func_68())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_68())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x18A9
{
	if ((func_58() || func_57()) || (func_31() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_57()//Position - 0x18D8
{
	return Global_255C02.f_F;
}

var func_58()//Position - 0x18E6
{
	return Global_255C02.f_E;
}

int func_59(int iParam0, int iParam1, bool bParam2)//Position - 0x18F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_56(1))
	{
		iVar2 = func_52(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_50(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_68())
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
			iVar0 = func_38(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_60(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_43(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_48(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_60(int iParam0)//Position - 0x1A82
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

var func_61()//Position - 0x1B57
{
	return Global_240006.f_2;
}

bool func_62()//Position - 0x1B65
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_63()//Position - 0x1B76
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_64(int iParam0)//Position - 0x1B93
{
	if (func_66(iParam0, 0))
	{
		return 1;
	}
	if (func_65())
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

bool func_65()//Position - 0x1BD5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_66(int iParam0, int iParam1)//Position - 0x1BE6
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_67(4294967295, 0) == 8;
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

int func_67(int iParam0, bool bParam1)//Position - 0x1C31
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_19();
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

int func_68()//Position - 0x1C72
{
	return 4294967295;
}

void func_69(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x1C7B
{
	uParam1->f_11 = func_68();
	uParam1->f_12 = func_68();
	uParam1->f_13 = func_68();
	uParam1->f_14 = func_68();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

void func_70(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x1CF9
{
	func_71(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_71(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x1D10
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_72(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_72(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x1D31
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::_GET_LENGTH_OF_STRING(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_81();
	if (iVar0 == 4294967295)
	{
		return;
	}
	func_80(iVar0);
	func_79(iVar0, uParam0);
	func_78(iVar0, uParam2, bParam3);
	func_77(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == 4294967197)
	{
		return;
	}
	func_76(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_74(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == 4294967197)
	{
		func_73(iVar0, iParam6);
	}
}

void func_73(int iParam0, int iParam1)//Position - 0x1DDD
{
	Global_14C73C.f_3B[iParam0 /*16*/].f_F = iParam1;
}

void func_74(int iParam0, char* sParam1, bool bParam2)//Position - 0x1DF3
{
	StringCopy(&(Global_14C73C.f_3B[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_75(iParam0);
}

void func_75(int iParam0)//Position - 0x1E1A
{
	MISC::SET_BIT(&(Global_14C73C.f_3B[iParam0 /*16*/]), 5);
}

void func_76(int iParam0)//Position - 0x1E31
{
	MISC::SET_BIT(&(Global_14C73C.f_3B[iParam0 /*16*/]), 4);
}

void func_77(int iParam0, char* sParam1)//Position - 0x1E48
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_14C73C.f_3B[iParam0 /*16*/].f_3 = { Var0 };
}

void func_78(int iParam0, var uParam1, bool bParam2)//Position - 0x1E68
{
	Global_14C73C.f_3B[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_14C73C.f_3B[iParam0 /*16*/]), 2);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_14C73C.f_3B[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_14C73C.f_3B[iParam0 /*16*/]), 3);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_14C73C.f_3B[iParam0 /*16*/]), 2);
	}
}

void func_79(int iParam0, var uParam1)//Position - 0x1EC2
{
	Global_14C73C.f_3B[iParam0 /*16*/].f_1 = uParam1;
}

void func_80(int iParam0)//Position - 0x1ED8
{
	MISC::SET_BIT(&(Global_14C73C.f_3B[iParam0 /*16*/]), 0);
}

int func_81()//Position - 0x1EEF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_82(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_82(int iParam0)//Position - 0x1F1D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14C73C.f_3B[iParam0 /*16*/], 0);
}

int func_83()//Position - 0x1F34
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_84(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1F55
{
	int iVar0;
	
	if (!func_96())
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
				func_85(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_85(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_85(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_85(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_85(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x24C2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_96())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_19()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_92(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_91(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_86(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x266D
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_87(iParam0);
	}
}

void func_87(int iParam0)//Position - 0x26A5
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_96())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_90(iParam0))
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
		func_88(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_88(var uParam0)//Position - 0x26F9
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
	func_89(&(uParam0->f_D));
	func_89(&(uParam0->f_D.f_D));
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

void func_89(var uParam0)//Position - 0x2800
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

int func_90(int iParam0)//Position - 0x2848
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_91(int iParam0, int iParam1)//Position - 0x2872
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x2886
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_96())
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
				func_93(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_93(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x29C2
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
	iVar1 = func_95(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_94();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_94()//Position - 0x2A54
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_95(int iParam0)//Position - 0x2A63
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_96()//Position - 0x2A75
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_97(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x2A8C
{
	func_98(iParam0, iParam1, iParam2, fParam3);
}

void func_98(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x2AA0
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_4 = iVar1;
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_3 = (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_99(iVar1, 0);
	}
}

void func_99(int iParam0, bool bParam1)//Position - 0x2B23
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_100(int iParam0, int iParam1)//Position - 0x2B34
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_121())
		{
			if (func_120(0))
			{
				if (!func_116(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_115()))
					{
						if (func_114() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_114());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_112(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_105("GB_BCUT_TICK1", func_115(), iVar0, 0, 0, 1, 1);
						}
						func_104(20);
						func_101(func_115(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_101(int iParam0, int iParam1, int iParam2)//Position - 0x2BD4
{
	struct<8> Var0;
	
	if (func_265(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_103(iParam0);
		func_102(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_95(iParam0));
	}
}

void func_102(var uParam0, var uParam1)//Position - 0x2C2A
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_103(int iParam0)//Position - 0x2C44
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_104(int iParam0)//Position - 0x2C58
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_105(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x2C81
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_36(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_110(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_106(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_106(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2D19
{
	int iVar0;
	
	if ((!func_109() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_66(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_107(iParam2);
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

int func_107(int iParam0)//Position - 0x2E21
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_108(iVar0);
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

void func_108(int iParam0)//Position - 0x2E83
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_109()//Position - 0x2EBC
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

var func_110(char* sParam0)//Position - 0x2ECD
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_111(&cVar0);
}

var func_111(char[4] cParam0)//Position - 0x2EEF
{
	return cParam0;
}

void func_112(int iParam0, bool bParam1)//Position - 0x2EF9
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_113(1);
	}
	else
	{
		iVar1 = func_113(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_113(bool bParam0)//Position - 0x2F2B
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_114()//Position - 0x2F51
{
	return Global_40001.f_2FF4;
}

int func_115()//Position - 0x2F60
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_116(bool bParam0)//Position - 0x2F75
{
	return func_117(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_117(int iParam0, bool bParam1)//Position - 0x2F87
{
	return func_118(iParam0, bParam1, 1);
}

int func_118(int iParam0, bool bParam1, int iParam2)//Position - 0x2F98
{
	int iVar0;
	
	if (iParam0 == func_68())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_119(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_68() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1)//Position - 0x2FF4
{
	if (iParam0 != func_68())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_68())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(bool bParam0)//Position - 0x3043
{
	return func_54(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_121()//Position - 0x3055
{
	return func_55(CAM::_0xDC9DA9E8789F5246());
}

void func_122()//Position - 0x3065
{
	func_234();
	if (HUD::DOES_BLIP_EXIST(iLocal_107))
	{
		if (func_232() || func_231())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_107, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_107, 4);
		}
	}
	switch (Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), Local_103.f_2, Local_103.f_5, Local_103.f_5, 1000f, 0, 1, 0))
			{
				func_209();
				MISC::SET_BIT(&(Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 0);
				MISC::SET_BIT(&(Global_26862F.f_11E2), 0);
				Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3 = 1;
			}
			if (Local_103.f_7 > 1)
			{
				Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_188();
			func_123();
			if (Local_103.f_7 > 1)
			{
				Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_123()//Position - 0x3143
{
	func_187();
	func_132();
	func_125();
	func_124();
}

void func_124()//Position - 0x315B
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 5))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 4))
		{
			if (Local_103.f_11 == 0)
			{
				MISC::SET_BIT(&iLocal_106, 4);
			}
			else
			{
				MISC::SET_BIT(&iLocal_106, 5);
			}
		}
		else if (!func_265(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			MISC::SET_BIT(&iLocal_106, 5);
		}
	}
}

void func_125()//Position - 0x31AA
{
	if ((((UNK::_GET_CURRENT_LANGUAGE_ID() == 7 || UNK::_GET_CURRENT_LANGUAGE_ID() == 8) || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		func_131();
	}
	else
	{
		func_130();
	}
	if ((Local_103.f_C - func_129(&(Local_103.f_A), 0, 0)) >= 0)
	{
		func_126((Local_103.f_C - func_129(&(Local_103.f_A), 0, 0)), "DCP_TIMER", 0, 1, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_126(0, "DCP_TIMER", 0, 1, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_126(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x324C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_128(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_127(7, iVar0);
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

void func_127(int iParam0, int iParam1)//Position - 0x339A
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_128(int iParam0, int iParam1)//Position - 0x33B3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

int func_129(var uParam0, bool bParam1, bool bParam2)//Position - 0x33CC
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

void func_130()//Position - 0x3413
{
	Global_14E696.f_441 = 1;
}

void func_131()//Position - 0x3423
{
	Global_14E696.f_440 = 1;
}

void func_132()//Position - 0x3433
{
	if (func_9(&uLocal_108, 30000, 0))
	{
		switch (Local_103.f_10)
		{
			case 2:
				func_184(2105, 1, 4294967295);
				break;
			
			case 3:
				func_184(2106, 1, 4294967295);
				break;
			
			case 4:
				func_184(2107, 1, 4294967295);
				break;
			
			case 5:
				func_184(2108, 1, 4294967295);
				break;
		}
		func_133(0, AUDIO::_0x0626A247D2405330(), "XPT_DSC", 2658791846, 2048546661, (Global_40001.f_1F35 * Local_103.f_10), 1, 4294967295, 0, 0, 0);
		Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_2++;
		func_5(&uLocal_108);
	}
}

int func_133(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x34DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_139(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_134(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_134(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x3556
{
	vector3 vVar0;
	
	vVar0 = { func_137(iParam0, 1) };
	if (iParam0 == func_136(AUDIO::_0x0626A247D2405330()))
	{
		func_135(1);
	}
	func_139(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_135(int iParam0)//Position - 0x358A
{
	Global_252F9E.f_75E = iParam0;
}

int func_136(int iParam0)//Position - 0x359B
{
	return iParam0;
}

Vector3 func_137(int iParam0, bool bParam1)//Position - 0x35A5
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
	if (iParam0 == func_138(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 0) };
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

int func_138(int iParam0)//Position - 0x3669
{
	return iParam0;
}

void func_139(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x3673
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
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_142(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_141();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_140();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_140()//Position - 0x378A
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_141()//Position - 0x37B4
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_142(vector3 vParam0, var uParam1, var uParam2)//Position - 0x37CF
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, 1);
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

var func_143(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3868
{
	var uVar0;
	
	uVar0 = func_144(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_144(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x388B
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_183(CAM::_0xDC9DA9E8789F5246()) || func_182(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_180() || func_176(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_175(sParam2))
	{
	}
	if (func_174())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_172(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_171(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_168(0, &iVar1);
					break;
				
				case 3:
					func_168(1, &iVar1);
					break;
				
				case 1:
					func_165(&iVar1);
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
			func_184(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_155((func_164(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_184(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_149(iVar1);
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
				func_145((func_147(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_145((func_147(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_145(int iParam0)//Position - 0x3A89
{
	if (func_174())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_146(joaat("mpply_globalxp"), iParam0);
	}
}

void func_146(int iParam0, int iParam1)//Position - 0x3AB4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_147(int iParam0)//Position - 0x3AD0
{
	if (iParam0 > 4294967295)
	{
		if (func_265(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_148(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_148(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x3B21
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

void func_149(int iParam0)//Position - 0x3B3F
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_154(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_152(func_153(&Var0));
			if (iVar1 == 0)
			{
				func_151(&Global_150A08, iParam0);
				func_150(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_151(&Global_150A09, iParam0);
				func_150(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_151(&Global_150A0A, iParam0);
				func_150(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_151(&Global_150A0B, iParam0);
				func_150(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_151(&Global_150A0C, iParam0);
				func_150(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x3C13
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

void func_151(var uParam0, int iParam1)//Position - 0x3D38
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_152(int iParam0)//Position - 0x3D49
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

int func_153(var uParam0)//Position - 0x3DA6
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

struct<13> func_154(int iParam0)//Position - 0x3DC9
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_155(int iParam0, int iParam1, int iParam2)//Position - 0x3DE0
{
	if (func_174())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_18(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_18(4294967295)])
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
		if (func_163(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_161(iParam0, 1);
		}
		func_160(639, iParam0, 4294967295, 1);
		func_159(640, func_161(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_18(4294967295)] = iParam0;
		func_156(7, 0);
	}
}

void func_156(int iParam0, int iParam1)//Position - 0x3F01
{
	int iVar0;
	
	if (func_158(iParam0, iParam1))
	{
		iVar0 = func_157();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_157()//Position - 0x3F24
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

int func_158(int iParam0, var uParam1)//Position - 0x3F59
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3FDF
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4011
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_18(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_18(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_18(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_18(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_18(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_18(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_18(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_18(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_18(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_18(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_18(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_18(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_18(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_18(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_18(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_18(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_18(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_161(int iParam0, bool bParam1)//Position - 0x481C
{
	if (bParam1)
	{
	}
	return func_162(iParam0, 0);
}

int func_162(int iParam0, int iParam1)//Position - 0x4830
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

int func_163(int iParam0)//Position - 0x48EF
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

int func_164(int iParam0)//Position - 0x4914
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_18(4294967295)];
			}
			else if (func_163(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_18(4294967295)];
	}
	return 0;
}

void func_165(int iParam0)//Position - 0x4971
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_43(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_167(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_166(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_166(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_166(int iParam0, int iParam1)//Position - 0x4A5C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_167(int iParam0, int iParam1)//Position - 0x4A7D
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_154(iParam0) };
		Global_2633EE = { func_154(iParam1) };
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

void func_168(bool bParam0, int iParam1)//Position - 0x4AEA
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
				if (func_265(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_167(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_265(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_169(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_167(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_166(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_166(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_169(int iParam0, int iParam1)//Position - 0x4C02
{
	return SYSTEM::VDIST(func_170(iParam0), func_170(iParam1));
	return 0f;
}

Vector3 func_170(int iParam0)//Position - 0x4C1E
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_171(int iParam0)//Position - 0x4C31
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_166(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_172(int iParam0)//Position - 0x4C68
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_164(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_164(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_173(8000, 0, 0) > 0)
	{
		if (func_173(8000, 0, 0) < (iParam0 + func_164(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_173(8000, 0, 0) - func_164(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_173(int iParam0, bool bParam1, int iParam2)//Position - 0x4CCC
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

int func_174()//Position - 0x4CF4
{
	return 1;
}

int func_175(char* sParam0)//Position - 0x4CFD
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

int func_176(int iParam0)//Position - 0x4D35
{
	return func_177(func_178(iParam0));
}

int func_177(int iParam0)//Position - 0x4D47
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x4D61
{
	if (func_179(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_179(int iParam0, int iParam1)//Position - 0x4D84
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

bool func_180()//Position - 0x4DBF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_31();
	}
	return func_181(Global_440000.f_1FEDE);
}

int func_181(int iParam0)//Position - 0x4DE3
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

bool func_182(int iParam0)//Position - 0x4E1D
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_183(int iParam0)//Position - 0x4E32
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_184(int iParam0, int iParam1, int iParam2)//Position - 0x4E47
{
	int iVar0;
	
	iVar0 = func_186(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_185(iParam0))
	{
		func_159(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_160(iParam0, iVar0, iParam2, 1);
	}
}

int func_185(int iParam0)//Position - 0x4E89
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

int func_186(int iParam0, int iParam1, int iParam2)//Position - 0x5093
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_187()//Position - 0x50C5
{
	if (func_9(&uLocal_110, 10000, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < Local_103.f_10)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), Local_103.f_10, 0);
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
		}
		PLAYER::_0xBC9490CA15AEA8FB(CAM::_0xDC9DA9E8789F5246());
	}
}

void func_188()//Position - 0x5108
{
	if (!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), Local_103.f_2, Local_103.f_5, Local_103.f_5, 1000f, 0, 1, 0))
	{
		func_191();
		Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), Local_103.f_2, Local_103.f_6, Local_103.f_6, 950f, 0, 1, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 3))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_190())
			{
				if (!func_232())
				{
					func_189("DCP_LEAVE", 4294967295);
				}
				MISC::SET_BIT(&iLocal_106, 0);
			}
		}
	}
	else
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 3))
		{
			MISC::SET_BIT(&iLocal_106, 3);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_106, 0);
		}
	}
}

void func_189(char* sParam0, int iParam1)//Position - 0x51CC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_190()//Position - 0x51E3
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

void func_191()//Position - 0x51F8
{
	func_5(&uLocal_108);
	func_5(&uLocal_110);
	func_192();
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/].f_1), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_106, 3);
	MISC::SET_BIT(&(Global_26862F.f_11E2), 0);
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 5))
	{
		MISC::SET_BIT(&iLocal_106, 5);
	}
}

void func_192()//Position - 0x5245
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 2))
	{
		func_193(1, 1, 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_106, 2);
	}
}

void func_193(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5265
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
		func_208();
	}
	if (!bParam2)
	{
		func_196(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_195(0);
	func_194();
}

void func_194()//Position - 0x5304
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_195(bool bParam0)//Position - 0x5329
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

void func_196(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x5349
{
	if (bParam0)
	{
		if (func_207())
		{
			func_206();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_204();
		func_200(8, 0, 0, 0, 0);
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
		func_197();
	}
}

void func_197()//Position - 0x5410
{
	if (func_207() && !func_199())
	{
		func_206();
	}
	if (func_199())
	{
		func_198();
	}
	else
	{
		func_204();
		func_200(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_198()//Position - 0x5458
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_199()//Position - 0x54A0
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_200(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x54DF
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_68())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_201())
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

int func_201()//Position - 0x557E
{
	if (((func_178(CAM::_0xDC9DA9E8789F5246()) == 229 || func_178(CAM::_0xDC9DA9E8789F5246()) == 191) || func_203()) || func_202())
	{
		return 0;
	}
	return 1;
}

var func_202()//Position - 0x55BE
{
	return Global_1805F4;
}

int func_203()//Position - 0x55CA
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_204()//Position - 0x55DF
{
	if (func_207() && !func_199())
	{
		func_206();
	}
	func_205();
	Global_24B2CE.f_2BF = 0;
}

void func_205()//Position - 0x5608
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

void func_206()//Position - 0x5643
{
	if (func_199())
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

int func_207()//Position - 0x56B1
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_208()//Position - 0x56F0
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_209()//Position - 0x5709
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 2))
	{
		func_228(Local_103.f_2, (Local_103.f_6 * 1.5f), 0, 0, 1, 0);
		func_211(Local_103.f_2, Local_103.f_6, 0, 1);
		func_210(Local_103.f_2, 1, 0);
		MISC::SET_BIT(&iLocal_106, 2);
	}
}

void func_210(vector3 vParam0, int iParam1, int iParam2)//Position - 0x5757
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

void func_211(vector3 vParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5781
{
	func_212(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, iParam3);
}

void func_212(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x579B
{
	struct<12> Var0;
	
	if (func_221(CAM::_0xDC9DA9E8789F5246()) || uParam5)
	{
		if (Var0.f_A == 1)
		{
			func_220(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_215(Var0))
		{
			Global_24B2CE.f_2C.f_40 = func_214(CAM::_0xDC9DA9E8789F5246());
			func_213(Var0, iParam4);
		}
	}
}

void func_213(struct<12> Param0, int iParam1)//Position - 0x5811
{
	Global_24B2CE.f_16A[iParam1 /*12*/] = { Param0 };
	Global_24B2CE.f_16A[iParam1 /*12*/].f_9 = 1;
}

int func_214(int iParam0)//Position - 0x583A
{
	if (func_265(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_215(struct<12> Param0)//Position - 0x585C
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_24B2CE.f_2C[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_216(Global_24B2CE.f_2C[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_216(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x58BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_A)
			{
				case 0:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_219(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_217(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_219(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_217(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_217(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x59F5
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_218(vParam0, vParam1, vVar0, vVar1);
}

int func_218(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0x5A39
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_219(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0x5A90
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_220(var uParam0, var uParam1)//Position - 0x5ABB
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_221(int iParam0)//Position - 0x5B52
{
	if (((func_224(iParam0, 1) || func_223(iParam0)) || func_179(iParam0, 0)) || func_222(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x5B8E
{
	if (!func_265(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_223(int iParam0)//Position - 0x5BB1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

bool func_224(int iParam0, bool bParam1)//Position - 0x5BD2
{
	if (Global_1406BF != 0)
	{
		return func_214(iParam0) != 0;
	}
	return func_225(iParam0, bParam1);
}

int func_225(int iParam0, bool bParam1)//Position - 0x5BF8
{
	if (bParam1)
	{
		if (func_226(iParam0))
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

bool func_226(int iParam0)//Position - 0x5C24
{
	return func_227(iParam0);
}

bool func_227(int iParam0)//Position - 0x5C32
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

void func_228(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5C4C
{
	func_229(vParam0, 0f, 0f, 0f, fParam1, 0, iParam2, iParam4, iParam3, iParam5);
}

void func_229(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)//Position - 0x5C6A
{
	struct<12> Var0;
	
	if (func_221(CAM::_0xDC9DA9E8789F5246()) || uParam5)
	{
		if (Global_24B2CE.f_6C8)
		{
			func_197();
		}
		if (Var0.f_A == 1)
		{
			func_220(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		Var0.f_B = uParam6;
		Var0.f_8 = uParam7;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_24B2CE.f_2C.f_40 = func_214(CAM::_0xDC9DA9E8789F5246());
		func_230(Var0, iParam4);
	}
}

void func_230(struct<12> Param0, int iParam1)//Position - 0x5CF9
{
	Global_24B2CE.f_2C[iParam1 /*12*/] = { Param0 };
	Global_24B2CE.f_2C[iParam1 /*12*/].f_9 = 1;
}

var func_231()//Position - 0x5D20
{
	return Global_24DCF5.f_699;
}

int func_232()//Position - 0x5D2F
{
	if (func_233(21))
	{
		return 1;
	}
	if (func_233(0))
	{
		return 1;
	}
	return 0;
}

bool func_233(int iParam0)//Position - 0x5D51
{
	int iVar0;
	
	iVar0 = func_186(2480, 4294967295, 0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0);
}

void func_234()//Position - 0x5D6C
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_106, 6))
	{
		if (((((((func_235(60000) && func_237() == 1) && Local_103.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_265(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !func_190()) && Local_103.f_10 != 5)
		{
			if (!func_232())
			{
				func_189("DCP_HELP1", 4294967295);
			}
			MISC::SET_BIT(&iLocal_106, 6);
		}
	}
}

bool func_235(int iParam0)//Position - 0x5DEF
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_24D46D, HUD::_0x13C4B962653A5280())) > iParam0;
}

void func_236()//Position - 0x5E0A
{
	if (HUD::DOES_BLIP_EXIST(iLocal_107))
	{
		if (func_232() || func_231())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_107, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_107, 4);
		}
	}
	else
	{
		iLocal_107 = HUD::ADD_BLIP_FOR_RADIUS(Local_103.f_2, Local_103.f_5);
		HUD::SET_BLIP_COLOUR(iLocal_107, 50);
		HUD::SET_BLIP_ALPHA(iLocal_107, 220);
		HUD::_0x75A16C3DA34F1245(iLocal_107, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_107, "DCP_BLIPN");
		if (func_232())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_107, 0);
		}
	}
}

int func_237()//Position - 0x5E7E
{
	return Local_103;
}

int func_238(int iParam0)//Position - 0x5E88
{
	return Local_105[iParam0 /*4*/];
}

bool func_239(int iParam0)//Position - 0x5E96
{
	return !func_240(iParam0);
}

int func_240(int iParam0)//Position - 0x5EA5
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_40001.f_1995)
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_40001.f_1996)
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_40001.f_1997)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_40001.f_1998)
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_241(4))
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_241(4))
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_241(4))
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_241(4))
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_241(4))
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_241(4))
			{
				return 0;
			}
			if (func_242(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_241(int iParam0)//Position - 0x6203
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_265(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iVar0 /*413*/].f_D0, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_242(int iParam0, int iParam1)//Position - 0x6249
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

int func_243()//Position - 0x6262
{
	var uVar0;
	
	func_250(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_249())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_248())
	{
		return 1;
	}
	if (func_247(157))
	{
		if (!func_246())
		{
			return 1;
		}
	}
	if (func_247(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_244() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_244()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_244()//Position - 0x62EC
{
	switch (func_245())
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

int func_245()//Position - 0x6320
{
	return Global_6373;
}

bool func_246()//Position - 0x632B
{
	return Global_255C02.f_24B;
}

int func_247(int iParam0)//Position - 0x633A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_248()//Position - 0x6351
{
	return Global_25824F;
}

bool func_249()//Position - 0x635D
{
	return Global_255C02.f_246;
}

void func_250(var uParam0)//Position - 0x636C
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
					func_251(iVar0);
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

void func_251(int iParam0)//Position - 0x63DF
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_265(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_252(iVar2, &bVar3))
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

int func_252(int iParam0, var uParam1)//Position - 0x6460
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

void func_253()//Position - 0x64BF
{
	SYSTEM::WAIT(0);
}

void func_254()//Position - 0x64CC
{
	if (HUD::DOES_BLIP_EXIST(iLocal_107))
	{
		HUD::REMOVE_BLIP(&iLocal_107);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_1, 1))
	{
		func_70(12, "DSC_FAIL", 0, 0, 4294967197);
	}
	func_192();
	func_256(16, 0);
	MISC::SET_BIT(&(Global_26862F.f_11E2), 0);
	func_255();
}

void func_255()//Position - 0x6517
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_256(int iParam0, bool bParam1)//Position - 0x6523
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

void func_257(struct<21> Param0)//Position - 0x6586
{
	func_263(func_264(Param0), Param0);
	func_261(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 20);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_105, 129);
	if (!func_260())
	{
		func_254();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_258();
		}
		func_256(16, 1);
		Local_105[NETSHOP::_NETWORK_SHOP_BASKET_START() /*4*/] = 0;
	}
	else
	{
		func_254();
	}
}

void func_258()//Position - 0x65EF
{
	Local_103.f_2 = { func_259() };
	Local_103.f_5 = 200f;
	Local_103.f_6 = 180f;
}

Vector3 func_259()//Position - 0x6613
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_260()//Position - 0x671A
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
		if (func_249())
		{
			return 0;
		}
		if (func_247(155))
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

int func_261(int iParam0, int iParam1, bool bParam2)//Position - 0x6773
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_255();
			}
			else
			{
				return 0;
			}
		}
		if (!func_262())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_255();
					}
					else
					{
						return 0;
					}
				}
				if (func_249())
				{
					if (!bParam2)
					{
						func_255();
					}
					else
					{
						return 0;
					}
				}
				if (func_247(155))
				{
					if (!bParam2)
					{
						func_255();
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
					func_255();
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
				func_255();
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
			func_255();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_262()//Position - 0x6888
{
	return Global_140842;
}

void func_263(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x6894
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_255();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_264(int iParam0)//Position - 0x68B3
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

int func_265(int iParam0, bool bParam1, bool bParam2)//Position - 0x6F49
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

