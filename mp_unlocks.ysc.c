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
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_111 = 50 + 1000;
	iLocal_112 = 58 + 1000;
	iLocal_121 = 39;
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if ((MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
	{
		iLocal_121 = 40;
	}
	switch (iScriptParam_122)
	{
		case 3:
			while (iLocal_113 == 0)
			{
				SYSTEM::WAIT(0);
				func_53();
				if (func_49(202))
				{
					unk_0x2DD32B9AFC72DFB0();
					iLocal_113 = 1;
				}
				if (HUD::_0x2E22FEFA0100275E())
				{
					if (iLocal_120 == 0)
					{
						if (func_48())
						{
							func_45();
						}
					}
					else
					{
						HUD::_0x7E17BE53E1AAABAF(&uVar0, &iVar1, &iVar2);
						if (iVar1 == 50)
						{
							iLocal_117 = iVar2;
							func_1(&uLocal_119);
						}
					}
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	HUD::OBJECT_DECAL_TOGGLE(2423636158);
	HUD::OBJECT_DECAL_TOGGLE(337714004);
	HUD::ENABLE_DEATHBLOOD_SEETHROUGH(0);
	unk_0x2DD32B9AFC72DFB0();
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0)//Position - 0x16E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_44(0, iLocal_117, 0, 1);
	func_43(1);
	iVar0 = 0;
	switch (iLocal_117)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < 13)
			{
				iVar2 = func_42(iVar1);
				iVar3 = func_39(iVar1);
				if (iVar2 > iVar3)
				{
					iVar3 = iVar2;
				}
				func_37(&iVar0, iVar2, iVar3);
				iVar1++;
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < 49)
			{
				func_27(&iVar0, func_28(iVar1));
				iVar1++;
			}
			break;
		
		case 2:
			func_16(&iVar0, "PM_UCON_T21", func_18(31, 0, 0));
			func_16(&iVar0, "PM_UCON_T22", func_18(32, 0, 0));
			func_16(&iVar0, "PM_UCON_T0", func_18(1, 0, 0));
			func_16(&iVar0, "PM_UCON_T1", func_18(2, 0, 0));
			func_16(&iVar0, "PM_UCON_T2", func_18(21, 0, 0));
			func_16(&iVar0, "PM_UCON_T3", func_18(59, 0, 0));
			func_16(&iVar0, "PM_UCON_T4", func_18(30, 0, 0));
			func_16(&iVar0, "PM_UCON_T6", func_18(1, 0, 0));
			func_16(&iVar0, "PM_UCON_T5", func_18(90, 0, 0));
			func_16(&iVar0, "PM_UCON_T8", func_18(13, 0, 0));
			func_16(&iVar0, "PM_UCON_T7", func_18(22, 0, 0));
			func_16(&iVar0, "PM_UCON_T9", func_18(60, 0, 0));
			func_16(&iVar0, "PM_UCON_T11", func_18(23, 0, 0));
			func_16(&iVar0, "PM_UCON_T10", func_18(76, 0, 0));
			func_16(&iVar0, "PM_UCON_T15", func_18(15, 0, 0));
			func_16(&iVar0, "PM_UCON_T14", func_18(14, 0, 0));
			func_16(&iVar0, "PM_UCON_T13", func_18(11, 0, 0));
			func_16(&iVar0, "PM_UCON_T38", func_18(122, 0, 0));
			func_16(&iVar0, "PM_UCON_T16", func_18(27, 0, 0));
			func_16(&iVar0, "PM_UCON_T12", func_18(12, 0, 0));
			func_16(&iVar0, "PM_UCON_T43", func_18(4, 0, 0));
			func_16(&iVar0, "PM_UCON_T17", func_18(19, 0, 0));
			func_16(&iVar0, "PM_UCON_T18", func_18(29, 0, 0));
			func_16(&iVar0, "PM_UCON_T19", func_18(8, 0, 0));
			func_16(&iVar0, "PM_UCON_T20", func_18(61, 0, 0));
			func_16(&iVar0, "PM_UCON_T42", func_18(119, 0, 0));
			func_16(&iVar0, "PM_UCON_T49", func_18(96, 0, 0));
			func_16(&iVar0, "PM_UCON_T48", func_18(78, 0, 0));
			func_16(&iVar0, "PM_UCON_T41", func_18(127, 0, 0));
			func_16(&iVar0, "PM_UCON_T39", func_18(126, 0, 0));
			func_16(&iVar0, "PM_UCON_T40", func_18(124, 0, 0));
			func_16(&iVar0, "PM_UCON_T44", func_18(103, 0, 0));
			func_16(&iVar0, "PM_UCON_T23", func_18(3, 0, 0));
			func_16(&iVar0, "PM_UCON_T24", func_18(74, 0, 0));
			func_16(&iVar0, "PM_UCON_T25", func_18(6, 0, 0));
			func_16(&iVar0, "PM_UCON_T26", func_18(20, 0, 0));
			func_16(&iVar0, "PM_UCON_T27", func_18(62, 0, 0));
			func_16(&iVar0, "PM_UCON_T28", func_18(65, 0, 0));
			func_16(&iVar0, "PM_UCON_T29", func_18(63, 0, 0));
			func_16(&iVar0, "PM_UCON_T45", func_18(104, 0, 0));
			func_16(&iVar0, "PM_UCON_T30", func_18(77, 0, 0));
			func_16(&iVar0, "PM_UCON_T46", func_18(98, 0, 0));
			func_16(&iVar0, "PM_UCON_T31", func_18(81, 0, 0));
			func_16(&iVar0, "PM_UCON_T32", func_18(75, 0, 0));
			func_16(&iVar0, "PM_UCON_T33", func_18(95, 0, 0));
			func_16(&iVar0, "PM_UCON_T47", func_18(105, 0, 0));
			func_16(&iVar0, "PM_UCON_T35", func_18(64, 0, 0));
			func_16(&iVar0, "PM_UCON_T34", func_18(67, 0, 0));
			func_16(&iVar0, "PM_UCON_T37", func_9(func_11(CAM::_0xDC9DA9E8789F5246(), 1), 0) >= 100);
			func_16(&iVar0, "PM_UCON_T36", func_9(func_11(CAM::_0xDC9DA9E8789F5246(), 1), 0) >= func_8(4, 170));
			break;
	}
	if (iVar0 > 16)
	{
		iLocal_118 = 1;
		func_7(1, 2, 1, 1, 0, 0);
		func_5(1, 0, iVar0, 0, 0);
		HUD::_ADD_FRONTEND_MENU_CONTEXT(2423636158);
	}
	else
	{
		iLocal_118 = 0;
		func_5(1, 4294967295, 4294967295, 0, 0);
		HUD::OBJECT_DECAL_TOGGLE(2423636158);
	}
	HUD::_ADD_FRONTEND_MENU_CONTEXT(337714004);
	HUD::ENABLE_DEATHBLOOD_SEETHROUGH(0);
	func_4(1);
	func_2(1);
	*uParam0 = 1;
	return 1;
}

void func_2(int iParam0)//Position - 0x5DA
{
	func_3(iParam0, 1);
}

void func_3(int iParam0, bool bParam1)//Position - 0x5E9
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SHOW_COLUMN"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		GRAPHICS::SET_SEETHROUGH(bParam1);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_1407F7, iParam0);
		}
		else
		{
			MISC::SET_BIT(&Global_1407F7, iParam0);
		}
	}
}

