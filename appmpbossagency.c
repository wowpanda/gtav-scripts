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
	func_95(&iLocal_125);
	iLocal_122 = 0;
	func_93();
	func_92(Global_14474, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_82(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_81();
		func_80();
		if (!Global_14493.f_1 == 9 && Global_14493.f_1 > 3)
		{
			switch (iLocal_103)
			{
				case 0:
					func_45();
					break;
				
				case 1:
					func_29();
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
			if (Global_14493.f_1 != 8)
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

int func_1()
{
	if (((Global_14493.f_1 == 1 || Global_14493.f_1 == 3) || Global_14493.f_1 == 0) || Global_14437 == 1)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1622819.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (Global_2969 == 1 || Global_14493.f_1 < 7)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1622819.f_6 = 1;
	if (iLocal_124)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, Global_14462))
		{
			iLocal_124 = 0;
		}
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
	{
		iLocal_103 = 1;
		iVar0 = func_27(iLocal_122, 0);
		func_6(iVar0);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		iLocal_103 = 1;
		return;
	}
	HUD::_SET_WARNING_MESSAGE_2("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, -1, 0, 0, 1, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1622819.f_7[iParam0 /*8*/].f_2;
	if (Global_1622819.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_123 == iVar0)
	{
		func_24(iVar0, Global_1622819.f_7[iParam0 /*8*/].f_6);
		func_11(iParam0);
	}
	Global_1622819.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (Global_14659)
	{
		func_9(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2364, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2363, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2363, 30);
	}
	if (!func_8())
	{
		Global_14493.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14430);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14421);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2363, 14))
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
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1622819.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (MISC::IS_BIT_SET(Global_1622819.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_23();
				if (Global_1622819.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_23();
				}
				else
				{
					Global_1622819.f_4 = (Global_1622819.f_4 - 1);
					if (Global_1622819.f_4 < 0)
					{
						Global_1622819.f_4 = 0;
					}
					func_16();
				}
			}
			MISC::CLEAR_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_22), Global_1622819.f_7[iParam0 /*8*/].f_2);
			HUD::_REMOVE_NOTIFICATION(Global_1622819.f_7[iParam0 /*8*/].f_4);
			func_15();
			func_13(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1622819.f_7[iVar0 /*8*/] = { Global_1622819.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1622819.f_7[9 /*8*/].f_1 = 0;
		Global_1622819.f_7[9 /*8*/].f_2 = func_12();
	}
}

int func_12()
{
	return -1;
}

void func_13(int iParam0)
{
	if (!func_14(iParam0))
	{
		MISC::SET_BIT(&(Global_1622819.f_3), iParam0);
	}
}

bool func_14(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1622819.f_3, iParam0);
}

void func_15()
{
	Global_1622819 = (Global_1622819 - 1);
}

