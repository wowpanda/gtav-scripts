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
	vector3 vLocal_112 = { 0f, 0f, 0f };
	struct<4> Local_113 = { 2, 0, 0, 3 } ;
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
	var uLocal_131 = 2;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 2;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	struct<8> Local_137[32];
	struct<184> Local_138 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_139 = 0;
	bool bLocal_140 = 0;
	bool bLocal_141 = 0;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	struct<21> Local_152 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	vLocal_112 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_147 = 4294967295;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_174(ScriptParam_152);
	}
	else
	{
		func_171();
	}
	while (true)
	{
		func_170();
		func_162();
		if (func_152() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_171();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_146() && !Global_40001.f_5357) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_141();
			}
			if (func_37())
			{
				func_171();
			}
			if (func_34(CAM::_0xDC9DA9E8789F5246()))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 3))
				{
					MISC::SET_BIT(&(Local_138.f_B6), 3);
				}
			}
			if ((((((((!Global_18044C && !func_33(2)) && !func_30(CAM::_0xDC9DA9E8789F5246(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) && !func_28(CAM::_0xDC9DA9E8789F5246())) && !func_26(func_27(CAM::_0xDC9DA9E8789F5246()))) && !func_24(CAM::_0xDC9DA9E8789F5246(), 146)) && !func_20(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_19(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 3, 1000, 0) || func_18(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 1000))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
						{
							if (!func_146())
							{
								func_17();
								if (PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
								{
									if (func_19(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 3, 0, 0) || func_18(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 0))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 4)
										{
											PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(CAM::_0xDC9DA9E8789F5246());
										}
									}
									else if (!func_16(&(Local_138.f_3)))
									{
										func_13(&(Local_138.f_3));
									}
									else if (func_10(&(Local_138.f_3)) > 20f || Local_138.f_B1)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 4)
										{
											PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(CAM::_0xDC9DA9E8789F5246());
										}
									}
								}
								else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 4)
								{
									PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
								}
								else
								{
									PLAYER::_0xDC64D2C53493ED12(CAM::_0xDC9DA9E8789F5246());
								}
							}
							else
							{
								if (Global_26862F.f_184E)
								{
									bLocal_140 = false;
									Global_26862F.f_184E = 0;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0 && !iLocal_144)
								{
									iLocal_144 = 1;
								}
								if (Global_40001.f_534C && !func_8(CAM::_0xDC9DA9E8789F5246()))
								{
									if ((!bLocal_140 && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) != 0) && iLocal_144)
									{
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
										HUD::_0x14621BB1DF14E2B2(0);
										iLocal_143 = 1;
									}
									if (func_2() && !bLocal_140)
									{
										bLocal_140 = true;
										HUD::_0x14621BB1DF14E2B2(5);
									}
								}
								if (func_2() && !bLocal_140)
								{
									bLocal_140 = true;
								}
								if (bLocal_140)
								{
									if (bLocal_141)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 2)
										{
											PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(2) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(CAM::_0xDC9DA9E8789F5246());
										}
									}
									else if (bLocal_142)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 3)
										{
											PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(3) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
										}
										else
										{
											PLAYER::_0xDC64D2C53493ED12(CAM::_0xDC9DA9E8789F5246());
										}
									}
									else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < Global_40001.f_530D)
									{
										PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_40001.f_530D) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
									}
									else
									{
										PLAYER::_0xDC64D2C53493ED12(CAM::_0xDC9DA9E8789F5246());
									}
								}
							}
						}
						else
						{
							if (func_16(&(Local_138.f_3)))
							{
								func_1(&(Local_138.f_3));
							}
							if (Local_138.f_B1)
							{
								Local_138.f_B1 = 0;
							}
							func_17();
						}
					}
					else
					{
						if (!Local_138.f_B1)
						{
							Local_138.f_B1 = 1;
						}
						func_17();
					}
				}
				else
				{
					if (Local_138.f_B1)
					{
						Local_138.f_B1 = 0;
					}
					func_17();
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_171();
		}
	}
}