void func_4(int iParam0)//Position - 0x62E
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_5(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0x64B
{
	GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_COLUMN_SCROLL");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	else
	{
		func_6("");
	}
	GRAPHICS::SET_SEETHROUGH(bParam4);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_6(char* sParam0)//Position - 0x6A8
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x6BA
{
	GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("INIT_COLUMN_SCROLL");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
	GRAPHICS::SET_SEETHROUGH(false);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
	GRAPHICS::SET_SEETHROUGH(true);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
	GRAPHICS::SET_SEETHROUGH(bParam5);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_8(int iParam0, int iParam1)//Position - 0x6FD
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_9(int iParam0, bool bParam1)//Position - 0x93B
{
	if (bParam1)
	{
	}
	return func_10(iParam0, 0);
}

int func_10(int iParam0, int iParam1)//Position - 0x94F
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

int func_11(int iParam0, bool bParam1)//Position - 0xA0E
{
	if (bParam1)
	{
	}
	return func_12(iParam0);
}

int func_12(int iParam0)//Position - 0xA21
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_14(4294967295)];
			}
			else if (func_13(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_14(4294967295)];
	}
	return 0;
}

int func_13(int iParam0)//Position - 0xA7E
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

int func_14(int iParam0)//Position - 0xAA3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_15();
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

int func_15()//Position - 0xAD7
{
	return Global_1407E0;
}