void func_16()
{
	Global_16863 = (Global_16863 - 1);
	if (Global_16863 < 0)
	{
		func_22("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_17();
}

void func_17()
{
	if (!Global_14660)
	{
		if (Global_14493.f_1 == 6)
		{
			func_92(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_18(1);
			func_92(Global_14474, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14473), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_18(int iParam0)
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
	
	Global_16868 = 0;
	Global_2968 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2932[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_21(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2364, 3))
								{
									iVar2 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14663 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_20(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2457694)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2932[iVar0] = 1;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_105220.f_14112[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_105220.f_14112[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_105220.f_14112[iVar3 /*104*/].f_99[Global_14493] == 1)
											{
												Global_16868++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16868), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70978)
								{
									iVar4 = 0;
									iVar4 = Global_4266200;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4266201[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4266201[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4266201[iVar5 /*104*/].f_99[Global_14493] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14493)
									{
										case 0:
											iVar6 = Global_37062;
											break;
										
										case 1:
											iVar6 = Global_37063;
											break;
										
										case 2:
											iVar6 = Global_37064;
											break;
										
										default:
											break;
									}
									func_19(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_20(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2369);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2364, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_20(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2364, 3))
								{
									iVar8 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14663 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_20(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_20(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2370[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_2364, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_20(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2370[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622819.f_1;
								func_19(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2932[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_19(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_20(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_20(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_20(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_20(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_20(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_20(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_21(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_22(char* sParam0)
{
	if (Global_16863 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_16863 = 0;
	}
}

void func_23()
{
	Global_1622819.f_1 = (Global_1622819.f_1 - 1);
	if (Global_1622819.f_1 < 0)
	{
		Global_1622819.f_1 = 0;
	}
}

void func_24(int iParam0, var uParam1)
{
	if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_26 == func_12())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_26 = iParam0;
			Global_2519572.f_4882.f_213 = uParam1;
			func_25(func_26(iParam0));
		}
	}
}

void func_25(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -406629659;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &Var0, 2, iParam0);
	}
}

int func_26(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Global_1622819.f_7[iVar0 /*8*/].f_7 == iParam1)
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

int func_28()
{
	return Global_1622819;
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_27(iLocal_122, 0);
	if (iLocal_122 == -1)
	{
		func_82(1);
		return;
	}
	iVar1 = Global_1622819.f_7[iVar0 /*8*/].f_2;
	if (!func_44(iVar1, 0, 1) || iLocal_123 != iVar1)
	{
		func_82(1);
		return;
	}
	func_39(&iLocal_125);
	if (func_37(&iLocal_125))
	{
		func_82(1);
		return;
	}
	if (func_36(&iLocal_125))
	{
		func_11(iVar0);
		func_82(1);
		return;
	}
	if (func_32(&iLocal_125))
	{
		if (func_31())
		{
			iLocal_124 = 1;
			iLocal_103 = 3;
		}
		else if (Global_1622819.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1622819.f_7[iVar0 /*8*/] == 1)
		{
			func_30(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_30(int iParam0)
{
	MISC::SET_BIT(&Global_1573884, 15);
	func_11(iParam0);
	Global_1622819.f_6 = 0;
	func_7(0);
}

bool func_31()
{
	return Global_1312416;
}

int func_32(int iParam0)
{
	if (!MISC::IS_BIT_SET(*iParam0, 0))
	{
		return 0;
	}
	if (Global_14471)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_14462))
	{
		return 0;
	}
	func_33();
	Global_14471 = 1;
	return 1;
}

void func_33()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14482, true);
		func_34();
	}
}

void func_34()
{
	if (func_35())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_35()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
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
	if (Global_4267680 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_36(int iParam0)
{
	if (!MISC::IS_BIT_SET(*iParam0, 1))
	{
		return 0;
	}
	if (Global_14471)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_14465))
	{
		return 0;
	}
	func_33();
	Global_14471 = 1;
	return 1;
}

int func_37(int iParam0)
{
	if (!MISC::IS_BIT_SET(*iParam0, 2))
	{
		return 0;
	}
	if (Global_14471)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_14463))
	{
		return 0;
	}
	func_38();
	Global_14471 = 1;
	return 1;
}

void func_38()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14482, true);
	}
}

void func_39(int iParam0)
{
	if (MISC::GET_GAME_TIMER() < iParam0->f_1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_14469) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
	{
		func_42();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_14470) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
	{
		func_40();
		iParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}
}

void func_40()
{
	func_92(Global_14474, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14482, true);
	func_41();
}

void func_41()
{
	if (func_35())
	{
		if (Global_14664 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_42()
{
	func_92(Global_14474, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14482, true);
	func_43();
}

void func_43()
{
	if (func_35())
	{
		if (Global_14664 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

int func_44(int iParam0, bool bParam1, bool bParam2)
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

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_28() > 1)
	{
		func_39(&iLocal_125);
	}
	if (func_32(&iLocal_125))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "GET_CURRENT_SELECTION");
		iVar0 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
		while (!GRAPHICS::_0x768FF8961BA904D6(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_122 = GRAPHICS::_0x2DE7EFA66B906036(iVar0);
		iVar1 = func_27(iLocal_122, 0);
		switch (Global_1622819.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_47();
				break;
			
			default:
				return;
		}
		Global_14493.f_1 = 8;
		return;
	}
	if (func_36(&iLocal_125))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "GET_CURRENT_SELECTION");
		iVar2 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
		while (!GRAPHICS::_0x768FF8961BA904D6(iVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_122 = GRAPHICS::_0x2DE7EFA66B906036(iVar2);
		iVar3 = func_27(iLocal_122, 0);
		switch (Global_1622819.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_11(iVar3);
				func_82(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_14(0))
	{
		func_46(0);
		func_82(0);
	}
}

void func_46(int iParam0)
{
	if (func_14(iParam0))
	{
		MISC::CLEAR_BIT(&(Global_1622819.f_3), iParam0);
	}
}

void func_47()
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
	
	if (Global_14493.f_1 != 8)
	{
		Global_14493.f_1 = 8;
	}
	func_92(Global_14474, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_27(iLocal_122, 0);
	iLocal_123 = Global_1622819.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1622819.f_7[iVar3 /*8*/].f_2;
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(26);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	if (func_44(iVar4, 0, 1))
	{
		Var5 = { func_79(iVar4) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_73(iVar4));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		bVar0 = true;
	}
	else
	{
		func_20("");
	}
	if (Global_1622819.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_14335)
		{
			bVar7 = func_72(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1624079[iVar4 /*558*/].f_11.f_11[iVar8] != func_12())
					{
						if (func_44(Global_1624079[iVar4 /*558*/].f_11.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1624079[iVar4 /*558*/].f_11.f_11[iVar8];
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
					func_20("BA_APP_BODYCTA");
				}
				else
				{
					func_20("BA_APP_BODY_TA");
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
					Var11 = { func_79(uVar6[iVar8]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var11);
					iVar8++;
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1622819.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1622819.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1622819.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar12);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1622819.f_88[iVar3 /*5*/]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_71(iVar4));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1622819.f_88[iVar3 /*5*/].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1622819.f_88[iVar3 /*5*/].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1622819.f_7[iVar3 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2");
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_73(Global_1622819.f_7[iVar3 /*8*/].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(Global_1622819.f_7[iVar3 /*8*/].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	if (bVar0)
	{
		iVar2 = func_53(Global_1622819.f_7[iVar3 /*8*/].f_2);
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
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sVar1);
	}
	else
	{
		func_20(&Local_119);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_92(Global_14474, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_51(&Local_116);
	func_48(13, &Local_110, 12, &Local_113, 4, &Local_104, &iLocal_125);
	iLocal_103 = 1;
}

void func_48(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_49(2, iParam0, sParam1, 0, iParam6, -1);
	func_49(1, iParam2, sParam3, 1, iParam6, 17);
	func_49(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_49(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_19(Global_14474, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(iParam4, iParam3);
		func_50(iParam5, 0);
		return;
	}
	if (Global_14481)
	{
		func_19(Global_14474, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(iParam4, iParam3);
		func_50(iParam5, 1);
		return;
	}
	func_19(Global_14474, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(iParam4, iParam3);
	func_50(iParam5, 1);
}

void func_50(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&Global_2363, iParam0);
		return;
	}
	MISC::CLEAR_BIT(&Global_2363, iParam0);
}

void func_51(char* sParam0)
{
	func_52(Global_14474, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_52(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	func_20(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_20(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_20(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_20(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_20(sParam6);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
	if (iVar0 == -1)
	{
		func_54(iParam0, 1);
		return 0;
	}
	Global_1374725[iVar0 /*5*/].f_4 = 1;
	return Global_1374725[iVar0 /*5*/].f_2;
}

void func_54(int iParam0, bool bParam1)
{
	if (!func_44(iParam0, 0, 1))
	{
		return;
	}
	if (func_56(iParam0) != -1)
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
	if (func_55(iParam0))
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

int func_55(int iParam0)
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

int func_56(int iParam0)
{
	int iVar0;
	
	if (!func_44(iParam0, 0, 1))
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
			func_57(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_57(int iParam0)
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
	func_58(&(Global_1374725[iVar2 /*5*/]));
	Global_1374886 = (Global_1374886 - 1);
}

void func_58(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_12();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_59(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_70(&(Global_1624079[iParam0 /*558*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1624079[iParam0 /*558*/].f_11.f_115 != Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_115)
	{
		sVar0 = func_65(iParam0, 0);
		return sVar0;
	}
	if (((func_64(iParam0, 28) || func_64(PLAYER::PLAYER_ID(), 28)) || func_63(iParam0)) && !func_61(iParam0))
	{
		return func_65(iParam0, 0);
	}
	iVar1 = func_60(iParam0);
	if (iVar1 != func_12())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_65(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_12())
	{
		sVar0 = func_70(&(Global_1624079[iVar1 /*558*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_65(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_60(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_12();
}

int func_61(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_62(iParam0) };
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

struct<13> func_62(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_63(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_12())
	{
		Var0 = { func_62(iParam0) };
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

bool func_64(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_11.f_4, iParam1);
}

char* func_65(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_67(iParam0, 1))
		{
			return func_66();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_66()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_67(int iParam0, bool bParam1)
{
	return func_68(iParam0, bParam1, 1);
}

int func_68(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_69(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_12() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	if (iParam0 != func_12())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_12())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_70(var uParam0)
{
	return uParam0;
}

var func_71(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_19;
}

bool func_72(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 26);
}

int func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (iVar0 != -1)
	{
		return func_74(iVar0);
	}
	return 1;
}

int func_74(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_75(iParam0);
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

var func_75(int iParam0)
{
	return Global_2417501.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_76(int iParam0)
{
	if (!iParam0 == func_12())
	{
		if (func_77(iParam0, 1))
		{
			return Global_2417501.f_2071.f_11[func_60(iParam0)];
		}
	}
	return -1;
}

bool func_77(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_78(iParam0))
		{
			return 0;
		}
	}
	return Global_1624079[iParam0 /*558*/].f_11 != func_12();
}

int func_78(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_12())
		{
			return Global_1624079[iParam0 /*558*/].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_79(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, PLAYER::GET_PLAYER_NAME(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_80()
{
	if (Global_1622819.f_6)
	{
		if (iLocal_103 != 3)
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_1622819.f_6 = 0;
			}
		}
	}
}

void func_81()
{
	PAD::SET_INPUT_EXCLUSIVE(0, 176);
	PAD::SET_INPUT_EXCLUSIVE(0, 177);
}

void func_82(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_123 = func_12();
	if (!Global_14493.f_1 == 7)
	{
		Global_14493.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_122;
	}
	if (iVar0 >= Global_1373436)
	{
		iVar0 = 0;
	}
	if (Global_16860)
	{
		func_47();
		Global_16860 = 0;
		return;
	}
	iVar1 = func_28();
	iVar1 = (iVar1 - func_91());
	if ((func_77(PLAYER::PLAYER_ID(), 0) && !func_90(1)) && iVar1 <= 0)
	{
		func_88();
		return;
	}
	func_83();
	func_92(Global_14474, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	func_51("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_48(13, &Local_107, 12, &Local_113, 4, &Local_104, &iLocal_125);
	}
	else
	{
		func_48(1, "", 1, "", 4, &Local_104, &iLocal_125);
	}
	iLocal_103 = 0;
}

void func_83()
{
	int iVar0;
	int iVar1;
	
	func_92(Global_14474, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Global_1622819.f_7[iVar0 /*8*/].f_1 == 1 && Global_1622819.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1622819.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_87(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_85(iVar0, iVar1))
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
	func_84();
}

void func_84()
{
	bool bVar0;
	
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(25);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	if (func_78(PLAYER::PLAYER_ID()))
	{
		func_20("BA_APP_NONEB");
	}
	else
	{
		func_20("BA_APP_NONE");
	}
	func_20("");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bVar0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_85(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1622819.f_7[iParam0 /*8*/].f_2 == func_12() || !func_44(Global_1622819.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(25);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	Var0 = { func_79(Global_1622819.f_7[iParam0 /*8*/].f_2) };
	func_86(&Var0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	iVar1 = 1;
	iVar2 = func_76(Global_1622819.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_74(iVar2);
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	return 1;
}

void func_86(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_87(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1622819.f_7[iParam0 /*8*/].f_2 == func_12() || !func_44(Global_1622819.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(25);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	Var0 = { func_79(Global_1622819.f_7[iParam0 /*8*/].f_2) };
	func_86(&Var0);
	bVar1 = func_72(Global_1622819.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_71(Global_1622819.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_20("BA_APP_BODYCT");
		}
		else
		{
			func_20("BA_APP_BODY_T");
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
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
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
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
	iVar3 = 1;
	iVar4 = func_76(Global_1622819.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_74(iVar4);
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	return 1;
}

void func_88()
{
	func_92(Global_14474, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(26);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::_SET_NOTIFICATION_COLOR_NEXT(func_73(PLAYER::PLAYER_ID()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_89());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_20("BA_APP_NONEG");
	func_20("CELL_AGBOSSPIC");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_92(Global_14474, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_51("CELL_BOSSAGE");
	func_48(1, "", 1, "", 4, &Local_104, &iLocal_125);
	iLocal_103 = 2;
}

char* func_89()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_60(PLAYER::PLAYER_ID());
	if (iVar0 != func_12())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_64(iVar0, 28) || func_64(PLAYER::PLAYER_ID(), 28)) || func_63(iVar0)) && !func_61(iVar0))
			{
				return func_65(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_65(iVar0, 0);
			}
		}
		sVar1 = func_70(&(Global_1624079[iVar0 /*558*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_65(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_90(bool bParam0)
{
	return func_67(PLAYER::PLAYER_ID(), bParam0);
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Global_1622819.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_92(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_93()
{
	Global_1622819.f_1 = 0;
	func_94();
}

void func_94()
{
	Global_1622819.f_5 = 0;
}

void func_95(var uParam0)
{
	*uParam0 = 0;
}

