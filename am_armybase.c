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
	float fLocal_96 = 0f;
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
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	struct<4> Local_117 = { 2, 0, 0, 3 } ;
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
	var uLocal_137 = 0;
	var uLocal_138 = 2;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 2;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	struct<8> Local_144[32];
	struct<184> Local_401 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_585 = 0;
	bool bLocal_586 = 0;
	bool bLocal_587 = 0;
	bool bLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	var uLocal_592 = 0;
	int iLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	iLocal_112 = -1;
	iLocal_113 = -1;
	vLocal_114 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_593 = -1;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_179(ScriptParam_0);
	}
	else
	{
		func_176();
	}
	while (true)
	{
		func_175();
		func_167();
		if (func_156() || NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_176();
		}
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_150() && !Global_262145.f_21341) && !NETWORK_IS_ACTIVITY_SESSION())
			{
				func_145();
			}
			if (func_39())
			{
				func_176();
			}
			if (func_36(PLAYER_ID()))
			{
				if (!IS_BIT_SET(Local_401.f_182, 3))
				{
					SET_BIT(&(Local_401.f_182), 3);
				}
			}
			if (((((((((!Global_1573970 && !func_35(2)) && !func_32(PLAYER_ID(), 0)) && !IS_PLAYER_SWITCH_IN_PROGRESS()) && IS_PLAYER_CONTROL_ON(PLAYER_ID())) && !func_30(PLAYER_ID())) && !func_28(func_29(PLAYER_ID()))) && !func_26(PLAYER_ID(), 146)) && !func_22(PLAYER_ID())) && !func_21(PLAYER_ID()))
			{
				if (func_20(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 1000))
				{
					if (!IS_BIT_SET(Global_2528542.f_4546, 0))
					{
						if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
						{
							if (!func_150())
							{
								func_18();
								if (IS_PED_IN_ANY_PLANE(PLAYER_PED_ID()) || IS_PED_IN_ANY_HELI(PLAYER_PED_ID()))
								{
									if (func_20(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 3, 0, 0) || func_19(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 0))
									{
										if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) < 4)
										{
											REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(4) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
										}
										else
										{
											_0xDC64D2C53493ED12(PLAYER_ID());
										}
									}
									else if (!func_17(&(Local_401.f_3)))
									{
										func_14(&(Local_401.f_3));
									}
									else if (func_11(&(Local_401.f_3)) > 20f || Local_401.f_177)
									{
										if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) < 4)
										{
											REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(4) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
										}
										else
										{
											_0xDC64D2C53493ED12(PLAYER_ID());
										}
									}
								}
								else if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) < 4)
								{
									REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(4) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
								}
								else
								{
									_0xDC64D2C53493ED12(PLAYER_ID());
								}
							}
							else
							{
								if (Global_2528542.f_6256)
								{
									bLocal_586 = false;
									Global_2528542.f_6256 = 0;
								}
								if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) == 0 && !iLocal_590)
								{
									iLocal_590 = 1;
								}
								if (Global_262145.f_21330 && !func_9(PLAYER_ID()))
								{
									if ((!bLocal_586 && GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) != 0) && iLocal_590)
									{
										CLEAR_PLAYER_WANTED_LEVEL(PLAYER_ID());
										SET_MAX_WANTED_LEVEL(0);
										iLocal_589 = 1;
									}
									if (func_2() && !bLocal_586)
									{
										bLocal_586 = true;
										SET_MAX_WANTED_LEVEL(5);
									}
								}
								if (func_2() && !bLocal_586)
								{
									bLocal_586 = true;
								}
								if (bLocal_586)
								{
									if (bLocal_587)
									{
										if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) < 2)
										{
											REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(2) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
										}
										else
										{
											_0xDC64D2C53493ED12(PLAYER_ID());
										}
									}
									else if (bLocal_588)
									{
										if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) < 3)
										{
											REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(3) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
										}
										else
										{
											_0xDC64D2C53493ED12(PLAYER_ID());
										}
									}
									else if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) < Global_262145.f_21267)
									{
										REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21267) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
									}
									else
									{
										_0xDC64D2C53493ED12(PLAYER_ID());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_401.f_3)))
							{
								func_1(&(Local_401.f_3));
							}
							if (Local_401.f_177)
							{
								Local_401.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_401.f_177)
						{
							Local_401.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_401.f_177)
					{
						Local_401.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_176();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	var uVar0;
	
	if (((func_20(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 1000)) && !func_8()) && !func_21(PLAYER_ID()))
	{
		if (Global_262145.f_21261)
		{
			return 0;
		}
		if (((IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(PLAYER_ID()))
		{
			bLocal_587 = false;
			bLocal_588 = false;
			return 1;
		}
		if (Global_262145.f_21268)
		{
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
				if (IS_VEHICLE_STOLEN(uVar0))
				{
					if (func_6(uVar0))
					{
						if ((!func_5(uVar0, 1) && !func_4(uVar0)) && !func_3(uVar0))
						{
							bLocal_587 = true;
							bLocal_588 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			if (IS_VEHICLE_STOLEN(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
			{
				if ((!func_5(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0), 1) && !func_4(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0))) && !func_3(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
				{
					bLocal_587 = true;
					bLocal_588 = false;
					return 1;
				}
			}
		}
		if (Global_2528542.f_6254 || Global_2528542.f_6255)
		{
			if (Global_2528542.f_6255)
			{
				bLocal_587 = false;
				bLocal_588 = true;
			}
			else
			{
				bLocal_587 = true;
				bLocal_588 = false;
			}
			Global_2528542.f_6254 = 0;
			Global_2528542.f_6255 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	var uVar0;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECOR_EXIST_ON(uParam0, "MPBitset"))
		{
			uVar0 = DECOR_GET_INT(uParam0, "MPBitset");
			if (IS_BIT_SET(uVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if ((DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECOR_EXIST_ON(uParam0, "CreatedByPegasus")) && DECOR_GET_BOOL(uParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0, bool bParam1)
{
	if (Global_71590)
	{
		if (DOES_ENTITY_EXIST(uParam0) && (!bParam1 || IS_VEHICLE_DRIVEABLE(uParam0, 0)))
		{
			if (DECOR_EXIST_ON(uParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	int iVar0;
	
	iVar0 = GET_ENTITY_MODEL(uParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_INTERIOR_FROM_ENTITY(GET_PLAYER_PED(uParam0));
	iVar1 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (IS_VALID_INTERIOR(iVar0) && IS_VALID_INTERIOR(iVar1))
	{
		if ((iVar0 == iVar1 && !IS_ENTITY_IN_ANGLED_AREA(GET_PLAYER_PED(uParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !IS_ENTITY_IN_ANGLED_AREA(GET_PLAYER_PED(uParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

var func_10(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

float func_11(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_12(bool bParam0)
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

bool func_13(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_14(var uParam0)
{
	if (!func_17(uParam0))
	{
		func_15(uParam0);
	}
}

void func_15(var uParam0)
{
	func_16(uParam0, 0f);
}

void func_16(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(IS_BIT_SET(*uParam0, 4)) - fParam1);
	SET_BIT(uParam0, 1);
	CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_18()
{
	if (iLocal_589)
	{
		SET_MAX_WANTED_LEVEL(5);
	}
	Global_2528542.f_6254 = 0;
	Global_2528542.f_6255 = 0;
	iLocal_589 = 0;
	bLocal_586 = false;
	bLocal_587 = false;
	iLocal_590 = 0;
}

int func_19(vector3 vParam0, int iParam3)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	
	iVar110 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar46[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar46[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar46[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar46[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar46[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar46[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar46[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar46[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar46[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar46[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar46[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar46[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar46[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_20(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_21(int iParam0)
{
	int iVar0;
	
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER_ID())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = GET_ENTITY_MODEL(GET_PLAYER_PED(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return func_23(func_24(iParam0));
}

int func_23(int iParam0)
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

int func_24(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_25(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_27(iParam0);
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_27(PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_29(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_30(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
	{
		if (iParam0 == PLAYER_ID())
		{
			return 1;
		}
	}
	if (IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return IS_BIT_SET(Global_2359302, 3);
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_33(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_34()
{
	return Global_1312745;
}

bool func_35(int iParam0)
{
	return IS_BIT_SET(Global_1573969, iParam0);
}

int func_36(int iParam0)
{
	if (iParam0 != func_38() && func_37(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
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

int func_38()
{
	return -1;
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_122())
		{
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_40()
{
	int iVar0;
	
	switch (Local_401.f_6)
	{
		case 0:
			func_121();
			if (((((((func_118(PLAYER_ID(), 1) && func_117()) || func_24(PLAYER_ID()) == 159) || func_24(PLAYER_ID()) == 225) || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574400) || (NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 1);
			}
			func_115(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_401.f_176 = 1;
			Local_401.f_6 = 1;
			break;
		
		case 1:
			if (func_114())
			{
				func_115(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_401.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_113(Local_117.f_20, 1))
			{
				Local_401.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_118(PLAYER_ID(), 1) && !func_117()) && !func_150())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_107(iVar0);
					iVar0++;
				}
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((func_105() && !func_118(PLAYER_ID(), 1)) && !func_117()) && !NETWORK_IS_ACTIVITY_SESSION()) && func_103(PLAYER_ID()) != 6)
				{
					func_48();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_41(iVar0);
				iVar0++;
			}
			if ((((func_24(PLAYER_ID()) == 225 || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574400) || (NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 1);
			}
			if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_401.f_6 = 4;
			}
			break;
		
		case 4:
			if (((((((func_118(PLAYER_ID(), 1) && func_117()) || func_24(PLAYER_ID()) == 159) || func_24(PLAYER_ID()) == 225) || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574400) || (NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_41(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (Local_117.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/]))
	{
		if (IS_ENTITY_DEAD(NET_TO_VEH(Local_117.f_3[iParam0 /*5*/]), 0))
		{
			if (DOES_BLIP_EXIST(Local_401.f_172[iParam0]))
			{
				REMOVE_BLIP(&(Local_401.f_172[iParam0]));
			}
		}
		else if (!DOES_BLIP_EXIST(Local_401.f_172[iParam0]) && GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) >= 2)
		{
			Local_401.f_172[iParam0] = ADD_BLIP_FOR_ENTITY(NET_TO_ENT(Local_117.f_3[iParam0 /*5*/]));
			SET_BLIP_COLOUR(Local_401.f_172[iParam0], 1);
		}
	}
	else if (DOES_BLIP_EXIST(Local_401.f_172[iParam0]))
	{
		REMOVE_BLIP(&(Local_401.f_172[iParam0]));
	}
	switch (Local_117.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					if (IS_PED_IN_ANY_PLANE(PLAYER_PED_ID()) || IS_PED_IN_ANY_HELI(PLAYER_PED_ID()))
					{
						if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) >= 4)
						{
							if (func_20(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 3, 500, 0))
							{
								func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_45(iParam0))
				{
					uVar2 = GET_PLAYER_PED(Local_117.f_3[iParam0 /*5*/].f_4);
					uVar0 = NET_TO_PED(Local_117.f_3[iParam0 /*5*/].f_1);
					uVar1 = NET_TO_VEH(Local_117.f_3[iParam0 /*5*/]);
					if (!IS_ENTITY_DEAD(uVar2, 0))
					{
						if (IS_PED_IN_ANY_PLANE(uVar2))
						{
							uVar3 = GET_VEHICLE_PED_IS_IN(uVar2, 0);
							if ((!IS_ENTITY_DEAD(uVar0, 0) && !IS_ENTITY_DEAD(uVar1, 0)) && !IS_ENTITY_DEAD(uVar3, 0))
							{
								TASK_PLANE_MISSION(uVar0, uVar1, uVar3, uVar2, GET_ENTITY_COORDS(uVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								SET_CURRENT_PED_VEHICLE_WEAPON(uVar0, joaat("vehicle_weapon_space_rocket"));
								SET_PED_CAN_SWITCH_WEAPON(uVar0, 0);
							}
						}
					}
				}
				if (func_44(iParam0))
				{
					uVar0 = NET_TO_PED(Local_117.f_3[iParam0 /*5*/].f_1);
					uVar2 = GET_PLAYER_PED(Local_117.f_3[iParam0 /*5*/].f_4);
					if (!IS_ENTITY_DEAD(uVar2, 0))
					{
						if (IS_PED_IN_ANY_PLANE(uVar2))
						{
							SET_VEHICLE_SHOOT_AT_TARGET(uVar0, uVar2, GET_ENTITY_COORDS(uVar2, 1));
						}
					}
				}
				if (func_43(iParam0, 6))
				{
					func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_45(iParam0))
				{
					uVar0 = NET_TO_PED(Local_117.f_3[iParam0 /*5*/].f_1);
					uVar1 = NET_TO_VEH(Local_117.f_3[iParam0 /*5*/]);
					if (!IS_ENTITY_DEAD(uVar0, 0) && !IS_ENTITY_DEAD(uVar1, 0))
					{
						TASK_PLANE_MISSION(uVar0, uVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_43(iParam0, 9))
				{
					func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_117.f_3[iParam0 /*5*/]) || NETWORK_DOES_NETWORK_ID_EXIST(Local_117.f_3[iParam0 /*5*/].f_1))
			{
				if (!IS_SPHERE_VISIBLE(GET_ENTITY_COORDS(NET_TO_ENT(Local_117.f_3[iParam0 /*5*/]), 0), 10f) && !IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(GET_ENTITY_COORDS(NET_TO_ENT(Local_117.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/].f_1) && NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = NET_TO_ENT(Local_117.f_3[iParam0 /*5*/].f_1);
						DELETE_ENTITY(&uVar4);
					}
					if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/]) && NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_3[iParam0 /*5*/]))
					{
						uVar5 = NET_TO_ENT(Local_117.f_3[iParam0 /*5*/]);
						DELETE_ENTITY(&uVar5);
					}
				}
			}
			else if (func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				func_42(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_43(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	uVar0 = NET_TO_VEH(Local_117.f_3[iParam0 /*5*/]);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 1;
	}
	if (GET_ACTIVE_VEHICLE_MISSION_TYPE(uVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	var uVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	uVar0 = NET_TO_PED(Local_117.f_3[iParam0 /*5*/].f_1);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 0;
	}
	if (!NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	var uVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	uVar0 = NET_TO_VEH(Local_117.f_3[iParam0 /*5*/]);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 0;
	}
	if (!NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
	{
		return 0;
	}
	return 1;
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var5;
	
	func_102();
	func_97();
	vVar2 = { vLocal_114 };
	if (((func_20(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 1000)) || func_95(PLAYER_PED_ID())) && func_94(PLAYER_PED_ID()))
	{
		bVar0 = true;
	}
	else
	{
		Local_401.f_178 = 0;
	}
	if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_401.f_179 = 0;
	}
	if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_401.f_181 = 1;
	}
	else if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_401.f_181 = 2;
	}
	if (func_92(bVar0, bVar1))
	{
		func_90();
		if (!func_89())
		{
			Global_1573347 = 1;
			func_88(&(Local_401.f_7), 2);
			func_87(&(Local_401.f_7), 2);
			func_86(&(Local_401.f_7), 2, 0, "AIRMECH", 0, 1);
			func_85(&(Local_401.f_7), 2, vVar2);
			Global_15155.f_162 = { vVar2 };
			Var5 = { func_84() };
			if (!IS_STRING_NULL_OR_EMPTY(&Var5))
			{
				if (func_67(&(Local_401.f_7), "SMGFZAU", &Var5, 7, 0, 0, 0))
				{
					func_49(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_89())
	{
		if (!IS_BIT_SET(Local_401.f_182, 2))
		{
			Global_1573347 = 0;
			func_88(&(Local_401.f_7), 2);
			func_87(&(Local_401.f_7), 2);
			SET_BIT(&(Local_401.f_182), 2);
		}
	}
}

void func_49(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_64(16000, -1, -1))
		{
			func_63(16000, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_401.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_64(16001, -1, -1))
		{
			func_63(16001, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_401.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		Local_401.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_64(15999, -1, -1))
		{
			func_63(15999, 1, -1, 1);
			if (Global_2528542.f_6261)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_401.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_401.f_181 == 1)
		{
			if (!func_64(16002, -1, -1))
			{
				func_63(16002, 1, -1, 1);
				if (Global_2528542.f_6261)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_401.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_401.f_181 == 2)
		{
			if (func_51(18097, -1, -1) == 0)
			{
				func_50(18097, 1, -1, 1);
				if (Global_2528542.f_6261)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_401.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_401.f_179 = 1;
		Local_401.f_181 = 0;
	}
	if (IS_BIT_SET(Local_401.f_182, 2))
	{
		CLEAR_BIT(&(Local_401.f_182), 2);
	}
}

var func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	iVar1 = func_53(iParam0, iParam1);
	uVar2 = func_52(iParam0);
	if (0 != iVar1)
	{
		if (!STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

void func_54(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_55(char* sParam0)
{
	if (IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		CLEAR_HELP(1);
	}
	if (!func_56(sParam0))
	{
		func_54(sParam0, -1);
	}
}

bool func_56(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_57()
{
	if (func_60(PLAYER_ID()) && !func_58(PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_59(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_38();
}

int func_59(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_38())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (func_62(iParam0))
	{
		iVar0 = func_61(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258 != 0;
	}
	return 0;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar1 = func_66(iParam0, iParam1);
	uVar2 = func_65(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_68(sParam2, iParam3, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_82();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_81(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_80();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			CLEAR_BIT(&Global_2423, 20);
			CLEAR_BIT(&Global_2424, 17);
			CLEAR_BIT(&Global_2425, 0);
			if (bParam2)
			{
				func_73();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				if (IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_72())
				{
					return 0;
				}
				if (IS_PED_SPRINTING(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_RAGDOLL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GET_IS_PED_GADGET_EQUIPPED(PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_PLAYER_CLIMBING(PLAYER_ID()))
					{
						return 0;
					}
					if (IS_PED_PLANTING_BOMB(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_SPECIAL_ABILITY_ACTIVE(PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_71())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
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
				if (IS_BIT_SET(Global_2423, 9))
				{
					return 0;
				}
			}
			func_70();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_69();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_82();
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	STOP_SCRIPTED_CONVERSATION(0);
	Global_15866 = 1;
}

void func_70()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	CLEAR_BIT(&Global_2424, 16);
}

int func_71()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar1, 1);
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (GET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 78, 1))
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

void func_73()
{
	if (func_79(14))
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_74();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_74()
{
	func_75();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_75()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_78(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_77(PLAYER_PED_ID());
			if (func_76(iVar0) && (!func_79(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_76(Global_106565.f_2357.f_539.f_4321))
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

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

int func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)
{
	if (func_76(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_79(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_80()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_81(int iParam0, int iParam1)
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

void func_82()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

struct<6> func_84()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_64(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_64(16002, -1, -1) || func_51(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 1000)) || func_95(PLAYER_PED_ID())) && func_94(PLAYER_PED_ID()))
	{
		if (!func_64(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_64(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_85(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_86(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_88(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_89()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	Global_14732 = 0;
	func_91();
}

void func_91()
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		RESTART_SCRIPTED_CONVERSATION();
		Global_16877 = 0;
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

int func_92(bool bParam0, bool bParam1)
{
	if (func_21(PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_401.f_178)
		{
			if (IS_BIT_SET(Local_401.f_182, 1))
			{
				if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
				{
					if (!func_64(16000, -1, -1) || !func_64(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_401.f_179)
		{
			if (IS_PLAYER_CONTROL_ON(PLAYER_ID()) && GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) == 0)
			{
				if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) || func_93())
				{
					if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_64(15999, -1, -1) || !func_64(16002, -1, -1))
						{
							if (GET_ENTITY_HEADING(PLAYER_PED_ID()) >= -25f && GET_ENTITY_HEADING(PLAYER_PED_ID()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (IS_ENTITY_IN_ANGLED_AREA(PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_64(15999, -1, -1) || func_51(18097, -1, -1) == 0)
						{
							if (GET_ENTITY_HEADING(PLAYER_PED_ID()) >= 160f && GET_ENTITY_HEADING(PLAYER_PED_ID()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_93()
{
	var uVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (IS_VEHICLE_STOLEN(uVar0))
		{
			if (func_6(uVar0))
			{
				if (!func_5(uVar0, 1) && !func_4(uVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_94(var uParam0)
{
	if (IS_PED_IN_ANY_PLANE(uParam0) || IS_PED_IN_ANY_HELI(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_95(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0) && func_96(uParam0))
	{
		if ((IS_ENTITY_IN_ANGLED_AREA(uParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(uParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(uParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_96(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_97()
{
	if (Local_401.f_180)
	{
		if (!func_101(&(Local_401.f_183)))
		{
			func_100(&(Local_401.f_183), 0, 0);
		}
		else if (!func_99(&(Local_401.f_183), 17000, 0))
		{
			if (!func_56("AB_ENTRY_HT"))
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (func_99(&(Local_401.f_183), 17000, 0))
		{
			if (func_56("AB_ENTRY_HT"))
			{
				CLEAR_HELP(1);
			}
			func_98(&(Local_401.f_183));
			Local_401.f_180 = 0;
		}
	}
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_99(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_100(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (ABSI(GET_TIME_DIFFERENCE(GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_101(var uParam0)
{
	return uParam0->f_1;
}

void func_102()
{
	if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
	{
		if ((func_20(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 1000)) || func_95(PLAYER_PED_ID()))
		{
			if (!IS_BIT_SET(Local_401.f_182, 0))
			{
				if ((((func_94(PLAYER_PED_ID()) && IS_ENTITY_IN_AIR(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0))) && GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) == 0) && func_93()) && !Global_1681564)
				{
					if (!IS_BIT_SET(Local_401.f_182, 1) && !IS_BIT_SET(Local_401.f_182, 3))
					{
						SET_BIT(&(Local_401.f_182), 1);
					}
				}
				SET_BIT(&(Local_401.f_182), 0);
			}
		}
		else
		{
			if (IS_BIT_SET(Local_401.f_182, 0))
			{
				CLEAR_BIT(&(Local_401.f_182), 0);
			}
			if (IS_BIT_SET(Local_401.f_182, 1))
			{
				CLEAR_BIT(&(Local_401.f_182), 1);
			}
			if (IS_BIT_SET(Local_401.f_182, 3))
			{
				CLEAR_BIT(&(Local_401.f_182), 3);
			}
			if (Global_1681564)
			{
				Global_1681564 = 0;
			}
		}
	}
}

int func_103(int iParam0)
{
	if (func_24(iParam0) == 233)
	{
		return func_104(iParam0);
	}
	return -1;
}

int func_104(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_105()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (func_60(PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = INT_TO_PLAYERINDEX(iVar0);
		if (func_37(iVar1, 0, 1))
		{
			if (iVar1 != PLAYER_ID())
			{
				if (func_106(GET_PLAYER_PED(PLAYER_ID()), GET_PLAYER_PED(iVar1)))
				{
					uVar2 = GET_VEHICLE_PED_IS_IN(GET_PLAYER_PED(iVar1), 0);
					if (GET_PED_IN_VEHICLE_SEAT(uVar2, -1, 0) == GET_PLAYER_PED(iVar1))
					{
						if (func_60(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_106(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return GET_VEHICLE_PED_IS_IN(iParam0, 0) == GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

void func_107(int iParam0)
{
	var uVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117[iParam0]))
	{
		return;
	}
	uVar0 = NET_TO_PED(Local_117[iParam0]);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return;
	}
	switch (Local_117.f_21[iParam0])
	{
		case 0:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uVar0, 1)) <= 900f)
					{
						func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uVar0, 1)) <= 900f) && !func_21(PLAYER_ID()))
			{
				func_86(&(Local_401.f_7), 4, uVar0, "ARMY_Guard01", 0, 1);
				func_112(&(Local_401.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_111(iParam0))
				{
					TASK_AIM_GUN_AT_ENTITY(uVar0, func_110(iParam0), -1, 0);
				}
				if (func_109(iParam0, 1630799643))
				{
					func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), GET_ENTITY_COORDS(uVar0, 1)) <= 900f) && GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) < 1)
			{
				if (!func_17(&Local_401))
				{
					func_14(&Local_401);
				}
				if (func_11(&Local_401) >= 7f && !func_21(PLAYER_ID()))
				{
					func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					func_112(&(Local_401.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_401))
			{
				func_1(&Local_401);
			}
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_108(iParam0) && VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), GET_ENTITY_COORDS(uVar0, 1)) <= 900f)
				{
					func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_150())
					{
						REPORT_CRIME(PLAYER_ID(), 36, GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						REPORT_CRIME(PLAYER_ID(), 36, GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21267));
					}
				}
			}
			if (func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uVar0, 1)) > 900f)
					{
						func_42(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_108(iParam0) && VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), GET_ENTITY_COORDS(uVar0, 1)) <= 900f)
				{
					func_46(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_150())
					{
						REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(4) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
					}
					else
					{
						REPORT_CRIME(PLAYER_ID(), 36, (GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_21267) - GET_WANTED_LEVEL_THRESHOLD(GET_PLAYER_WANTED_LEVEL(PLAYER_ID()))));
					}
				}
			}
			if (func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uVar0, 1)) > 900f)
					{
						func_42(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_109(iParam0, 1630799643))
			{
				if (func_111(iParam0))
				{
					TASK_AIM_GUN_AT_ENTITY(uVar0, func_110(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_47(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_111(iParam0))
				{
					CLEAR_PED_TASKS(uVar0);
				}
				if (!func_109(iParam0, 1435919172))
				{
					func_42(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					func_42(&(Local_144[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_108(int iParam0)
{
	var uVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117[iParam0]))
	{
		return 0;
	}
	uVar0 = NET_TO_PED(Local_117[iParam0]);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 0;
	}
	if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (IS_PED_SHOOTING(PLAYER_PED_ID()))
	{
		return 1;
	}
	if (IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), uVar0))
	{
		return 1;
	}
	if (IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), uVar0))
	{
		return 1;
	}
	if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117[iParam0]))
	{
		return 1;
	}
	uVar0 = NET_TO_PED(Local_117[iParam0]);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 1;
	}
	if (GET_SCRIPT_TASK_STATUS(uVar0, iParam1) != 1 && GET_SCRIPT_TASK_STATUS(uVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

var func_110(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			uVar2 = GET_PLAYER_PED(NETWORK_GET_PLAYER_INDEX(INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!IS_ENTITY_DEAD(uVar2, 0))
			{
				fVar4 = VDIST2(GET_ENTITY_COORDS(uVar2, 1), GET_ENTITY_COORDS(NET_TO_ENT(Local_117[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					uVar1 = uVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

int func_111(int iParam0)
{
	var uVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117[iParam0]))
	{
		return 0;
	}
	uVar0 = NET_TO_PED(Local_117[iParam0]);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 0;
	}
	if (!NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
	{
		return 0;
	}
	return 1;
}

int func_112(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 1;
	return func_68(sParam2, iParam3, 0);
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114()
{
	if (!HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!HAS_MODEL_LOADED(joaat("lazer")))
	{
		return 0;
	}
	if (!HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_115(var uParam0, int iParam1)
{
	func_116(uParam0, iParam1);
}

void func_116(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_117()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 0);
}

int func_118(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0);
}

var func_120(int iParam0)
{
	return IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_121()
{
	REQUEST_MODEL(joaat("s_m_y_marine_01"));
	REQUEST_MODEL(joaat("lazer"));
	REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

int func_122()
{
	int iVar0;
	
	switch (Local_117.f_19)
	{
		case 0:
			if (func_144())
			{
				Local_117.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_143())
			{
				Local_117.f_19 = 2;
			}
			break;
		
		case 2:
			if ((((((func_118(PLAYER_ID(), 1) || func_117()) || func_24(PLAYER_ID()) == 225) || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574400) || (NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_115(&(Local_117.f_20), 1);
				Local_117.f_19 = 3;
			}
			else if (func_141())
			{
				func_115(&(Local_117.f_20), 1);
				Local_117.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_118(PLAYER_ID(), 1) && !func_117())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_138(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_125(iVar0);
					iVar0++;
				}
			}
			if ((((func_24(PLAYER_ID()) == 225 || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574400) || (NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_124();
			}
			if (func_123())
			{
				Local_117.f_19 = 4;
			}
			break;
		
		case 4:
			func_124();
			return 1;
			break;
	}
	return 0;
}

int func_123()
{
	if (NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_124()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117[iVar0]))
		{
			uVar1 = NET_TO_PED(Local_117[iVar0]);
			if (!IS_ENTITY_DEAD(uVar1, 0))
			{
				SET_PED_AS_NO_LONGER_NEEDED(&uVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iVar0 /*5*/].f_1))
		{
			uVar1 = NET_TO_PED(Local_117.f_3[iVar0 /*5*/].f_1);
			if (!IS_ENTITY_DEAD(uVar1, 0))
			{
				SET_PED_AS_NO_LONGER_NEEDED(&uVar1);
			}
		}
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iVar0 /*5*/]))
		{
			uVar2 = NET_TO_VEH(Local_117.f_3[iVar0 /*5*/]);
			if (!IS_ENTITY_DEAD(uVar2, 0))
			{
				SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar2);
			}
		}
		iVar0++;
	}
}

void func_125(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar5;
	var uVar8;
	
	if (Local_117.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/].f_1))
		{
			if (!IS_ENTITY_DEAD(NET_TO_PED(Local_117.f_3[iParam0 /*5*/].f_1), 0))
			{
				uVar0 = NET_TO_PED(Local_117.f_3[iParam0 /*5*/].f_1);
				vVar1 = { GET_ENTITY_COORDS(uVar0, 1) };
				if (vVar1.z <= -150f)
				{
					SET_PED_AS_NO_LONGER_NEEDED(&uVar0);
					if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam0 /*5*/]))
					{
						if (!IS_ENTITY_DEAD(NET_TO_VEH(Local_117.f_3[iParam0 /*5*/]), 0))
						{
							uVar4 = NET_TO_VEH(Local_117.f_3[iParam0 /*5*/]);
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_117.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_137(iParam0, 16))
			{
				Local_117.f_3[iParam0 /*5*/].f_4 = -1;
				Local_117.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_135(iParam0))
			{
				Local_117.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar5 = { func_134(iParam0) };
			if (!func_133(vVar5))
			{
				if (!IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vVar5, 20f) && !IS_SPHERE_VISIBLE(vVar5, 20f))
				{
					if (func_128(vVar5, GET_ENTITY_HEADING(GET_PLAYER_PED(Local_117.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_117.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_137(iParam0, 2))
			{
				Local_117.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			uVar8 = GET_PLAYER_PED(Local_117.f_3[iParam0 /*5*/].f_4);
			if (!DOES_ENTITY_EXIST(uVar8))
			{
				Local_117.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (IS_ENTITY_DEAD(uVar8, 0))
			{
				Local_117.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (IS_PED_IN_ANY_PLANE(uVar8) || IS_PED_IN_ANY_HELI(uVar8))
			{
				if (func_127(GET_VEHICLE_PED_IS_IN(uVar8, 0)))
				{
					Local_117.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_137(iParam0, 8))
			{
				Local_117.f_3[iParam0 /*5*/].f_2 = 6;
				Local_117.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_126(iParam0, 16))
			{
				Local_117.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_135(iParam0))
			{
				Local_117.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_47(Local_144[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_128(vector3 vParam0, var uParam3, int iParam4)
{
	int iVar0;
	
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam4 /*5*/]))
	{
		if (!func_130(&(Local_117.f_3[iParam4 /*5*/]), joaat("lazer"), vParam0, uParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			CONTROL_LANDING_GEAR(NET_TO_VEH(Local_117.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam4 /*5*/]))
	{
		if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_129(&(Local_117.f_3[iParam4 /*5*/].f_1), Local_117.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				SET_CURRENT_PED_VEHICLE_WEAPON(NET_TO_PED(Local_117.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				SET_PED_CAN_SWITCH_WEAPON(NET_TO_PED(Local_117.f_3[iParam4 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_129(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = PED_TO_NET(CREATE_PED_INSIDE_VEHICLE(NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(NET_TO_PED(*uParam0), iParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_130(var uParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = CREATE_VEHICLE(iParam1, vParam2, uParam5, iParam7, iParam6, iParam14);
	if (DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = VEH_TO_NET(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			_SET_ENTITY_SOMETHING(iVar1, iParam10);
			if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER_ID(), 1);
				}
			}
			SET_VEHICLE_IS_STOLEN(iVar1, iParam9);
			_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				SET_CAR_BOOT_OPEN(iVar1);
				SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_131(vParam2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_131(vector3 vParam0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_132(PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam4) && VDIST(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = uParam3;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam5;
	}
}

int func_132(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = uParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (ABSF((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (VDIST(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_133(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_134(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	
	uVar0 = GET_PLAYER_PED(Local_117.f_3[iParam0 /*5*/].f_4);
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { _GET_OBJECT_OFFSET_FROM_COORDS(GET_ENTITY_COORDS(uVar0, 1), GET_ENTITY_HEADING(uVar0), 0f, -250f, (40f * TO_FLOAT(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_135(int iParam0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			uVar1 = GET_PLAYER_PED(NETWORK_GET_PLAYER_INDEX(INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_136(NETWORK_GET_PLAYER_INDEX(INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (IS_PED_IN_ANY_PLANE(uVar1) || IS_PED_IN_ANY_HELI(uVar1))
				{
					if (GET_PLAYER_WANTED_LEVEL(NETWORK_GET_PLAYER_INDEX(INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						vVar2 = { GET_ENTITY_COORDS(uVar1, 0) };
						if (func_20(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_117.f_3[iParam0 /*5*/].f_4 = NETWORK_GET_PLAYER_INDEX(INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = GET_PLAYER_PED(iParam0);
	if (!DOES_ENTITY_EXIST(uVar0))
	{
		return 1;
	}
	if (IS_ENTITY_DEAD(uVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uVar2 = GET_PLAYER_PED(Local_117.f_3[iVar1 /*5*/].f_4);
		if (DOES_ENTITY_EXIST(uVar2))
		{
			if (iParam0 == Local_117.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_47(Local_144[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_138(int iParam0)
{
	switch (Local_117.f_21[iParam0])
	{
		case 0:
			if (func_140(iParam0, 64))
			{
				Local_117.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_139(iParam0, 1))
			{
				Local_117.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_139(iParam0, 2))
			{
				Local_117.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_140(iParam0, 4))
			{
				Local_117.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_139(iParam0, 8))
			{
				Local_117.f_21[iParam0] = 5;
			}
			if (!func_139(iParam0, 1))
			{
				Local_117.f_21[iParam0] = 7;
			}
			if (func_139(iParam0, 16))
			{
				Local_117.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_139(iParam0, 16))
			{
				Local_117.f_21[iParam0] = 6;
			}
			if (!func_139(iParam0, 1))
			{
				Local_117.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_139(iParam0, 4))
			{
				Local_117.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_47(Local_144[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_47(Local_144[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_141()
{
	int iVar0;
	
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_142(&(Local_117[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117[0]))
	{
		GIVE_WEAPON_TO_PED(NET_TO_PED(Local_117[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_142(&(Local_117[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117[1]))
	{
		GIVE_WEAPON_TO_PED(NET_TO_PED(Local_117[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_142(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = CREATE_PED(iParam1, iParam2, vParam3, fParam6, iParam8, bParam7);
	*uParam0 = PED_TO_NET(uVar0);
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(uVar0, iParam9);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam7)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_113(Local_144[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_113(Local_144[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_145()
{
	if (func_101(&uLocal_596) && func_99(&uLocal_596, Global_262145.f_21342, 0))
	{
		func_98(&uLocal_596);
	}
	if (func_101(&uLocal_594) && func_99(&uLocal_594, Global_262145.f_21343, 0))
	{
		func_98(&uLocal_594);
		iLocal_591 = 0;
	}
	if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) <= 0)
	{
		if (func_146())
		{
			if (!Global_2528542.f_6262)
			{
				Global_2528542.f_6262 = 1;
				func_54("BASE_EXP_WARN", -1);
			}
			if (!iLocal_591)
			{
				iLocal_591 = 1;
				func_100(&uLocal_596, 0, 0);
				func_100(&uLocal_594, 0, 0);
			}
			else if (!func_101(&uLocal_596))
			{
				SET_MAX_WANTED_LEVEL(5);
				bLocal_586 = true;
				bLocal_587 = true;
				iLocal_591 = 0;
				func_98(&uLocal_596);
				func_98(&uLocal_594);
			}
		}
	}
}

int func_146()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_149(&uLocal_592, iVar1);
		iLocal_593 = func_148();
		if (iLocal_593 >= 0)
		{
			uVar0 = func_147(iLocal_593);
			if (DOES_ENTITY_EXIST(uVar0) && IS_ENTITY_A_PED(uVar0))
			{
				if (GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0) == PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_147(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(uLocal_592, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_148()
{
	if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(uLocal_592, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_149(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_60(PLAYER_ID()))
	{
		return 1;
	}
	if (func_155(1))
	{
		iVar0 = func_154();
		if (iVar0 != func_38())
		{
			if (func_60(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_37(iVar2, 0, 1))
		{
			if (iVar2 != PLAYER_ID())
			{
				if (func_155(1))
				{
					if (func_152(PLAYER_ID(), iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_151(GET_PLAYER_PED(PLAYER_ID()), GET_PLAYER_PED(iVar2)))
				{
					uVar3 = GET_VEHICLE_PED_IS_IN(GET_PLAYER_PED(iVar2), 0);
					if (GET_PED_IN_VEHICLE_SEAT(uVar3, -1, 0) == GET_PLAYER_PED(iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_151(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0) && DOES_ENTITY_EXIST(uParam1))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0) && !IS_ENTITY_DEAD(uParam1, 0))
		{
			if (IS_PED_IN_ANY_VEHICLE(uParam0, 0) && IS_PED_IN_ANY_VEHICLE(uParam1, 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(uParam0, 0);
				iVar1 = GET_VEHICLE_PED_IS_IN(uParam1, 0);
				if (DOES_ENTITY_EXIST(iVar0) && DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_153(iParam0);
	if (!iVar0 == func_38())
	{
		if (iVar0 == func_153(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_38();
}

var func_154()
{
	return Global_1626536[PLAYER_ID() /*603*/].f_11;
}

bool func_155(bool bParam0)
{
	return func_58(PLAYER_ID(), bParam0);
}

int func_156()
{
	var uVar0;
	
	func_164(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_163())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_162())
	{
		return 1;
	}
	if (func_161(157))
	{
		if (!func_160())
		{
			return 1;
		}
	}
	if (func_161(155))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_157() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_157()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	switch (func_159())
	{
		case 0:
			return func_158();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_158()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_159()
{
	return Global_25765;
}

bool func_160()
{
	return Global_2448756.f_586;
}

int func_161(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_2458613;
}

bool func_163()
{
	return Global_2448756.f_581;
}

void func_164(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_165(iVar0);
					break;
				
				case -42615386:
					GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_165(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			uVar3 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(uVar3))
			{
				if (IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_166(uVar4, &bVar5))
						{
							REMOVE_VEHICLE_WINDOW(uVar4, vVar0.z);
						}
						if (bVar5)
						{
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_166(var uParam0, var uParam1)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!IS_THIS_MODEL_A_TRAIN(GET_ENTITY_MODEL(uParam0)))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_167()
{
	if (GET_NUM_RESERVED_MISSION_PEDS(0, 0) != 5)
	{
		if (func_174(5, 0, 1))
		{
			if (_0xCB215C4B56A7FAE7(0) <= 5)
			{
				RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (GET_NUM_RESERVED_MISSION_VEHICLES(0, 0) != 3)
	{
		if (func_168(3, 0, 1))
		{
			if (_0x0CD9AB83489430EA(0) <= 3)
			{
				RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_168(int iParam0, bool bParam1, bool bParam2)
{
	return func_169(1, iParam0, 1, bParam1, bParam2);
}

int func_169(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!IS_BIT_SET(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_173(iParam0) - func_172(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_172(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_173(iParam0) - func_171(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_172(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_173(iParam0) - func_172(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[PLAYER_ID() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_170(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_172(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

bool func_174(int iParam0, bool bParam1, bool bParam2)
{
	return func_169(0, iParam0, 1, bParam1, bParam2);
}

void func_175()
{
	WAIT(0);
}

void func_176()
{
	int iVar0;
	
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_123())
			{
				func_124();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (DOES_BLIP_EXIST(Local_401.f_172[iVar0]))
		{
			REMOVE_BLIP(&(Local_401.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_589)
	{
		SET_MAX_WANTED_LEVEL(5);
		iLocal_589 = 0;
	}
	Global_1681564 = 0;
	func_178();
	func_177();
}

void func_177()
{
	TERMINATE_THIS_THREAD();
}

void func_178()
{
	if (!Local_401.f_176)
	{
		return;
	}
	if (HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	}
	if (HAS_MODEL_LOADED(joaat("lazer")))
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
	}
	if (HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pilot_01"));
	}
}

void func_179(struct<21> Param0)
{
	func_183(func_184(Param0), Param0);
	func_181(0, -1, 0);
	RESERVE_NETWORK_MISSION_PEDS(5);
	RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_117, 27);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_144, 257);
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_180())
	{
		func_176();
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_176();
	}
	Global_2528542.f_6256 = 0;
}

int func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_163())
		{
			return 0;
		}
		if (func_161(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		WAIT(0);
	}
	return 0;
}

int func_181(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
		if (!func_182())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_163())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_161(155))
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_177();
				}
				else
				{
					return 0;
				}
			}
		}
		WAIT(0);
		iVar0 = NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_177();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_182()
{
	return Global_1312844;
}

void func_183(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_177();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_184(int iParam0)
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
		
		case 124:
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
		
		case 125:
			return 32;
		
		case 126:
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
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}