void func_16(int iParam0, char* sParam1, bool bParam2)//Position - 0xAE3
{
	func_17(1, *iParam0, iLocal_112, *iParam0, sParam1, bParam2, 1);
	*iParam0++;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xB05
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		func_6(sParam4);
		if (iParam5 == 1)
		{
			if (iParam6 == 0)
			{
				func_6("PM_UJOB_YES");
			}
			else
			{
				func_6("PM_UCON_ULK");
			}
		}
		else if (iParam6 == 0)
		{
			func_6("PM_UJOB_NO");
		}
		else
		{
			func_6("PM_UCON_LCK");
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

bool func_18(int iParam0, bool bParam1, bool bParam2)//Position - 0xB84
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
		if (func_22(CAM::_0xDC9DA9E8789F5246(), 85))
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
	if (func_21() || func_20())
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
			if (func_19())
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

int func_19()//Position - 0xCF2
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
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	iVar0 = Global_150A75[func_14(4294967295)];
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_26862F.f_6B8), 23);
		return 1;
	}
	return 0;
}

bool func_20()//Position - 0xD58
{
	return Global_14084D;
}

bool func_21()//Position - 0xD64
{
	return Global_14084F;
}

bool func_22(int iParam0, int iParam1)//Position - 0xD70
{
	var uVar0;
	int iVar1;
	
	if (!func_25())
	{
		return 0;
	}
	if (func_24())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_23(iParam1);
	iVar1 = uVar0;
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_285, iVar1);
}

int func_23(int iParam0)//Position - 0xDB8
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

bool func_24()//Position - 0xF20
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_92, 3);
}

int func_25()//Position - 0xF3A
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_26(120, 4294967295);
}

