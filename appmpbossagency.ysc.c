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
	float fLocal_47 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	struct<2> Local_104 = { 0, 0 } ;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<2> Local_107 = { 0, 0 } ;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<2> Local_110 = { 0, 0 } ;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<2> Local_113 = { 0, 0 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<2> Local_116 = { 0, 0 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	struct<2> Local_119 = { 0, 0 } ;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_104, "CELL_206", 16);
	StringCopy(&Local_107, "CELL_214", 16);
	StringCopy(&Local_110, "CELL_243", 16);
	StringCopy(&Local_113, "CELL_244", 16);
	StringCopy(&Local_116, "CELL_265", 16);
	StringCopy(&Local_119, "CELL_300", 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_96(&iLocal_125);
	iLocal_122 = 0;
	func_94();
	func_93(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(5), 3212836864, 3212836864, 3212836864, 3212836864);
	func_83(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_82();
		func_81();
		if (!Global_38B1.f_1 == 9 && Global_38B1.f_1 > 3)
		{
			switch (iLocal_103)
			{
				case 0:
					func_46();
					break;
				
				case 1:
					func_30();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_38B1.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x170
{
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 3) || Global_38B1.f_1 == 0) || Global_3879 == 1)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1B3
{
	Global_18C80F.f_6 = 0;
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_3()//Position - 0x1C6
{
	if (Global_BAD == 1 || Global_38B1.f_1 < 7)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1EF
{
}

void func_5()//Position - 0x1F7
{
	int iVar0;
	
	Global_18C80F.f_6 = 1;
	if (iLocal_124)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, Global_3892))
		{
			iLocal_124 = 0;
		}
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
	{
		iLocal_103 = 1;
		iVar0 = func_28(iLocal_122, 0);
		func_6(iVar0);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		iLocal_103 = 1;
		return;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, 4294967295, 0, 0, 1, 0);
}

void func_6(int iParam0)//Position - 0x25E
{
	int iVar0;
	
	iVar0 = Global_18C80F.f_7[iParam0 /*8*/].f_2;
	if (Global_18C80F.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_123 == iVar0)
	{
		func_25(iVar0, Global_18C80F.f_7[iParam0 /*8*/].f_6);
		func_12(iParam0);
	}
	Global_18C80F.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)//Position - 0x2B3
{
	if (func_11())
	{
		return;
	}
	if (Global_3959)
	{
		func_9(0, 0);
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
	if (!func_8())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_8()//Position - 0x32D
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)//Position - 0x354
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)//Position - 0x3C8
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

bool func_11()//Position - 0x422
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_12(int iParam0)//Position - 0x434
{
	int iVar0;
	
	if (iParam0 != 4294967295)
	{
		if (Global_18C80F.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18C80F.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_24();
				if (Global_18C80F.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_24();
				}
				else
				{
					Global_18C80F.f_4 = (Global_18C80F.f_4 - 1);
					if (Global_18C80F.f_4 < 0)
					{
						Global_18C80F.f_4 = 0;
					}
					func_17();
				}
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_16), Global_18C80F.f_7[iParam0 /*8*/].f_2);
			HUD::_REMOVE_NOTIFICATION(Global_18C80F.f_7[iParam0 /*8*/].f_4);
			func_16();
			func_14(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_18C80F.f_7[iVar0 /*8*/] = { Global_18C80F.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_18C80F.f_7[9 /*8*/].f_1 = 0;
		Global_18C80F.f_7[9 /*8*/].f_2 = func_13();
	}
}

int func_13()//Position - 0x529
{
	return 4294967295;
}

void func_14(int iParam0)//Position - 0x532
{
	if (!func_15(iParam0))
	{
		MISC::SET_BIT(&(Global_18C80F.f_3), iParam0);
	}
}

bool func_15(int iParam0)//Position - 0x550
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18C80F.f_3, iParam0);
}

void func_16()//Position - 0x564
{
	Global_18C80F = (Global_18C80F - 1);
}

void func_17()//Position - 0x576
{
	Global_41F5 = (Global_41F5 - 1);
	if (Global_41F5 < 0)
	{
		func_23("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_18();
}

void func_18()//Position - 0x598
{
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_93(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_19(1);
			func_93(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
}

void func_19(int iParam0)//Position - 0x5F5
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
		if (func_22(14))
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
								func_21(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_20(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_20(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_20(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_20(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_20(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_21(&(Global_956[iVar1 /*15*/]));
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
								func_21(&(Global_956[iVar1 /*15*/]));
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
								func_21(&(Global_956[iVar1 /*15*/]));
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
								func_21(&(Global_956[iVar1 /*15*/]));
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
								func_21(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_20(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_20(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xB8D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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
		func_21(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_21(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_21(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_21(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_21(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_21(char* sParam0)//Position - 0xC40
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

bool func_22(int iParam0)//Position - 0xC52
{
	return Global_8D15 == iParam0;
}

void func_23(char* sParam0)//Position - 0xC60
{
	if (Global_41F5 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_41F5 = 0;
	}
}

void func_24()//Position - 0xC7D
{
	Global_18C80F.f_1 = (Global_18C80F.f_1 - 1);
	if (Global_18C80F.f_1 < 0)
	{
		Global_18C80F.f_1 = 0;
	}
}

void func_25(int iParam0, var uParam1)//Position - 0xCA4
{
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1A == func_13())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1A = iParam0;
			Global_26862F.f_1313.f_D7 = uParam1;
			func_26(func_27(iParam0));
		}
	}
}

void func_26(int iParam0)//Position - 0xCF4
{
	struct<2> Var0;
	
	Var0 = 3096388527;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_27(int iParam0)//Position - 0xD20
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_28(int iParam0, int iParam1)//Position - 0xD32
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_18C80F.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_29()//Position - 0xD72
{
	return Global_18C80F;
}

void func_30()//Position - 0xD7E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(iLocal_122, 0);
	if (iLocal_122 == 4294967295)
	{
		func_83(1);
		return;
	}
	iVar1 = Global_18C80F.f_7[iVar0 /*8*/].f_2;
	if (!func_45(iVar1, 0, 1) || iLocal_123 != iVar1)
	{
		func_83(1);
		return;
	}
	func_40(&iLocal_125);
	if (func_38(&iLocal_125))
	{
		func_83(1);
		return;
	}
	if (func_37(&iLocal_125))
	{
		func_12(iVar0);
		func_83(1);
		return;
	}
	if (func_33(&iLocal_125))
	{
		if (func_32())
		{
			iLocal_124 = 1;
			iLocal_103 = 3;
		}
		else if (Global_18C80F.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_18C80F.f_7[iVar0 /*8*/] == 1)
		{
			func_31(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_31(int iParam0)//Position - 0xE44
{
	MISC::SET_BIT(&Global_1803FE, 15);
	func_12(iParam0);
	Global_18C80F.f_6 = 0;
	func_7(0);
}

bool func_32()//Position - 0xE68
{
	return Global_1406A0;
}

int func_33(int iParam0)//Position - 0xE74
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
	{
		return 0;
	}
	if (Global_389B)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_3892))
	{
		return 0;
	}
	func_34();
	Global_389B = 1;
	return 1;
}

void func_34()//Position - 0xEBB
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Accept", &Global_38A6, 1);
		func_35();
	}
}

void func_35()//Position - 0xEE0
{
	if (func_36())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_36()//Position - 0xEF4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_412200 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_37(int iParam0)//Position - 0xF3B
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 1))
	{
		return 0;
	}
	if (Global_389B)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_3895))
	{
		return 0;
	}
	func_34();
	Global_389B = 1;
	return 1;
}

int func_38(int iParam0)//Position - 0xF82
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 2))
	{
		return 0;
	}
	if (Global_389B)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_3893))
	{
		return 0;
	}
	func_39();
	Global_389B = 1;
	return 1;
}

void func_39()//Position - 0xFC9
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

void func_40(int iParam0)//Position - 0xFEB
{
	if (MISC::GET_GAME_TIMER() < iParam0->f_1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_3899) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
	{
		func_43();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_389A) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
	{
		func_41();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
}

void func_41()//Position - 0x1058
{
	func_93(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_42();
}

void func_42()//Position - 0x1095
{
	if (func_36())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_43()//Position - 0x10B8
{
	func_93(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_44();
}

void func_44()//Position - 0x10F5
{
	if (func_36())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

int func_45(int iParam0, bool bParam1, bool bParam2)//Position - 0x1118
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

void func_46()//Position - 0x1162
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_29() > 1)
	{
		func_40(&iLocal_125);
	}
	if (func_33(&iLocal_125))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
		uVar0 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_122 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uVar0);
		iVar1 = func_28(iLocal_122, 0);
		switch (Global_18C80F.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_48();
				break;
			
			default:
				return;
		}
		Global_38B1.f_1 = 8;
		return;
	}
	if (func_37(&iLocal_125))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
		uVar2 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_122 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uVar2);
		iVar3 = func_28(iLocal_122, 0);
		switch (Global_18C80F.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_12(iVar3);
				func_83(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_15(0))
	{
		func_47(0);
		func_83(0);
	}
}

void func_47(int iParam0)//Position - 0x126E
{
	if (func_15(iParam0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18C80F.f_3), iParam0);
	}
}

void func_48()//Position - 0x128B
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_38B1.f_1 != 8)
	{
		Global_38B1.f_1 = 8;
	}
	func_93(Global_389E, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), 3212836864, 3212836864, 3212836864, 3212836864);
	bVar0 = false;
	iVar3 = func_28(iLocal_122, 0);
	iLocal_123 = Global_18C80F.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_18C80F.f_7[iVar3 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(26);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	if (func_45(iVar4, 0, 1))
	{
		Var5 = { func_80(iVar4) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_74(iVar4));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		bVar0 = true;
	}
	else
	{
		func_21("");
	}
	if (Global_18C80F.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_40001.f_39F1)
		{
			bVar7 = func_73(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_18CD5B[iVar4 /*560*/].f_B.f_B[iVar8] != func_13())
					{
						if (func_45(Global_18CD5B[iVar4 /*560*/].f_B.f_B[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_18CD5B[iVar4 /*560*/].f_B.f_B[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_21("BA_APP_BODYCTA");
				}
				else
				{
					func_21("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_80(uVar6[iVar8]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var11);
					iVar8++;
				}
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
		}
		else
		{
			if (Global_18C80F.f_58[iVar3 /*5*/].f_1)
			{
				if (Global_18C80F.f_58[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_18C80F.f_58[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar12);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_18C80F.f_58[iVar3 /*5*/]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_72(iVar4));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_18C80F.f_58[iVar3 /*5*/].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_18C80F.f_58[iVar3 /*5*/].f_4);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
	}
	else if (Global_18C80F.f_7[iVar3 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2");
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_74(Global_18C80F.f_7[iVar3 /*8*/].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_60(Global_18C80F.f_7[iVar3 /*8*/].f_2));
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	if (bVar0)
	{
		iVar2 = func_54(Global_18C80F.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
		}
	}
	if (bVar0)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sVar1);
	}
	else
	{
		func_21(&Local_119);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_93(Global_389E, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), 3212836864, 3212836864, 3212836864, 3212836864);
	func_52(&Local_116);
	func_49(13, &Local_110, 12, &Local_113, 4, &Local_104, &iLocal_125);
	iLocal_103 = 1;
}

void func_49(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x15DA
{
	func_50(2, iParam0, sParam1, 0, iParam6, 4294967295);
	func_50(1, iParam2, sParam3, 1, iParam6, 17);
	func_50(3, iParam4, sParam5, 2, iParam6, 4294967295);
}

void func_50(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x160A
{
	if (iParam1 == 1)
	{
		func_20(Global_389E, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		GRAPHICS::_0x35FB78DC42B7BD21(iParam4, iParam3);
		func_51(iParam5, 0);
		return;
	}
	if (Global_38A5)
	{
		func_20(Global_389E, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(iParam4, iParam3);
		func_51(iParam5, 1);
		return;
	}
	func_20(Global_389E, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(iParam4, iParam3);
	func_51(iParam5, 1);
}

void func_51(int iParam0, bool bParam1)//Position - 0x16AF
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&Global_94F, iParam0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, iParam0);
}

void func_52(char* sParam0)//Position - 0x16DA
{
	func_53(Global_389E, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_53(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x16F3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_21(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_21(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_21(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_21(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_21(sParam6);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_54(int iParam0)//Position - 0x174E
{
	int iVar0;
	
	iVar0 = func_57(iParam0);
	if (iVar0 == 4294967295)
	{
		func_55(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_55(int iParam0, bool bParam1)//Position - 0x1784
{
	if (!func_45(iParam0, 0, 1))
	{
		return;
	}
	if (func_57(iParam0) != 4294967295)
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
	if (func_56(iParam0))
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

int func_56(int iParam0)//Position - 0x17F0
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

int func_57(int iParam0)//Position - 0x1822
{
	int iVar0;
	
	if (!func_45(iParam0, 0, 1))
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
			func_58(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_58(int iParam0)//Position - 0x18A1
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
	func_59(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_59(var uParam0)//Position - 0x1957
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

char* func_60(int iParam0)//Position - 0x1984
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		sVar0 = func_71(&(Global_18CD5B[iParam0 /*560*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_73 != Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_73)
	{
		sVar0 = func_66(iParam0, 0);
		return sVar0;
	}
	if (((func_65(iParam0, 28) || func_65(CAM::_0xDC9DA9E8789F5246(), 28)) || func_64(iParam0)) && !func_62(iParam0))
	{
		return func_66(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_13())
	{
		if (iVar1 != CAM::_0xDC9DA9E8789F5246())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_66(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_13())
	{
		sVar0 = func_71(&(Global_18CD5B[iVar1 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_66(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_61(int iParam0)//Position - 0x1A8B
{
	if (iParam0 != func_13())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_13();
}

int func_62(int iParam0)//Position - 0x1AAE
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
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

struct<13> func_63(int iParam0)//Position - 0x1ADE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0)//Position - 0x1AF5
{
	struct<13> Var0;
	
	if (iParam0 != func_13())
	{
		Var0 = { func_63(iParam0) };
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

bool func_65(int iParam0, int iParam1)//Position - 0x1B4E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

char* func_66(int iParam0, bool bParam1)//Position - 0x1B69
{
	if (!bParam1)
	{
		if (func_68(iParam0, 1))
		{
			return func_67();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_67()//Position - 0x1B90
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_68(int iParam0, bool bParam1)//Position - 0x1BA0
{
	return func_69(iParam0, bParam1, 1);
}

int func_69(int iParam0, bool bParam1, int iParam2)//Position - 0x1BB1
{
	int iVar0;
	
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_70(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_13() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)//Position - 0x1C0D
{
	if (iParam0 != func_13())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_13())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_71(var uParam0)//Position - 0x1C5C
{
	return uParam0;
}

var func_72(int iParam0)//Position - 0x1C66
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_13;
}

bool func_73(int iParam0)//Position - 0x1C7B
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 26);
}

int func_74(int iParam0)//Position - 0x1CA1
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_75(iVar0);
	}
	return 1;
}

int func_75(int iParam0)//Position - 0x1CC1
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_76(iParam0);
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

var func_76(int iParam0)//Position - 0x1D84
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_77(int iParam0)//Position - 0x1D9B
{
	if (!iParam0 == func_13())
	{
		if (func_78(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_61(iParam0)];
		}
	}
	return 4294967295;
}

bool func_78(int iParam0, bool bParam1)//Position - 0x1DCD
{
	if (!bParam1)
	{
		if (func_79(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_13();
}

int func_79(int iParam0)//Position - 0x1DF8
{
	if (iParam0 != func_13())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_13())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

struct<16> func_80(int iParam0)//Position - 0x1E2D
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, PLAYER::GET_PLAYER_NAME(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_81()//Position - 0x1E54
{
	if (Global_18C80F.f_6)
	{
		if (iLocal_103 != 3)
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_18C80F.f_6 = 0;
			}
		}
	}
}

void func_82()//Position - 0x1E7A
{
	PAD::SET_INPUT_EXCLUSIVE(0, 176);
	PAD::SET_INPUT_EXCLUSIVE(0, 177);
}

void func_83(bool bParam0)//Position - 0x1E90
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_123 = func_13();
	if (!Global_38B1.f_1 == 7)
	{
		Global_38B1.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_122;
	}
	if (iVar0 >= Global_15093B)
	{
		iVar0 = 0;
	}
	if (Global_41F2)
	{
		func_48();
		Global_41F2 = 0;
		return;
	}
	iVar1 = func_29();
	iVar1 = (iVar1 - func_92());
	if ((func_78(CAM::_0xDC9DA9E8789F5246(), 0) && !func_91(1)) && iVar1 <= 0)
	{
		func_89();
		return;
	}
	func_84();
	func_93(Global_389E, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), 3212836864, 3212836864, 3212836864);
	func_52("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_49(13, &Local_107, 12, &Local_113, 4, &Local_104, &iLocal_125);
	}
	else
	{
		func_49(1, "", 1, "", 4, &Local_104, &iLocal_125);
	}
	iLocal_103 = 0;
}

void func_84()//Position - 0x1F7A
{
	int iVar0;
	int iVar1;
	
	func_93(Global_389E, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), 3212836864, 3212836864, 3212836864, 3212836864);
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_18C80F.f_7[iVar0 /*8*/].f_1 == 1 && Global_18C80F.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_18C80F.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_88(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_86(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_85();
}

void func_85()//Position - 0x202F
{
	bool bVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(25);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	if (func_79(CAM::_0xDC9DA9E8789F5246()))
	{
		func_21("BA_APP_NONEB");
	}
	else
	{
		func_21("BA_APP_NONE");
	}
	func_21("");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::SET_SEETHROUGH(bVar0);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_86(int iParam0, int iParam1)//Position - 0x208D
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_18C80F.f_7[iParam0 /*8*/].f_2 == func_13() || !func_45(Global_18C80F.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(25);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	Var0 = { func_80(Global_18C80F.f_7[iParam0 /*8*/].f_2) };
	func_87(&Var0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1");
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
	iVar1 = 1;
	iVar2 = func_77(Global_18C80F.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != 4294967295)
	{
		iVar1 = func_75(iVar2);
	}
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
	GRAPHICS::SET_SEETHROUGH(true);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	return 1;
}

void func_87(char* sParam0)//Position - 0x213C
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_88(int iParam0, int iParam1)//Position - 0x214A
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_18C80F.f_7[iParam0 /*8*/].f_2 == func_13() || !func_45(Global_18C80F.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(25);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	Var0 = { func_80(Global_18C80F.f_7[iParam0 /*8*/].f_2) };
	func_87(&Var0);
	bVar1 = func_73(Global_18C80F.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_72(Global_18C80F.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_21("BA_APP_BODYCT");
		}
		else
		{
			func_21("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3");
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3");
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar2);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	else
	{
		if (bVar1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2");
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2");
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar2);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
	iVar3 = 1;
	iVar4 = func_77(Global_18C80F.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != 4294967295)
	{
		iVar3 = func_75(iVar4);
	}
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar3);
	GRAPHICS::SET_SEETHROUGH(true);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	return 1;
}

void func_89()//Position - 0x227F
{
	func_93(Global_389E, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), 3212836864, 3212836864, 3212836864, 3212836864);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(26);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::_SET_NOTIFICATION_COLOR_NEXT(func_74(CAM::_0xDC9DA9E8789F5246()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_90());
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	func_21("BA_APP_NONEG");
	func_21("CELL_AGBOSSPIC");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_93(Global_389E, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), 3212836864, 3212836864, 3212836864, 3212836864);
	func_52("CELL_BOSSAGE");
	func_49(1, "", 1, "", 4, &Local_104, &iLocal_125);
	iLocal_103 = 2;
}

char* func_90()//Position - 0x2337
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_61(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 != func_13())
	{
		if (iVar0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (((func_65(iVar0, 28) || func_65(CAM::_0xDC9DA9E8789F5246(), 28)) || func_64(iVar0)) && !func_62(iVar0))
			{
				return func_66(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_66(iVar0, 0);
			}
		}
		sVar1 = func_71(&(Global_18CD5B[iVar0 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_66(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_91(bool bParam0)//Position - 0x23E9
{
	return func_68(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_92()//Position - 0x23FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_18C80F.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_93(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2430
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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

void func_94()//Position - 0x2493
{
	Global_18C80F.f_1 = 0;
	func_95();
}

void func_95()//Position - 0x24A6
{
	Global_18C80F.f_5 = 0;
}

void func_96(var uParam0)//Position - 0x24B5
{
	*uParam0 = 0;
}

