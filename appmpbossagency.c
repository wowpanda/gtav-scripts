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
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	struct<2> Local_108 = { 0, 0 } ;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<2> Local_112 = { 0, 0 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<2> Local_116 = { 0, 0 } ;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	struct<2> Local_120 = { 0, 0 } ;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<2> Local_124 = { 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
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
	StringCopy(&Local_108, "CELL_214", 16);
	StringCopy(&Local_112, "CELL_243", 16);
	StringCopy(&Local_116, "CELL_244", 16);
	StringCopy(&Local_120, "CELL_265", 16);
	StringCopy(&Local_124, "CELL_300", 16);
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_96(&uLocal_131);
	iLocal_128 = 0;
	func_94();
	func_93(Global_14534, "SET_THEME", TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_83(0);
	while (true)
	{
		WAIT(0);
		func_82();
		func_81();
		if (!Global_14553.f_1 == 9 && Global_14553.f_1 > 3)
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
			if (Global_14553.f_1 != 8)
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
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1625180.f_6 = 0;
	TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
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
	
	Global_1625180.f_6 = 1;
	if (iLocal_130)
	{
		if (IS_CONTROL_JUST_RELEASED(2, Global_14522))
		{
			iLocal_130 = 0;
		}
		return;
	}
	if (IS_CONTROL_JUST_RELEASED(2, 201))
	{
		iLocal_103 = 1;
		iVar0 = func_28(iLocal_128, 0);
		func_6(iVar0);
		return;
	}
	if (IS_CONTROL_JUST_RELEASED(2, 202))
	{
		iLocal_103 = 1;
		return;
	}
	SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, -1, 0, 0, 1, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1625180.f_7[iParam0 /*8*/].f_2;
	if (Global_1625180.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_129 == iVar0)
	{
		func_25(iVar0, Global_1625180.f_7[iParam0 /*8*/].f_6);
		func_12(iParam0);
	}
	Global_1625180.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_14725)
	{
		func_9(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_8())
	{
		Global_14553.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
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
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
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
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1625180.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (IS_BIT_SET(Global_1625180.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_24();
				if (Global_1625180.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_24();
				}
				else
				{
					Global_1625180.f_4 = (Global_1625180.f_4 - 1);
					if (Global_1625180.f_4 < 0)
					{
						Global_1625180.f_4 = 0;
					}
					func_17();
				}
			}
			CLEAR_BIT(&(Global_1626536[PLAYER_ID() /*603*/].f_11.f_22), Global_1625180.f_7[iParam0 /*8*/].f_2);
			_REMOVE_NOTIFICATION(Global_1625180.f_7[iParam0 /*8*/].f_4);
			func_16();
			func_14(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1625180.f_7[iVar0 /*8*/] = { Global_1625180.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1625180.f_7[9 /*8*/].f_1 = 0;
		Global_1625180.f_7[9 /*8*/].f_2 = func_13();
	}
}

int func_13()
{
	return -1;
}

void func_14(int iParam0)
{
	if (!func_15(iParam0))
	{
		SET_BIT(&(Global_1625180.f_3), iParam0);
	}
}

bool func_15(int iParam0)
{
	return IS_BIT_SET(Global_1625180.f_3, iParam0);
}

void func_16()
{
	Global_1625180 = (Global_1625180 - 1);
}

void func_17()
{
	Global_16929 = (Global_16929 - 1);
	if (Global_16929 < 0)
	{
		func_23("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_18();
}

void func_18()
{
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_93(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(1);
			func_93(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
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
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_21(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
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
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											uVar6 = Global_37589;
											break;
										
										case 1:
											uVar6 = Global_37590;
											break;
										
										case 2:
											uVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(uVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_21(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2429);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (IS_BIT_SET(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_21(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_21(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_21(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && ARE_STRINGS_EQUAL(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && IS_BIT_SET(Global_2424, 6))
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_21(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_20(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_20(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(uParam2));
	if (fParam3 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam6));
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_21(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_21(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_21(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_21(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_21(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_21(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_22(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_23(char* sParam0)
{
	if (Global_16929 != 0)
	{
		if (!IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_16929 = 0;
	}
}

void func_24()
{
	Global_1625180.f_1 = (Global_1625180.f_1 - 1);
	if (Global_1625180.f_1 < 0)
	{
		Global_1625180.f_1 = 0;
	}
}

void func_25(int iParam0, var uParam1)
{
	if (Global_1626536[PLAYER_ID() /*603*/].f_11.f_26 == func_13())
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_1626536[PLAYER_ID() /*603*/].f_11.f_26 = iParam0;
			Global_2528542.f_4889.f_217 = uParam1;
			func_26(func_27(iParam0));
		}
	}
}

void func_26(int iParam0)
{
	struct<2> Var0;
	
	Var0 = 1378283060;
	Var0.f_1 = PLAYER_ID();
	if (!iParam0 == 0)
	{
		_0xA40CC53DF8E50837(1, &Var0, 2, iParam0);
	}
}

int func_27(var uParam0)
{
	var uVar0;
	
	SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_1625180.f_7[iVar0 /*8*/].f_7 == iParam1)
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

int func_29()
{
	return Global_1625180;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(iLocal_128, 0);
	if (iLocal_128 == -1)
	{
		func_83(1);
		return;
	}
	iVar1 = Global_1625180.f_7[iVar0 /*8*/].f_2;
	if (!func_45(iVar1, 0, 1) || iLocal_129 != iVar1)
	{
		func_83(1);
		return;
	}
	func_40(&uLocal_131);
	if (func_38(&uLocal_131))
	{
		func_83(1);
		return;
	}
	if (func_37(&uLocal_131))
	{
		func_12(iVar0);
		func_83(1);
		return;
	}
	if (func_33(&uLocal_131))
	{
		if (func_32())
		{
			iLocal_130 = 1;
			iLocal_103 = 3;
		}
		else if (Global_1625180.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1625180.f_7[iVar0 /*8*/] == 1)
		{
			func_31(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_31(int iParam0)
{
	SET_BIT(&Global_1573892, 15);
	func_12(iParam0);
	Global_1625180.f_6 = 0;
	func_7(0);
}

bool func_32()
{
	return Global_1312417;
}

int func_33(var uParam0)
{
	if (!IS_BIT_SET(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14531)
	{
		return 0;
	}
	if (!IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!IS_CONTROL_JUST_PRESSED(2, Global_14522))
	{
		return 0;
	}
	func_34();
	Global_14531 = 1;
	return 1;
}

void func_34()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_35();
	}
}

void func_35()
{
	if (func_36())
	{
		_MOVE_FINGER(5);
	}
}

int func_36()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_37(var uParam0)
{
	if (!IS_BIT_SET(*uParam0, 1))
	{
		return 0;
	}
	if (Global_14531)
	{
		return 0;
	}
	if (!IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!IS_CONTROL_JUST_PRESSED(2, Global_14525))
	{
		return 0;
	}
	func_34();
	Global_14531 = 1;
	return 1;
}

int func_38(var uParam0)
{
	if (!IS_BIT_SET(*uParam0, 2))
	{
		return 0;
	}
	if (Global_14531)
	{
		return 0;
	}
	if (!IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!IS_CONTROL_JUST_PRESSED(2, Global_14523))
	{
		return 0;
	}
	func_39();
	Global_14531 = 1;
	return 1;
}

void func_39()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

void func_40(var uParam0)
{
	if (GET_GAME_TIMER() < uParam0->f_1)
	{
		return;
	}
	if (!IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (IS_CONTROL_JUST_PRESSED(2, Global_14529) || IS_CONTROL_JUST_PRESSED(2, 181))
	{
		func_43();
		uParam0->f_1 = GET_GAME_TIMER() + 50;
	}
	if (IS_CONTROL_JUST_PRESSED(2, Global_14530) || IS_CONTROL_JUST_PRESSED(2, 180))
	{
		func_41();
		uParam0->f_1 = GET_GAME_TIMER() + 50;
	}
}

void func_41()
{
	func_93(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_42();
}

void func_42()
{
	if (func_36())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(2);
		}
		else
		{
			_MOVE_FINGER(1);
		}
	}
}

void func_43()
{
	func_93(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_44();
}

void func_44()
{
	if (func_36())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(1);
		}
		else
		{
			_MOVE_FINGER(2);
		}
	}
}

int func_45(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(uParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_46()
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_29() > 1)
	{
		func_40(&uLocal_131);
	}
	if (func_33(&uLocal_131))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
		uVar0 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uVar0))
		{
			WAIT(0);
		}
		iLocal_128 = GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uVar0);
		iVar1 = func_28(iLocal_128, 0);
		switch (Global_1625180.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_48();
				break;
			
			default:
				return;
		}
		Global_14553.f_1 = 8;
		return;
	}
	if (func_37(&uLocal_131))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
		uVar2 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uVar2))
		{
			WAIT(0);
		}
		iLocal_128 = GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uVar2);
		iVar3 = func_28(iLocal_128, 0);
		switch (Global_1625180.f_7[iVar3 /*8*/].f_1)
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

void func_47(int iParam0)
{
	if (func_15(iParam0))
	{
		CLEAR_BIT(&(Global_1625180.f_3), iParam0);
	}
}

void func_48()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar21[3];
	bool bVar25;
	int iVar26;
	int iVar27;
	char cVar28[16];
	struct<16> Var32;
	char cVar48[16];
	
	if (Global_14553.f_1 != 8)
	{
		Global_14553.f_1 = 8;
	}
	func_93(Global_14534, "SET_DATA_SLOT_EMPTY", TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_28(iLocal_128, 0);
	iLocal_129 = Global_1625180.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1625180.f_7[iVar3 /*8*/].f_2;
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (func_45(iVar4, 0, 1))
	{
		Var5 = { func_80(iVar4) };
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		_SET_NOTIFICATION_COLOR_NEXT(func_74(iVar4));
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		END_TEXT_COMMAND_SCALEFORM_STRING();
		bVar0 = true;
	}
	else
	{
		func_21("");
	}
	if (Global_1625180.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_14837)
		{
			bVar25 = func_73(iVar4);
			iVar26 = 0;
			while (iVar26 < 3)
			{
				if (iVar27 < 3)
				{
					if (Global_1626536[iVar4 /*603*/].f_11.f_11[iVar26] != func_13())
					{
						if (func_45(Global_1626536[iVar4 /*603*/].f_11.f_11[iVar26], 0, 1))
						{
							uVar21[iVar27] = Global_1626536[iVar4 /*603*/].f_11.f_11[iVar26];
							iVar27++;
						}
					}
				}
				iVar26++;
			}
			if (iVar27 == 0)
			{
				if (bVar25)
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
				StringCopy(&cVar28, "BA_APP_BODY_T4", 16);
				if (bVar25)
				{
					StringCopy(&cVar28, "BA_APP_BODYCT4", 16);
				}
				if (iVar27 == 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar27 > 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T6", 16);
					}
				}
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar28);
				iVar26 = 0;
				while (iVar26 < iVar27)
				{
					Var32 = { func_80(uVar21[iVar26]) };
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var32);
					iVar26++;
				}
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1625180.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1625180.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar48, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar48, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1625180.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar48, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar48, "BA_APP_BODY_T10", 16);
			}
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar48);
			ADD_TEXT_COMPONENT_INTEGER(Global_1625180.f_88[iVar3 /*5*/]);
			ADD_TEXT_COMPONENT_INTEGER(func_72(iVar4));
			ADD_TEXT_COMPONENT_INTEGER(Global_1625180.f_88[iVar3 /*5*/].f_3);
			ADD_TEXT_COMPONENT_INTEGER(Global_1625180.f_88[iVar3 /*5*/].f_4);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1625180.f_7[iVar3 /*8*/] == 1)
	{
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2");
		_SET_NOTIFICATION_COLOR_NEXT(func_74(Global_1625180.f_7[iVar3 /*8*/].f_2));
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_60(Global_1625180.f_7[iVar3 /*8*/].f_2));
		END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	if (bVar0)
	{
		iVar2 = func_54(Global_1625180.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			uVar1 = GET_PEDHEADSHOT_TXD_STRING(iVar2);
		}
	}
	if (bVar0)
	{
		_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(uVar1);
	}
	else
	{
		func_21(&Local_124);
	}
	END_SCALEFORM_MOVIE_METHOD();
	func_93(Global_14534, "DISPLAY_VIEW", TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_52(&Local_120);
	func_49(13, &Local_112, 12, &Local_116, 4, &Local_104, &uLocal_131);
	iLocal_103 = 1;
}

void func_49(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_50(2, iParam0, sParam1, 0, uParam6, -1);
	func_50(1, iParam2, sParam3, 1, uParam6, 17);
	func_50(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_50(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_20(Global_14534, "SET_SOFT_KEYS", TO_FLOAT(iParam0), 0f, TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(uParam4, iParam3);
		func_51(iParam5, 0);
		return;
	}
	if (Global_14541)
	{
		func_20(Global_14534, "SET_SOFT_KEYS", TO_FLOAT(iParam0), 1f, TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		SET_BIT(uParam4, iParam3);
		func_51(iParam5, 1);
		return;
	}
	func_20(Global_14534, "SET_SOFT_KEYS", TO_FLOAT(iParam0), 1f, TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	SET_BIT(uParam4, iParam3);
	func_51(iParam5, 1);
}

void func_51(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		SET_BIT(&Global_2423, iParam0);
		return;
	}
	CLEAR_BIT(&Global_2423, iParam0);
}

void func_52(char* sParam0)
{
	func_53(Global_14534, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_53(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_21(sParam2);
	if (!IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_21(sParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_21(sParam4);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_21(sParam5);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_21(sParam6);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

int func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = func_57(iParam0);
	if (iVar0 == -1)
	{
		func_55(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_55(int iParam0, bool bParam1)
{
	if (!func_45(iParam0, 0, 1))
	{
		return;
	}
	if (func_57(iParam0) != -1)
	{
		return;
	}
	if (Global_1383873)
	{
		if (iParam0 == Global_1383873.f_1)
		{
			return;
		}
	}
	if (func_56(iParam0))
	{
		return;
	}
	if (Global_1383911 >= 32)
	{
		return;
	}
	Global_1383878[Global_1383911] = iParam0;
	Global_1383911++;
	if (bParam1)
	{
	}
}

int func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383911)
	{
		if (Global_1383878[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (!func_45(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1383871 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383871)
	{
		if (Global_1383710[iVar0 /*5*/].f_1 == iParam0)
		{
			if (IS_PEDHEADSHOT_VALID(Global_1383710[iVar0 /*5*/].f_2) && IS_PEDHEADSHOT_READY(Global_1383710[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_58(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_58(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1383871)
	{
		return;
	}
	if (IS_PEDHEADSHOT_VALID(Global_1383710[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1383710[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, GET_PEDHEADSHOT_TXD_STRING(Global_1383710[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		UNREGISTER_PEDHEADSHOT(Global_1383710[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1383871)
	{
		Global_1383710[iVar32 /*5*/] = { Global_1383710[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_59(&(Global_1383710[iVar32 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_59(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = GET_NETWORK_TIME();
	}
}

char* func_60(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == PLAYER_ID())
	{
		uVar0 = func_71(&(Global_1626536[iParam0 /*603*/].f_11.f_104));
		return uVar0;
	}
	if (Global_1626536[iParam0 /*603*/].f_11.f_120 != Global_1626536[PLAYER_ID() /*603*/].f_11.f_120)
	{
		uVar0 = func_66(iParam0, 0);
		return uVar0;
	}
	if (((func_65(iParam0, 28) || func_65(PLAYER_ID(), 28)) || func_64(iParam0)) && !func_62(iParam0))
	{
		return func_66(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_13())
	{
		if (iVar1 != PLAYER_ID())
		{
			if (!IS_DURANGO_VERSION() && !_0x595F028698072DD9(0, -1, 1))
			{
				return func_66(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_13())
	{
		uVar0 = func_71(&(Global_1626536[iVar1 /*603*/].f_11.f_104));
		if (IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_66(iVar1, 0);
		}
		else
		{
			return uVar0;
		}
	}
	return "";
}

int func_61(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_13();
}

int func_62(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
	if (IS_DURANGO_VERSION())
	{
		if (_0x72D918C99BCACC54(0))
		{
			if (_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_63(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_13())
	{
		Var0 = { func_63(iParam0) };
		if (IS_ORBIS_VERSION() || IS_PC_VERSION())
		{
			if (_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (IS_DURANGO_VERSION())
		{
			if (_0x72D918C99BCACC54(0))
			{
				if (_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_65(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

var func_66(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_68(iParam0, 1))
		{
			return func_67();
		}
	}
	return _GET_LABEL_TEXT("GB_REST_ACC");
}

var func_67()
{
	return _GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_68(int iParam0, bool bParam1)
{
	return func_69(iParam0, bParam1, 1);
}

int func_69(int iParam0, bool bParam1, int iParam2)
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
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_13() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	if (iParam0 != func_13())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_13())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_71(var uParam0)
{
	return uParam0;
}

int func_72(int iParam0)
{
	if (func_61(iParam0) == func_13())
	{
		return 0;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_19;
}

int func_73(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 26);
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 != -1)
	{
		return func_75(iVar0);
	}
	return 1;
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
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

var func_76(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_77(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_78(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

bool func_78(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_79(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_13();
}

int func_79(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_13())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_80(var uParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, GET_PLAYER_NAME(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_81()
{
	if (Global_1625180.f_6)
	{
		if (iLocal_103 != 3)
		{
			if (!IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_1625180.f_6 = 0;
			}
		}
	}
}

void func_82()
{
	SET_INPUT_EXCLUSIVE(0, 176);
	SET_INPUT_EXCLUSIVE(0, 177);
}

void func_83(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_129 = func_13();
	if (!Global_14553.f_1 == 7)
	{
		Global_14553.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_128;
	}
	if (iVar0 >= Global_1382376)
	{
		iVar0 = 0;
	}
	if (Global_16926)
	{
		func_48();
		Global_16926 = 0;
		return;
	}
	iVar1 = func_29();
	iVar1 = (iVar1 - func_92());
	if ((func_78(PLAYER_ID(), 0) && !func_91(1)) && iVar1 <= 0)
	{
		func_89();
		return;
	}
	func_84();
	func_93(Global_14534, "DISPLAY_VIEW", TO_FLOAT(25), TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	func_52("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_49(13, &Local_108, 12, &Local_116, 4, &Local_104, &uLocal_131);
	}
	else
	{
		func_49(1, "", 1, "", 4, &Local_104, &uLocal_131);
	}
	iLocal_103 = 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	func_93(Global_14534, "SET_DATA_SLOT_EMPTY", TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_1625180.f_7[iVar0 /*8*/].f_1 == 1 && Global_1625180.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1625180.f_7[iVar0 /*8*/])
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

void func_85()
{
	var uVar0;
	
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (func_79(PLAYER_ID()))
	{
		func_21("BA_APP_NONEB");
	}
	else
	{
		func_21("BA_APP_NONE");
	}
	func_21("");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	uVar0 = NETWORK_IS_GAME_IN_PROGRESS();
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uVar0);
	END_SCALEFORM_MOVIE_METHOD();
}

int func_86(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	
	if (Global_1625180.f_7[iParam0 /*8*/].f_2 == func_13() || !func_45(Global_1625180.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	Var0 = { func_80(Global_1625180.f_7[iParam0 /*8*/].f_2) };
	func_87(&Var0);
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1");
	END_TEXT_COMMAND_SCALEFORM_STRING();
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar16 = 1;
	iVar17 = func_77(Global_1625180.f_7[iParam0 /*8*/].f_2);
	if (iVar17 != -1)
	{
		iVar16 = func_75(iVar17);
	}
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_87(var uParam0)
{
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

int func_88(int iParam0, var uParam1)
{
	struct<16> Var0;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (Global_1625180.f_7[iParam0 /*8*/].f_2 == func_13() || !func_45(Global_1625180.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam1);
	Var0 = { func_80(Global_1625180.f_7[iParam0 /*8*/].f_2) };
	func_87(&Var0);
	bVar16 = func_73(Global_1625180.f_7[iParam0 /*8*/].f_2);
	iVar17 = func_72(Global_1625180.f_7[iParam0 /*8*/].f_2);
	if (iVar17 == 0)
	{
		if (bVar16)
		{
			func_21("BA_APP_BODYCT");
		}
		else
		{
			func_21("BA_APP_BODY_T");
		}
	}
	else if (iVar17 == 1)
	{
		if (bVar16)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3");
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3");
		}
		ADD_TEXT_COMPONENT_INTEGER(iVar17);
		END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (bVar16)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2");
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2");
		}
		ADD_TEXT_COMPONENT_INTEGER(iVar17);
		END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	iVar18 = 1;
	iVar19 = func_77(Global_1625180.f_7[iParam0 /*8*/].f_2);
	if (iVar19 != -1)
	{
		iVar18 = func_75(iVar19);
	}
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar18);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_89()
{
	func_93(Global_14534, "SET_DATA_SLOT_EMPTY", TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	_SET_NOTIFICATION_COLOR_NEXT(func_74(PLAYER_ID()));
	ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_90());
	END_TEXT_COMMAND_SCALEFORM_STRING();
	func_21("BA_APP_NONEG");
	func_21("CELL_AGBOSSPIC");
	END_SCALEFORM_MOVIE_METHOD();
	func_93(Global_14534, "DISPLAY_VIEW", TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_52("CELL_BOSSAGE");
	func_49(1, "", 1, "", 4, &Local_104, &uLocal_131);
	iLocal_103 = 2;
}

char* func_90()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_61(PLAYER_ID());
	if (iVar0 != func_13())
	{
		if (iVar0 != PLAYER_ID())
		{
			if (((func_65(iVar0, 28) || func_65(PLAYER_ID(), 28)) || func_64(iVar0)) && !func_62(iVar0))
			{
				return func_66(iVar0, 0);
			}
			if (!IS_DURANGO_VERSION() && !_0x595F028698072DD9(0, -1, 1))
			{
				return func_66(iVar0, 0);
			}
		}
		uVar1 = func_71(&(Global_1626536[iVar0 /*603*/].f_11.f_104));
		if (IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return func_66(iVar0, 0);
		}
		else
		{
			return uVar1;
		}
	}
	return "";
}

bool func_91(bool bParam0)
{
	return func_68(PLAYER_ID(), bParam0);
}

int func_92()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_1625180.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_93(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam2));
	if (fParam3 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam6));
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_94()
{
	Global_1625180.f_1 = 0;
	func_95();
}

void func_95()
{
	Global_1625180.f_5 = 0;
}

void func_96(var uParam0)
{
	*uParam0 = 0;
}
