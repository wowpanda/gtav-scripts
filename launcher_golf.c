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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_69[64] = "";
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
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	iLocal_118 = 6;
	iLocal_119 = 18;
	vLocal_90 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_90 = { vLocal_90 };
	uLocal_86 = uLocal_86;
	cLocal_69 = { cLocal_69 };
	bVar0 = false;
	if (HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_93(1);
	}
	uLocal_85 = GET_PLAYER_PED(PLAYER_ID());
	iLocal_95 = 0;
	func_91(&Global_105216, 0);
	func_88();
	if (func_87(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_32193)
	{
		WAIT(0);
	}
	if (!func_87(uLocal_94, 8))
	{
		if (!func_85(iLocal_100))
		{
			if (func_84(0, iLocal_99))
			{
				func_93(0);
			}
			else
			{
				func_93(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_84(0, iLocal_99))
		{
			func_93(1);
		}
	}
	if (func_87(uLocal_94, 8388608))
	{
		func_93(1);
	}
	if (func_87(uLocal_94, 524288) && (func_83() && !func_82()))
	{
		func_93(1);
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_87(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_81(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_80(10);
	}
	while (true)
	{
		uLocal_85 = GET_PLAYER_PED(PLAYER_ID());
		if (func_87(uLocal_94, 1048576))
		{
			if (IS_ENTITY_DEAD(uLocal_85, 0))
			{
				func_93(1);
			}
		}
		if (DOES_ENTITY_EXIST(uLocal_85) && !IS_ENTITY_DEAD(uLocal_85, 0))
		{
			vLocal_87 = { GET_ENTITY_COORDS(uLocal_85, 1) };
			fLocal_93 = VDIST2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = { vLocal_87 };
			vLocal_114 = { ScriptParam_0.f_1[0 /*3*/] };
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = VDIST2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_85(iLocal_100) || (func_87(uLocal_94, 16) && !func_87(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_79();
						func_80(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_81(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_80(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78())
					{
						iLocal_103 = iLocal_103;
						func_80(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (NETWORK_IS_IN_SESSION())
					{
						func_93(1);
						return;
					}
					if (!func_85(iLocal_100))
					{
						if (!func_87(uLocal_94, 8))
						{
							bVar1 = true;
							if (ARE_STRINGS_EQUAL(&(Global_93682.f_3), &cLocal_69))
							{
								cLocal_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_93(0);
								break;
							}
						}
					}
					if (!func_87(uLocal_94, 4))
					{
						func_77();
						func_76(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_93716)
					{
						if (iLocal_105 != 263)
						{
							if (func_75(6) && !func_74(iLocal_105))
							{
							}
							else
							{
								func_81(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_80(10);
					}
					else
					{
						cLocal_69 = { Local_53 };
						bVar2 = !func_87(uLocal_94, 64);
						func_91(&uLocal_94, 128);
						if (!func_73(3) && !Global_93716)
						{
							if (func_87(uLocal_94, 2097152))
							{
								if ((!func_87(uLocal_94, 1) || !DOES_ENTITY_EXIST(func_72())) && !Global_93716)
								{
									func_80(10);
									break;
								}
							}
						}
						if (func_87(uLocal_94, 524288) && (func_83() && !func_82()))
						{
							func_93(1);
						}
						if (func_71())
						{
							func_93(1);
						}
						if ((!func_63(6) || Global_105612) || func_62())
						{
							bVar2 = false;
						}
						if (func_87(uLocal_94, 1))
						{
							if (!func_61())
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_58(1))
						{
							bVar2 = false;
						}
						if (Global_71590)
						{
							bVar2 = false;
						}
						if (func_57())
						{
							bVar2 = false;
						}
						if (IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_56() || func_55(8, -1))
						{
							bVar2 = false;
						}
						if (!CAN_PLAYER_START_MISSION(PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (!IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER_ID()))
						{
							bVar2 = false;
						}
						if (func_54(0) || func_53())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (IS_PED_IN_ANY_VEHICLE(uLocal_85, 0))
							{
								if (!IS_ENTITY_AT_COORD(GET_VEHICLE_PED_IS_IN(uLocal_85, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 20f, 0, 0, iLocal_103))
								{
									bVar2 = false;
								}
							}
							else if (!IS_ENTITY_AT_COORD(uLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!IS_ENTITY_AT_COORD(uLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, 0))
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
							}
							iVar3 = GET_CLOCK_HOURS();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar3 < iLocal_118 && iVar3 >= iLocal_119)
								{
									func_59(&uLocal_94, 128);
									bVar2 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_87(uLocal_94, 134217728))
										{
											func_52("MG_NA_TIME", iLocal_118, iLocal_119);
											func_59(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_91(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_118 || iVar3 >= iLocal_119)
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_87(uLocal_94, 134217728))
									{
										func_52("MG_NA_TIME", iLocal_118, iLocal_119);
										func_59(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_91(&uLocal_94, 134217728);
								}
							}
							if (bVar2 && func_46(func_47()) < iLocal_120)
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
								if (!func_87(uLocal_94, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_120, -1);
									func_59(&uLocal_94, 33554432);
								}
							}
							else
							{
								func_91(&uLocal_94, 33554432);
							}
							if (!IS_PLAYER_CONTROL_ON(PLAYER_ID()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								SET_INPUT_EXCLUSIVE(0, 51);
								if (func_44(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										if (iLocal_120 > 0)
										{
											func_43(&iLocal_96, 4, "", 1, 0, 0, 0);
											func_42(sLocal_101, iLocal_120);
											func_59(&uLocal_94, 2048);
										}
										else
										{
											func_43(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
											func_59(&uLocal_94, 2048);
										}
									}
									else if (!func_87(uLocal_94, 2048) || !IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_41(&iLocal_96);
										func_91(&uLocal_94, 2048);
									}
									if (func_39(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_41(&iLocal_96);
										func_91(&uLocal_94, 2048);
										if (func_87(uLocal_94, 2048))
										{
											if (IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												func_91(&uLocal_94, 2048);
												CLEAR_HELP(0);
											}
										}
										REQUEST_SCRIPT(&cLocal_69);
										SET_PLAYER_CONTROL(PLAYER_ID(), 0, 56);
										func_80(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_41(&iLocal_96);
									func_91(&uLocal_94, 2048);
									if (func_87(uLocal_94, 2048))
									{
										if (IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_91(&uLocal_94, 2048);
											CLEAR_HELP(0);
										}
									}
									REQUEST_SCRIPT(&cLocal_69);
									SET_PLAYER_CONTROL(PLAYER_ID(), 0, 56);
									func_80(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								if (IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_41(&iLocal_96);
									func_91(&uLocal_94, 2048);
									CLEAR_HELP(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					SET_INPUT_EXCLUSIVE(0, 51);
					if (HAS_SCRIPT_LOADED(&cLocal_69))
					{
						if (iLocal_96 != -1)
						{
							func_41(&iLocal_96);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_87(uLocal_94, 1))
						{
							if (func_75(6) || func_75(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (IS_PLAYER_PLAYING(PLAYER_ID()))
							{
								CLEAR_PLAYER_WANTED_LEVEL(PLAYER_ID());
							}
							func_33();
							if (Global_37584)
							{
								func_24(PLAYER_PED_ID());
							}
							SET_PLAYER_CONTROL(PLAYER_ID(), 1, 56);
							uLocal_52 = START_NEW_SCRIPT(&cLocal_69, iLocal_97);
							SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
							Local_53 = { cLocal_69 };
							StringCopy(&cLocal_69, "", 64);
							func_91(&uLocal_94, 4);
							func_23();
							func_59(&uLocal_94, 2);
							func_80(6);
							func_19(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_18(iLocal_99);
								func_15(func_17(iLocal_99), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_80(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (func_87(Global_105216, 262144))
					{
						func_91(&Global_105216, 262144);
						func_13();
					}
					if (func_87(uLocal_94, 2097152))
					{
						if (!func_73(3) && !IS_THREAD_ACTIVE(uLocal_52))
						{
							func_80(10);
						}
					}
					if (!IS_THREAD_ACTIVE(uLocal_52))
					{
						PLAYSTATS_ODDJOB_DONE(ROUND((func_9(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_8(&uLocal_107);
						func_91(&uLocal_94, 256);
						func_7();
						if (bVar0)
						{
							func_91(&uLocal_94, 2);
						}
						else if (func_87(uLocal_94, 2))
						{
							if (func_87(Global_105216, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_91(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_91(&uLocal_94, 2);
							}
						}
						func_80(0);
						if (iLocal_99 != -1)
						{
							if (func_87(Global_105216, 0))
							{
								PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_93719, 0);
								func_5(func_17(iLocal_99), 0, Global_93719, 1, 0);
							}
							else
							{
								PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_99), 0, Global_93719, 0);
								func_5(func_17(iLocal_99), 0, Global_93719, 0, 0);
							}
						}
						func_4();
						func_91(&Global_105216, 0);
						if (func_87(uLocal_94, 16777216))
						{
							func_93(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_106565.f_9079)
							{
								if (!func_84(0, iLocal_99))
								{
									func_93(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_80(0);
					break;
				
				case 10:
					func_93(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_81(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_80(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_81(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_41(&iLocal_96);
					}
					if (!IS_STRING_NULL_OR_EMPTY(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							CLEAR_HELP(1);
						}
					}
					func_80(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!IS_PED_INJURED(PLAYER_PED_ID()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_85(iLocal_100) && func_84(0, iLocal_99))
									{
										func_88();
										if (iLocal_105 != 263)
										{
											func_81(iLocal_105, 1, 0);
										}
										func_80(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_81(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_80(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_88();
									if (iLocal_105 != 263)
									{
										func_81(iLocal_105, 1, 0);
									}
									func_80(0);
								}
							}
						}
						else
						{
							func_81(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (IS_STRING_NULL_OR_EMPTY(&Global_90782))
	{
		return;
	}
	if (COMPARE_STRINGS(sParam0, &Global_90782, 0, -1) != 0)
	{
		return;
	}
	PLAYSTATS_MISSION_OVER(sParam0, iParam1, uParam2, iParam3, iParam4, Global_87889);
	StringCopy(&Global_90782, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36387)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

void func_7()
{
	vector3 vVar0[24];
	
	if (IS_XBOX360_VERSION() || IS_DURANGO_VERSION())
	{
		NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (IS_PS3_VERSION() || IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		_NETWORK_SET_RICH_PRESENCE_2(0, &cVar0);
	}
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_9(var uParam0)
{
	if (func_12(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = TO_FLOAT(GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = GET_NETWORK_TIME();
		fVar3 = TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (TO_FLOAT(GET_GAME_TIMER()) / 1000f);
}

bool func_11(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!IS_STRING_NULL_OR_EMPTY(&Global_90782))
	{
		PLAYSTATS_MISSION_OVER(&Global_90782, 0, 0, 0, 1, 0);
		StringCopy(&Global_90782, "", 64);
	}
	StringCopy(&Global_90782, sParam0, 64);
	PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_16(0));
}

int func_16(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (IS_XBOX360_VERSION() || IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (IS_PS3_VERSION() || IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		_NETWORK_SET_RICH_PRESENCE_2(8, &cVar1);
	}
}

void func_19(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_22(uParam0);
	}
	else
	{
		func_20(uParam0);
	}
}

void func_20(var uParam0)
{
	func_21(uParam0, 0f);
}

void func_21(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(IS_BIT_SET(*uParam0, 4)) - fParam1);
	SET_BIT(uParam0, 1);
	CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_22(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_20(uParam0);
	}
}

void func_23()
{
	var uVar0;
	var uVar1[100];
	int iVar102;
	int iVar103;
	
	if (GET_CLOSEST_PED(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!IS_PED_INJURED(uVar0))
		{
			iVar102 = GET_PED_NEARBY_PEDS(uVar0, &uVar1, -1);
			CLEAR_PED_TASKS(uVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!IS_PED_INJURED(uVar1[iVar103]))
			{
				CLEAR_PED_TASKS(uVar1[iVar103]);
			}
			iVar103++;
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == PLAYER_PED_ID())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37371[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
{
	if (Global_3228[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	CLEAR_BIT(&Global_2423, 25);
	SET_BIT(&Global_2424, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_36(0))
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		SET_PLAYER_INVINCIBLE(GET_PLAYER_INDEX(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			FORCE_CLEANUP(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *iParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_85(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()
{
	if (IS_ENTITY_AT_COORD(uLocal_85, vLocal_90, fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
	{
		DISABLE_CONTROL_ACTION(0, 46, 1);
	}
	if (iLocal_120 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_120 = 0;
			sLocal_101 = "PLAY_GOLF";
		}
	}
}

int func_38(int iParam0)
{
	return Global_106565.f_24898[iParam0 /*4*/];
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!IS_PLAYER_PLAYING(GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_54(0))
	{
		return 0;
	}
	if (IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_42(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = GET_ID_OF_THIS_THREAD();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_44(var uParam0)
{
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uParam0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (!IS_ENTITY_IN_AIR(uParam0) && IS_VEHICLE_ON_ALL_WHEELS(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

int func_46(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_47()
{
	func_48();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_48()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_51(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_50(PLAYER_PED_ID());
			if (func_49(iVar0) && (!func_75(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_49(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)
{
	if (func_49(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_52(char* sParam0, int iParam1, int iParam2)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	ADD_TEXT_COMPONENT_INTEGER(iParam2);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, -1);
}

var func_53()
{
	return Global_68807;
}

int func_54(int iParam0)
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

var func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

bool func_56()
{
	return GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_57()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_58(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

void func_59(var uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61()
{
	if (func_75(6) || func_75(7))
	{
		return func_74(68);
	}
	return 1;
}

bool func_62()
{
	int iVar0;
	bool bVar1;
	
	if (IS_PED_INJURED(PLAYER_PED_ID()))
	{
		return 0;
	}
	GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		return ((((bVar1 && IS_CONTROL_PRESSED(0, 69)) || (bVar1 && IS_CONTROL_PRESSED(0, 70))) || (bVar1 && IS_CONTROL_PRESSED(0, 68))) || IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID()));
	}
	return (((((bVar1 && IS_CONTROL_PRESSED(0, 24)) || (bVar1 && IS_CONTROL_PRESSED(0, 25))) || (bVar1 && IS_CONTROL_PRESSED(0, 47))) || _0xDCCA191DF9980FD7(PLAYER_PED_ID())) || IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID()));
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
		{
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				iVar0 = func_47();
				if (!func_49(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_70()) || Global_105612) || Global_25767) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_66()) || func_57()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1) || func_70()) || Global_25767) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_GETTING_INTO_A_VEHICLE(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_70()) || Global_105612) || Global_25767) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((IS_PED_RAGDOLL(PLAYER_PED_ID()) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0)) || func_70()) || Global_105612) || Global_25767) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_57()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_70() || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || func_55(8, -1)) || func_57()) || func_65()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_68()) || func_67()) || func_65()) || func_64())
						{
							return 0;
						}
						if ((IS_PLAYER_SWITCH_IN_PROGRESS() && GET_PLAYER_SWITCH_TYPE() != 3) && GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
						{
							if ((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_70()) || Global_25767) || func_69()) || func_55(8, -1)) || func_67()) || func_66()) || func_57()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || func_70()) || func_67()) || Global_105612) || Global_25767) || func_69()) || Global_37584) || func_55(8, -1)) || func_66()) || func_65()) || func_57()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((IS_PED_IN_COMBAT(PLAYER_PED_ID(), 0) || !IS_PLAYER_CONTROL_ON(PLAYER_ID())) || !IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID())) || !IS_SCREEN_FADED_IN()) || IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0)) || IS_ENTITY_IN_AIR(PLAYER_PED_ID())) || IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1)) || IS_PED_RAGDOLL(PLAYER_PED_ID())) || IS_PED_FALLING(PLAYER_PED_ID())) || IS_PED_SWIMMING(PLAYER_PED_ID())) || IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1)) || IS_PLAYER_CLIMBING(PLAYER_ID())) || func_70()) || Global_105612) || Global_25767) || func_69()) || func_55(8, -1)) || func_66()) || func_65()) || func_68()) || func_67()) || func_57())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_64()
{
	return Global_93721.f_1;
}

int func_65()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_66()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_93734.f_340 > 0;
}

bool func_68()
{
	return Global_93734.f_339 > 0;
}

var func_69()
{
	return Global_1312867;
}

int func_70()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_71()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_72()
{
	return Global_89544;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_75(6) || func_75(7))
			{
				return 1;
			}
			else
			{
				return func_73(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_85(5))
			{
				if (func_63(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return DOES_BLIP_EXIST(Global_26140[iVar0 /*23*/].f_19);
}

bool func_75(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_77()
{
}

int func_78()
{
	return 1;
}

void func_79()
{
}

void func_80(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_81(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = IS_BIT_SET(Global_26140[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != IS_BIT_SET(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 18);
		if (Global_26137 == 1)
		{
			Global_26138 = 1;
		}
		Global_26137 = 1;
	}
	if (bParam1)
	{
		SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 0);
		SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 15);
		SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		CLEAR_BIT(&(Global_26140[iVar0 /*23*/].f_11), 0);
		CLEAR_BIT(&(Global_26140[iVar0 /*23*/].f_11), 15);
	}
	if (!IS_BIT_SET(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		if (DOES_BLIP_EXIST(Global_26140[iVar0 /*23*/].f_19))
		{
			SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			REMOVE_BLIP(&(Global_26140[iVar0 /*23*/].f_19));
			SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_82()
{
	if (IS_PC_VERSION())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	uVar0 = IS_BIT_SET(Global_106565.f_9079.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

bool func_85(int iParam0)
{
	return func_86(iParam0, Global_36425);
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_88()
{
	StringCopy(&Local_53, "golf", 64);
	iLocal_99 = 2;
	fLocal_117 = 7f;
	func_76(&uLocal_94, 1);
	if (func_75(6) || func_75(7))
	{
		iLocal_103 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_120 = 0;
		sLocal_101 = "PLAY_GOLF";
	}
	else
	{
		iLocal_120 = func_90(DOES_ENTITY_EXIST(func_72()));
		sLocal_101 = "PAY_PLAY_GOLF";
	}
	iLocal_105 = 68;
	fLocal_102 = (TO_FLOAT(func_89(iLocal_105)) + 5f);
	iLocal_97 = 28000;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_90(bool bParam0)
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_91(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

void func_92(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_81(iLocal_105, 0, 0);
		}
	}
	func_41(&iLocal_96);
	if (func_87(uLocal_94, 2048))
	{
		if (func_96(sLocal_101, iLocal_120))
		{
			func_91(&uLocal_94, 2048);
			CLEAR_HELP(0);
		}
	}
	if (func_87(uLocal_94, 2))
	{
		func_4();
		func_91(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_94();
	TERMINATE_THIS_THREAD();
}

void func_94()
{
	func_91(&uLocal_94, 4);
	func_95();
	if (IS_THREAD_ACTIVE(uLocal_52))
	{
		FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_52, 3);
	}
	if (!IS_STRING_NULL(&cLocal_69))
	{
		if (GET_LENGTH_OF_LITERAL_STRING(&cLocal_69) != 0)
		{
			SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_69);
		}
	}
}

void func_95()
{
}

bool func_96(char* sParam0, var uParam1)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