int func_26(int iParam0, int iParam1)//Position - 0xF6A
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_14(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_27(int iParam0, int iParam1)//Position - 0xF96
{
	struct<2> Var0;
	
	StringCopy(&Var0, "PM_UJOB_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_17(1, *iParam0, iLocal_112, *iParam0, &Var0, iParam1, 0);
	*iParam0++;
}

int func_28(int iParam0)//Position - 0xFC7
{
	switch (iParam0)
	{
		case 0:
			return func_26(78, 4294967295);
		
		case 1:
			return func_26(79, 4294967295);
		
		case 2:
			return func_26(80, 4294967295);
		
		case 3:
			return func_34(30, 4294967295, 4294967295);
		
		case 4:
			return func_26(81, 4294967295);
		
		case 5:
			return func_33(1258, 4294967295, 0) > 0;
		
		case 6:
			return func_33(1260, 4294967295, 0) > 0;
		
		case 7:
			return func_26(83, 4294967295);
		
		case 8:
			return func_34(11, 4294967295, 4294967295);
		
		case 9:
			return func_26(95, 4294967295);
		
		case 10:
			return func_26(96, 4294967295);
		
		case 11:
			return func_26(97, 4294967295);
		
		case 12:
			return func_34(8, 4294967295, 4294967295);
		
		case 13:
			return func_34(9, 4294967295, 4294967295);
		
		case 14:
			return func_26(98, 4294967295);
		
		case 15:
			return func_26(99, 4294967295);
		
		case 16:
			return func_32(27, 4294967295) > 0;
		
		case 17:
			return func_34(3, 4294967295, 4294967295);
		
		case 18:
			return func_34(2, 4294967295, 4294967295);
		
		case 19:
			return func_34(4, 4294967295, 4294967295);
		
		case 20:
			return func_26(100, 4294967295);
		
		case 21:
			return func_34(31, 4294967295, 4294967295);
		
		case 22:
			return func_26(102, 4294967295);
		
		case 23:
			return func_26(103, 4294967295);
		
		case 24:
			return func_26(104, 4294967295);
		
		case 25:
			return func_26(105, 4294967295);
		
		case 26:
			return func_26(107, 4294967295);
		
		case 27:
			return func_26(84, 4294967295);
		
		case 28:
			return func_33(1264, 4294967295, 0) > 0;
		
		case 29:
			return func_26(85, 4294967295);
		
		case 30:
			return func_33(1262, 4294967295, 0) > 0;
		
		case 31:
			return func_33(1266, 4294967295, 0) > 0;
		
		case 32:
			return func_33(1259, 4294967295, 0) > 0;
		
		case 33:
			return func_33(1265, 4294967295, 0) > 0;
		
		case 34:
			return func_33(1248, 4294967295, 0) > 0;
		
		case 35:
			return func_26(86, 4294967295);
		
		case 36:
			if (func_31(joaat("mpply_race_2_point_wins")) > 0 || func_31(joaat("mpply_race_2_point_lost")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 37:
			return func_34(27, 4294967295, 4294967295);
		
		case 38:
			return func_34(26, 4294967295, 4294967295);
		
		case 39:
			return func_33(1257, 4294967295, 0) > 0;
		
		case 40:
			return func_33(1167, 4294967295, 0) > 0;
		
		case 41:
			return func_34(5, 4294967295, 4294967295);
		
		case 42:
			return func_34(1, 4294967295, 4294967295);
		
		case 43:
			return (func_33(1147, 4294967295, 0) > 0 || func_33(1148, 4294967295, 0) > 0);
		
		case 44:
			return func_34(10, 4294967295, 4294967295);
		
		case 45:
			return func_26(90, 4294967295);
		
		case 46:
			return func_34(25, 4294967295, 4294967295);
		
		case 47:
			return func_30();
		
		case 48:
			return func_29();
	}
	return 0;
}

int func_29()//Position - 0x134C
{
	int iVar0;
	
	iVar0 = 0;
	if (func_32(87, 4294967295) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_30()//Position - 0x1367
{
	int iVar0;
	
	iVar0 = 0;
	if (func_33(2088, 4294967295, 0) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_31(int iParam0)//Position - 0x1384
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

int func_32(int iParam0, int iParam1)//Position - 0x13A2
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_272D60[iParam0 /*3*/][func_14(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x13CE
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_14(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x1400
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_15();
	}
	iVar1 = func_36(iParam0, iParam1);
	uVar2 = func_35(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_35(int iParam0)//Position - 0x143D
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

int func_36(int iParam0, int iParam1)//Position - 0x1755
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_15();
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

void func_37(int iParam0, int iParam1, int iParam2)//Position - 0x1A4D
{
	struct<2> Var0;
	
	StringCopy(&Var0, "PM_UGEN_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_38(1, *iParam0, iLocal_112, *iParam0, &Var0, "PM_UGEN_NUM", iParam1, iParam2);
	*iParam0++;
}

void func_38(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)//Position - 0x1A83
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		func_6(sParam4);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_39(int iParam0)//Position - 0x1ADD
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return Global_C2055.f_1E0BD[2];
		
		case 1:
			return Global_C2055.f_1E0BD[1];
		
		case 2:
			return Global_C2055.f_1E0BD[8];
		
		case 3:
			return Global_C2055.f_1E0BD[3];
		
		case 4:
			return Global_C2055.f_1E0BD[0];
		
		case 5:
			if ((((func_41() || func_40()) || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION()) || MISC::IS_DURANGO_VERSION())
			{
				iVar0 += 2;
				iVar0 += 2;
				iVar0++;
				iVar0 += 7;
				if (Global_40001.f_5753)
				{
					iVar0++;
				}
				return (46 + iVar0);
			}
			else
			{
				return 44;
			}
			break;
		
		case 6:
			if ((NETWORK::_0x67A5589628E0CFF6() || func_41()) || func_40())
			{
				iVar0 = 0;
				iVar0 += 19;
				iVar0 += 8;
				return (Global_40001.f_52FF + iVar0);
			}
			else
			{
				return Global_40001.f_52FF;
			}
			break;
		
		case 7:
			return 205;
		
		case 8:
			return 106;
		
		case 9:
			return 60;
		
		case 10:
			return 180;
		
		case 11:
			return (89 + iLocal_121);
		
		case 12:
			return 10;
	}
	return 4294967295;
}

int func_40()//Position - 0x1C59
{
	return 1;
}

int func_41()//Position - 0x1C62
{
	return 1;
}

int func_42(int iParam0)//Position - 0x1C6B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return Global_C2055.f_1E0CB[2];
		
		case 1:
			return Global_C2055.f_1E0CB[1];
		
		case 2:
			return Global_C2055.f_1E0CB[8];
		
		case 3:
			return Global_C2055.f_1E0CB[3];
		
		case 4:
			return Global_C2055.f_1E0CB[0];
		
		case 5:
			return func_33(1232, 4294967295, 0);
		
		case 6:
			return func_33(1233, 4294967295, 0);
		
		case 7:
			return (func_33(1242, 4294967295, 0) - 1);
		
		case 8:
			return func_33(1237, 4294967295, 0);
		
		case 9:
			return func_33(1243, 4294967295, 0);
		
		case 10:
			return func_33(1238, 4294967295, 0);
		
		case 11:
			return func_33(755, 4294967295, 0);
		
		case 12:
			if (func_26(263, 4294967295))
			{
				iVar0++;
			}
			if (func_26(264, 4294967295))
			{
				iVar0++;
			}
			if (func_26(265, 4294967295))
			{
				iVar0++;
			}
			if (func_26(266, 4294967295))
			{
				iVar0++;
			}
			if (func_26(267, 4294967295))
			{
				iVar0++;
			}
			if (func_26(268, 4294967295))
			{
				iVar0++;
			}
			if (func_26(269, 4294967295))
			{
				iVar0++;
			}
			if (func_26(270, 4294967295))
			{
				iVar0++;
			}
			if (func_26(271, 4294967295))
			{
				iVar0++;
			}
			if (func_26(272, 4294967295))
			{
				iVar0++;
			}
			return iVar0;
			break;
	}
	return 4294967295;
}

void func_43(int iParam0)//Position - 0x1E1D
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1E3A
{
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_COLUMN_HIGHLIGHT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::SET_SEETHROUGH(bParam2);
		GRAPHICS::SET_SEETHROUGH(bParam3);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_45()//Position - 0x1E72
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	HUD::_0x7E17BE53E1AAABAF(&uVar0, &uVar1, &uVar2);
	func_43(0);
	iLocal_117 = 0;
	func_47(0, 0, iLocal_111, 0, 1, "PM_UL_D0", 0, 0, 0);
	func_47(0, 1, iLocal_111, 1, 1, "PM_UL_D1", 0, 0, 0);
	func_47(0, 2, iLocal_111, 2, 1, "PM_UL_D2", 0, 0, 0);
	func_2(0);
	func_46(2);
	func_46(3);
	func_46(4);
	func_46(5);
	func_4(0);
	func_1(&uLocal_119);
	HUD::OBJECT_DECAL_TOGGLE(2423636158);
	HUD::_ADD_FRONTEND_MENU_CONTEXT(337714004);
	HUD::ENABLE_DEATHBLOOD_SEETHROUGH(0);
	iLocal_120 = 1;
}

void func_46(int iParam0)//Position - 0x1EFE
{
	func_3(iParam0, 0);
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1F0D
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		if (bParam4)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		}
		else
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
		}
		func_6(sParam5);
		if (bParam6)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		}
		else
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		}
		if (bParam8)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(21);
			GRAPHICS::SET_SEETHROUGH(bParam8);
		}
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam7);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_48()//Position - 0x1F87
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_C2055.f_1E0CB[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1200)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar0 /*88*/].f_4C, 14))
		{
			if (Global_C2055.f_4[iVar0 /*88*/].f_41 < 13 && Global_C2055.f_4[iVar0 /*88*/].f_46 <= 1000)
			{
				Global_C2055.f_1E0CB[Global_C2055.f_4[iVar0 /*88*/].f_41]++;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_49(int iParam0)//Position - 0x2031
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = func_52(iVar0);
	iVar2 = func_51(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_50(iParam0, &(Global_14E0B5.f_424), 1))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_419[iVar1], iVar2))
		{
			MISC::SET_BIT(&(Global_14E0B5.f_419[iVar1]), iVar2);
			return 1;
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_419[iVar1], iVar2))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_14E0B5.f_419[iVar1]), iVar2);
	}
	return 0;
}