void func_1(var uParam0)//Position - 0x4D5
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()//Position - 0x4EB
{
	int iVar0;
	
	if (func_19(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 3, 1000, 0) || func_18(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 1000))
	{
		if (Global_40001.f_5307)
		{
			return 0;
		}
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(CAM::_0xDC9DA9E8789F5246()))
		{
			bLocal_141 = false;
			bLocal_142 = false;
			return 1;
		}
		if (Global_40001.f_530E)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_141 = true;
							bLocal_142 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (VEHICLE::IS_VEHICLE_STOLEN(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
			{
				if ((!func_5(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 1) && !func_4(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0))) && !func_3(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
				{
					bLocal_141 = true;
					bLocal_142 = false;
					return 1;
				}
			}
		}
		if (Global_26862F.f_184C || Global_26862F.f_184D)
		{
			if (Global_26862F.f_184D)
			{
				bLocal_141 = false;
				bLocal_142 = true;
			}
			else
			{
				bLocal_141 = true;
				bLocal_142 = false;
			}
			Global_26862F.f_184C = 0;
			Global_26862F.f_184D = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x6ED
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x730
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)//Position - 0x764
{
	if (Global_11625)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x7A2
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("BARRACKS"):
		case joaat("BARRACKS2"):
		case joaat("BARRACKS3"):
		case joaat("BESRA"):
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
		case joaat("CARGOBOB"):
		case joaat("CRUSADER"):
		case joaat("FIRETRUK"):
		case joaat("LAZER"):
		case joaat("RHINO"):
		case joaat("TITAN"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x806
{
	int iVar0;
	int iVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0));
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		if ((iVar0 == iVar1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x8BF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_9(iParam0, 9);
	}
	return 0;
}

bool func_9(int iParam0, int iParam1)//Position - 0x8DD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

float func_10(int iParam0)//Position - 0x8F8
{
	if (func_16(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)//Position - 0x937
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = HUD::_0x13C4B962653A5280();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_12(var uParam0)//Position - 0x98F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

void func_13(int iParam0)//Position - 0x99F
{
	if (!func_16(iParam0))
	{
		func_14(iParam0);
	}
}

void func_14(int iParam0)//Position - 0x9B7
{
	func_15(iParam0, 0f);
}

void func_15(int iParam0, float fParam1)//Position - 0x9C6
{
	iParam0->f_1 = (func_11(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_16(var uParam0)//Position - 0x9F4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

void func_17()//Position - 0xA04
{
	if (iLocal_143)
	{
		HUD::_0x14621BB1DF14E2B2(5);
	}
	Global_26862F.f_184C = 0;
	Global_26862F.f_184D = 0;
	iLocal_143 = 0;
	bLocal_140 = false;
	bLocal_141 = false;
	iLocal_144 = 0;
}

int func_18(vector3 vParam0, int iParam1)//Position - 0xA37
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_19(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xD95
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
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_20(int iParam0)//Position - 0x1AE9
{
	return func_21(func_22(iParam0));
}

int func_21(int iParam0)//Position - 0x1AFB
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

int func_22(int iParam0)//Position - 0x1B21
{
	if (func_23(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_23(int iParam0, int iParam1)//Position - 0x1B44
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)//Position - 0x1B7F
{
	if (Global_18CD5B[iParam0 /*560*/] == iParam1)
	{
		return func_25(iParam0);
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1B9F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1BC5
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_25(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x1C03
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

int func_28(int iParam0)//Position - 0x1C22
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()//Position - 0x1C64
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_30(int iParam0, int iParam1)//Position - 0x1C75
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_31(4294967295, 0) == 8;
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

int func_31(int iParam0, bool bParam1)//Position - 0x1CC0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_32();
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

int func_32()//Position - 0x1D01
{
	return Global_1407E0;
}

bool func_33(int iParam0)//Position - 0x1D0D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18044B, iParam0);
}

int func_34(int iParam0)//Position - 0x1D1F
{
	if (iParam0 != func_36() && func_35(iParam0, 1, 1))
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135, 3);
	}
	return 0;
}

int func_35(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D53
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

int func_36()//Position - 0x1D9D
{
	return 4294967295;
}

int func_37()//Position - 0x1DA6
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_120())
		{
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38()//Position - 0x1DCE
{
	int iVar0;
	
	switch (Local_138.f_6)
	{
		case 0:
			func_119();
			if ((((((func_116(CAM::_0xDC9DA9E8789F5246(), 1) && func_115()) || func_22(CAM::_0xDC9DA9E8789F5246()) == 159) || func_22(CAM::_0xDC9DA9E8789F5246()) == 225) || func_22(CAM::_0xDC9DA9E8789F5246()) == 233) || func_27(CAM::_0xDC9DA9E8789F5246()) == 236) || Global_1805F9)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), 1);
			}
			func_113(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/]), 1);
			Local_138.f_B0 = 1;
			Local_138.f_6 = 1;
			break;
		
		case 1:
			if (func_112())
			{
				func_113(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/]), 2);
				Local_138.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_111(Local_113.f_14, 1))
			{
				Local_138.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_116(CAM::_0xDC9DA9E8789F5246(), 1) && !func_115()) && !func_146())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_105(iVar0);
					iVar0++;
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((func_103() && !func_116(CAM::_0xDC9DA9E8789F5246(), 1)) && !func_115()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_101(CAM::_0xDC9DA9E8789F5246()) != 6)
				{
					func_46();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_39(iVar0);
				iVar0++;
			}
			if (((func_22(CAM::_0xDC9DA9E8789F5246()) == 225 || func_22(CAM::_0xDC9DA9E8789F5246()) == 233) || func_27(CAM::_0xDC9DA9E8789F5246()) == 236) || Global_1805F9)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), 1);
			}
			if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_138.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((func_116(CAM::_0xDC9DA9E8789F5246(), 1) && func_115()) || func_22(CAM::_0xDC9DA9E8789F5246()) == 159) || func_22(CAM::_0xDC9DA9E8789F5246()) == 225) || func_22(CAM::_0xDC9DA9E8789F5246()) == 233) || func_27(CAM::_0xDC9DA9E8789F5246()) == 236) || Global_1805F9)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("RHINO"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_39(int iParam0)//Position - 0x2039
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_113.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_113.f_3[iParam0 /*5*/]), 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_138.f_AC[iParam0]))
			{
				HUD::REMOVE_BLIP(&(Local_138.f_AC[iParam0]));
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_138.f_AC[iParam0]) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) >= 2)
		{
			Local_138.f_AC[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_113.f_3[iParam0 /*5*/]));
			HUD::SET_BLIP_COLOUR(Local_138.f_AC[iParam0], 1);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_138.f_AC[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_138.f_AC[iParam0]));
	}
	switch (Local_113.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0], 16))
			{
				Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0] = 0;
				func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (PED::IS_PED_IN_ANY_PLANE(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) >= 4)
						{
							if (func_19(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 3, 500, 0))
							{
								func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0], 2))
			{
				if (func_43(iParam0))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_113.f_3[iParam0 /*5*/].f_4);
					iVar0 = NETWORK::NET_TO_PED(Local_113.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_113.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, 0);
							if ((!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
							{
								BRAIN::TASK_PLANE_MISSION(iVar0, iVar1, iVar3, iVar2, unk_0x8000C77B5F336760(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("vehicle_weapon_space_rocket"));
								PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, 0);
							}
						}
					}
				}
				if (func_42(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_113.f_3[iParam0 /*5*/].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_113.f_3[iParam0 /*5*/].f_4);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar0, iVar2, unk_0x8000C77B5F336760(iVar2, 1));
						}
					}
				}
				if (func_41(iParam0, 6))
				{
					func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0], 8))
			{
				if (func_43(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_113.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_113.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						BRAIN::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_41(iParam0, 9))
				{
					func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_113.f_3[iParam0 /*5*/]) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_113.f_3[iParam0 /*5*/].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_113.f_3[iParam0 /*5*/]), 0), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_113.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_113.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = NETWORK::NET_TO_ENT(Local_113.f_3[iParam0 /*5*/].f_1);
						ENTITY::DELETE_ENTITY(&uVar4);
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_113.f_3[iParam0 /*5*/]))
					{
						uVar5 = NETWORK::NET_TO_ENT(Local_113.f_3[iParam0 /*5*/]);
						ENTITY::DELETE_ENTITY(&uVar5);
					}
				}
			}
			else if (func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0], 16))
			{
				func_40(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_40(var uParam0, int iParam1)//Position - 0x24C6
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_41(int iParam0, int iParam1)//Position - 0x24DB
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_113.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (BRAIN::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_42(int iParam0)//Position - 0x2523
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_113.f_3[iParam0 /*5*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_43(int iParam0)//Position - 0x256E
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_113.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_44(var uParam0, int iParam1)//Position - 0x25B5
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_45(var uParam0, int iParam1)//Position - 0x25C6
{
	return (uParam0 && iParam1) != 0;
}

void func_46()//Position - 0x25D5
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_100();
	func_95();
	vVar2 = { vLocal_112 };
	if (((func_19(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 3, 1000, 0) || func_18(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 1000)) || func_93(AUDIO::_0x0626A247D2405330())) && func_92(AUDIO::_0x0626A247D2405330()))
	{
		bVar0 = true;
	}
	else
	{
		Local_138.f_B2 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_138.f_B3 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_138.f_B5 = 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_138.f_B5 = 2;
	}
	if (func_90(bVar0, bVar1))
	{
		func_88();
		if (!func_87())
		{
			Global_1801E2 = 1;
			func_86(&(Local_138.f_7), 2);
			func_85(&(Local_138.f_7), 2);
			func_84(&(Local_138.f_7), 2, 0, "AIRMECH", 0, 1);
			func_83(&(Local_138.f_7), 2, vVar2);
			Global_3B07.f_A2 = { vVar2 };
			Var3 = { func_82() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
			{
				if (func_65(&(Local_138.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_47(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_87())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 2))
		{
			Global_1801E2 = 0;
			func_86(&(Local_138.f_7), 2);
			func_85(&(Local_138.f_7), 2);
			MISC::SET_BIT(&(Local_138.f_B6), 2);
		}
	}
}

void func_47(bool bParam0, bool bParam1)//Position - 0x280B
{
	if (bParam0)
	{
		if (!func_62(16000, 4294967295, 4294967295))
		{
			func_61(16000, 1, 4294967295, 1);
			if (Global_26862F.f_1853)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_138.f_B4 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", 4294967295);
			}
		}
		else if (!func_62(16001, 4294967295, 4294967295))
		{
			func_61(16001, 1, 4294967295, 1);
			if (Global_26862F.f_1853)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_138.f_B4 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", 4294967295);
			}
		}
		Local_138.f_B2 = 1;
	}
	else if (bParam1)
	{
		if (!func_62(15999, 4294967295, 4294967295))
		{
			func_61(15999, 1, 4294967295, 1);
			if (Global_26862F.f_1853)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_138.f_B4 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", 4294967295);
			}
		}
		else if (Local_138.f_B5 == 1)
		{
			if (!func_62(16002, 4294967295, 4294967295))
			{
				func_61(16002, 1, 4294967295, 1);
				if (Global_26862F.f_1853)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_138.f_B4 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", 4294967295);
				}
			}
		}
		else if (Local_138.f_B5 == 2)
		{
			if (func_49(18097, 4294967295, 4294967295) == 0)
			{
				func_48(18097, 1, 4294967295, 1);
				if (Global_26862F.f_1853)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_138.f_B4 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", 4294967295);
				}
			}
		}
		Local_138.f_B3 = 1;
		Local_138.f_B5 = 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 2))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_138.f_B6), 2);
	}
}

var func_48(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29CC
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_32();
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

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x2EFE
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	uVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50(int iParam0)//Position - 0x2F44
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

int func_51(int iParam0, int iParam1)//Position - 0x32E6
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_32();
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

void func_52(char* sParam0, int iParam1)//Position - 0x362F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_53(char* sParam0)//Position - 0x3646
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	if (!func_54(sParam0))
	{
		func_52(sParam0, 4294967295);
	}
}

bool func_54(char* sParam0)//Position - 0x366B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_55()//Position - 0x367E
{
	if (func_58(CAM::_0xDC9DA9E8789F5246()) && !func_56(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)//Position - 0x36A5
{
	if (!bParam1)
	{
		if (func_57(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_36();
}

int func_57(int iParam0)//Position - 0x36D0
{
	if (iParam0 != func_36())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_36())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x3705
{
	int iVar0;
	
	if (func_60(iParam0))
	{
		iVar0 = func_59(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x373E
{
	if (iParam0 != func_36())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x3761
{
	if (iParam0 != func_36())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF != 0;
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3786
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
		iParam2 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_62(int iParam0, int iParam1, int iParam2)//Position - 0x3CEE
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_32();
	}
	iVar1 = func_64(iParam0, iParam1);
	uVar2 = func_63(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_63(int iParam0)//Position - 0x3D2B
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

int func_64(int iParam0, int iParam1)//Position - 0x4044
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_32();
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

bool func_65(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x433C
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x438A
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
					func_80();
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
		if (func_79(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_78();
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
				func_71();
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
				if (func_70())
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
			if (func_69())
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
			func_68();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_67();
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
		func_80();
	}
	return 0;
}

void func_67()//Position - 0x4656
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

void func_68()//Position - 0x4688
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

int func_69()//Position - 0x471D
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()//Position - 0x4744
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

void func_71()//Position - 0x47DD
{
	if (func_77(14))
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
		Global_38B1 = func_72();
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

var func_72()//Position - 0x487F
{
	func_73();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_73()//Position - 0x4898
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_76(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_75(AUDIO::_0x0626A247D2405330());
			if (func_74(iVar0) && (!func_77(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_74(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_74(int iParam0)//Position - 0x4995
{
	return iParam0 < 3;
}

int func_75(int iParam0)//Position - 0x49A1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_76(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_76(int iParam0)//Position - 0x49DE
{
	if (func_74(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_77(int iParam0)//Position - 0x4A08
{
	return Global_8D15 == iParam0;
}

void func_78()//Position - 0x4A16
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

bool func_79(int iParam0, int iParam1)//Position - 0x4A6E
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

void func_80()//Position - 0x4AA9
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

void func_81(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4B00
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = uParam5;
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

struct<6> func_82()//Position - 0x4B56
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_62(15999, 4294967295, 4294967295))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_62(16002, 4294967295, 4294967295) || func_49(18097, 4294967295, 4294967295) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_19(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 3, 1000, 0) || func_18(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 1000)) || func_93(AUDIO::_0x0626A247D2405330())) && func_92(AUDIO::_0x0626A247D2405330()))
	{
		if (!func_62(16000, 4294967295, 4294967295))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_62(16001, 4294967295, 4294967295))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_83(var uParam0, int iParam1, vector3 vParam2)//Position - 0x4C83
{
	uParam0->f_A1 = iParam1;
	uParam0->f_A2 = { vParam2 };
}

void func_84(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4C9B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_85(var uParam0, int iParam1)//Position - 0x4D36
{
	uParam0->f_A1 = 4294967197;
	uParam0->f_A2 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x4D54
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_87()//Position - 0x4D71
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_88()//Position - 0x4D93
{
	Global_3960 = 0;
	func_89();
}

void func_89()//Position - 0x4DA3
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_41C1 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

int func_90(bool bParam0, bool bParam1)//Position - 0x4DC7
{
	if (bParam0)
	{
		if (!Local_138.f_B2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 1))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
				{
					if (!func_62(16000, 4294967295, 4294967295) || !func_62(16001, 4294967295, 4294967295))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_138.f_B3)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || func_91())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_62(15999, 4294967295, 4294967295) || !func_62(16002, 4294967295, 4294967295))
						{
							if (ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()) >= -25f && ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_62(15999, 4294967295, 4294967295) || func_49(18097, 4294967295, 4294967295) == 0)
						{
							if (ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()) >= 160f && ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()) <= 290f)
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

int func_91()//Position - 0x4F49
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_92(int iParam0)//Position - 0x4F96
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x4FB8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && func_94(iParam0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x506C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_95()//Position - 0x508D
{
	if (Local_138.f_B4)
	{
		if (!func_99(&(Local_138.f_B7)))
		{
			func_98(&(Local_138.f_B7), 0, 0);
		}
		else if (!func_97(&(Local_138.f_B7), 17000, 0))
		{
			if (!func_54("AB_ENTRY_HT"))
			{
				func_52("AB_ENTRY_HT", 4294967295);
			}
		}
		else if (func_97(&(Local_138.f_B7), 17000, 0))
		{
			if (func_54("AB_ENTRY_HT"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			func_96(&(Local_138.f_B7));
			Local_138.f_B4 = 0;
		}
	}
}

void func_96(var uParam0)//Position - 0x510D
{
	uParam0->f_1 = 0;
}

int func_97(var uParam0, int iParam1, bool bParam2)//Position - 0x511A
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_98(uParam0, bParam2, 0);
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

void func_98(var uParam0, bool bParam1, bool bParam2)//Position - 0x5178
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

bool func_99(var uParam0)//Position - 0x51BD
{
	return uParam0->f_1;
}

void func_100()//Position - 0x51C9
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
	{
		if ((func_19(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 3, 1000, 0) || func_18(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), 1000)) || func_93(AUDIO::_0x0626A247D2405330()))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 0))
			{
				if ((((func_92(AUDIO::_0x0626A247D2405330()) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0))) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0) && func_91()) && !Global_199CC1)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 3))
					{
						MISC::SET_BIT(&(Local_138.f_B6), 1);
					}
				}
				MISC::SET_BIT(&(Local_138.f_B6), 0);
			}
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_138.f_B6), 0);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 1))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_138.f_B6), 1);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_138.f_B6, 3))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_138.f_B6), 3);
			}
			if (Global_199CC1)
			{
				Global_199CC1 = 0;
			}
		}
	}
}

int func_101(int iParam0)//Position - 0x52E8
{
	if (func_22(iParam0) == 233)
	{
		return func_102(iParam0);
	}
	return 4294967295;
}

int func_102(int iParam0)//Position - 0x5305
{
	if (func_23(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_B0;
	}
	return 4294967295;
}

int func_103()//Position - 0x5328
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_58(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_35(iVar1, 0, 1))
		{
			if (iVar1 != CAM::_0xDC9DA9E8789F5246())
			{
				if (func_104(PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246()), PLAYER::GET_PLAYER_PED(iVar1)))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 4294967295, 0) == PLAYER::GET_PLAYER_PED(iVar1))
					{
						if (func_58(iVar1))
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

bool func_104(int iParam0, int iParam1)//Position - 0x53AF
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, 0) == PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

void func_105(int iParam0)//Position - 0x53EE
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113[iParam0]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_113[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	switch (Local_113.f_15[iParam0])
	{
		case 0:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 64))
			{
				Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0] = 0;
				func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(iVar0, 1)) <= 900f)
					{
						func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(iVar0, 1)) <= 900f)
			{
				func_84(&(Local_138.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_110(&(Local_138.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					BRAIN::TASK_AIM_GUN_AT_ENTITY(iVar0, func_108(iParam0), 4294967295, 0);
				}
				if (func_107(iParam0, 1630799643))
				{
					func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), unk_0x8000C77B5F336760(iVar0, 1)) <= 900f) && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) < 1)
			{
				if (!func_16(&Local_138))
				{
					func_13(&Local_138);
				}
				if (func_10(&Local_138) >= 7f)
				{
					func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 8);
					func_110(&(Local_138.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_16(&Local_138))
			{
				func_1(&Local_138);
			}
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), unk_0x8000C77B5F336760(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_40001.f_530D));
					}
				}
			}
			if (func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(iVar0, 1)) > 900f)
					{
						func_40(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), unk_0x8000C77B5F336760(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
					}
					else
					{
						PLAYER::REPORT_CRIME(CAM::_0xDC9DA9E8789F5246(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_40001.f_530D) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()))));
					}
				}
			}
			if (func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(iVar0, 1)) > 900f)
					{
						func_40(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_107(iParam0, 1630799643))
			{
				if (func_109(iParam0))
				{
					BRAIN::TASK_AIM_GUN_AT_ENTITY(iVar0, func_108(iParam0), 4294967295, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_45(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(iVar0);
				}
				if (!func_107(iParam0, 1435919172))
				{
					func_40(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 4);
					func_40(&(Local_137[NETSHOP::_NETWORK_SHOP_BASKET_START() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_106(int iParam0)//Position - 0x58AF
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_113[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x5946
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113[iParam0]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_113[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x599B
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
			{
				fVar4 = SYSTEM::VDIST2(unk_0x8000C77B5F336760(iVar2, 1), unk_0x8000C77B5F336760(NETWORK::NET_TO_ENT(Local_113[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_109(int iParam0)//Position - 0x5A15
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_113[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5A58
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 1;
	return func_66(sParam2, iParam3, 0);
}

bool func_111(var uParam0, int iParam1)//Position - 0x5AA6
{
	return (uParam0 && iParam1) != 0;
}

int func_112()//Position - 0x5AB5
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("LAZER")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_113(var uParam0, int iParam1)//Position - 0x5AF1
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, var uParam1)//Position - 0x5B01
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_115()//Position - 0x5B12
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

int func_116(int iParam0, bool bParam1)//Position - 0x5B2E
{
	if (bParam1)
	{
		if (func_117(iParam0))
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

bool func_117(int iParam0)//Position - 0x5B5A
{
	return func_118(iParam0);
}

bool func_118(int iParam0)//Position - 0x5B68
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

void func_119()//Position - 0x5B82
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("LAZER"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

int func_120()//Position - 0x5BA5
{
	int iVar0;
	
	switch (Local_113.f_13)
	{
		case 0:
			if (func_140())
			{
				Local_113.f_13 = 1;
			}
			break;
		
		case 1:
			if (func_139())
			{
				Local_113.f_13 = 2;
			}
			break;
		
		case 2:
			if (((((func_116(CAM::_0xDC9DA9E8789F5246(), 1) || func_115()) || func_22(CAM::_0xDC9DA9E8789F5246()) == 225) || func_22(CAM::_0xDC9DA9E8789F5246()) == 233) || func_27(CAM::_0xDC9DA9E8789F5246()) == 236) || Global_1805F9)
			{
				func_113(&(Local_113.f_14), 1);
				Local_113.f_13 = 3;
			}
			else if (func_137())
			{
				func_113(&(Local_113.f_14), 1);
				Local_113.f_13 = 3;
			}
			break;
		
		case 3:
			if (!func_116(CAM::_0xDC9DA9E8789F5246(), 1) && !func_115())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_134(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_123(iVar0);
					iVar0++;
				}
			}
			if (((func_22(CAM::_0xDC9DA9E8789F5246()) == 225 || func_22(CAM::_0xDC9DA9E8789F5246()) == 233) || func_27(CAM::_0xDC9DA9E8789F5246()) == 236) || Global_1805F9)
			{
				func_122();
			}
			if (func_121())
			{
				Local_113.f_13 = 4;
			}
			break;
		
		case 4:
			func_122();
			return 1;
			break;
	}
	return 0;
}

int func_121()//Position - 0x5D0E
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_122()//Position - 0x5D4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_113[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_113.f_3[iVar0 /*5*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iVar0 /*5*/]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_113.f_3[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_123(int iParam0)//Position - 0x5E05
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_113.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_113.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_113.f_3[iParam0 /*5*/].f_1);
				vVar1 = { unk_0x8000C77B5F336760(iVar0, 1) };
				if (vVar1.z <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam0 /*5*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_113.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = NETWORK::NET_TO_VEH(Local_113.f_3[iParam0 /*5*/]);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_113.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_133(iParam0, 16))
			{
				Local_113.f_3[iParam0 /*5*/].f_4 = 4294967295;
				Local_113.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_131(iParam0))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_130(iParam0) };
			if (!func_129(vVar3))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vVar3, 20f) && !CAM::IS_SPHERE_VISIBLE(vVar3, 20f))
				{
					if (func_126(vVar3, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(Local_113.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_113.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_133(iParam0, 2))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = PLAYER::GET_PLAYER_PED(Local_113.f_3[iParam0 /*5*/].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (ENTITY::IS_ENTITY_DEAD(iVar4, 0))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar4) || PED::IS_PED_IN_ANY_HELI(iVar4))
			{
				if (func_125(PED::GET_VEHICLE_PED_IS_IN(iVar4, 0)))
				{
					Local_113.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_133(iParam0, 8))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 6;
				Local_113.f_3[iParam0 /*5*/].f_4 = 4294967295;
			}
			break;
		
		case 6:
			if (!func_124(iParam0, 16))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_131(iParam0))
			{
				Local_113.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_124(int iParam0, int iParam1)//Position - 0x605F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_45(Local_137[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x60A3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
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

int func_126(vector3 vParam0, float fParam1, int iParam2)//Position - 0x60E6
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam2 /*5*/]))
	{
		if (!func_128(&(Local_113.f_3[iParam2 /*5*/]), joaat("LAZER"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_113.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam2 /*5*/]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_127(&(Local_113.f_3[iParam2 /*5*/].f_1), Local_113.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), 4294967295, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_113.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_113.f_3[iParam2 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_127(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x61CE
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
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

int func_128(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x6256
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
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
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
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, iParam8);
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

int func_129(vector3 vParam0)//Position - 0x6350
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_130(int iParam0)//Position - 0x637A
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(Local_113.f_3[iParam0 /*5*/].f_4);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(unk_0x8000C77B5F336760(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_131(int iParam0)//Position - 0x63E3
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_132(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						vVar2 = { unk_0x8000C77B5F336760(iVar1, 0) };
						if (func_19(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_113.f_3[iParam0 /*5*/].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
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

int func_132(int iParam0)//Position - 0x6499
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = PLAYER::GET_PLAYER_PED(Local_113.f_3[iVar1 /*5*/].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iParam0 == Local_113.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)//Position - 0x6504
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_45(Local_137[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_134(int iParam0)//Position - 0x6549
{
	switch (Local_113.f_15[iParam0])
	{
		case 0:
			if (func_136(iParam0, 64))
			{
				Local_113.f_15[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_135(iParam0, 1))
			{
				Local_113.f_15[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_135(iParam0, 2))
			{
				Local_113.f_15[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_136(iParam0, 4))
			{
				Local_113.f_15[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_135(iParam0, 8))
			{
				Local_113.f_15[iParam0] = 5;
			}
			if (!func_135(iParam0, 1))
			{
				Local_113.f_15[iParam0] = 7;
			}
			if (func_135(iParam0, 16))
			{
				Local_113.f_15[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_135(iParam0, 16))
			{
				Local_113.f_15[iParam0] = 6;
			}
			if (!func_135(iParam0, 1))
			{
				Local_113.f_15[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_135(iParam0, 4))
			{
				Local_113.f_15[iParam0] = 0;
			}
			break;
	}
}

int func_135(int iParam0, int iParam1)//Position - 0x666B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_45(Local_137[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)//Position - 0x66AF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_45(Local_137[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_137()//Position - 0x66F4
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_138(&(Local_113[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113[0]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_113[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_138(&(Local_113[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_113[1]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_113[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_138(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x67B3
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
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, iParam7);
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

int func_139()//Position - 0x6812
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_111(Local_137[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_140()//Position - 0x6853
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_111(Local_137[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_141()//Position - 0x6894
{
	if (func_99(&uLocal_150) && func_97(&uLocal_150, Global_40001.f_5358, 0))
	{
		func_96(&uLocal_150);
	}
	if (func_99(&uLocal_148) && func_97(&uLocal_148, Global_40001.f_5359, 0))
	{
		func_96(&uLocal_148);
		iLocal_145 = 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) <= 0)
	{
		if (func_142())
		{
			if (!Global_26862F.f_1854)
			{
				Global_26862F.f_1854 = 1;
				func_52("BASE_EXP_WARN", 4294967295);
			}
			if (!iLocal_145)
			{
				iLocal_145 = 1;
				func_98(&uLocal_150, 0, 0);
				func_98(&uLocal_148, 0, 0);
			}
			else if (!func_99(&uLocal_150))
			{
				HUD::_0x14621BB1DF14E2B2(5);
				bLocal_140 = true;
				bLocal_141 = true;
				iLocal_145 = 0;
				func_96(&uLocal_150);
				func_96(&uLocal_148);
			}
		}
	}
}

int func_142()//Position - 0x6963
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_145(&uLocal_146, iVar1);
		iLocal_147 = func_144();
		if (iLocal_147 >= 0)
		{
			iVar0 = func_143(iLocal_147);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == AUDIO::_0x0626A247D2405330())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_143(int iParam0)//Position - 0x69C4
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = FIRE::_GET_PED_INSIDE_EXPLOSION_AREA(uLocal_146, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_144()//Position - 0x6F6C
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(uLocal_146, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return 4294967295;
}

void func_145(var uParam0, int iParam1)//Position - 0x7501
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

int func_146()//Position - 0x7676
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_58(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	if (func_151(1))
	{
		iVar0 = func_150();
		if (iVar0 != func_36())
		{
			if (func_58(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_35(iVar2, 0, 1))
		{
			if (iVar2 != CAM::_0xDC9DA9E8789F5246())
			{
				if (func_151(1))
				{
					if (func_148(CAM::_0xDC9DA9E8789F5246(), iVar2))
					{
						if (func_58(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_147(PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246()), PLAYER::GET_PLAYER_PED(iVar2)))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), 0);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, 4294967295, 0) == PLAYER::GET_PLAYER_PED(iVar2))
					{
						if (func_58(iVar2))
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

int func_147(int iParam0, int iParam1)//Position - 0x7743
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
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

int func_148(int iParam0, int iParam1)//Position - 0x77BF
{
	int iVar0;
	
	iVar0 = func_149(iParam0);
	if (!iVar0 == func_36())
	{
		if (iVar0 == func_149(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x77EA
{
	if (iParam0 != func_36())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_36();
}

var func_150()//Position - 0x780D
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_151(bool bParam0)//Position - 0x7822
{
	return func_56(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_152()//Position - 0x7834
{
	var uVar0;
	
	func_159(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(157))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_153() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_153()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_153()//Position - 0x78BE
{
	switch (func_154())
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

int func_154()//Position - 0x78F2
{
	return Global_6373;
}

bool func_155()//Position - 0x78FD
{
	return Global_255C02.f_24B;
}

int func_156(int iParam0)//Position - 0x790C
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()//Position - 0x7923
{
	return Global_25824F;
}

bool func_158()//Position - 0x792F
{
	return Global_255C02.f_246;
}

void func_159(var uParam0)//Position - 0x793E
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
					func_160(iVar0);
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

void func_160(int iParam0)//Position - 0x79B1
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_35(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_161(iVar2, &bVar3))
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

int func_161(int iParam0, var uParam1)//Position - 0x7A32
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

void func_162()//Position - 0x7A91
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 5)
	{
		if (func_169(5, 0, 1))
		{
			if (NETWORK::_0xCB215C4B56A7FAE7(0) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != 3)
	{
		if (func_163(3, 0, 1))
		{
			if (unk_0x16EE8745DB04D52E(0) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_163(int iParam0, bool bParam1, bool bParam2)//Position - 0x7ADD
{
	return func_164(1, iParam0, 1, bParam1, bParam2);
}

int func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7AF1
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_150F4B, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_168(iParam0) - func_167(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_166(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_167(iParam0, 1));
		}
		if (!bParam4 && Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_165(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x7BBA
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

int func_166(int iParam0)//Position - 0x7BF4
{
	switch (iParam0)
	{
		case 0:
			return Global_150F4B.f_1;
			break;
		
		case 1:
			return Global_150F4B.f_2;
			break;
		
		case 2:
			return Global_150F4B.f_3;
			break;
	}
	return 0;
}

int func_167(int iParam0, bool bParam1)//Position - 0x7C3A
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D1;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D2;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D3;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x7CD7
{
	switch (iParam0)
	{
		case 0:
			return Global_150F53;
			break;
		
		case 1:
			return Global_150F54;
			break;
		
		case 2:
			return Global_150F55;
			break;
	}
	return 0;
}

bool func_169(int iParam0, bool bParam1, bool bParam2)//Position - 0x7D17
{
	return func_164(0, iParam0, 1, bParam1, bParam2);
}

void func_170()//Position - 0x7D2B
{
	SYSTEM::WAIT(0);
}

void func_171()//Position - 0x7D38
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_121())
			{
				func_122();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_138.f_AC[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_138.f_AC[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_143)
	{
		HUD::_0x14621BB1DF14E2B2(5);
		iLocal_143 = 0;
	}
	Global_199CC1 = 0;
	func_173();
	func_172();
}

void func_172()//Position - 0x7DA4
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_173()//Position - 0x7DB0
{
	if (!Local_138.f_B0)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("LAZER")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("LAZER"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pilot_01"));
	}
}

void func_174(struct<21> Param0)//Position - 0x7E03
{
	func_178(func_179(Param0), Param0);
	func_176(0, 4294967295, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_113, 27);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_137, 257);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_175())
	{
		func_171();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_171();
	}
	Global_26862F.f_184E = 0;
}

int func_175()//Position - 0x7E62
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
		if (func_158())
		{
			return 0;
		}
		if (func_156(155))
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

int func_176(int iParam0, int iParam1, bool bParam2)//Position - 0x7EBB
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_172();
			}
			else
			{
				return 0;
			}
		}
		if (!func_177())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(155))
				{
					if (!bParam2)
					{
						func_172();
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
					func_172();
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
				func_172();
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
			func_172();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_177()//Position - 0x7FD0
{
	return Global_140842;
}

void func_178(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7FDC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_172();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_179(int iParam0)//Position - 0x7FFB
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