int func_50(int iParam0, var uParam1, int iParam2)//Position - 0x20CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < 4294967266)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < 4294967266)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < 4294967266)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_51(int iParam0)//Position - 0x222E
{
	return (iParam0 % 32);
}

int func_52(int iParam0)//Position - 0x223B
{
	return (iParam0 / 32);
}

void func_53()//Position - 0x2248
{
	int iVar0;
	
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		iVar0 = PAD::GET_CONTROL_VALUE(2, 221);
		if (iVar0 > 180)
		{
			if (func_55(&uLocal_114, iLocal_116, 0))
			{
				if (iLocal_118)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
						CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					}
					iLocal_116 = 250;
					func_54(&uLocal_114);
				}
			}
		}
		else if (iVar0 < 80)
		{
			if (func_55(&uLocal_114, iLocal_116, 0))
			{
				if (iLocal_118)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
						CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					}
					iLocal_116 = 250;
					func_54(&uLocal_114);
				}
			}
		}
		else if (iLocal_116 != 4294967295)
		{
			iLocal_116 = 4294967295;
		}
	}
}

void func_54(var uParam0)//Position - 0x2305
{
	uParam0->f_1 = 0;
}

int func_55(var uParam0, int iParam1, bool bParam2)//Position - 0x2312
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_56(uParam0, bParam2, 0);
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

void func_56(var uParam0, bool bParam1, bool bParam2)//Position - 0x2370
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

