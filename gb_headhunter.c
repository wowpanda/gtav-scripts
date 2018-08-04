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
	struct<872> Local_105 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_106[32];
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122[4] = { 0, 0, 0, 0 };
	struct<8> Local_123[30];
	var uLocal_124[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<21> Local_132 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_114 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_948(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_909(ScriptParam_132);
	}
	else
	{
		func_861();
	}
	while (true)
	{
		func_860();
		if (func_852())
		{
			func_861();
		}
		Global_1665352.f_2 = Local_105.f_863;
		Global_1665352.f_3 = Local_105.f_864;
		switch (func_851(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_850() == 1)
				{
					if (func_849())
					{
						func_848();
						if (func_847())
						{
							func_832(166, 1, -1, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(3);
							func_831(0f);
							iLocal_113 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_112);
						}
						else
						{
							func_832(166, 0, -1, 0);
						}
						func_830();
						func_829();
						func_828();
						Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 1;
					}
				}
				else if (func_850() == 4)
				{
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_822(1))
				{
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 2;
				}
				if (func_850() == 1)
				{
					func_821();
					func_801();
					func_778();
					func_296();
					func_287();
					if (func_847() || func_285())
					{
						func_141(&(Global_1352938.f_533), &Global_1352938, 27, &(Global_1352938.f_1), &(Global_1352938.f_116), -1, 0, 0);
					}
					func_76();
				}
				else if (func_850() == 4)
				{
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
					func_73();
				}
				func_72();
				break;
			
			case 3:
				func_71(&(Local_105.f_845));
				if (func_70(&(Local_105.f_845)))
				{
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
			
			case 4:
				func_861();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_850())
			{
				case 0:
					func_68();
					func_67();
					if (func_25())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_105.f_863), &(Local_105.f_864));
						Local_105 = 1;
						Local_105.f_118 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_105.f_119 = PLAYER::PLAYER_ID();
						func_832(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_105 = 4;
					}
					else if (func_1())
					{
						Local_105 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2519572.f_4882.f_32)
	{
		Global_2519572.f_4882.f_32 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_105.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_105.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (MISC::IS_BIT_SET(Local_105.f_1, 1))
			{
				Local_105.f_117 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_105.f_1, 3))
			{
				Local_105.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!MISC::IS_BIT_SET(Local_105.f_1, 6))
	{
		if (!func_8(&(Local_105.f_849)))
		{
			func_7(&(Local_105.f_849), 0, 0);
		}
		else if (func_6(&(Local_105.f_849), 500, 0))
		{
			MISC::SET_BIT(&(Local_105.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
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

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_105.f_847)))
	{
		func_7(&(Local_105.f_847), 0, 0);
	}
	else if (func_6(&(Local_105.f_847), func_10(), 0))
	{
		MISC::SET_BIT(&(Local_105.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_14389;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_105.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_105.f_2[iVar0 /*26*/] == 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								Local_105.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_105.f_2[iVar0 /*26*/] == 1)
						{
							Local_105.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_105.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_105.f_2[iVar0 /*26*/].f_2)))
									{
										if (MISC::IS_BIT_SET(Local_105.f_109, iVar0))
										{
											MISC::SET_BIT(&(Local_105.f_108), iVar0);
											Local_105.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_105.f_110, iVar0))
										{
											MISC::SET_BIT(&(Local_105.f_108), iVar0);
											Local_105.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_105.f_111, iVar0))
										{
											MISC::SET_BIT(&(Local_105.f_108), iVar0);
											Local_105.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_105.f_112, iVar0))
										{
											Local_105.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_105.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_105.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1)))
							{
								Local_105.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_105.f_2[iVar0 /*26*/].f_2))
								{
									Local_105.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (MISC::IS_BIT_SET(Local_105.f_112, iVar0))
								{
									Local_105.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_105.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (MISC::IS_BIT_SET(Local_105.f_110, iVar0))
							{
								Local_105.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (MISC::IS_BIT_SET(Local_105.f_111, iVar0))
							{
								Local_105.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_105.f_2[iVar0 /*26*/].f_24)
						{
							Local_105.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_105.f_2[iVar0 /*26*/].f_25)
						{
							Local_105.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_105.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/] == 0)
							{
								Local_105.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_105.f_2[iVar0 /*26*/] == 2)
							{
								Local_105.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_105.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_105.f_2[iVar0 /*26*/].f_17 == 3 || Local_105.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_105.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/].f_24)
							{
								Local_105.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/].f_17 == 3 || Local_105.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_105.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_105.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
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

int func_14(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
		{
			if (!MISC::IS_BIT_SET(Local_105.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						MISC::SET_BIT(&(Local_105.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_17(iVar1, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312736;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_105.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_105 != 4)
	{
		iLocal_109 = 0;
		while (iLocal_109 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_109)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_109));
				if (!func_17(iVar3, 0))
				{
					if (func_948(iVar3, 1, 1))
					{
					}
					func_24(iLocal_109);
					func_23(iLocal_109);
					if (!MISC::IS_BIT_SET(Local_105.f_1, 2))
					{
						if (!bVar2)
						{
							if ((MISC::IS_BIT_SET(Local_105.f_1, 1) || MISC::IS_BIT_SET(Local_105.f_1, 3)) || MISC::IS_BIT_SET(Local_105.f_1, 5))
							{
								if (!MISC::IS_BIT_SET(Local_106[iLocal_109 /*14*/].f_1, 4))
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
			}
			else if (!MISC::IS_BIT_SET(Local_105.f_1, 5))
			{
				if (Local_105.f_118 > -1)
				{
					if (iLocal_109 == Local_105.f_118)
					{
						MISC::SET_BIT(&(Local_105.f_1), 5);
					}
				}
			}
			iLocal_109++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET(Local_105.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_105.f_115 != iVar0)
		{
			Local_105.f_115 = iVar0;
		}
		if (!MISC::IS_BIT_SET(Local_105.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				MISC::SET_BIT(&(Local_105.f_1), 1);
			}
		}
		if (!MISC::IS_BIT_SET(Local_105.f_1, 2))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_105.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
		{
			if (!MISC::IS_BIT_SET(Local_105.f_113, iVar0))
			{
				if (!func_8(&(Local_105.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_105.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_105.f_853[iVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_105.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_105.f_109, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_5, iVar0))
			{
				MISC::SET_BIT(&(Local_105.f_109), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_105.f_110, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_2, iVar0))
			{
				MISC::SET_BIT(&(Local_105.f_110), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_105.f_112, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_3, iVar0))
			{
				MISC::SET_BIT(&(Local_105.f_112), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_105.f_111, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_4, iVar0))
			{
				MISC::SET_BIT(&(Local_105.f_111), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_105.f_113, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_6, iVar0))
			{
				MISC::SET_BIT(&(Local_105.f_113), iVar0);
			}
			else if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_7, iVar0))
			{
				MISC::SET_BIT(&(Local_105.f_113), iVar0);
			}
		}
		if (Local_105.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_105.f_2[iVar0 /*26*/].f_24)
			{
				if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_12, iVar0))
				{
					Local_105.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_105.f_2[iVar0 /*26*/].f_25)
			{
				if (MISC::IS_BIT_SET(Local_106[iParam0 /*14*/].f_13, iVar0))
				{
					Local_105.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_105.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_105.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 1);
							MISC::SET_BIT(&(Local_105.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_105.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_44())
	{
		return 0;
	}
	if (!func_33())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = Local_105.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		vVar2 = { Local_105.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(vVar2, 0f, 0f, 0f, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = Local_105.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			vVar3 = { Local_105.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			fVar4 = Local_105.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(vVar3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_105.f_123[iVar0 /*36*/].f_32[iVar1];
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_31(iVar2))
					{
						if (!MISC::IS_BIT_SET(Local_105.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							MISC::CLEAR_AREA(vVar3, 10f, 1, 0, 0, true);
							MISC::SET_BIT(&(Local_105.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, vVar3, fVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_112);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
							VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2519572.f_6112 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_VISIBLE_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam11)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam10)
			{
				VEHICLE::_0xFC40CBF7B90CA77C(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

bool func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_105.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_105.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_105.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			func_35(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = Local_105.f_2[iParam0 /*26*/];
	iVar2 = Local_105.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				vVar3 = { Local_105.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(vVar3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_105.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_105.f_2[iParam0 /*26*/].f_2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), Local_105.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574813);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_112);
											PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, false, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_41();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_105.f_2[iParam0 /*26*/].f_22;
								vVar5 = { Local_105.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar6 = Local_105.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(vVar5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, vVar5, fVar6, 1, 1, 1))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574813);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_112);
										WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, false, true);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), vVar5, 7f, 0, 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_38();
										ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = func_37();
										PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_36()
{
	return SYSTEM::ROUND(Global_262145.f_14397);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_14396;
}

int func_39(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
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
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_41()
{
	return joaat("s_m_m_chemsec_01");
}

int func_42(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_105.f_2[iParam0 /*26*/] == 0 || Local_105.f_2[iParam0 /*26*/] == 2);
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_46(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_45(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_45(int iParam0)
{
	switch (Local_105.f_2[iParam0 /*26*/])
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	switch (Local_105.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_105.f_2[iParam0 /*26*/].f_11;
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_105.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_105.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_105.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_105.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_105.f_2[iParam0 /*26*/].f_2), iVar0, Local_105.f_2[iParam0 /*26*/].f_13, Local_105.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), true, true, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_2), 1, iLocal_112);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), false);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), false, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), true, 1);
								VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_2))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
					{
						iVar1 = Local_105.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_105.f_2[iParam0 /*26*/].f_1), Local_105.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), Global_1574813);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1, iLocal_112);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_105.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_105.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_105.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_105.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_105.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_105.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_105.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_105.f_2[iParam0 /*26*/].f_13, Local_105.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), Global_1574813);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1, iLocal_112);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_105.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_105.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_105.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_105.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_105.f_2[iParam0 /*26*/].f_16 = uVar3;
								Local_105.f_2[iParam0 /*26*/].f_22 = uVar4;
								func_51(vVar2);
							}
						}
						if (!func_28(Local_105.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_105.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_105.f_2[iParam0 /*26*/].f_13, Local_105.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), Global_1574813);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1, iLocal_112);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 42, true);
								PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 11, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 44, true);
								PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 1);
								WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, false, true);
								fVar7 = func_50(iParam0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), Local_105.f_2[iParam0 /*26*/].f_13, fVar7, 0, 0);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 132, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar5 = func_49();
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), iVar5);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								iVar6 = func_48();
								PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), iVar6);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), func_47());
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true, 1);
								MISC::SET_BIT(&(Local_105.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_47()
{
	return SYSTEM::ROUND(Global_262145.f_14395);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_14394;
}

float func_50(int iParam0)
{
	if (func_28(Local_105.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_51(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!MISC::IS_BIT_SET(Local_105.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(vParam0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_105.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_105.f_871), iVar0);
	}
	if (func_28(vParam0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_105.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_105.f_871), iVar0);
	}
	if (func_28(vParam0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_105.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_105.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_105.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_105.f_122);
			if (!func_28(Local_105.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_105.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_105.f_123[iVar0 /*36*/] };
					*uParam2 = Local_105.f_123[iVar0 /*36*/].f_3;
					Local_105.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_105.f_122);
			if (!func_28(Local_105.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_105.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_105.f_123[iVar0 /*36*/] };
					*uParam2 = Local_105.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_105.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (!func_28(Local_105.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_105.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_105.f_484[iVar0 /*36*/] };
					*uParam2 = Local_105.f_484[iVar0 /*36*/].f_3;
					Local_105.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405070.f_2 = 0;
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
	Global_2405070.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam12 > 0f)
	{
		if (func_60(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_54(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_54(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_948(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_56(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_948(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_55(iVar1) || !bParam8) && !Global_2423644[iVar1 /*406*/].f_255)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_56(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_56(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_55(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2423644[iParam0 /*406*/].f_241)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_59() && Global_1589291[iVar0 /*770*/].f_746) && !func_58(Global_1589291[iVar0 /*770*/].f_747))
	{
		return Global_1589291[iVar0 /*770*/].f_747;
	}
	return func_57(iParam0);
}

Vector3 func_57(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_58(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_2447942.f_16;
}

int func_60(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_948(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_61(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_57(iVar1), vParam0, true) < fParam1)
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

int func_61(int iParam0)
{
	if (func_66(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2498829 = { func_65(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2498829))
	{
		return 1;
	}
	if (func_62(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_63())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	return -1;
}

int func_64(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_63();
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2498829 = { func_65(iParam0) };
		Global_2498842 = { func_65(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2498829))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2498842))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498759, 35, &Global_2498829);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498794, 35, &Global_2498842);
				if (Global_2498759 == Global_2498794)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_67()
{
	Local_105.f_2[0 /*26*/] = 2;
	Local_105.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_105.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_105.f_2[1 /*26*/] = 2;
	Local_105.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_105.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_105.f_2[2 /*26*/] = 0;
	Local_105.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_105.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_105.f_2[3 /*26*/] = 0;
	Local_105.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_105.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_68()
{
	func_69();
	if (Local_105.f_122 == 0)
	{
		if (Local_105.f_121 == 0)
		{
			Local_105.f_122 = 10;
		}
		else
		{
			Local_105.f_122 = 9;
		}
	}
	if (MISC::IS_BIT_SET(Local_105.f_1, 4))
	{
		return;
	}
	switch (Local_105.f_121)
	{
		case 0:
			Local_105.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_105.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_105.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_105.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_105.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_105.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_105.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_105.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_105.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_105.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_105.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_105.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_105.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_105.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_105.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_105.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_105.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_105.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_105.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_105.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_105.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_105.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_105.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_105.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_105.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_105.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_105.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_105.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_105.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_105.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_105.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_105.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_105.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_105.f_123[6 /*36*/].f_14[2] = 180f;
			Local_105.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_105.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_105.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_105.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_105.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_105.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_105.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_105.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_105.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_105.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_105.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_105.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_105.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_105.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_105.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_105.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_105.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_105.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_105.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_105.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_105.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_105.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_105.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_105.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_105.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_105.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_105.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_105.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_105.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_105.f_484[0 /*36*/].f_3 = 179.583f;
			Local_105.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_105.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_105.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_105.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_105.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_105.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_105.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_105.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_105.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_105.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_105.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_105.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_105.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_105.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_105.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_105.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_105.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_105.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_105.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_105.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_105.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_105.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_105.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_105.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_105.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_105.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_105.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_105.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_105.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_105.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_105.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_105.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_105.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_105.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_105.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_105.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_105.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_105.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_105.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_105.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_105.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_105.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_105.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_105.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_105.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_105.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_105.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_105.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_105.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_105.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_105.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_105.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_105.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_105.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_105.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_105.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_105.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_105.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_105.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_105.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_105.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_105.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_105.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_105.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_105.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_105.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_105.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_105.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_105.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_105.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_105.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_105.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_105.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_105.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_105.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_105.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_105.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_105.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_105.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_105.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_105.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_105.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_105.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_105.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_105.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_105.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_105.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_105.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_105.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	MISC::SET_BIT(&(Local_105.f_1), 4);
}

var func_69()
{
	if (Local_105.f_121 != -1)
	{
		return Local_105.f_121;
	}
	if (Local_105.f_121 == -1)
	{
		if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) == -289320599)
		{
			Local_105.f_121 = 0;
		}
		else
		{
			Local_105.f_121 = 1;
		}
	}
	return Local_105.f_121;
}

int func_70(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_72()
{
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_105.f_119 != -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119);
	}
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_63())
				{
					if (iVar2 == iVar0 || func_74(iVar2, iVar0, 1))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574768[iVar1], Global_1574813);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574813, Global_1574768[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_63())
	{
		if (!bParam2)
		{
			if (func_75(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1624079[iParam0 /*558*/].f_11 != func_63())
		{
			return iParam1 == Global_1624079[iParam0 /*558*/].f_11;
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 != func_63())
	{
		if (iParam0 != func_63())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 != func_63())
			{
				if (Global_1624079[iParam0 /*558*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_76()
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	
	if (func_847())
	{
		return;
	}
	if (!func_285())
	{
		return;
	}
	iVar1 = -1;
	fVar2 = func_140(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!func_139(PLAYER::PLAYER_ID()))
		{
			if (!func_133())
			{
				func_129(0);
				NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
				MISC::SET_BIT(&iLocal_107, 18);
			}
		}
	}
	if (Local_105.f_119 > -1)
	{
		if (iVar1 > -1)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iVar1 /*26*/].f_1), false) };
		}
	}
	if (!func_28(vVar0, 0f, 0f, 0f, 0))
	{
		func_77(166, vVar0, &uLocal_126, 1140457472, 1144750080, 0);
	}
}

void func_77(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_128(PLAYER::PLAYER_ID()) && !func_127(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_1, 8)) && (func_126(PLAYER::PLAYER_ID()) || func_125(PLAYER::PLAYER_ID()))) || func_58(vParam1))
	{
		return;
	}
	Global_1665343 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_121(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_120(PLAYER::PLAYER_ID()) || func_118(PLAYER::PLAYER_ID()))
		{
			if (!HUD::_0x84698AB38D0C6636(1344549371))
			{
				HUD::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (HUD::_0x84698AB38D0C6636(1344549371))
		{
			HUD::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_117(PLAYER::PLAYER_ID(), 21))
		{
			func_116(vParam1, 1, 0);
		}
		if (!*uParam2 && func_948(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			if (func_115(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_114(iParam0));
				if (func_113(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					MISC::SET_BIT(&(Global_1665343.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				fVar1 = func_111(iParam0);
				if (fVar1 != 1f)
				{
					func_831(fVar1);
					MISC::SET_BIT(&(Global_1665343.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_110(iParam0) && func_120(PLAYER::PLAYER_ID()))
				{
					func_108(1);
					func_107(2);
				}
			}
			func_106(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_105(PLAYER::PLAYER_ID(), 19))
			{
				func_104(19);
			}
		}
		if (*uParam2 && func_948(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 0;
			if (func_115(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1665343.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1665343.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				func_103();
				MISC::CLEAR_BIT(&(Global_1665343.f_3), 1);
			}
			if (iParam5 && !func_128(PLAYER::PLAYER_ID()))
			{
				if (func_101(PLAYER::PLAYER_ID()) != 152)
				{
					func_80();
				}
			}
			if (func_79(2))
			{
				func_108(0);
				func_78(2);
			}
		}
	}
}

void func_78(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_37), iParam0);
}

bool func_79(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_37, iParam0);
}

void func_80()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_24), &Global_2409277, 2);
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_26), &Global_2409279, 18);
	func_99();
	func_83(1, 1, 0);
	func_81();
}

void func_81()
{
	func_82(0, 0);
}

void func_82(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_83(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_44), &Global_2409297, 317);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409297 };
		Global_2405070.f_44.f_49 = { Global_2409297.f_49 };
		Global_2405070.f_44.f_52 = Global_2409297.f_52;
		Global_2405070.f_44.f_53 = Global_2409297.f_53;
	}
	if (bParam0)
	{
		func_98();
	}
	if (!bParam2)
	{
		func_86(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_85(0);
	func_84();
}

void func_84()
{
	struct<6> Var0;
	
	if (Global_2405070.f_483.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405070.f_483 = { Var0 };
	}
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_701 = 0;
	}
	else
	{
		Global_2405070.f_701 = 1;
	}
}

void func_86(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_97())
		{
			func_96();
		}
		Global_2405070.f_702.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405070.f_702.f_504 = iParam1;
		Global_2405070.f_702.f_505 = iParam2;
		Global_2405070.f_702.f_506 = iParam10;
		func_94();
		func_90(8, 0, 0, 0, 0);
		Global_2405070.f_702.f_507 = iParam11;
		Global_2405070.f_702.f_510 = iParam3;
		Global_2405070.f_702.f_511 = iParam4;
		Global_2405070.f_702.f_508 = iParam5;
		Global_2405070.f_702.f_509 = iParam6;
		Global_2405070.f_702.f_512 = iParam7;
		Global_2405070.f_702.f_513 = iParam8;
		Global_2405070.f_702.f_514 = iParam9;
		Global_2405070.f_1735 = 1;
	}
	else
	{
		func_87();
	}
}

void func_87()
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	if (func_89())
	{
		func_88();
	}
	else
	{
		func_94();
		func_90(0, 0, 0, 0, 0);
		Global_2405070.f_1735 = 0;
		Global_2405070.f_1734 = 0;
	}
}

void func_88()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_702), &(Global_2405070.f_1218), 516);
	Global_2405070.f_483 = { Global_2405070.f_489 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_702.f_515)
	{
		Global_2405070.f_1734 = 0;
	}
}

int func_89()
{
	if ((Global_2405070.f_1734 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_1218.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_1218.f_515))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436641.f_1888.f_690.f_16 != func_63())
	{
		if (MISC::IS_BIT_SET(Global_2423644[Global_2436641.f_1888.f_690.f_16 /*406*/].f_396, 0) && func_91())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412387 = 0;
	}
	Global_2405070.f_483 = iParam0;
	Global_2405070.f_483.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405070.f_483.f_2 = iParam1;
	Global_2405070.f_483.f_3 = iParam2;
	Global_2405070.f_483.f_4 = iParam3;
	Global_2405070.f_483.f_5 = iParam4;
}

int func_91()
{
	if (((func_101(PLAYER::PLAYER_ID()) == 229 || func_101(PLAYER::PLAYER_ID()) == 191) || func_93()) || func_92())
	{
		return 0;
	}
	return 1;
}

var func_92()
{
	return Global_1574350;
}

int func_93()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	func_95();
	Global_2405070.f_702 = 0;
}

void func_95()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_702.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_96()
{
	if (func_89())
	{
		if (Global_2405070.f_702.f_515 == Global_2405070.f_1218.f_515)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_702.f_515)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_1218), &(Global_2405070.f_702), 516);
		Global_2405070.f_489 = { Global_2405070.f_483 };
		Global_2405070.f_1734 = 1;
	}
}

int func_97()
{
	if ((Global_2405070.f_1735 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_702.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_702.f_515))
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405070.f_361), &Global_2409614, 121);
}

void func_99()
{
	func_100();
	Global_2405070.f_2244 = 0;
}

void func_100()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405070.f_2245[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_101(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_102(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2519572.f_4878))
	{
		if (!Global_2519572.f_4878 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2519572.f_4877 < 1f)
		{
			return;
		}
	}
	Global_2519572.f_4878 = -1;
	Global_2519572.f_4877 = 1f;
}

void func_104(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_4), iParam0);
}

bool func_105(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_11.f_4, iParam1);
}

void func_106(int iParam0)
{
	MISC::SET_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_4), iParam0);
}

void func_107(int iParam0)
{
	MISC::SET_BIT(&(Global_2519572.f_4882.f_37), iParam0);
}

void func_108(int iParam0)
{
	if (func_109() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_109()
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
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

float func_111(int iParam0)
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

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1)
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

float func_114(int iParam0)
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

int func_115(int iParam0)
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

void func_116(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405070.f_44.f_49 = { vParam0 };
	Global_2405070.f_44.f_52 = iParam1;
	Global_2405070.f_44.f_53 = iParam2;
}

bool func_117(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_204, iParam1);
}

int func_118(int iParam0)
{
	if (func_119(iParam0))
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_63())
		{
			return Global_1624079[iParam0 /*558*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_105(iParam0, 9);
	}
	return 0;
}

void func_121(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_124(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_122();
	}
}

void func_122()
{
	if (!func_123(PLAYER::PLAYER_ID()))
	{
		func_106(25);
	}
}

bool func_123(int iParam0)
{
	return func_105(iParam0, 25);
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11911;
		
		case 142:
			return Global_262145.f_11899;
		
		case 157:
			return Global_262145.f_11866;
		
		case 159:
			return Global_262145.f_11849;
		
		case 162:
			return Global_262145.f_11960;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1624079[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1624079[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

bool func_127(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 2);
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/] != -1;
	}
	return 0;
}

void func_129(int iParam0)
{
	if (!func_139(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_130(PLAYER::PLAYER_ID()) != 0)
		{
			func_106(20);
			if (func_128(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_1), 8);
				}
			}
		}
	}
}

int func_130(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_128(iParam0) && !func_127(iParam0)) && !MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 8));
	bVar2 = func_139(iParam0);
	uVar3 = func_132();
	uVar4 = func_133();
	if ((bVar1 && (func_126(iParam0) || func_125(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_120(iParam0)) && !func_131(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2519572.f_4882.f_208 != iVar0)
	{
		Global_2519572.f_4882.f_208 = iVar0;
	}
	return iVar0;
}

bool func_131(int iParam0)
{
	return func_105(iParam0, 19);
}

bool func_132()
{
	return Global_1312416;
}

int func_133()
{
	if ((func_105(PLAYER::PLAYER_ID(), 21) || func_105(PLAYER::PLAYER_ID(), 22)) || func_136())
	{
		return 1;
	}
	if (func_134())
	{
		func_106(22);
		return 1;
	}
	return 0;
}

int func_134()
{
	if (func_102(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_132() && !func_135()) || func_117(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_104(27);
		}
	}
	return 0;
}

bool func_135()
{
	return Global_1312416.f_1;
}

bool func_136()
{
	return func_137(306, -1);
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2557346[iParam0 /*3*/][func_138(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

bool func_139(int iParam0)
{
	return func_105(iParam0, 20);
}

float func_140(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_105.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_105.f_2[iVar2 /*26*/].f_1))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iVar2 /*26*/].f_1), true) };
					fVar1 = SYSTEM::VDIST2(vVar3, vVar4);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_141(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_284(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_282() || iParam2 == 27)
	{
		if (func_225(iParam1, iParam2, uParam3, Global_1574165, 0, func_280(), sParam7))
		{
			func_224(1);
			if ((!func_222() && !func_220()) || MISC::IS_BIT_SET(Global_2519572.f_4573, 1))
			{
				if (func_219())
				{
					func_216();
				}
				else
				{
					GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_215(1);
						Global_1574165 = 0;
						iVar19 = -1;
						if (Global_1574351 != 1)
						{
							func_214(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_948(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_17(iVar3, 0))
									{
										if ((func_213(iVar3) || Global_2423644[iVar3 /*406*/].f_232 != -1) || func_212(iVar3))
										{
											iVar9 = iVar3;
											if (func_119(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_211(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_208(PLAYER::PLAYER_ID(), 0) && func_101(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_207())
							{
								if (func_948(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_63();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_206(iVar3) && func_202(iVar3, iParam2)) && func_948(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1589291[iVar9 /*770*/].f_211.f_6;
								Var6 = { func_197(iVar3) };
								if (iVar3 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_65(iVar3) };
								iVar5 = func_191(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574165++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_207())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_186(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_185(iParam5, 1, 0, 0), 16);
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
										iVar13 = -2;
									}
								}
								iVar16 = func_180(iVar3, 0);
								if (bVar2)
								{
									if (func_179(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_178(iParam5))
								{
									func_177(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_177(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
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
							if (func_948(iVar3, 0, 1) && !MISC::IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_63();
							}
							if (func_206(iVar3))
							{
								if (func_948(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1589291[iVar9 /*770*/].f_211.f_6;
									Var6 = { func_197(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_65(iVar3) };
									iVar5 = func_191(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574165++;
									iVar16 = func_180(iVar3, 1);
									if (bVar2)
									{
										if (func_179(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_155(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_152(uParam3, iParam1);
						}
						func_151(&(uParam3->f_21));
						func_150();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_149(uParam3, iParam1);
							func_148(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_149(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_144(uParam3))
						{
							Global_1574351 = 1;
						}
						func_142(uParam3);
						if (Global_1574351 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574351 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::_SET_2D_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_2D_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_150();
			func_215(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_142(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_151(&(uParam0->f_21));
		func_143(0);
	}
}

void func_143(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574351 != 2)
		{
			Global_1574351 = 2;
		}
	}
	else
	{
		switch (Global_1574351)
		{
			case 0:
				Global_1574351 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_63() && func_948(iVar3, 0, 1))
	{
		Var2 = { func_65(iVar3) };
		iVar1 = func_147(uParam0, uParam0->f_37);
		if (func_146(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_145(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_145(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_145(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_145(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_145(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_147(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_148(int iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_149(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_150()
{
	if (Global_1574351 != 0)
	{
		Global_1574351 = 0;
	}
}

void func_151(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_152(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_63())
		{
			if (func_948(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_154(uParam0->f_38[iVar0 /*2*/], 0);
					func_153(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589291[iVar0 /*770*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_154(int iParam0, bool bParam1)
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

void func_155(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_176() && iParam4 < func_175())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574167)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574351 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam2, sVar1))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_174("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
			}
			func_174(sParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_174("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
			func_174("");
			if (uParam3->f_108 == 6)
			{
				func_174("");
			}
			else
			{
				func_174(&sParam5);
			}
			func_160(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			if (func_159(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_157(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_156(uParam3))
			{
				func_158("DPAD_CREW");
			}
			else
			{
				func_158("");
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

bool func_156(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_157(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_158(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_159(var uParam0)
{
	if (func_157(uParam0) && func_156(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_160(var uParam0, int iParam1)
{
	if (func_173(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(121);
	}
	else if (func_165(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2423644[iParam1 /*406*/].f_405, 0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(123);
	}
	else
	{
		if (func_161())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_161()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_163() || func_162())
		{
			return 1;
		}
	}
	return 0;
}

var func_162()
{
	return Global_2447942.f_14;
}

int func_163()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_162();
	}
	return func_164(Global_4456448.f_126776);
}

int func_164(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0)
{
	if ((func_948(iParam0, 0, 1) && func_169()) && func_166(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0, bool bParam1)
{
	return func_167(iParam0, bParam1, 1);
}

int func_167(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_168(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_63() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	if (iParam0 != func_63())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_63())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	if (func_128(PLAYER::PLAYER_ID()) || func_172())
	{
		if (!func_170(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_170(int iParam0, int iParam1)
{
	if (func_171(iParam0) == iParam1)
	{
		return func_126(iParam0);
	}
	return 0;
}

int func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/];
	}
	return -1;
}

int func_172()
{
	switch (func_101(PLAYER::PLAYER_ID()))
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

int func_173(int iParam0)
{
	if (func_161())
	{
		if (func_948(iParam0, 0, 1))
		{
			return func_119(iParam0);
		}
	}
	if ((func_948(iParam0, 0, 1) && func_169()) && func_168(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_174(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_175()
{
	int iVar0;
	
	if (Global_1574167)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_176()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574167)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_177(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_176() && iParam3 < func_175())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574167)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574351 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, sVar1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_174("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_158(sParam16);
				}
				else
				{
					func_174(&(uParam2->f_1));
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_174("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
				}
				if (func_207())
				{
					func_174("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_158(&(uParam2->f_104));
					}
					else
					{
						func_174("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
				}
				else
				{
					func_174("");
				}
				if (uParam2->f_108 == 6)
				{
					func_174("");
				}
				else
				{
					func_174(&sParam4);
				}
				func_160(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_174("");
					func_174("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
				}
				if (func_159(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_157(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_156(uParam2))
				{
					func_158("DPAD_CREW");
				}
				else
				{
					func_158("");
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
	}
}

int func_178(int iParam0)
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

bool func_179(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_119(iParam0))
		{
			return 0;
		}
	}
	return Global_1624079[iParam0 /*558*/].f_11 != func_63();
}

int func_180(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_128(iParam0)) && !func_139(iParam0))
	{
		iVar0 = func_184();
	}
	iVar1 = func_183(iParam0);
	if (!iVar1 == -1)
	{
		return func_181(iVar1);
	}
	return iVar0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_182(iParam0);
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

var func_182(int iParam0)
{
	return Global_2417501.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_183(int iParam0)
{
	if (!iParam0 == func_63())
	{
		if (func_179(iParam0, 1))
		{
			return Global_2417501.f_2071.f_11[func_64(iParam0)];
		}
	}
	return -1;
}

int func_184()
{
	return 21;
}

char* func_185(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (MISC::_0xD3D15555431AB793())
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
			if (MISC::_0xD3D15555431AB793())
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

int func_186(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_190(iParam3))
	{
		*fParam1 = (func_187(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_178(iParam3))
	{
		*fParam1 = (func_187(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_187(int iParam0, int iParam1)
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
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_189(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_188(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_188(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_189(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_190(int iParam0)
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

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = func_194(iParam0);
	if (iVar0 == -1)
	{
		func_192(iParam0, 1);
		return 0;
	}
	Global_1374725[iVar0 /*5*/].f_4 = 1;
	return Global_1374725[iVar0 /*5*/].f_2;
}

void func_192(int iParam0, bool bParam1)
{
	if (!func_948(iParam0, 0, 1))
	{
		return;
	}
	if (func_194(iParam0) != -1)
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
	if (func_193(iParam0))
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

int func_193(int iParam0)
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

int func_194(int iParam0)
{
	int iVar0;
	
	if (!func_948(iParam0, 0, 1))
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
			func_195(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_195(int iParam0)
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
	func_196(&(Global_1374725[iVar2 /*5*/]));
	Global_1374886 = (Global_1374886 - 1);
}

void func_196(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_63();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_197(int iParam0)
{
	char cVar0[32];
	
	if (func_948(iParam0, 0, 1))
	{
		Global_2498829 = { func_65(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_146(Global_2498829))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2498829))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_201(&Global_2498829))
		{
			Global_2498759 = { func_199(iParam0) };
			func_198(&Global_2498759, &cVar0);
		}
	}
	return cVar0;
}

void func_198(var uParam0, char* sParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_199(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_200(iParam0))
	{
		return Global_1312886[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_65(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_200(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_201(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_127(iParam0) || func_205(iParam0)) || func_204(iParam0))
		{
			return 0;
		}
	}
	if (!func_203(iParam0))
	{
		return 0;
	}
	if ((!func_213(iParam0) && Global_2423644[iParam0 /*406*/].f_232 == -1) && !func_212(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_203(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_142, 22);
}

bool func_204(int iParam0)
{
	if (func_127(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 8);
}

int func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 10) || MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1589291[iVar0 /*770*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_207()
{
	switch (func_101(PLAYER::PLAYER_ID()))
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
	switch (func_171(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_139(PLAYER::PLAYER_ID()))
	{
		switch (func_101(PLAYER::PLAYER_ID()))
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
	if (func_170(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 && func_209(Global_1624079[iParam0 /*558*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1)
	{
		if (func_209(Global_1624079[iParam0 /*558*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0)
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
	return func_210(iParam0, 0);
	return 0;
}

int func_210(int iParam0, int iParam1)
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

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_948(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_213(iVar1) || Global_2423644[iVar1 /*406*/].f_232 != -1) || func_212(iVar1))
				{
					if (func_74(iVar1, iParam1, 0))
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

bool func_212(int iParam0)
{
	return Global_1589291[iParam0 /*770*/].f_196 != 0;
}

int func_213(int iParam0)
{
	if (func_948(iParam0, 0, 1))
	{
		if (func_948(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_101(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214(int iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1363070.f_2 == 0)
		{
			Global_1363070.f_2 = 1;
		}
	}
	else if (Global_1363070.f_2 == 1)
	{
		Global_1363070.f_2 = 0;
	}
}

void func_216()
{
	if (MISC::IS_BIT_SET(Global_2519572.f_4573, 1))
	{
		if (func_218())
		{
			func_217();
		}
	}
}

void func_217()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 != 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			MISC::SET_BIT(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

bool func_218()
{
	return Global_2436641.f_2703[0 /*80*/].f_1 != 0;
}

int func_219()
{
	if (MISC::IS_BIT_SET(Global_2519572.f_4573, 0) && func_218())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4573, 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	if (func_218())
	{
		if (func_221(Global_2436641.f_2703[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0)
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

int func_222()
{
	if (func_218())
	{
		if (func_223(Global_2436641.f_2703[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)
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

void func_224(int iParam0)
{
	if (Global_1363070.f_1 != Global_1363070)
	{
		Global_1363070.f_1 = Global_1363070;
	}
	if (Global_1363070 != iParam0)
	{
		Global_1363070 = iParam0;
	}
}

int func_225(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_279(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_278();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_277())
		{
			if (func_276() > 0 && Global_1574167)
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
		if (!func_259())
		{
			func_258(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4576, 26))
	{
		func_258(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_276() == 1)
		{
			func_257(bVar3, iParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_258(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2519572.f_4577), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_276() == 0 && !bParam5))
		{
			func_258(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_256();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_0x25F87B30C382FCA7();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_256();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_257(bVar3, iParam0, 0))
				{
					func_214(iParam0, 0, 0);
					sVar1 = func_254(iParam1, &(Global_4456448.f_126783), bParam4);
					Var0 = { func_252(iParam1) };
					if (bParam4)
					{
						func_249(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_242(iParam0, func_246(uParam2), func_243(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_235(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_233(iParam0, sVar5, func_234(), -1);
					}
					else if (func_161())
					{
						uParam2->f_34 = Global_1574166;
						func_249(iParam0, sVar1, &Var0, 1, -1, Global_1574166, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574166;
						func_249(iParam0, sVar1, "", 0, -1, Global_1574166, 1);
					}
					else
					{
						iVar6 = func_226(iParam1);
						func_249(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574165 = uParam3;
				Global_1574164 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574166)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_232())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
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
			if (func_231(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_230(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_229(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_227())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_227()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_59();
	}
	return func_228(Global_4456448.f_126776);
}

int func_228(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_229(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 4;
}

bool func_230(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

bool func_231(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_232()
{
	return Global_4456448.f_1 == 0;
}

void func_233(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_158(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_158("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_234()
{
	switch (func_101(PLAYER::PLAYER_ID()))
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

char* func_235(var uParam0)
{
	switch (uParam0->f_112)
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
	switch (uParam0->f_110)
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
	switch (func_101(PLAYER::PLAYER_ID()))
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
			if (func_238())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_237(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_237(1))
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
			if (func_236(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_236(int iParam0)
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

bool func_237(bool bParam0)
{
	return func_166(PLAYER::PLAYER_ID(), bParam0);
}

bool func_238()
{
	return (func_241() && func_239(func_240()));
}

bool func_239(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_240()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_35;
}

bool func_241()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 148;
}

void func_242(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_158(sParam1);
		}
		else if (func_171(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_158("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_243(var uParam0)
{
	int iVar0;
	
	iVar0 = func_171(PLAYER::PLAYER_ID());
	if (func_245())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_244())
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

int func_244()
{
	if (func_171(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2519572.f_4803;
	}
	return -1;
}

bool func_245()
{
	return Global_1589164;
}

char* func_246(var uParam0)
{
	int iVar0;
	
	iVar0 = func_171(PLAYER::PLAYER_ID());
	if (func_245())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_248() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_248() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_244())
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
			if (func_247() == 1)
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

int func_247()
{
	return Global_2519572.f_4806;
}

int func_248()
{
	if (func_171(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2519572.f_4801;
	}
	return -1;
}

void func_249(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_174(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_158(sParam1);
		}
		if (func_277() && iParam6)
		{
			if (func_251())
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
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_158(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_250(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_59())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_250(int iParam0)
{
	if (func_231(iParam0) || func_230(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_251()
{
	return Global_1574167;
}

struct<4> func_252(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_253(PLAYER::PLAYER_ID()) || func_229(PLAYER::PLAYER_ID()))
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
			StringIntConCat(&Var0, Global_4456448.f_34, 16);
			break;
	}
	if (func_161() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_34, 16);
	}
	return Var0;
}

bool func_253(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 5;
}

char* func_254(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_161() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_255();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574369 == 0)
		{
			Global_1574369 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574369 == 1)
		{
			Global_1574369 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574369 == 0)
		{
			Global_1574369 = 1;
		}
		switch (iParam0)
		{
			case 0:
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

char* func_255()
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

void func_256()
{
	Global_36813 = 1;
}

bool func_257(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_258(int iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574165 = 0;
	func_150();
	Global_1574164 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_151(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2519572.f_4577), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_259()
{
	if (func_275())
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (!func_272())
	{
		return 0;
	}
	if (!func_270())
	{
		return 0;
	}
	if (func_269(8, -1))
	{
		return 0;
	}
	if (func_276() == 2)
	{
		return 0;
	}
	if (Global_2519572.f_4529)
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	else if (!func_265(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_264(1) || func_262(1)) || Global_17206.f_124) || Global_17206)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_260(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1653121)
	{
		return 0;
	}
	if (Global_1653125)
	{
		return 0;
	}
	if (func_79(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_19, 4))
	{
		return 0;
	}
	if (Global_1356262)
	{
		return 0;
	}
	if ((Global_1677950.f_705.f_5 || Global_1680761.f_705.f_5) || Global_1676993.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_261())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_261()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_262(bool bParam0)
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_263(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17206.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
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
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_264(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17206.f_4 && Global_17206.f_104 == 4);
	}
	return Global_17206.f_4;
}

int func_265(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_266(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589291[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_266(int iParam0)
{
	return func_267(iParam0);
}

bool func_267(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

bool func_268()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_196 != 0;
}

bool func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1363073.f_1048, iParam0);
}

int func_270()
{
	if (func_271() == 0)
	{
		return 1;
	}
	return 0;
}

int func_271()
{
	return Global_1312466.f_18;
}

int func_272()
{
	if (func_273())
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

bool func_273()
{
	return Global_1312438;
}

bool func_274()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 5;
}

bool func_275()
{
	return MISC::GET_GAME_TIMER() <= Global_17345.f_5745 + 100;
}

int func_276()
{
	return Global_1363073.f_68;
}

int func_277()
{
	if (Global_1574166 > 16)
	{
		return 1;
	}
	return 0;
}

float func_278()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_279(int iParam0)
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

int func_280()
{
	if (func_281(PLAYER::PLAYER_ID()))
	{
		return Global_1316736;
	}
	return 0;
}

int func_281(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_282()
{
	if (func_280())
	{
		return 1;
	}
	if (func_204(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_245())
	{
		return 1;
	}
	if (func_128(PLAYER::PLAYER_ID()))
	{
		switch (func_171(PLAYER::PLAYER_ID()))
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
				if (!func_283(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_283(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_283(PLAYER::PLAYER_ID()))
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

bool func_283(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_1, 4);
}

int func_284(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_128(PLAYER::PLAYER_ID()) && !func_139(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_102(PLAYER::PLAYER_ID(), 0) && func_139(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_130(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_285()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = func_286();
	}
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Local_106[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_286()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_640;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_287()
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
				func_288(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_288(int iParam0)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	int iVar7;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (!MISC::IS_BIT_SET(Local_105.f_113, iVar7))
			{
				if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6, iVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (!MISC::IS_BIT_SET(Local_105.f_109, iVar7))
							{
								if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5, iVar7))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar7 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_105.f_2[iVar7 /*26*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_105.f_2[iVar7 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_848() == Local_105.f_118)
															{
																MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5), iVar7);
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
						else if (ENTITY::IS_ENTITY_A_PED(Var0))
						{
							iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
							if (iVar2 == NETWORK::NET_TO_PED(Local_105.f_2[iVar7 /*26*/].f_1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
									{
										iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
										if (PED::IS_PED_A_PLAYER(iVar1))
										{
											iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
											{
												if (Var0.f_3)
												{
													if (iVar4 == PLAYER::PLAYER_ID())
													{
														Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11++;
														MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6), iVar7);
														Var6.f_2 = -566878099;
														Var6.f_10 = PLAYER::PLAYER_ID();
														func_294(Var6, func_295(0));
														func_289("HUNT_TCKP", 1);
													}
												}
											}
											else if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
											{
												if (Var0.f_3)
												{
													iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
													MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
										{
											if (Var0.f_3)
											{
												MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
									{
										if (Var0.f_3)
										{
											MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar7))
								{
									if (Var0.f_3)
									{
										MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar7);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
	if (func_285())
	{
		if (!func_105(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar4 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (func_179(iVar3, 1))
											{
												if (Local_105.f_118 > -1)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_105.f_118));
													if (func_74(iVar3, iVar5, 1))
													{
														if (!func_133())
														{
															func_129(0);
															func_122();
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

int func_289(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_290(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_290(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_293() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_291(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1661957.f_5[iVar0 /*53*/] = iParam0;
		Global_1661957.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1661957.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1661957.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1661957.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1661957.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1661957.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_291(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1661957 - 1))
	{
		if (iParam0 > Global_1661957.f_5[iVar0 /*53*/].f_1)
		{
			func_292(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1661957++;
	if (Global_1661957 > 5)
	{
		Global_1661957 = 5;
		return Global_1661957;
	}
	return (Global_1661957 - 1);
}

void func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1661957.f_5[iVar0 /*53*/] = { Global_1661957.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_293()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_294(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -471892217;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &Param0, 14, iParam13);
	}
}

int func_295(int iParam0)
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
			if (func_948(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_296()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_107, 14))
		{
			MISC::CLEAR_BIT(&iLocal_107, 14);
		}
		return;
	}
	iVar0 = Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_640;
	if (!MISC::IS_BIT_SET(iLocal_107, 14))
	{
		if (Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 != 0)
		{
			Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_107, 14);
	}
	if (!MISC::IS_BIT_SET(iLocal_107, 15))
	{
		MISC::SET_BIT(&iLocal_107, 15);
		func_777();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_106[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_734();
					func_716();
					func_701();
					break;
				
				case 2:
					func_297();
					break;
				
				case 3:
					func_861();
					break;
				}
			}
	}
}

void func_297()
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar2 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = func_286();
		iVar2 = Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_640;
	}
	if (!MISC::IS_BIT_SET(Local_106[iVar1 /*14*/].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_107, 9))
		{
			if (MISC::IS_BIT_SET(Local_105.f_1, 1))
			{
				if (iVar1 == Local_105.f_118 || func_848() == Local_105.f_118)
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_700(iVar2);
						iVar4 = func_699(iVar2);
						func_697(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_107, 6))
						{
							func_596(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_107, 6);
						}
						Var0 = func_595();
						Var0.f_1 = func_594();
						func_410(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar2);
						iLocal_127 = PLAYER::GET_MAX_WANTED_LEVEL();
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						MISC::SET_BIT(&iLocal_107, 17);
						func_7(&uLocal_128, 0, 0);
					}
				}
				else if (func_285())
				{
					if (func_179(iVar2, 1))
					{
						if (func_130(iVar2) >= 2)
						{
							sVar3 = func_700(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
							iVar4 = func_699(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
							func_697(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_107, 6))
							{
								func_596(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_107, 6);
							}
							if (func_123(iVar2))
							{
								Var0 = func_409();
								Var0.f_1 = func_408();
							}
							func_410(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_130(iVar2) >= 2)
						{
							sVar3 = func_700(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
							iVar4 = func_699(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
							func_697(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_107, 6))
							{
								func_596(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_107, 6);
							}
							if (func_123(iVar2))
							{
								Var0 = func_409();
								Var0.f_1 = func_408();
							}
							func_410(166, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_107, 9);
			}
			else if (MISC::IS_BIT_SET(Local_105.f_1, 3))
			{
				iVar5 = (4 - Local_105.f_115);
				if (iVar1 == Local_105.f_118 || func_848() == Local_105.f_118)
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_402();
						iVar4 = func_699(iVar2);
						func_697(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_107, 6))
						{
							func_596(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_107, 6);
						}
						Var0 = func_595();
						Var0.f_1 = func_594();
						func_410(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_700(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
						iVar4 = func_699(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
						if (iVar5 == 1)
						{
							func_697(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
						else if (iVar5 > 1)
						{
							func_697(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
					}
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_107, 6))
						{
							func_596(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_107, 6);
						}
						if (func_123(iVar2))
						{
							Var0 = func_409();
							Var0.f_1 = func_408();
						}
						func_410(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				MISC::SET_BIT(&iLocal_107, 9);
			}
			else if (MISC::IS_BIT_SET(Local_105.f_1, 5))
			{
				if (func_362())
				{
					if (func_847())
					{
						if (func_130(iVar2) >= 2)
						{
						}
					}
					else if (func_130(iVar2) >= 2)
					{
						func_331(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1);
					}
				}
				if (iVar2 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_107, 6))
					{
						func_596(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_107, 6);
					}
					func_410(166, 0, &Var0, 0);
				}
				MISC::SET_BIT(&iLocal_107, 9);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_107, 9))
		{
			func_777();
			if (!MISC::IS_BIT_SET(iLocal_108, 8))
			{
				func_317();
				func_73();
				MISC::SET_BIT(&iLocal_108, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_107, 10))
			{
			}
			if (func_298(&uLocal_115, 0, 0))
			{
				if (iVar1 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 4);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_107, 17))
			{
				if (func_6(&uLocal_128, 10000, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(iLocal_127);
					MISC::CLEAR_BIT(&iLocal_107, 17);
				}
			}
		}
	}
}

int func_298(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_106(29);
	if ((*uParam0 > 0 && !func_218()) && func_130(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_314())
		{
			func_313();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1665343.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2519572.f_4573), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_312(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
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
				func_305(iParam2);
				func_312(uParam0, 2);
			}
			break;
		
		case 2:
			func_305(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_299(func_300(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_312(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2519572.f_4573), 1);
				MISC::CLEAR_BIT(&(Global_1665343.f_3), 2);
				func_312(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2519572.f_4573), 1);
			MISC::CLEAR_BIT(&(Global_1665343.f_3), 2);
			return 1;
	}
	return 0;
}

int func_299(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_300(int iParam0)
{
	if (((func_303(PLAYER::PLAYER_ID()) || func_302(PLAYER::PLAYER_ID())) || func_238()) || iParam0)
	{
		if (func_302(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_209(func_301()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_301()
{
	return Global_1641937;
}

bool func_302(int iParam0)
{
	return func_210(func_101(iParam0), 0);
}

bool func_303(int iParam0)
{
	return func_304(func_101(iParam0));
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 148 && func_168(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_35, 1))
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

void func_305(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2519572.f_4573, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2519572.f_784, 2)) && func_948(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68280) && !Global_53148) && !CAM::IS_SCREEN_FADED_OUT()) && !func_105(PLAYER::PLAYER_ID(), 22)) && func_130(PLAYER::PLAYER_ID()) != 0) && !func_310(func_311())) && !func_303(PLAYER::PLAYER_ID())) && !func_309(func_101(PLAYER::PLAYER_ID()))) && !func_308(func_101(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2519572.f_4573), 1);
			func_307(func_300(iParam0), -1);
			func_306(1);
			MISC::CLEAR_BIT(&(Global_2519572.f_4573), 0);
		}
	}
}

void func_306(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_237(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_218())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_307(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_308(int iParam0)
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

int func_309(int iParam0)
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

int func_310(int iParam0)
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

int func_311()
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

void func_312(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_313()
{
	Global_2459236 = 1;
}

int func_314()
{
	if (((((((func_101(PLAYER::PLAYER_ID()) == 170 || func_101(PLAYER::PLAYER_ID()) == 219) || func_101(PLAYER::PLAYER_ID()) == 221) || func_101(PLAYER::PLAYER_ID()) == 220) || func_101(PLAYER::PLAYER_ID()) == 216) || func_101(PLAYER::PLAYER_ID()) == 215) || func_101(PLAYER::PLAYER_ID()) == 214) || func_101(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_315(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_316(int iParam0)
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
	}
	return -1;
}

void func_317()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_122[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_122[iVar0]));
		}
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_107, 18))
	{
		func_330(1);
		MISC::CLEAR_BIT(&iLocal_107, 18);
	}
	func_327();
	func_318();
}

void func_318()
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(iLocal_107, 7))
	{
		MISC::SET_BIT(&iLocal_107, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iVar0))
					{
						func_325(iVar1, 432, 0, 0);
						func_319(iVar1, func_324(iLocal_125), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_319(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_321(iParam0))
	{
		return;
	}
	if (func_320(&(Global_2415808.f_614[iParam0]), &(Global_2415808.f_977[iParam0]), &(Global_2415808.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415808.f_449[iParam0] = uParam1;
		}
	}
}

int func_320(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_321(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_322())
	{
		return 1;
	}
	return 0;
}

int func_322()
{
	switch (func_323())
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

int func_323()
{
	return Global_25277;
}

int func_324(int iParam0)
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

void func_325(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_321(iParam0))
	{
		return;
	}
	if (func_320(&(Global_2415808.f_581[iParam0]), &(Global_2415808.f_944[iParam0]), &(Global_2415808.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415808.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_326();
		}
	}
}

void func_326()
{
	Global_2415808.f_1508 = 1;
}

void func_327()
{
	if (MISC::IS_BIT_SET(iLocal_107, 16))
	{
		func_84();
		func_328();
		MISC::CLEAR_BIT(&iLocal_107, 16);
	}
}

void func_328()
{
	if (Global_2413628.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_329();
	}
}

void func_329()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413628.f_6))
	{
		if (!Global_2413628.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413628 = { Var0 };
	Global_2413628.f_6 = -1;
}

void func_330(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_132())
		{
			if (func_948(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_948(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

int func_331(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_361(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_332(&Var0);
}

int func_332(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436641.f_3025)
		{
			return 0;
		}
	}
	func_342(uParam0, uParam0->f_17);
	func_341(uParam0);
	if (func_59())
	{
		func_341(uParam0);
	}
	if (func_340(uParam0->f_1))
	{
		func_333();
		if (Global_2436641.f_2703[0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436641.f_2703[0 /*80*/].f_1 == 13 || Global_2436641.f_2703[0 /*80*/].f_1 == 53) || Global_2436641.f_2703[0 /*80*/].f_1 == 54) || Global_2436641.f_2703[0 /*80*/].f_1 == 58)
		{
			Global_2436641.f_2703[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436641.f_2703[iVar0 + 1 /*80*/] = { Global_2436641.f_2703[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436641.f_2703[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_333();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				MISC::SET_BIT(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 1);
				Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !MISC::IS_BIT_SET(uParam0->f_69, 7))
			{
				if (func_221(Global_2436641.f_2703[iVar0 /*80*/].f_1))
				{
					Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
					MISC::SET_BIT(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_333()
{
	bool bVar0;
	
	if (Global_2436641.f_3026)
	{
		return;
	}
	if (!Global_71246)
	{
		Global_71246 = 1;
		bVar0 = true;
	}
	func_334();
	if (bVar0)
	{
		Global_71246 = 0;
	}
}

void func_334()
{
	Global_2436641.f_3027 = 0;
	Global_2436641.f_3027.f_578 = 0;
	func_338(&(Global_2436641.f_3027.f_1));
	Global_2436641.f_3027.f_1.f_1 = 0;
	func_335(&(Global_2436641.f_3027.f_1));
}

void func_335(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71246)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71247)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_337(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_336(0);
}

void func_336(int iParam0)
{
	Global_71238 = iParam0;
	Global_71239 = iParam0;
}

bool func_337(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71226, 0);
}

void func_338(var uParam0)
{
	func_339(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_339(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_340(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_341(var uParam0)
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_72 = func_184();
	}
}

void func_342(var uParam0, int iParam1)
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_63() || !func_948(iParam1, 0, 1))
	{
		return;
	}
	if (func_221(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_343(iParam1, -2, 0, 0);
		}
	}
}

int func_343(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_260(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_121853[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_260(PLAYER::PLAYER_ID()) || (func_360() && func_359())) && !MISC::IS_BIT_SET(Global_2519572.f_4576, 31))
	{
		iVar1 = func_358();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_948(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_121853[iParam1] != -1)
							{
								return func_356(iParam1, iParam0, 0);
							}
							else
							{
								return func_351(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_351(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_121853[iParam1] != -1)
				{
					return func_356(iParam1, iParam0, 0);
				}
				else
				{
					return func_344(0, -1, 0);
				}
			}
			else
			{
				return func_344(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_121853[iParam1] != -1)
		{
			return func_356(iParam1, iParam0, 0);
		}
		else
		{
			return func_351(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_351(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_344(bool bParam0, int iParam1, bool bParam2)
{
	return func_345(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_345(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_350(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_349(1);
				}
				else
				{
					return func_349(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_346(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_346(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_349(1);
	}
	return func_349(0);
}

int func_346(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_348(iParam0, iParam1, iParam3);
	if (func_347(Global_4456448.f_126776, 1))
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

int func_347(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_148478 == 65)
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
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_348(int iParam0, int iParam1, int iParam2)
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
			if (!func_350(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_349(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_350(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_351(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589291[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_354(1))
			{
				iVar3 = func_183(iParam0);
				if (!iVar3 == -1)
				{
					return func_181(iVar3);
				}
			}
			if ((func_353(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_350(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_349(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_352(1);
			}
			else
			{
				return func_345(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574355 || Global_1574346) || Global_1589291[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574355 == 1 && Global_1574365 == 0))
			{
				return func_349(1);
			}
			else
			{
				return func_345(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574350 && Global_1573884.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_183(iParam0);
	if (!iVar4 == -1)
	{
		return func_181(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_352(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_353(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
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
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_354(int iParam0)
{
	if ((func_162() || func_355()) || (func_59() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_355()
{
	return Global_2447942.f_15;
}

int func_356(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_354(1))
	{
		iVar2 = func_183(iParam1);
		if (!iVar2 == -1)
		{
			return func_181(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_98[iParam0 /*10231*/].f_5361[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_63())
	{
		if (Global_4456448.f_121853[iParam0] != -1 && Global_4456448.f_121853[iParam0] <= 4)
		{
			if (Global_4456448.f_121853[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_121853[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_121853[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_121853[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_121853[iParam0];
			}
		}
		else
		{
			iVar0 = func_345(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_357(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_357(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_148521;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_148522;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_148523;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_148524;
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

var func_358()
{
	return Global_2359302.f_2;
}

bool func_359()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_360()
{
	return MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_18, 14);
}

void func_361(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_63();
	uParam1->f_18 = func_63();
	uParam1->f_19 = func_63();
	uParam1->f_20 = func_63();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_362()
{
	int iVar0;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_363(1, 1, 1))
		{
			if (MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_133())
		{
			if (MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
		{
			MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_286();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_106[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_363(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_401(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_117(PLAYER::PLAYER_ID(), 21))
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
	if (!func_203(PLAYER::PLAYER_ID()))
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
	if (func_400(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (func_398())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_266(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_270())
	{
		return 0;
	}
	if (func_117(PLAYER::PLAYER_ID(), 0) || func_117(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_117(PLAYER::PLAYER_ID(), 12) || func_117(PLAYER::PLAYER_ID(), 14)) || func_117(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_395(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_370())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_369())
		{
			return 0;
		}
	}
	if (Global_1653121)
	{
		return 0;
	}
	if (func_368(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (func_366(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_365())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_19, 4))
	{
		return 0;
	}
	if (func_364(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_364(int iParam0)
{
	if (Global_2423644[iParam0 /*406*/].f_257.f_4 != 0 || Global_2423644[iParam0 /*406*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_365()
{
	return Global_1667157.f_3342 != -1;
}

int func_366(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 11))
	{
		return 1;
	}
	return 0;
}

int func_367()
{
	if (Global_4253672.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0)
{
	if (!func_948(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_35;
}

bool func_369()
{
	return Global_93007.f_322 > 0;
}

int func_370()
{
	int iVar0;
	
	iVar0 = func_101(PLAYER::PLAYER_ID());
	if (((func_394(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_21) || func_393(PLAYER::PLAYER_ID())) || func_392(PLAYER::PLAYER_ID())) || func_387(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_385(PLAYER::PLAYER_ID()))
	{
		if (func_384(iVar0) || func_383(iVar0))
		{
			return 1;
		}
	}
	if (func_315(PLAYER::PLAYER_ID()))
	{
		if (func_383(iVar0))
		{
			return 1;
		}
	}
	if (func_382(PLAYER::PLAYER_ID()))
	{
		if (func_381(iVar0))
		{
			return 1;
		}
	}
	if (func_380(PLAYER::PLAYER_ID()))
	{
		if (func_379(iVar0))
		{
			return 1;
		}
	}
	if (func_378(PLAYER::PLAYER_ID()))
	{
		if (func_377(iVar0))
		{
			return 1;
		}
	}
	if (func_376(PLAYER::PLAYER_ID()))
	{
		if (func_375(iVar0))
		{
			return 1;
		}
	}
	if (func_374(PLAYER::PLAYER_ID(), 0))
	{
		if (func_373(iVar0))
		{
			if (func_371(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	if (func_372(iParam0) != func_63())
	{
		return func_372(iParam0) == func_64(iParam0);
	}
	return 0;
}

int func_372(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_35;
}

int func_373(int iParam0)
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

int func_374(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_63())
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)
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

int func_376(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_378(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)
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

int func_380(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
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

int func_382(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
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

int func_384(int iParam0)
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

int func_385(int iParam0)
{
	if (func_386(Global_1589291[iParam0 /*770*/].f_273.f_21, -1))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)
{
	if (iParam1 == -1)
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

int func_387(int iParam0)
{
	if (func_388(Global_1589291[iParam0 /*770*/].f_273.f_21, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_389(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_389(PLAYER::PLAYER_ID(), 0))
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

bool func_389(int iParam0, bool bParam1)
{
	if (Global_1589134 != func_63())
	{
		if (!func_391(Global_1589134))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589134)
			{
				if (MISC::IS_BIT_SET(Global_2423644[Global_1589134 /*406*/].f_191, 24) || func_390(Global_1589134))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_191, 24);
}

int func_390(int iParam0)
{
	if (iParam0 != func_63())
	{
		return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_191, 9);
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 != func_63())
	{
		return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 2);
	}
	return 0;
}

int func_392(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_394(int iParam0)
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

int func_395(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (Global_1589291[iParam0 /*770*/].f_273.f_21 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 0))
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
		if (func_393(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_315(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_392(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_380(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_378(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_397(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_376(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_396(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_374(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_63())
			{
				return func_316(Global_2423644[iParam0 /*406*/].f_305.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_398()
{
	return Global_1312854;
}

bool func_399()
{
	return MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_18, 0);
}

int func_400(int iParam0)
{
	if (func_265(iParam0, 1))
	{
		if (Global_1589291[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_401(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1624079[iParam0 /*558*/].f_11.f_5, iParam1);
}

char* func_402()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_64(PLAYER::PLAYER_ID());
	if (iVar0 != func_63())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_105(iVar0, 28) || func_105(PLAYER::PLAYER_ID(), 28)) || func_407(iVar0)) && !func_406(iVar0))
			{
				return func_404(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_404(iVar0, 0);
			}
		}
		sVar1 = func_403(&(Global_1624079[iVar0 /*558*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_404(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_403(var uParam0)
{
	return uParam0;
}

char* func_404(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_166(iParam0, 1))
		{
			return func_405();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_405()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_406(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
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

int func_407(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_63())
	{
		Var0 = { func_65(iParam0) };
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

int func_408()
{
	return ((4 - Local_105.f_115) * Global_262145.f_14893);
}

int func_409()
{
	return ((4 - Local_105.f_115) * Global_262145.f_14892);
}

void func_410(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_592(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17652);
		}
		else
		{
			iVar1 = (iVar1 + func_591(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_590(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17651);
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
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_588(iParam0))
	{
		if (bParam1)
		{
			if (func_587(PLAYER::PLAYER_ID()) > 0)
			{
				func_586();
			}
			else
			{
				func_585();
			}
		}
		else
		{
			func_584();
		}
	}
	func_568(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_566(iParam0, uParam2, &iVar0, &iVar5);
	func_544(iParam0, uParam2, &iVar0, &iVar5);
	func_530(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_513(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2519572.f_4882.f_371 = iVar4;
	}
	else
	{
		Global_2519572.f_4882.f_371 = iVar5;
	}
	iVar8 = func_240();
	if (iVar8 != func_63() && iParam0 != 148)
	{
		if (func_179(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_74(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_501(&iVar0, 1);
			}
		}
	}
	func_497(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1665352.f_10 = iVar1;
		func_496();
		func_453(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1665352.f_9 = iVar0;
		iVar13 = func_452();
		if (iVar13 != func_63())
		{
			func_451(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_450(1);
		if (iParam0 == 168)
		{
			if (!func_449())
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_448())
			{
				if (!func_449())
				{
					Var15 = { func_447() };
					NETCASH::_0x8586789730B10CAF(iVar0, MISC::GET_HASH_KEY(func_446(Var15)), func_445(Var15), iVar5);
				}
			}
			else if (func_449())
			{
				func_436(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_4262188[iVar16 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar16 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar16 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_435())
			{
				if (!func_449())
				{
					NETCASH::_0x8586789730B10CAF(iVar0, MISC::GET_HASH_KEY(func_446(func_434(PLAYER::PLAYER_ID()))), 5, iVar5);
				}
			}
			else if (func_449())
			{
				func_436(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4262188[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_435())
			{
				if (!func_449())
				{
					iVar18 = func_430(uParam2->f_16, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					NETCASH::_0x6B7E4FB50D5F3D65(iVar19, iVar5, iVar7, iVar18, uParam2->f_16);
				}
			}
			else if (func_449())
			{
				func_436(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_4262188[iVar20 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar20 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar20 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xDEE612F2D71B0308(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_449())
			{
				func_436(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_4262188[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_435())
			{
				if (!func_449())
				{
					unk_0x0B39CF0D53F1C883(iVar0, uParam2->f_20, iVar5);
				}
			}
			else if (func_449())
			{
				func_436(-856006867, iVar0, &iVar22, 0, 1, 0);
				Global_4262188[iVar22 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar22 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar22 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				NETCASH::_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_449())
			{
				func_436(-961034881, iVar0, &iVar23, 0, 1, 0);
				Global_4262188[iVar23 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar23 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar23 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xA75EAC69F59E96E7(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_449())
			{
				func_436(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_4262188[iVar24 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar24 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar24 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xC5156361F26E2212(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_449())
			{
				func_436(-634726636, iVar0, &iVar25, 0, 1, 0);
				Global_4262188[iVar25 /*80*/].f_8.f_54 = uVar11;
				Global_4262188[iVar25 /*80*/].f_8.f_55 = uVar12;
				Global_4262188[iVar25 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x1FDA0AA679C9919B(iVar0);
			}
		}
		else if (func_449())
		{
			func_436(-856006867, iVar0, &iVar26, 0, 1, 0);
			Global_4262188[iVar26 /*80*/].f_8.f_54 = uVar11;
			Global_4262188[iVar26 /*80*/].f_8.f_55 = uVar12;
			Global_4262188[iVar26 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			NETCASH::_0x0CB1BE0633C024A8(uVar11, uVar12, iVar0, bVar14);
		}
		func_429(iParam0, iVar0);
		if (func_428(iParam0))
		{
			if (func_427(iParam0) > -1)
			{
				func_426(func_427(iParam0), iVar0);
			}
		}
		Global_2459893 = iVar0;
		func_425(&Global_2458160, 0, 0);
	}
	if (func_120(PLAYER::PLAYER_ID()) || func_139(PLAYER::PLAYER_ID()))
	{
		func_416(iParam0);
	}
	if (func_304(iParam0))
	{
		Global_1665370.f_13 = iVar0;
		Global_1665370.f_14 = iVar1;
	}
	if (func_309(iParam0))
	{
		Global_1665424.f_13 = iVar0;
		Global_1665424.f_14 = iVar1;
	}
	if (func_381(iParam0))
	{
		Global_1665487.f_12 = iVar0;
		Global_1665487.f_13 = iVar1;
	}
	if (func_379(iParam0))
	{
		Global_1665531.f_12 = iVar0;
		Global_1665531.f_13 = iVar1;
	}
	if (func_377(iParam0))
	{
		Global_1665585.f_12 = iVar0;
		Global_1665585.f_13 = iVar1;
	}
	if (func_308(iParam0))
	{
		if (func_415(iParam0))
		{
			Global_1665665.f_12 = iVar0;
			Global_1665665.f_13 = iVar1;
		}
		else if (func_411(iParam0))
		{
			Global_1665718.f_12 = iVar0;
			Global_1665718.f_13 = iVar1;
		}
	}
}

int func_411(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_412(func_413(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0)
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

int func_413(int iParam0)
{
	if (func_101(iParam0) == 237 || func_101(iParam0) == 250)
	{
		return func_414(iParam0);
	}
	return -1;
}

int func_414(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_176;
	}
	return -1;
}

int func_415(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_416(int iParam0)
{
	if (func_424(PLAYER::PLAYER_ID()) && func_448())
	{
		if (func_384(iParam0))
		{
			func_419(7948, -1);
		}
		else if (func_418(iParam0))
		{
			func_419(7950, -1);
		}
		else if (func_210(iParam0, 1))
		{
			func_419(7951, -1);
		}
		else if (func_417(iParam0))
		{
			func_419(7952, -1);
		}
	}
}

int func_417(int iParam0)
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

int func_418(int iParam0)
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

void func_419(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_423(iParam0, func_138(iParam1), 0);
	iVar0++;
	if (!func_422(iParam0))
	{
		func_421(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_420(iParam0, iVar0, iParam1, 1);
	}
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_138(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_138(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_138(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_138(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_138(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_138(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_138(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_138(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_138(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_138(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_138(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_138(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_138(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_138(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_138(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_138(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_138(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_138(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_138(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_138(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_138(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_138(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_138(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_138(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_138(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_138(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_138(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_138(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_138(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_138(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_138(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_138(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_421(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_422(int iParam0)
{
	if (Global_1373635)
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
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_138(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_424(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_109, 14);
}

void func_425(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
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

void func_426(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22851 == 0 || Global_262145.f_22851 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_22851 == 1)
			{
				Global_2519572.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2519572.f_273 = iParam1;
				Global_2519572.f_274 = 0;
			}
		}
	}
}

int func_427(int iParam0)
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

int func_428(int iParam0)
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

void func_429(int iParam0, int iParam1)
{
	if (func_424(PLAYER::PLAYER_ID()) && func_448())
	{
		if (func_384(iParam0) && iParam1 > 0)
		{
			func_421(7949, (func_423(7949, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_430(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_433(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_431(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_431(int iParam0, int iParam1)
{
	return (func_432(iParam0) * iParam1);
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21676;
		
		case 0:
			return Global_262145.f_21677;
		
		case 1:
			return Global_262145.f_21678;
		
		case 2:
			return Global_262145.f_21679;
		
		case 3:
			return Global_262145.f_21680;
		
		case 4:
			return Global_262145.f_21681;
		
		case 5:
			return Global_262145.f_21682;
		
		case 6:
			return Global_262145.f_21683;
		
		case 7:
			return Global_262145.f_21684;
		
		default:
	}
	return 0;
}

float func_433(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21686);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21688;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21685);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21688;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21685);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21689;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21689;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21689;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21690;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21687);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21690;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21687);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21690;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21687);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_434(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_273.f_168[5 /*12*/];
}

bool func_435()
{
	return func_119(PLAYER::PLAYER_ID());
}

void func_436(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_449())
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
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_437(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_437(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_437(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_449())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_19()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_4262738 = 1;
			return 0;
		}
		if (Global_2458855)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262739 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262188[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_444(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262188[*uParam0 /*80*/].f_69 = 1;
					Global_4262188[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262725 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262737 = 1;
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_443(1, iParam4);
			Global_4262737 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_438(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_118.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_439(iParam0);
	}
}

void func_439(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_449())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_442(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_4262188[iParam0 /*80*/]);
		}
		func_440(&(Global_4262188[iParam0 /*80*/]));
	}
}

void func_440(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_441(&(uParam0->f_8.f_3));
	func_441(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_441(var uParam0)
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
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_442(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262188[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_443(int iParam0, int iParam1)
{
	Global_2460027 = iParam1;
	Global_2460026 = iParam0;
}

int func_444(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262188[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_449())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262188[iVar0 /*80*/].f_2 = 1;
			Global_4262188[iVar0 /*80*/].f_1 = iParam5;
			Global_4262188[iVar0 /*80*/].f_3 = uParam1;
			Global_4262188[iVar0 /*80*/].f_4 = iParam2;
			Global_4262188[iVar0 /*80*/].f_7 = iParam3;
			Global_4262188[iVar0 /*80*/].f_5 = 0;
			Global_4262188[iVar0 /*80*/] = iParam0;
			Global_4262188[iVar0 /*80*/].f_6 = iParam4;
			Global_4262188[iVar0 /*80*/].f_72 = uParam8;
			Global_4262188[iVar0 /*80*/].f_71 = iParam7;
			Global_4262188[iVar0 /*80*/].f_74 = iParam9;
			Global_4262188[iVar0 /*80*/].f_73 = 0;
			Global_4262188[iVar0 /*80*/].f_75 = MISC::GET_FRAME_COUNT();
			Global_4262188[iVar0 /*80*/].f_79 = 0;
			Global_4262725 = 0;
			if (bParam6)
			{
				Global_4262188[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_445(int iParam0)
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
	return -1;
}

char* func_446(int iParam0)
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

struct<2> func_447()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_188;
}

bool func_448()
{
	return func_239(PLAYER::PLAYER_ID());
}

int func_449()
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

bool func_450(bool bParam0)
{
	return func_179(PLAYER::PLAYER_ID(), bParam0);
}

void func_451(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1624079[iParam0 /*558*/].f_11.f_8[0];
	*uParam2 = Global_1624079[iParam0 /*558*/].f_11.f_8[1];
}

int func_452()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11;
}

int func_453(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_454(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_454(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_464(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_460(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_455(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_455(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_458(iParam0, 1) };
	if (iParam0 == func_457(PLAYER::PLAYER_PED_ID()))
	{
		func_456(1);
	}
	func_460(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_456(int iParam0)
{
	Global_2436641.f_1885 = iParam0;
}

int func_457(int iParam0)
{
	return iParam0;
}

Vector3 func_458(int iParam0, bool bParam1)
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
	if (iParam0 == func_459(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
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

int func_459(int iParam0)
{
	return iParam0;
}

void func_460(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436641.f_1284[iVar0 /*30*/].f_6 == 0 || Global_2436641.f_1284[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436641.f_1284[iVar1 /*30*/] = { vParam0 };
			Global_2436641.f_1284[iVar1 /*30*/].f_6 = 1;
			Global_2436641.f_1284[iVar1 /*30*/].f_4 = func_463(Global_2436641.f_1284[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436641.f_1284[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2436641.f_1284[iVar1 /*30*/].f_3 = iParam1;
			Global_2436641.f_1284[iVar1 /*30*/].f_8 = iParam2;
			Global_2436641.f_1284[iVar1 /*30*/].f_9 = func_462();
			Global_2436641.f_1284[iVar1 /*30*/].f_10 = func_461();
			StringCopy(&(Global_2436641.f_1284[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436641.f_1284[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_461()
{
	if (Global_2436641.f_1885)
	{
		Global_2436641.f_1885 = 0;
		return 1;
	}
	Global_2436641.f_1885 = 0;
	return 0;
}

var func_462()
{
	var uVar0;
	
	uVar0 = Global_2436641.f_1887;
	Global_2436641.f_1887 = 1;
	return uVar0;
}

float func_463(vector3 vParam0, var uParam1, var uParam2)
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

var func_464(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_465(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_465(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_495(PLAYER::PLAYER_ID()) || func_494(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9024 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9024;
		}
	}
	else if (func_227() || func_493(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22143 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22143;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_492(sParam2))
	{
	}
	if (func_491())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_489(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_488(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_486(0, &iVar1);
					break;
				
				case 3:
					func_486(1, &iVar1);
					break;
				
				case 1:
					func_484(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1676003)
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
			func_483(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_475((func_482(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_2 != -1)
				{
					func_483(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_470(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_466((func_468(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_466((func_468(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_466(int iParam0)
{
	if (func_491())
	{
		Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_5 = iParam0;
		func_467(joaat("mpply_globalxp"), iParam0);
	}
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_468(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_948(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_469(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_5;
			}
		}
		else
		{
			return func_469(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_470(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_65(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_473(func_474(&Var0));
			if (iVar1 == 0)
			{
				func_472(&Global_1373641, iParam0);
				func_471(joaat("mpply_crew_local_xp_0"), Global_1373641);
			}
			else if (iVar1 == 1)
			{
				func_472(&Global_1373642, iParam0);
				func_471(joaat("mpply_crew_local_xp_1"), Global_1373642);
			}
			else if (iVar1 == 2)
			{
				func_472(&Global_1373643, iParam0);
				func_471(joaat("mpply_crew_local_xp_2"), Global_1373643);
			}
			else if (iVar1 == 3)
			{
				func_472(&Global_1373644, iParam0);
				func_471(joaat("mpply_crew_local_xp_3"), Global_1373644);
			}
			else if (iVar1 == 4)
			{
				func_472(&Global_1373645, iParam0);
				func_471(joaat("mpply_crew_local_xp_4"), Global_1373645);
			}
		}
	}
}

void func_471(int iParam0, int iParam1)
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
			Global_1373636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1373639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1373640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1373641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1373642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1373643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1373644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1373645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1373646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1373647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1373648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1373649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1373650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1373651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1373652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_473(int iParam0)
{
	if (iParam0 == Global_1373636)
	{
		return 0;
	}
	else if (iParam0 == Global_1373637)
	{
		return 1;
	}
	else if (iParam0 == Global_1373638)
	{
		return 2;
	}
	else if (iParam0 == Global_1373639)
	{
		return 3;
	}
	else if (iParam0 == Global_1373640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_474(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2457627;
		}
	}
	return Global_2457627;
}

void func_475(int iParam0, int iParam1, int iParam2)
{
	if (func_491())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8992 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1373762[func_138(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1373762[func_138(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_481(PLAYER::PLAYER_ID()))
		{
			Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_1 = iParam0;
			Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_6 = func_479(iParam0, 1);
		}
		func_420(639, iParam0, -1, 1);
		func_421(640, func_479(iParam0, 1), -1, 1, 0);
		Global_1373762[func_138(-1)] = iParam0;
		func_476(7, 0);
	}
}

void func_476(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_478(iParam0, iParam1))
	{
		iVar0 = func_477();
		Global_2457604[iVar0] = iParam0;
	}
}

int func_477()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2457604[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_478(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_479(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_480(iParam0, 0);
}

int func_480(int iParam0, int iParam1)
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
		if (Global_286291[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_286291[iVar3] < iParam0)
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

int func_481(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2436641.f_1, iParam0);
	}
	return 1;
}

int func_482(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1373762[func_138(-1)];
			}
			else if (func_481(iParam0))
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1373762[func_138(-1)];
	}
	return 0;
}

void func_483(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_423(iParam0, func_138(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_422(iParam0))
	{
		func_421(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_420(iParam0, iVar0, iParam2, 1);
	}
}

void func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_350(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_66(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_485(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_485(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_485(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_486(bool bParam0, int iParam1)
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
				if (func_948(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_66(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_948(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_487(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_66(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_485(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_485(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_487(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_488(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_485(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_489(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_482(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_482(PLAYER::PLAYER_ID());
		}
	}
	if (func_490(8000, 0, 0) > 0)
	{
		if (func_490(8000, 0, 0) < (iParam0 + func_482(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_490(8000, 0, 0) - func_482(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_490(int iParam0, bool bParam1, int iParam2)
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
	return Global_286291[iParam0];
}

int func_491()
{
	return 1;
}

int func_492(char* sParam0)
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

int func_493(int iParam0)
{
	return func_377(func_101(iParam0));
}

bool func_494(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_495(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

void func_496()
{
	Global_2459235 = 1;
}

void func_497(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_79(7))
	{
		return;
	}
	iVar0 = func_500(iParam0);
	iVar1 = func_499(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2519572.f_4882.f_257, NETWORK::GET_NETWORK_TIME()));
	if (func_498(iParam0) != -1)
	{
		if (iVar2 > func_498(iParam0))
		{
			iVar2 = func_498(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11784)
	{
		iVar2 = Global_262145.f_11784;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_498(int iParam0)
{
	if (func_210(iParam0, 0) || func_418(iParam0))
	{
		return Global_262145.f_17857;
	}
	if (func_384(iParam0))
	{
		return Global_262145.f_17856;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17853;
		
		case 191:
			return Global_262145.f_17855;
		
		case 190:
			return Global_262145.f_17854;
		
		case 227:
			return Global_262145.f_20413;
		
		case 226:
			return Global_262145.f_20401;
		
		case 225:
			return Global_262145.f_20421;
		
		case 230:
			return Global_262145.f_21673;
		
		case 229:
			return Global_262145.f_21577;
		
		case 233:
			return Global_262145.f_22148;
		
		case 237:
			return Global_262145.f_23276;
		
		case 238:
			return Global_262145.f_23387;
		
		case 249:
			return Global_262145.f_23403;
		
		default:
	}
	return -1;
}

int func_499(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11875;
		
		case 152:
			return Global_262145.f_11910;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11898;
		
		case 157:
			return Global_262145.f_11865;
		
		case 159:
			return Global_262145.f_11848;
		
		case 164:
			return Global_262145.f_11888;
		
		case 160:
			return Global_262145.f_11938;
		
		case 162:
			return Global_262145.f_11958;
		
		case 163:
			return Global_262145.f_11923;
		
		case 154:
			return Global_262145.f_11993;
		
		case 155:
			return Global_262145.f_11983;
		
		case 153:
			return Global_262145.f_11947;
		
		case 170:
			return Global_262145.f_14370;
		
		case 171:
			return Global_262145.f_14429;
		
		case 172:
			return Global_262145.f_14447;
		
		case 173:
			return Global_262145.f_14388;
		
		case 166:
			return Global_262145.f_14403;
		
		case 167:
			return Global_262145.f_14494;
		
		case 169:
			return Global_262145.f_14466;
		
		case 168:
			return Global_262145.f_14459;
		
		case 179:
			return Global_262145.f_17736;
		
		case 180:
			return Global_262145.f_17515;
		
		case 182:
			return Global_262145.f_17515;
		
		case 183:
			return Global_262145.f_17515;
		
		case 185:
			return Global_262145.f_17515;
		
		case 186:
			return Global_262145.f_17515;
		
		case 189:
			return Global_262145.f_17736;
		
		case 190:
			return Global_262145.f_17391;
		
		case 191:
			return Global_262145.f_17482;
		
		case 192:
			return Global_262145.f_17276;
		
		case 193:
			return Global_262145.f_17736;
		
		case 194:
			return Global_262145.f_17736;
		
		case 195:
			return Global_262145.f_17515;
		
		case 197:
			return Global_262145.f_17515;
		
		case 198:
			return Global_262145.f_17515;
		
		case 199:
			return Global_262145.f_17736;
		
		case 200:
			return Global_262145.f_17736;
		
		case 201:
			return Global_262145.f_17736;
		
		case 205:
			return Global_262145.f_17736;
		
		case 207:
			return Global_262145.f_17515;
		
		case 208:
			return Global_262145.f_17515;
		
		case 209:
			return Global_262145.f_17515;
		
		case 210:
			return Global_262145.f_17736;
		
		case 211:
			return Global_262145.f_17736;
		
		case 214:
			return Global_262145.f_18586;
		
		case 215:
			return Global_262145.f_18588;
		
		case 216:
			return Global_262145.f_18590;
		
		case 217:
			return Global_262145.f_18592;
		
		case 218:
			return Global_262145.f_18594;
		
		case 219:
			return Global_262145.f_18596;
		
		case 220:
			return Global_262145.f_18598;
		
		case 221:
			return Global_262145.f_18600;
		
		case 225:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_20423;
			}
			break;
		
		case 226:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_20403;
			}
			break;
		
		case 227:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_20415;
			}
			break;
		
		case 229:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_21579;
			}
			break;
		
		case 230:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_21675;
			}
			break;
		
		case 233:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_22147;
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
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_23278;
			}
			break;
		
		case 238:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_23389;
			}
			break;
		
		case 249:
			if (func_450(0) || func_237(0))
			{
				return Global_262145.f_23405;
			}
			break;
	}
	return 0;
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11874;
		
		case 152:
			return Global_262145.f_11909;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11897;
		
		case 157:
			return Global_262145.f_11864;
		
		case 159:
			return Global_262145.f_11847;
		
		case 164:
			return Global_262145.f_11887;
		
		case 160:
			return Global_262145.f_11937;
		
		case 162:
			return Global_262145.f_11957;
		
		case 163:
			return Global_262145.f_11922;
		
		case 154:
			return Global_262145.f_11992;
		
		case 155:
			return Global_262145.f_11982;
		
		case 153:
			return Global_262145.f_11946;
		
		case 170:
			return Global_262145.f_14369;
		
		case 171:
			return Global_262145.f_14428;
		
		case 172:
			return Global_262145.f_14446;
		
		case 173:
			return Global_262145.f_14387;
		
		case 166:
			return Global_262145.f_14402;
		
		case 179:
			return Global_262145.f_17735;
		
		case 180:
			return Global_262145.f_17514;
		
		case 182:
			return Global_262145.f_17514;
		
		case 183:
			return Global_262145.f_17514;
		
		case 185:
			return Global_262145.f_17514;
		
		case 186:
			return Global_262145.f_17514;
		
		case 189:
			return Global_262145.f_17735;
		
		case 193:
			return Global_262145.f_17735;
		
		case 194:
			return Global_262145.f_17735;
		
		case 195:
			return Global_262145.f_17514;
		
		case 197:
			return Global_262145.f_17514;
		
		case 198:
			return Global_262145.f_17514;
		
		case 199:
			return Global_262145.f_17735;
		
		case 200:
			return Global_262145.f_17735;
		
		case 201:
			return Global_262145.f_17735;
		
		case 205:
			return Global_262145.f_17735;
		
		case 207:
			return Global_262145.f_17514;
		
		case 208:
			return Global_262145.f_17514;
		
		case 209:
			return Global_262145.f_17514;
		
		case 210:
			return Global_262145.f_17735;
		
		case 211:
			return Global_262145.f_17735;
		
		case 190:
			if (!func_435())
			{
				return Global_262145.f_17390;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_435())
			{
				return Global_262145.f_17481;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_435())
			{
				return Global_262145.f_17275;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18585;
		
		case 215:
			return Global_262145.f_18587;
		
		case 216:
			return Global_262145.f_18589;
		
		case 217:
			return Global_262145.f_18591;
		
		case 218:
			return Global_262145.f_18593;
		
		case 219:
			return Global_262145.f_18595;
		
		case 220:
			return Global_262145.f_18597;
		
		case 221:
			return Global_262145.f_18599;
		
		case 225:
			if (func_237(0))
			{
				return Global_262145.f_20422;
			}
			break;
		
		case 226:
			if (func_237(0))
			{
				return Global_262145.f_20402;
			}
			break;
		
		case 227:
			if (func_237(0))
			{
				return Global_262145.f_20414;
			}
			break;
		
		case 229:
			if (func_237(0))
			{
				return Global_262145.f_21578;
			}
			break;
		
		case 230:
			if (func_237(0))
			{
				return Global_262145.f_21674;
			}
			break;
		
		case 233:
			if (func_237(0))
			{
				return Global_262145.f_22149;
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
			if (func_237(0))
			{
				return Global_262145.f_23277;
			}
			break;
		
		case 238:
			if (func_237(0))
			{
				return Global_262145.f_23388;
			}
			break;
		
		case 249:
			if (func_237(0))
			{
				return Global_262145.f_23404;
			}
			break;
	}
	return 0;
}

void func_501(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_435())
		{
			if (func_450(0))
			{
				if (!func_237(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_452()))
					{
						if (func_512() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_512());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_510(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_507("GB_BCUT_TICK1", func_452(), iVar0, 0, 0, 1, 1);
						}
						func_506(20);
						func_502(func_452(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_502(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_948(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_505(iParam0);
		func_504(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_0xA40CC53DF8E50837(1, &Var0, 8, func_503(iParam0));
	}
}

var func_503(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_504(var uParam0, var uParam1)
{
	*uParam0 = Global_1641937.f_9;
	*uParam1 = Global_1641937.f_10;
}

var func_505(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_491;
}

void func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2519572.f_4882.f_7[iVar0]), iVar1);
}

int func_507(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_343(iParam1, -2, 1, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_508(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_290(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_508(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_509(&cVar0);
}

var func_509(char[4] cParam0)
{
	return cParam0;
}

void func_510(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_511(1);
	}
	else
	{
		iVar1 = func_511(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_511(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_11779;
}

int func_512()
{
	return Global_262145.f_11778;
}

void func_513(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_237(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_435())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_452();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589291[iVar11 /*770*/].f_753.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1589291[iVar11 /*770*/].f_753.f_2;
			}
			else
			{
				iVar2 = func_529(Global_1589291[iVar11 /*770*/].f_753, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_528(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_527("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1665665.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_526(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_524(*uParam3);
				}
				iVar6 = func_523(&uVar5);
				iVar7 = Global_262145.f_23307;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23306));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_506(140);
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
								if (func_522(iVar23))
								{
									func_514(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23279;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23280;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1676011 = *iParam2;
					func_506(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_514(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_516(iParam0);
	func_515(iParam0, uVar0, iParam1, iParam2);
}

void func_515(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 151656521;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_505(iParam0);
	func_504(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_63())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::_0xA40CC53DF8E50837(1, &Var0, 8, func_503(iParam0));
		}
	}
}

int func_516(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_521();
	iVar0 = func_519(iParam0, iVar0);
	iVar1 = Global_1624079[func_452() /*558*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14330));
	if (iVar0 < func_518())
	{
		iVar0 = func_518();
	}
	if (iVar0 > func_517())
	{
		iVar0 = func_517();
	}
	return iVar0;
}

int func_517()
{
	return Global_262145.f_14331;
}

int func_518()
{
	return Global_262145.f_15506;
}

int func_519(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_587(iParam0) * func_520());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_520()
{
	return Global_262145.f_15505;
}

var func_521()
{
	return Global_262145.f_11770;
}

int func_522(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_74(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_105(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_523(var uParam0)
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
			if (!func_17(iVar2, 0) && !func_74(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_524(int iParam0)
{
	func_525(iParam0, 7232);
}

void func_525(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_423(iParam1, -1, 0);
	func_421(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_526(int iParam0)
{
	func_525(iParam0, 7227);
}

int func_527(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_290(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_528(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23308);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_529(struct<5> Param0, int iParam1)
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

void func_530(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_237(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_435())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_452();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_542(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_533(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_431(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_430(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_532(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_527("SMTICK_RONCUT", func_532(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_532(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_531(iVar2, iVar9);
				iVar6 = func_523(&uVar5);
				iVar7 = Global_262145.f_21692;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21691));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_506(44);
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
								if (func_522(iVar20))
								{
									func_514(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21625;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21626;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1676011 = *iParam2;
					func_506(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_531(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_525(iParam0, 6112);
	}
	if (iParam1 > 0)
	{
		func_525(iParam1, 6113);
	}
}

int func_532(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21659);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_21660))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_21660);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_540())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_542(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_535(func_536(func_539(iVar0), -1, -1));
		if (func_534(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_536(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_538(iParam0, iParam1);
	iVar2 = func_537(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_537(int iParam0)
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
	return iVar0;
}

int func_538(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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
	return iVar0;
}

int func_539(int iParam0)
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

bool func_540()
{
	return func_541() != 0;
}

int func_541()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_249;
}

int func_542(int iParam0)
{
	if (iParam0 != func_63() && func_543(iParam0))
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_249.f_3;
	}
	return 0;
}

int func_543(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_249 != 0;
	}
	return 0;
}

void func_544(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_237(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_435())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_452();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_434(iVar15);
			iVar0 = (func_565(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_561(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20405));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20404));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_558(iVar16, iVar2);
				if (func_554(iVar16) >= Global_262145.f_19953 || iVar2 >= Global_262145.f_19953)
				{
					func_545(5);
				}
				iVar6 = func_523(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_20407);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_20406));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_506(108);
					}
					else
					{
						func_506(110);
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
								if (func_522(iVar20))
								{
									func_514(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20408;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20409;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1676011 = *iParam2;
					func_506(112);
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

void func_545(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19941)
			{
				if (func_547(Global_262145.f_19942))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19943)
			{
				if (func_547(Global_262145.f_19944))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19945)
			{
				if (func_547(Global_262145.f_19946))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19947)
			{
				if (func_547(Global_262145.f_19948))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19949)
			{
				if (func_547(Global_262145.f_19950))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19951)
			{
				if (func_547(Global_262145.f_19952))
				{
					func_527("CLOTHAWDSTRAP3", Global_262145.f_19953, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19954)
			{
				if (func_547(Global_262145.f_19955))
				{
					func_527("CLOTHAWDSTRAP5", Global_262145.f_20087, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19957)
			{
				if (func_547(Global_262145.f_19958))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19959)
			{
				if (func_547(Global_262145.f_19960))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19961)
			{
				if (func_547(Global_262145.f_19962))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19963)
			{
				if (func_547(Global_262145.f_19964))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19965)
			{
				if (func_547(Global_262145.f_19966))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19967)
			{
				if (func_547(Global_262145.f_19968))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19969)
			{
				if (func_547(Global_262145.f_19970))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19971)
			{
				if (func_547(Global_262145.f_19972))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_546(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
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
		Global_2498829 = { func_65(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498759, 35, &Global_2498829))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2498759.f_22), "Leader") && Global_2498759.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2498759.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_2498759, 35), &(Global_2498759.f_17), Global_2498759.f_30, iVar1, 0, Global_2498759, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_290(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_551(15417, -1, -1))
			{
				func_550(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_551(15418, -1, -1))
			{
				func_550(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_551(15425, -1, -1))
			{
				func_550(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_551(15405, -1, -1))
			{
				func_550(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_551(15393, -1, -1))
			{
				func_550(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_551(15409, -1, -1))
			{
				func_550(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_551(15396, -1, -1))
			{
				func_550(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_551(15412, -1, -1))
			{
				func_550(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_551(15403, -1, -1))
			{
				func_550(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_551(15389, -1, -1))
			{
				func_550(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_551(15398, -1, -1))
			{
				func_550(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_551(15400, -1, -1))
			{
				func_550(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_551(15408, -1, -1))
			{
				func_550(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_551(15411, -1, -1))
			{
				func_550(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_551(15397, -1, -1))
			{
				func_550(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_551(15413, -1, -1))
			{
				func_550(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_551(15391, -1, -1))
			{
				func_550(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_551(15388, -1, -1))
			{
				func_550(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_551(15401, -1, -1))
			{
				func_550(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_551(15394, -1, -1))
			{
				func_550(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_551(15406, -1, -1))
			{
				func_550(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_551(15395, -1, -1))
			{
				func_550(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_551(15410, -1, -1))
			{
				func_550(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_551(15407, -1, -1))
			{
				func_550(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_551(15414, -1, -1))
			{
				func_550(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_551(15415, -1, -1))
			{
				func_550(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_551(15399, -1, -1))
			{
				func_550(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_551(15404, -1, -1))
			{
				func_550(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_551(15392, -1, -1))
			{
				func_550(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_551(15390, -1, -1))
			{
				func_550(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_551(15402, -1, -1))
			{
				func_550(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_551(15416, -1, -1))
			{
				func_550(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_551(15426, -1, -1))
			{
				func_550(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_551(15422, -1, -1))
			{
				func_550(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_551(15423, -1, -1))
			{
				func_550(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_551(15421, -1, -1))
			{
				func_550(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_551(15427, -1, -1))
			{
				func_550(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_551(15419, -1, -1))
			{
				func_550(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_551(15420, -1, -1))
			{
				func_550(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_548(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_549())
	{
		iVar0 = Global_2557346[iParam0 /*3*/][func_138(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_549()
{
	return 1;
	return 0;
}

int func_550(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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
	return iVar0;
}

int func_551(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_553(iParam0, iParam1);
	uVar2 = func_552(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_552(int iParam0)
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
	return iVar0;
}

int func_553(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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
	return iVar0;
}

int func_554(int iParam0)
{
	int iVar0;
	
	iVar0 = func_556(iParam0);
	return func_423(func_555(iVar0), -1, 0);
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3947;
		
		case 1:
			return 3948;
		
		case 2:
			return 3949;
		
		case 3:
			return 3950;
		
		case 4:
			return 3951;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3947;
}

int func_556(int iParam0)
{
	int iVar0;
	
	if (func_557(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_557(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_558(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_556(iParam0);
	iVar1 = func_555(iVar0);
	iVar2 = (func_423(iVar1, -1, 0) + iParam1);
	func_421(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_536(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iVar0 /*12*/] != 0)
			{
				iVar1 = func_555(iVar0);
				iVar3 = (iVar3 + func_423(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_560(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_559(9357, iVar5, -1, 1);
	}
}

var func_559(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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

int func_560(int iParam0)
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

int func_561(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_445(iParam1);
	if (func_557(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16335;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16340);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16345);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16334;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16339);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16344);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16333;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16338);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16343);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16331;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16336);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16341);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16332;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16337);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16342);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20430;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20432);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20431);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_562(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_564(iParam0, iParam1))
	{
		iVar0 = func_563(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_563(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_557(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_564(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_557(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_566(int iParam0, var uParam1, int iParam2, var uParam3)
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
		if (uParam1->f_10 > 0)
		{
			if (func_448())
			{
				Var0 = { func_447() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_561(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_17965);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_17964);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_523(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_262145.f_17955);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_262145.f_17954));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_506(86);
				}
				Global_2519572.f_4882.f_370 = *iParam2;
			}
			else if (func_237(0))
			{
				Var14 = { func_567(func_452()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_561(func_452(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_17965));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_17964));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18004;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18005;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
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

struct<2> func_567(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_188;
}

void func_568(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_119(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_583();
			}
			func_582();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_119(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_574(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_573(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_523(&uVar2);
					iVar4 = Global_262145.f_15516;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_14725));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_506(44);
					}
				}
				func_571(*iParam3);
				func_570();
				Global_2519572.f_4882.f_370 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_522(iVar9))
						{
							func_514(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_119(PLAYER::PLAYER_ID()))
		{
			func_569();
		}
	}
}

void func_569()
{
	int iVar0;
	
	iVar0 = Global_2559367[func_19()];
	iVar0++;
	func_420(3663, iVar0, -1, 1);
}

void func_570()
{
	int iVar0;
	
	iVar0 = Global_2559373[func_19()];
	iVar0++;
	func_420(3662, iVar0, -1, 1);
}

void func_571(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2559376[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_420(3664, iVar0, -1, 1);
	if (func_536(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_572(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_559(7666, iVar2, -1, 1);
	}
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15649;
			break;
		
		case 2:
			return Global_262145.f_15650;
			break;
		
		case 3:
			return Global_262145.f_15651;
			break;
		
		case 4:
			return Global_262145.f_15652;
			break;
		
		case 5:
			return Global_262145.f_15653;
			break;
		
		case 6:
			return Global_262145.f_15654;
			break;
		
		case 7:
			return Global_262145.f_15655;
			break;
		
		case 8:
			return Global_262145.f_15656;
			break;
		
		case 9:
			return Global_262145.f_15657;
			break;
		
		case 10:
			return Global_262145.f_15658;
			break;
		
		case 11:
			return Global_262145.f_15659;
			break;
		
		case 12:
			return Global_262145.f_15660;
			break;
		
		case 13:
			return Global_262145.f_15661;
			break;
		
		case 14:
			return Global_262145.f_15662;
			break;
		
		case 15:
			return Global_262145.f_15663;
			break;
		
		case 16:
			return Global_262145.f_15664;
			break;
		
		case 17:
			return Global_262145.f_15665;
			break;
		
		case 18:
			return Global_262145.f_15666;
			break;
		
		case 19:
			return Global_262145.f_15667;
			break;
		
		case 20:
			return Global_262145.f_15668;
			break;
		
		case 21:
			return Global_262145.f_15669;
			break;
		
		case 22:
			return Global_262145.f_15670;
			break;
		
		case 23:
			return Global_262145.f_15671;
			break;
		
		case 24:
			return Global_262145.f_15672;
			break;
	}
	return 0;
}

var func_573(int iParam0)
{
	if (iParam0 >= Global_262145.f_14703)
	{
		return Global_262145.f_14724;
	}
	else if (iParam0 >= Global_262145.f_14702)
	{
		return Global_262145.f_14723;
	}
	else if (iParam0 >= Global_262145.f_14701)
	{
		return Global_262145.f_14722;
	}
	else if (iParam0 >= Global_262145.f_14700)
	{
		return Global_262145.f_14721;
	}
	else if (iParam0 >= Global_262145.f_14699)
	{
		return Global_262145.f_14720;
	}
	else if (iParam0 >= Global_262145.f_14698)
	{
		return Global_262145.f_14719;
	}
	else if (iParam0 >= Global_262145.f_14697)
	{
		return Global_262145.f_14718;
	}
	else if (iParam0 >= Global_262145.f_14696)
	{
		return Global_262145.f_14717;
	}
	else if (iParam0 >= Global_262145.f_14695)
	{
		return Global_262145.f_14716;
	}
	else if (iParam0 >= Global_262145.f_14694)
	{
		return Global_262145.f_14715;
	}
	else if (iParam0 >= Global_262145.f_14693)
	{
		return Global_262145.f_14714;
	}
	else if (iParam0 >= Global_262145.f_14692)
	{
		return Global_262145.f_14713;
	}
	else if (iParam0 >= Global_262145.f_14691)
	{
		return Global_262145.f_14712;
	}
	else if (iParam0 >= Global_262145.f_14690)
	{
		return Global_262145.f_14711;
	}
	else if (iParam0 >= Global_262145.f_14689)
	{
		return Global_262145.f_14710;
	}
	else if (iParam0 >= Global_262145.f_14688)
	{
		return Global_262145.f_14709;
	}
	else if (iParam0 >= Global_262145.f_14687)
	{
		return Global_262145.f_14708;
	}
	else if (iParam0 >= Global_262145.f_14686)
	{
		return Global_262145.f_14707;
	}
	else if (iParam0 >= Global_262145.f_14685)
	{
		return Global_262145.f_14706;
	}
	else if (iParam0 >= Global_262145.f_14684)
	{
		return Global_262145.f_14705;
	}
	return Global_262145.f_14704;
}

int func_574(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_581(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_580(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_579(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_575(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_575(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_579(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_575(int iParam0)
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = func_576(func_577(iParam0));
		return func_423(iVar0, -1, 0);
	}
	return 0;
}

int func_576(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3642;
	}
	else if (iParam0 == 1)
	{
		return 3643;
	}
	else if (iParam0 == 2)
	{
		return 3644;
	}
	else if (iParam0 == 3)
	{
		return 3645;
	}
	else if (iParam0 == 4)
	{
		return 3646;
	}
	return 3642;
}

int func_577(int iParam0)
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_92[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_578(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_579(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14903;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14901;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14905;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14899;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14897;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14907;
	}
	return 0;
}

int func_580(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1666869[iVar0] == iParam1 && Global_1666876[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_581(int iParam0)
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_92[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_582()
{
	int iVar0;
	
	iVar0 = Global_2559364[func_19()];
	iVar0++;
	Global_2559364[func_19()] = iVar0;
	func_420(3661, iVar0, -1, 1);
}

void func_583()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2559361[func_19()];
	iVar1 = Global_2559370[func_19()];
	iVar0++;
	iVar1++;
	Global_2559361[func_19()] = iVar0;
	Global_2559370[func_19()] = iVar1;
	Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_114 = iVar1;
	func_420(3659, iVar0, -1, 1);
	func_420(3660, iVar1, -1, 1);
}

void func_584()
{
	if (func_435())
	{
		Global_2448723.f_3066.f_134 = 0;
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_408 = Global_2448723.f_3066.f_134;
	}
}

void func_585()
{
	if (func_435())
	{
		if (Global_2448723.f_3066.f_134 < 10)
		{
			Global_2448723.f_3066.f_134++;
			Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_408 = Global_2448723.f_3066.f_134;
		}
	}
}

void func_586()
{
	if (func_435())
	{
		if (Global_2448723.f_3066.f_134 > 0)
		{
			Global_2448723.f_3066.f_134 = (Global_2448723.f_3066.f_134 - 1);
			Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_408 = Global_2448723.f_3066.f_134;
		}
	}
}

int func_587(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_28;
}

int func_588(int iParam0)
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
			if (func_450(1) && !func_237(1))
			{
				if (func_589(func_452()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_589(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 26);
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11895) * Global_262145.f_11900));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11845) * Global_262145.f_11850));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11872) * Global_262145.f_11876));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11885) * Global_262145.f_11889));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11907) * Global_262145.f_11912));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12069) * Global_262145.f_12070));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12075) * Global_262145.f_12076));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12073) * Global_262145.f_12074));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12067) * Global_262145.f_12068));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12071) * Global_262145.f_12072));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12065) * Global_262145.f_12066));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14426;
		
		case 172:
			return Global_262145.f_14442;
		
		case 173:
			return Global_262145.f_14385;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17659;
		
		case 180:
			return Global_262145.f_17535;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17543;
		
		case 185:
			return Global_262145.f_17552;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17747;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17764;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17612;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17795;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17673;
		
		case 205:
			return Global_262145.f_17782;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17640;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17777;
		
		case 211:
			return Global_262145.f_17741;
		
		case 214:
			return Global_262145.f_18335;
		
		case 215:
			return Global_262145.f_18345;
		
		case 216:
			return Global_262145.f_18355;
		
		case 217:
			return Global_262145.f_18364;
		
		case 218:
			return Global_262145.f_18373;
		
		case 219:
			return Global_262145.f_18389;
		
		case 241:
			return Global_262145.f_23424;
		
		case 242:
			return Global_262145.f_23420;
		
		case 248:
			return Global_262145.f_23423;
		
		case 244:
			return Global_262145.f_23421;
		
		case 239:
			return Global_262145.f_23425;
		
		case 240:
			return Global_262145.f_23426;
		
		default:
	}
	return 0;
}

int func_591(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11896) * Global_262145.f_11901));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11846) * Global_262145.f_11851));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11873) * Global_262145.f_11877));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11886) * Global_262145.f_11890));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11908) * Global_262145.f_11913));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11945) * Global_262145.f_11948));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11991) * Global_262145.f_11994));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11981) * Global_262145.f_11984));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11936) * Global_262145.f_11939));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11956) * Global_262145.f_11961));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_11921) * Global_262145.f_11924));
		
		case 170:
			return Global_262145.f_14368;
		
		case 171:
			return Global_262145.f_14427;
		
		case 172:
			return Global_262145.f_14443;
		
		case 173:
			return Global_262145.f_14386;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16463;
		
		case 168:
			return Global_262145.f_16462;
		
		case 179:
			return Global_262145.f_17660;
		
		case 180:
			return Global_262145.f_17536;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17544;
		
		case 185:
			return Global_262145.f_17553;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17748;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17765;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17613;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17796;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17674;
		
		case 205:
			return Global_262145.f_17783;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17641;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17778;
		
		case 211:
			return Global_262145.f_17742;
		
		case 214:
			return Global_262145.f_18336;
		
		case 215:
			return Global_262145.f_18346;
		
		case 216:
			return Global_262145.f_18356;
		
		case 217:
			return Global_262145.f_18365;
		
		case 218:
			return Global_262145.f_18374;
		
		case 219:
			return Global_262145.f_18390;
		
		case 178:
			if (func_435())
			{
				return Global_262145.f_18213;
			}
			else if (bParam1)
			{
				return Global_262145.f_18214;
			}
			break;
		
		case 188:
			if (func_435())
			{
				return Global_262145.f_18297;
			}
			else if (bParam1)
			{
				return Global_262145.f_18298;
			}
			break;
		
		case 225:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20418;
				}
				else
				{
					return Global_262145.f_20419;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_20420;
			}
			break;
		
		case 226:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20398;
				}
				else
				{
					return Global_262145.f_20399;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_20400;
			}
			break;
		
		case 227:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20410;
				}
				else
				{
					return Global_262145.f_20411;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_20412;
			}
			break;
		
		case 229:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21574;
				}
				else
				{
					return Global_262145.f_21575;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_21576;
			}
			break;
		
		case 230:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21670;
				}
				else
				{
					return Global_262145.f_21671;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_21672;
			}
			break;
		
		case 233:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22145;
				}
				else
				{
					return Global_262145.f_22146;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_22144;
			}
			break;
		
		case 241:
			return Global_262145.f_23431;
		
		case 242:
			return Global_262145.f_23427;
		
		case 244:
			return Global_262145.f_23428;
		
		case 248:
			return Global_262145.f_23430;
		
		case 239:
			return Global_262145.f_23432;
		
		case 240:
			return Global_262145.f_23433;
		
		case 237:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23273;
				}
				else
				{
					return Global_262145.f_23274;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_23275;
			}
			break;
		
		case 238:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23384;
				}
				else
				{
					return Global_262145.f_23385;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_23386;
			}
			break;
		
		case 249:
			if (func_435() && !func_448())
			{
				if (func_589(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23400;
				}
				else
				{
					return Global_262145.f_23401;
				}
			}
			else if (func_448())
			{
				return Global_262145.f_23402;
			}
			break;
	}
	return 0;
}

void func_592(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_593(iParam0))
	{
		if (!func_435())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11789;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_179(PLAYER::PLAYER_ID(), 1))
	{
		if (func_304(iParam0))
		{
			*uParam1 = (Global_262145.f_17512 / 100f);
			*uParam2 = (Global_262145.f_17512 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23434;
			*uParam2 = Global_262145.f_23434;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23435;
			*uParam2 = Global_262145.f_23435;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23437;
			*uParam2 = Global_262145.f_23437;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23438;
			*uParam2 = Global_262145.f_23438;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23439;
			*uParam2 = Global_262145.f_23439;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23440;
			*uParam2 = Global_262145.f_23440;
		}
		else
		{
			*uParam1 = Global_262145.f_11786;
			*uParam2 = Global_262145.f_11785;
		}
	}
	else if (func_304(iParam0))
	{
		*uParam1 = (Global_262145.f_17513 / 100f);
		*uParam2 = (Global_262145.f_17513 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23441;
		*uParam2 = Global_262145.f_23441;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23442;
		*uParam2 = Global_262145.f_23442;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23444;
		*uParam2 = Global_262145.f_23444;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23445;
		*uParam2 = Global_262145.f_23445;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23446;
		*uParam2 = Global_262145.f_23446;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23447;
		*uParam2 = Global_262145.f_23447;
	}
	else
	{
		*uParam1 = Global_262145.f_11788;
		*uParam2 = Global_262145.f_11787;
	}
	iVar0 = func_240();
	if (iVar0 != func_63())
	{
		if (func_74(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_593(int iParam0)
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

int func_594()
{
	return (Local_105.f_115 * Global_262145.f_14401);
}

int func_595()
{
	return (Local_105.f_115 * Global_262145.f_14400);
}

void func_596(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
		iVar0 = func_171(PLAYER::PLAYER_ID());
		Global_1665631.f_4 = func_696();
		Global_1665631.f_5 = func_695();
		if (func_125(PLAYER::PLAYER_ID()) || func_126(PLAYER::PLAYER_ID()))
		{
			Global_1665631.f_6 = 1;
		}
		else
		{
			Global_1665631.f_6 = 0;
		}
		Global_1665631.f_1 = func_691(bParam9);
		Global_1665631.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1665631.f_9 = func_690(bParam0);
		Global_1665631.f_10 = iParam1;
		Global_1665631.f_17 = Global_1665631.f_2;
		Global_1665631.f_18 = Global_1665631.f_2;
		Global_1665631.f_19 = func_689();
		Global_1665631.f_21 = (Global_1665631.f_8 - Global_1665631.f_7);
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1665631.f_23 = func_690(func_237(1));
		}
		Global_1665631.f_24 = func_688(PLAYER::PLAYER_ID());
		Global_1665631.f_28 = func_687(PLAYER::PLAYER_ID());
		if (Global_1665631.f_24 > 2)
		{
			Global_1665631.f_24 = 2;
		}
		func_685(iVar0);
	}
	else
	{
		iVar0 = func_101(PLAYER::PLAYER_ID());
	}
	if (func_304(iVar0))
	{
		Global_1665370.f_2 = func_696();
		Global_1665370.f_3 = func_695();
		Global_1665370.f_50 = iParam4;
		Global_1665370.f_51 = iParam5;
		Global_1665370.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1665370.f_20 = (Global_1665370.f_10 - Global_1665370.f_9);
		Global_1665370.f_12 = iParam1;
		Global_1665370.f_19 = func_679(iVar0, bParam0, func_684(bParam3));
		if (bParam0)
		{
			Global_1665370.f_11 = 1;
		}
		else
		{
			Global_1665370.f_11 = 0;
		}
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1665370.f_8 = 1;
		}
		else
		{
			Global_1665370.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1665370.f_43 = 0;
			Global_1665370.f_45 = func_678(func_452(), iParam2);
			Global_1665370.f_47 = iParam7;
			Global_1665370.f_46 = iParam6;
			Global_1665370.f_52 = func_677(func_452(), iParam2);
		}
		func_675(iVar0);
	}
	else if (func_309(iVar0))
	{
		Global_1665424.f_2 = func_696();
		Global_1665424.f_3 = func_695();
		Global_1665424.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1665424.f_19 = (Global_1665424.f_10 - Global_1665424.f_9);
		Global_1665424.f_12 = iParam1;
		if (bParam0)
		{
			Global_1665424.f_11 = 1;
		}
		else
		{
			Global_1665424.f_11 = 0;
		}
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1665424.f_8 = 1;
		}
		else
		{
			Global_1665424.f_8 = 0;
		}
		func_673(iVar0);
	}
	else if (func_381(iVar0))
	{
		Global_1665487.f_2 = func_696();
		Global_1665487.f_3 = func_695();
		Global_1665487.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1665487.f_18 = (Global_1665487.f_9 - Global_1665487.f_8);
		Global_1665487.f_11 = iParam1;
		Global_1665487.f_7 = func_689();
		Global_1665487.f_42 = func_671(func_19(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_434(iVar1);
		Global_1665487.f_28 = iVar2;
		Global_1665487.f_29 = func_690((func_670(iVar1) || func_669(iVar1)));
		Global_1665487.f_30 = func_690(func_668(iVar1));
		Global_1665487.f_32 = func_690(func_667(iVar1));
		Global_1665487.f_33 = func_690(func_666(iVar1));
		Global_1665487.f_34 = func_690(func_665(iVar1));
		Global_1665487.f_35 = func_690(func_664(0, iVar1) == 1);
		Global_1665487.f_36 = func_690(func_663(iVar1));
		Global_1665487.f_37 = func_690(func_662(iVar1));
		Global_1665487.f_38 = func_690(func_661(iVar1));
		Global_1665487.f_39 = func_690(func_562(iVar1, iVar2, 0));
		Global_1665487.f_40 = func_690(func_562(iVar1, iVar2, 2));
		Global_1665487.f_41 = func_690(func_562(iVar1, iVar2, 1));
		if (func_660(iVar1))
		{
			Global_1665487.f_31 = 2;
		}
		else if (func_659(iVar1))
		{
			Global_1665487.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1665487.f_10 = 1;
		}
		else
		{
			Global_1665487.f_10 = 0;
		}
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1665487.f_6 = 1;
		}
		else
		{
			Global_1665487.f_6 = 0;
		}
		Global_1665487.f_21 = -2;
		Global_1665487.f_22 = -2;
		func_657(iVar0);
	}
	else if (func_379(iVar0))
	{
		Global_1665531.f_2 = func_696();
		Global_1665531.f_3 = func_695();
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1665531.f_6 = 1;
		}
		else
		{
			Global_1665531.f_6 = 0;
		}
		Global_1665531.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1665531.f_10 = func_690(bParam0);
		Global_1665531.f_11 = iParam1;
		Global_1665531.f_17 = func_656(func_240());
		Global_1665531.f_18 = (Global_1665531.f_9 - Global_1665531.f_8);
		Global_1665531.f_20 = iParam8;
		Global_1665531.f_21 = -2;
		Global_1665531.f_22 = -2;
		Global_1665531.f_27 = func_655();
		Global_1665531.f_29 = func_423(6103, -1, 0);
		Global_1665531.f_30 = func_423(6099, -1, 0);
		Global_1665531.f_31 = func_423(6100, -1, 0);
		Global_1665531.f_32 = func_423(6102, -1, 0);
		Global_1665531.f_33 = func_423(6101, -1, 0);
		Global_1665531.f_34 = func_423(6104, -1, 0);
		Global_1665531.f_36 = func_690(func_237(1));
		Global_1665531.f_37 = func_653();
		func_638();
		func_636(iVar0);
	}
	else if (func_377(iVar0))
	{
		Global_1665585.f_2 = func_696();
		Global_1665585.f_3 = func_695();
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1665585.f_6 = 1;
		}
		else
		{
			Global_1665585.f_6 = 0;
		}
		Global_1665585.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1665585.f_10 = func_690(bParam0);
		Global_1665585.f_11 = iParam1;
		Global_1665585.f_18 = (Global_1665585.f_9 - Global_1665585.f_8);
		Global_1665585.f_20 = iParam8;
		Global_1665585.f_23 = Global_786547;
		Global_1665585.f_36 = Global_786547.f_1;
		Global_1665585.f_24 = func_423(6153, -1, 0);
		Global_1665585.f_25 = func_423(6158, -1, 0);
		Global_1665585.f_26 = func_423(6159, -1, 0);
		Global_1665585.f_27 = func_690((((func_635() || func_634()) || func_633()) || func_632(PLAYER::PLAYER_ID())));
		Global_1665585.f_28 = func_423(6160, -1, 0);
		Global_1665585.f_29 = func_690(func_631());
		Global_1665585.f_35 = -1;
		Global_1665585.f_38 = -1;
		Global_1665585.f_39 = Global_1665585.f_4;
		Global_1665585.f_40 = Global_1665585.f_5;
		Global_1665585.f_41 = func_696();
		Global_1665585.f_42 = func_690(func_237(1));
		Global_1665585.f_44 = Global_1665585.f_18;
		func_629(iVar0);
	}
	else if (func_411(iVar0))
	{
		if (Global_1665718.f_2 == -1)
		{
			Global_1665718.f_2 = func_696();
		}
		if (Global_1665718.f_3 == -1)
		{
			Global_1665718.f_3 = func_695();
		}
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1665718.f_6 = 1;
		}
		else
		{
			Global_1665718.f_6 = 0;
		}
		Global_1665718.f_1 = func_691(0);
		Global_1665718.f_7 = func_689();
		Global_1665718.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1665718.f_10 = func_690(bParam0);
		Global_1665718.f_11 = iParam1;
		if (func_452() != -1)
		{
			Global_1665718.f_17 = func_628(func_452());
		}
		Global_1665718.f_18 = (Global_1665718.f_9 - Global_1665718.f_8);
		Global_1665718.f_19 = Global_2519572.f_6170;
		Global_1665718.f_28 = func_687(PLAYER::PLAYER_ID());
		Global_1665718.f_29 = func_690(func_627(PLAYER::PLAYER_ID()));
		Global_1665718.f_30 = func_690(func_626(PLAYER::PLAYER_ID()));
		Global_1665718.f_31 = func_625(PLAYER::PLAYER_ID());
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1665718.f_33 = func_690(func_237(1));
		}
		if (Global_1665718.f_34 > 2)
		{
			Global_1665718.f_34 = 2;
		}
		func_623(iVar0);
	}
	else if (func_415(iVar0))
	{
		Global_1665665.f_2 = func_696();
		Global_1665665.f_3 = func_695();
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1665665.f_6 = 1;
		}
		else
		{
			Global_1665665.f_6 = 0;
		}
		Global_1665665.f_1 = func_691(0);
		Global_1665665.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1665665.f_10 = func_690(bParam0);
		Global_1665665.f_11 = iParam1;
		Global_1665665.f_18 = (Global_1665665.f_9 - Global_1665665.f_8);
		Global_1665665.f_28 = func_687(PLAYER::PLAYER_ID());
		if (Global_1665665.f_28)
		{
			Global_1665665.f_29 = func_622(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1665665.f_29 = 0;
		}
		Global_1665665.f_30 = func_606(PLAYER::PLAYER_ID(), 4, -1);
		Global_1665665.f_31 = func_625(PLAYER::PLAYER_ID());
		Global_1665665.f_32 = func_690(func_605(PLAYER::PLAYER_ID()));
		Global_1665665.f_33 = func_690(func_604(PLAYER::PLAYER_ID()));
		Global_1665665.f_34 = func_690(func_603(PLAYER::PLAYER_ID()));
		Global_1665665.f_35 = func_690(func_602(PLAYER::PLAYER_ID()));
		Global_1665665.f_36 = func_601(PLAYER::PLAYER_ID());
		Global_1665665.f_37 = func_600(PLAYER::PLAYER_ID());
		Global_1665665.f_39 = func_599(PLAYER::PLAYER_ID());
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1665665.f_41 = func_690(func_237(1));
		}
		if (Global_1665665.f_42 > 2)
		{
			Global_1665665.f_42 = 2;
		}
		func_597(iVar0);
	}
	else
	{
		Global_1665352.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_1665352.f_7 = 1;
		}
		else
		{
			Global_1665352.f_7 = 0;
		}
		Global_1665352.f_8 = iParam1;
		if (Global_1665352.f_4 == 0)
		{
			if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
			{
				Global_1665352.f_4 = 1;
			}
		}
	}
}

void func_597(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1665665);
	func_598();
}

void func_598()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1665665 = { Var0 };
}

int func_599(int iParam0)
{
	if (iParam0 != func_63())
	{
		return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_319, 12);
	}
	return 0;
}

int func_600(int iParam0)
{
	if (iParam0 != func_63())
	{
		return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_319, 10);
	}
	return 0;
}

int func_601(int iParam0)
{
	if (iParam0 != func_63())
	{
		return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_319, 11);
	}
	return 0;
}

bool func_602(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 4);
}

bool func_603(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 3);
}

bool func_604(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 2);
}

bool func_605(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 1);
}

int func_606(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_63() || !func_621(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_616(iParam0, iParam2);
		
		case 1:
			return func_614(iParam0, iParam2);
		
		case 3:
			return func_613(iParam0);
		
		case 2:
			return func_608(iParam0, iParam2);
		
		case 4:
			return func_607(iParam0);
		
		default:
	}
	return 0;
}

bool func_607(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 6);
}

int func_608(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_612(iParam0);
		
		case 11:
			return func_611(iParam0);
		
		case 12:
			return func_610(iParam0);
		
		case 13:
			return func_609(iParam0);
		
		default:
	}
	return 0;
}

bool func_609(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 15);
}

bool func_610(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 14);
}

bool func_611(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 13);
}

bool func_612(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 12);
}

bool func_613(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 5);
}

int func_614(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_615(iParam0);
		
		case 6:
			return func_605(iParam0);
		
		case 7:
			return func_604(iParam0);
		
		case 8:
			return func_603(iParam0);
		
		case 9:
			return func_602(iParam0);
		
		default:
	}
	return 0;
}

bool func_615(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 0);
}

int func_616(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_620(iParam0);
		
		case 1:
			return func_619(iParam0);
		
		case 2:
			return func_618(iParam0);
		
		case 3:
			return func_617(iParam0);
		
		case 4:
			return func_625(iParam0);
		
		default:
	}
	return 0;
}

bool func_617(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 10);
}

bool func_618(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 9);
}

bool func_619(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 8);
}

bool func_620(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_266.f_4, 7);
}

bool func_621(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_622(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_606(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_606(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_606(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_606(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_623(int iParam0)
{
	unk_0x830C3A44EB3F2CF9(&Global_1665718);
	func_624();
}

void func_624()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1665718 = { Var0 };
}

bool func_625(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 31);
}

bool func_626(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 0);
}

bool func_627(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_307.f_1, 19);
}

var func_628(int iParam0)
{
	return Global_1589291[iParam0 /*770*/].f_211.f_6;
}

void func_629(int iParam0)
{
	unk_0x38096CFACAFA5597(&Global_1665585);
	func_630();
}

void func_630()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1665585 = { Var0 };
	Global_1665585.f_16 = 0;
}

bool func_631()
{
	return func_423(6152, -1, 0) != 0;
}

int func_632(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_256 != 0;
	}
	return 0;
}

bool func_633()
{
	return func_423(6160, -1, 0) == 3;
}

bool func_634()
{
	return func_423(6160, -1, 0) == 2;
}

bool func_635()
{
	return func_423(6160, -1, 0) == 1;
}

void func_636(int iParam0)
{
	unk_0xF0764752B63D769A(&Global_1665531);
	func_637();
}

void func_637()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1665531 = { Var0 };
	Global_1665531.f_23 = 0;
	Global_1665531.f_24 = 0;
	Global_1665531.f_16 = 0;
}

void func_638()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_649(12));
		func_648(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1320364[iVar1 /*141*/].f_66 != 0 && func_640(Global_1320364[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2519572.f_885 != iVar1)
				{
					if (func_639(Global_1320364[iVar1 /*141*/].f_66))
					{
						if (Global_1320364[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1320364[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1665531.f_38 = iVar3;
								break;
							
							case 1:
								Global_1665531.f_39 = iVar3;
								break;
							
							case 2:
								Global_1665531.f_40 = iVar3;
								break;
							
							case 3:
								Global_1665531.f_41 = iVar3;
								break;
							
							case 4:
								Global_1665531.f_42 = iVar3;
								break;
							
							case 5:
								Global_1665531.f_43 = iVar3;
								break;
							
							case 6:
								Global_1665531.f_44 = iVar3;
								break;
							
							case 7:
								Global_1665531.f_45 = iVar3;
								break;
							
							case 8:
								Global_1665531.f_46 = iVar3;
								break;
							
							case 9:
								Global_1665531.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_640(int iParam0, bool bParam1)
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
	if ((((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blista3"))
	{
		if (!func_647())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_646() && !func_645()) && !func_644()) && !func_643()) && !func_647())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_644())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_642(iParam0))
		{
			return 0;
		}
	}
	if (!func_641(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_641(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_449())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_642(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2498869)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12299) && iVar1 < Global_262145.f_12300)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13597 && iVar1 < Global_262145.f_13609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13593 && iVar1 < Global_262145.f_13605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13594 && iVar1 < Global_262145.f_13606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13595 && iVar1 < Global_262145.f_13607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13596 && iVar1 < Global_262145.f_13608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13598 && iVar1 < Global_262145.f_13610)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13599 && iVar1 < Global_262145.f_13602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13600 && iVar1 < Global_262145.f_13603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13601 && iVar1 < Global_262145.f_13604)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16228 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16223 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16227 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16226 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16220 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16221 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16224 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16225 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16222 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16230 && iVar1 < Global_262145.f_16195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16231 && iVar1 < Global_262145.f_16196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16219 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16218 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16217 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16229 && iVar1 < Global_262145.f_16194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16232 && iVar1 < Global_262145.f_16197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16233 && iVar1 < Global_262145.f_16198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16234 && iVar1 < Global_262145.f_16199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16235 && iVar1 < Global_262145.f_16200)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16380 && iVar1 < Global_262145.f_16402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16381 && iVar1 < Global_262145.f_16403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16382 && iVar1 < Global_262145.f_16404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16383 && iVar1 < Global_262145.f_16405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16384 && iVar1 < Global_262145.f_16406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16385 && iVar1 < Global_262145.f_16407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16387 && iVar1 < Global_262145.f_16408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16388 && iVar1 < Global_262145.f_16409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16389 && iVar1 < Global_262145.f_16410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16390 && iVar1 < Global_262145.f_16411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16391 && iVar1 < Global_262145.f_16412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16392 && iVar1 < Global_262145.f_16413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16393 && iVar1 < Global_262145.f_16414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16399 && iVar1 < Global_262145.f_16421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16396 && iVar1 < Global_262145.f_16417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16397 && iVar1 < Global_262145.f_16418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16398 && iVar1 < Global_262145.f_16419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16386 && iVar1 < Global_262145.f_16420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16400 && iVar1 < Global_262145.f_16422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16394 && iVar1 < Global_262145.f_16415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16395 && iVar1 < Global_262145.f_16416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16401 && iVar1 < Global_262145.f_16423)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18029 && iVar1 < Global_262145.f_18127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18030 && iVar1 < Global_262145.f_18128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18031 && iVar1 < Global_262145.f_18129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18032 && iVar1 < Global_262145.f_18130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18033 && iVar1 < Global_262145.f_18131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18034 && iVar1 < Global_262145.f_18132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18035 && iVar1 < Global_262145.f_18133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18036 && iVar1 < Global_262145.f_18134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18037 && iVar1 < Global_262145.f_18135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18038 && iVar1 < Global_262145.f_18136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18039 && iVar1 < Global_262145.f_18137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18040 && iVar1 < Global_262145.f_18138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18041 && iVar1 < Global_262145.f_18139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18042 && iVar1 < Global_262145.f_18140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18043 && iVar1 < Global_262145.f_18141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18044 && iVar1 < Global_262145.f_18142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18045 && iVar1 < Global_262145.f_18143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18046 && iVar1 < Global_262145.f_18144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18047 && iVar1 < Global_262145.f_18145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18048 && iVar1 < Global_262145.f_18146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18049 && iVar1 < Global_262145.f_18147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18050 && iVar1 < Global_262145.f_18148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18051 && iVar1 < Global_262145.f_18149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18052 && iVar1 < Global_262145.f_18150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18053 && iVar1 < Global_262145.f_18151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19110 && iVar1 < Global_262145.f_19106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19111 && iVar1 < Global_262145.f_19107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19112 && iVar1 < Global_262145.f_19108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19113 && iVar1 < Global_262145.f_19109)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19989 && iVar1 < Global_262145.f_19997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19990 && iVar1 < Global_262145.f_19998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19991 && iVar1 < Global_262145.f_19999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19992 && iVar1 < Global_262145.f_20000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19993 && iVar1 < Global_262145.f_20001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19994 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20766 && iVar1 < Global_262145.f_20786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20778 && iVar1 < Global_262145.f_20798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20769 && iVar1 < Global_262145.f_20789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20779 && iVar1 < Global_262145.f_20799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20767 && iVar1 < Global_262145.f_20787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20783 && iVar1 < Global_262145.f_20803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20781 && iVar1 < Global_262145.f_20801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20782 && iVar1 < Global_262145.f_20802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20777 && iVar1 < Global_262145.f_20797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20784 && iVar1 < Global_262145.f_20804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20780 && iVar1 < Global_262145.f_20800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20776 && iVar1 < Global_262145.f_20796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20768 && iVar1 < Global_262145.f_20788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20770 && iVar1 < Global_262145.f_20790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20771 && iVar1 < Global_262145.f_20791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20772 && iVar1 < Global_262145.f_20792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20773 && iVar1 < Global_262145.f_20793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20774 && iVar1 < Global_262145.f_20794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20775 && iVar1 < Global_262145.f_20795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21727 && iVar1 < Global_262145.f_21755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21728 && iVar1 < Global_262145.f_21756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21729 && iVar1 < Global_262145.f_21757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21730 && iVar1 < Global_262145.f_21758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21731 && iVar1 < Global_262145.f_21759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21732 && iVar1 < Global_262145.f_21760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21733 && iVar1 < Global_262145.f_21761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21734 && iVar1 < Global_262145.f_21762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21735 && iVar1 < Global_262145.f_21763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21736 && iVar1 < Global_262145.f_21764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21737 && iVar1 < Global_262145.f_21765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21738 && iVar1 < Global_262145.f_21766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21739 && iVar1 < Global_262145.f_21767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21740 && iVar1 < Global_262145.f_21768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21741 && iVar1 < Global_262145.f_21769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21742 && iVar1 < Global_262145.f_21770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21743 && iVar1 < Global_262145.f_21771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21744 && iVar1 < Global_262145.f_21772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21745 && iVar1 < Global_262145.f_21773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21746 && iVar1 < Global_262145.f_21774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21747 && iVar1 < Global_262145.f_21775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21748 && iVar1 < Global_262145.f_21776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21749 && iVar1 < Global_262145.f_21777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21750 && iVar1 < Global_262145.f_21778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21751 && iVar1 < Global_262145.f_21779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21752 && iVar1 < Global_262145.f_21780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21753 && iVar1 < Global_262145.f_21781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21754 && iVar1 < Global_262145.f_21782)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22920 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22919 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22918 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22921 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22917 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_22997 && iVar1 < Global_262145.f_22984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_22998 && iVar1 < Global_262145.f_22985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23003 && iVar1 < Global_262145.f_22990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23002 && iVar1 < Global_262145.f_22989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23000 && iVar1 < Global_262145.f_22987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23006 && iVar1 < Global_262145.f_22993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23008 && iVar1 < Global_262145.f_22995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23009 && iVar1 < Global_262145.f_22996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23007 && iVar1 < Global_262145.f_22994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_22999 && iVar1 < Global_262145.f_22986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23001 && iVar1 < Global_262145.f_22988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23005 && iVar1 < Global_262145.f_22992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23004 && iVar1 < Global_262145.f_22991)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_643()
{
	return 0;
}

int func_644()
{
	return 1;
}

int func_645()
{
	return 1;
}

int func_646()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_647()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
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
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_648(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9552)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1662310[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_649(int iParam0)
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
			return -1;
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_652(iParam0);
		return func_651(iVar0);
	}
	return (func_650(iParam0, -1) * iParam0);
}

int func_650(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_388(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_394(iParam1))
			{
				return 0;
			}
			else if (func_386(iParam1, -1))
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
			else if (iParam1 <= 121 && iParam1 > 0)
			{
				if (Global_1049673[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049673[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049673[iParam1 /*1951*/].f_33 == 10)
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
	}
	return 0;
}

int func_651(int iParam0)
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
	return -1;
}

int func_652(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_653()
{
	var uVar0;
	
	uVar0 = func_654();
	if (!func_435())
	{
		if (func_452() != func_63())
		{
			uVar0 = func_688(func_452()) + 1;
		}
	}
	return uVar0;
}

int func_654()
{
	return func_688(PLAYER::PLAYER_ID()) + 1;
}

int func_655()
{
	return func_423(6109, -1, 0);
}

int func_656(int iParam0)
{
	if (func_179(iParam0, 1))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_410;
	}
	return -1;
}

void func_657(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x0EACDF8487D5155A(&Global_1665487);
	func_658();
}

void func_658()
{
	struct<44> Var0;
	
	Global_1665487 = { Var0 };
	Global_1665487.f_23 = 0;
	Global_1665487.f_24 = 0;
	Global_1665487.f_16 = 0;
}

bool func_659(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 12);
}

bool func_660(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 13);
}

int func_661(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 12) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 13)) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_662(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 0) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 1)) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_663(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (((((MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 3) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 4)) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 5)) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 0)) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 1)) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_664(int iParam0, int iParam1)
{
	if (iParam1 == func_63())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1589291[iParam1 /*770*/].f_273.f_244, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_665(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 6) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 7)) || MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_244, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_666(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 8);
}

bool func_667(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 7);
}

bool func_668(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 9);
}

bool func_669(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 11);
}

bool func_670(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_326, 10);
}

int func_671(int iParam0, int iParam1)
{
	return func_423(func_672(iParam1), iParam0, 0);
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3894;
		
		case 1:
			return 3923;
		
		case 2:
			return 3927;
		
		case 3:
			return 3931;
		
		case 4:
			return 3935;
		
		case 5:
			return 5446;
		
		default:
	}
	return 3894;
}

void func_673(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1665424);
	func_674();
}

void func_674()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1665424 = { Var0 };
	Global_1665424.f_24 = 0;
	Global_1665424.f_25 = 0;
	Global_1665424.f_17 = 0;
}

void func_675(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1665370);
	func_676();
}

void func_676()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1665370 = { Var0 };
	Global_1665370.f_29 = 0;
	Global_1665370.f_30 = 0;
	Global_1665370.f_17 = 0;
}

int func_677(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_562(iParam0, iParam1, 2);
	bVar1 = func_562(iParam0, iParam1, 1);
	bVar2 = func_562(iParam0, iParam1, 0);
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

int func_678(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_679(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_384(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17070;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17069;
		}
		else
		{
			iVar0 = Global_262145.f_17051;
		}
		iVar1 = 19;
	}
	else if (func_383(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_210(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17050;
			iVar1 = 20;
		}
	}
	else if (func_304(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17070;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17069;
		}
		else
		{
			iVar0 = Global_262145.f_17051;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_0x501478855A6074CE(func_683(func_452()), func_682(func_452()), func_696(), func_695(), iVar1, iVar0);
	}
	func_681(iVar0);
	func_680(iVar0);
	return iVar0;
}

void func_680(int iParam0)
{
	int iVar0;
	
	iVar0 = func_423(3964, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_449 = iVar0;
	func_421(3964, iVar0, -1, 1, 0);
}

void func_681(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1624079[iVar0 /*558*/].f_11.f_448 = (Global_1624079[iVar0 /*558*/].f_11.f_448 + iParam0);
	if (Global_1624079[iVar0 /*558*/].f_11.f_448 < -9999)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_448 = 9999;
	}
	else if (Global_1624079[iVar0 /*558*/].f_11.f_448 > 9999)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_448 = 9999;
	}
}

int func_682(int iParam0)
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_1624079[iParam0 /*558*/].f_11.f_8[1];
}

int func_683(int iParam0)
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_1624079[iParam0 /*558*/].f_11.f_8[0];
}

int func_684(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID()) || func_139(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_685(var uParam0)
{
	STATS::_0x320C35147D5B5DDD(&Global_1665631);
	func_686();
}

void func_686()
{
	struct<34> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Global_1665631 = { Var0 };
}

int func_687(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1589291[iParam0 /*770*/].f_273.f_307 != 0;
	}
	return 0;
}

int func_688(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_11.f_19;
}

int func_689()
{
	int iVar0;
	
	if (func_448())
	{
		return 4;
	}
	else if (func_435())
	{
		if (func_589(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_237(1))
	{
		iVar0 = func_656(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_450(1))
	{
		if (func_589(func_452()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_690(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_691(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_171(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_101(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_694(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_693(PLAYER::PLAYER_ID());
			if (func_412(func_413(PLAYER::PLAYER_ID())))
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
			iVar2 = func_693(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_692(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_692(PLAYER::PLAYER_ID());
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

int func_692(int iParam0)
{
	if (func_101(PLAYER::PLAYER_ID()) == 238 || func_101(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_457;
	}
	return -1;
}

int func_693(int iParam0)
{
	if (func_101(PLAYER::PLAYER_ID()) == 237 || func_101(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_456;
	}
	return -1;
}

int func_694(int iParam0)
{
	if (func_171(iParam0) == 236)
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_455;
	}
	return -1;
}

int func_695()
{
	if (Global_1665352.f_3 != 0)
	{
		return Global_1665352.f_3;
	}
	return -1;
}

int func_696()
{
	if (Global_1665352.f_2 != 0)
	{
		return Global_1665352.f_2;
	}
	return -1;
}

int func_697(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_63();
	iVar1 = func_63();
	iVar2 = func_63();
	return func_698(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_698(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_361(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_69), 2);
	return func_332(&Var0);
}

int func_699(int iParam0)
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 != -1)
	{
		return func_181(iVar0);
	}
	return 1;
}

char* func_700(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_403(&(Global_1624079[iParam0 /*558*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1624079[iParam0 /*558*/].f_11.f_115 != Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_115)
	{
		sVar0 = func_404(iParam0, 0);
		return sVar0;
	}
	if (((func_105(iParam0, 28) || func_105(PLAYER::PLAYER_ID(), 28)) || func_407(iParam0)) && !func_406(iParam0))
	{
		return func_404(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_63())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_404(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_63())
	{
		sVar0 = func_403(&(Global_1624079[iVar1 /*558*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_404(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_701()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_847() && !func_285())
	{
		return;
	}
	if (!func_362())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_640;
	}
	iVar1 = func_130(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_105.f_847)))
	{
		iVar2 = (func_10() - func_715(&(Local_105.f_847), 0, 0));
		iVar3 = (func_714() - Local_105.f_115);
		func_712(iVar2);
		if (iVar2 > 30000)
		{
			func_702(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_702(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_702(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_702(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_710(0) == 0)
	{
		return;
	}
	func_709();
	func_706(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_492(sParam4))
	{
		sVar0 = sParam4;
	}
	func_703(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_703(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_705(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1364578.f_1 = 1;
		func_704(7, iVar0);
		Global_1364578.f_4388[iVar0] = uParam0;
		StringCopy(&(Global_1364578.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1364578.f_4388.f_172[iVar0] = iParam2;
		Global_1364578.f_4388.f_216[iVar0] = iParam3;
		Global_1364578.f_4388.f_183[iVar0] = iParam4;
		Global_1364578.f_4388.f_194[iVar0] = iParam5;
		Global_1364578.f_4388.f_249[iVar0] = iParam6;
		Global_1364578.f_4388.f_260[iVar0] = iParam7;
		Global_1364578.f_4388.f_205[iVar0] = uParam8;
		Global_1364578.f_4388.f_314[iVar0] = iParam9;
		Global_1364578.f_4388.f_325[iVar0] = iParam10;
		Global_1364578.f_4388.f_357[iVar0] = iParam11;
		Global_1364578.f_4388.f_238[iVar0] = uParam12;
		Global_1364578.f_4388.f_271[iVar0] = iParam13;
		Global_1364578.f_4388.f_368[iVar0] = iParam14;
		Global_1364578.f_4388.f_379[iVar0] = iParam15;
		Global_1364578.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_704(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1364578.f_6119[iParam0]), iParam1);
}

bool func_705(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1364578.f_6119[iParam0], iParam1);
}

void func_706(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_705(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1364578.f_1 = 1;
		func_704(6, iVar0);
		Global_1364578.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1364578.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1364578.f_3770.f_183[iVar0] = iParam3;
		Global_1364578.f_3770.f_172[iVar0] = iParam2;
		Global_1364578.f_3770.f_260[iVar0] = iParam4;
		Global_1364578.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1364578.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1364578.f_3770.f_443[iVar0] = iParam7;
		Global_1364578.f_3770.f_454[iVar0] = iParam8;
		Global_1364578.f_3770.f_497[iVar0] = iParam9;
		Global_1364578.f_3770.f_508[iVar0] = iParam10;
		Global_1364578.f_3770.f_205[iVar0] = iParam11;
		Global_1364578.f_3770.f_216[iVar0] = iParam12;
		Global_1364578.f_3770.f_227[iVar0] = iParam13;
		Global_1364578.f_3770.f_238[iVar0] = iParam14;
		Global_1364578.f_3770.f_249[iVar0] = iParam15;
		Global_1364578.f_3770.f_519[iVar0] = iParam16;
		Global_1364578.f_3770.f_530[iVar0] = iParam17;
		Global_1364578.f_3770.f_541[iVar0] = iParam18;
		Global_1364578.f_3770.f_552[iVar0] = iParam19;
		Global_1364578.f_3770.f_563[iVar0] = iParam20;
		Global_1364578.f_3770.f_574[iVar0] = iParam21;
		Global_1364578.f_3770.f_585[iVar0] = iParam22;
		Global_1364578.f_3770.f_596[iVar0] = iParam23;
		Global_1364578.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_708())
		{
			Global_1364578.f_1088 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1364578.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1364578.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1364578.f_1088 = 1;
			}
			if (func_707())
			{
				Global_1364578.f_1092 = 1;
			}
		}
	}
}

int func_707()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_708()
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_709()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2459239 = 1;
}

int func_710(bool bParam0)
{
	if (func_711())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_948(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_711()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_712(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_108, 8))
	{
		func_713();
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_108, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_108, 15);
				MISC::SET_BIT(&iLocal_108, 9);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_108, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(iLocal_108, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					MISC::SET_BIT(&iLocal_108, 11);
				}
			}
			else
			{
				MISC::IS_BIT_SET(iLocal_108, 11);
				if (!MISC::IS_BIT_SET(iLocal_108, 14))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						MISC::SET_BIT(&iLocal_108, 14);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_108, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(iLocal_108, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_108, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&iLocal_108, 9);
						}
					}
				}
			}
		}
	}
}

void func_713()
{
	if (MISC::IS_BIT_SET(iLocal_108, 8))
	{
		if (MISC::IS_BIT_SET(iLocal_108, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_108, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_108, 11))
				{
					if (!MISC::IS_BIT_SET(iLocal_108, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_108, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_108, 16);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_108, 16))
				{
					if (!MISC::IS_BIT_SET(iLocal_108, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_108, 13);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_108, 13))
					{
						MISC::SET_BIT(&iLocal_108, 10);
					}
				}
			}
		}
	}
}

int func_714()
{
	return 4;
}

int func_715(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_716()
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar3 = func_286();
		iVar2 = Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_640;
	}
	iVar4 = func_130(iVar2);
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_362())
		{
			if (func_733("HUNT_OBJ"))
			{
				func_777();
			}
			if (func_733("HUNT_OBJ1L"))
			{
				func_777();
			}
			if (func_733("HUNT_TOBJ"))
			{
				func_777();
			}
			if (func_733("HUNT_DOBJ"))
			{
				func_777();
			}
			if (func_733("HUNT_DOBJ1L"))
			{
				func_777();
			}
			return;
		}
	}
	else if (!MISC::IS_BIT_SET(Local_106[iVar3 /*14*/].f_1, 6))
	{
		func_777();
		return;
	}
	if (iVar4 < 3)
	{
		if (func_733("HUNT_OBJ"))
		{
			func_777();
		}
		if (func_733("HUNT_OBJ1L"))
		{
			func_777();
		}
		if (func_733("HUNT_TOBJ"))
		{
			func_777();
		}
		if (func_733("HUNT_DOBJ"))
		{
			func_777();
		}
		if (func_733("HUNT_DOBJ1L"))
		{
			func_777();
		}
		return;
	}
	bVar5 = func_732() == true;
	if (iVar3 == Local_105.f_118)
	{
		if (!bVar5)
		{
			if (!func_733("HUNT_OBJ"))
			{
				func_729("HUNT_OBJ", 0);
			}
		}
		else if (!func_733("HUNT_OBJ1L"))
		{
			func_729("HUNT_OBJ1L", 0);
		}
	}
	else if (func_848() == Local_105.f_118)
	{
		if (!bVar5)
		{
			if (!func_733("HUNT_OBJ"))
			{
				func_729("HUNT_OBJ", 0);
			}
		}
		else if (!func_733("HUNT_OBJ1L"))
		{
			func_729("HUNT_OBJ1L", 0);
		}
	}
	else if (func_285())
	{
		if (Local_105.f_119 > -1)
		{
			if (!bVar5)
			{
				if (!func_733("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_700(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119)), 64);
					iVar0 = func_699(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
					func_717("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_733("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_700(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119)), 64);
				iVar0 = func_699(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119));
				func_717("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_717(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_718(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 16;
		Global_1312576.f_56 = iParam2;
	}
}

int func_718(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_728(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_722();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = uParam3;
	Global_1312576.f_56 = uParam3;
	func_721();
	func_720(bParam2);
	func_719();
	return 1;
}

void func_719()
{
	MISC::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_720(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_721()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_722()
{
	func_724();
	func_723(0);
}

void func_723(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_724()
{
	if (!func_727())
	{
	}
	if (func_726())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_725();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_725()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_726()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_727()
{
	if (!func_726())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_725();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_728(char* sParam0, char* sParam1)
{
	if (!func_726())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

void func_729(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_730(sParam0))
	{
		return;
	}
	func_722();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_721();
	func_720(bParam1);
	func_719();
}

bool func_730(char* sParam0)
{
	if (!func_726())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_731(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_731(char* sParam0)
{
	if (!func_726())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_732()
{
	return (4 - Local_105.f_115);
}

int func_733(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_726())
	{
		return 0;
	}
	if (Global_1312576 == 11)
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
	return func_730(sParam0);
}

void func_734()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_847() && !func_285())
	{
		return;
	}
	if (!func_362())
	{
		return;
	}
	iVar1 = func_63();
	iVar2 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar2 = func_286();
		iVar1 = Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_640;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_107, 1))
	{
		iVar0 = func_130(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_105.f_118 || func_848() == Local_105.f_118)
			{
				if (func_760(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_331(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1);
					if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						func_759(1);
						func_735(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_735(-1, 0, 0, -1, 0, 0);
				}
				func_331(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1);
			}
		}
		MISC::SET_BIT(&iLocal_107, 1);
	}
}

void func_735(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_171(PLAYER::PLAYER_ID());
		Global_1665631 = iVar0;
		Global_1665631.f_1 = iParam0;
		if (func_452() != func_63())
		{
			Global_1665631.f_2 = func_683(func_452());
			Global_1665631.f_3 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665631.f_2), &(Global_1665631.f_3));
		}
		Global_1665631.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_1665631.f_28 = func_687(PLAYER::PLAYER_ID());
		Global_1665631.f_13 = 0;
		Global_1665631.f_14 = 0;
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1665631.f_23 = func_690(func_237(1));
		}
	}
	else
	{
		iVar0 = func_101(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_304(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1665370 = iVar0;
		if (func_384(iVar0))
		{
			Global_1665370.f_1 = 4;
		}
		else if (func_383(iVar0))
		{
			Global_1665370.f_1 = 5;
		}
		else if (func_210(iVar0, 0))
		{
			Global_1665370.f_1 = 2;
			if (func_417(iVar0))
			{
				Global_1665370.f_1 = 3;
			}
		}
		else
		{
			Global_1665370.f_1 = 1;
		}
		if (func_452() != func_63())
		{
			Global_1665370.f_4 = func_683(func_452());
			Global_1665370.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665370.f_6), &(Global_1665370.f_7));
		}
		Global_1665370.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1665370.f_27 = 1;
			Global_1665370.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1665370.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1665370.f_40 = func_445(iParam1);
			Global_1665370.f_41 = func_758();
			Global_1665370.f_42 = func_565(PLAYER::PLAYER_ID(), iParam1);
			Global_1665370.f_44 = func_678(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_435() || iVar0 != 192)
		{
			Global_1665370.f_53 = 0;
		}
	}
	else if (func_381(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1665487 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1665487 = iParam0 + 1;
		}
		else
		{
			Global_1665487 = func_757(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_414(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1665487.f_1 = 0;
				}
				else
				{
					Global_1665487.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1665487.f_1 = 2;
				break;
			
			case 227:
				Global_1665487.f_1 = 3;
				break;
		}
		Global_1665487.f_21 = 1;
		Global_1665487.f_22 = 1;
		if (func_452() != func_63())
		{
			Global_1665487.f_4 = func_683(func_452());
			Global_1665487.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665487.f_4), &(Global_1665487.f_5));
		}
		Global_1665487.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1665487.f_20 = iParam0;
		}
	}
	else if (func_309(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1665424 = iVar0;
		Global_1665370.f_1 = 1;
		if (func_452() != func_63())
		{
			Global_1665424.f_4 = func_683(func_452());
			Global_1665424.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665424.f_6), &(Global_1665424.f_7));
		}
		Global_1665424.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1665424.f_21 = iParam0;
		}
	}
	else if (func_379(iVar0))
	{
		Global_1665531 = iVar0;
		Global_1665531.f_1 = iParam0;
		Global_1665531.f_21 = 1;
		Global_1665531.f_22 = 1;
		if (func_452() != func_63())
		{
			Global_1665531.f_4 = func_683(func_452());
			Global_1665531.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665531.f_4), &(Global_1665531.f_5));
		}
		Global_1665531.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1665531.f_20 = iParam0;
		}
		Global_1665531.f_27 = func_671(func_19(), 5);
		Global_1665531.f_28 = func_690(func_543(PLAYER::PLAYER_ID()));
		Global_1665531.f_29 = func_423(6103, -1, 0);
		Global_1665531.f_30 = func_423(6099, -1, 0);
		Global_1665531.f_31 = func_423(6100, -1, 0);
		Global_1665531.f_32 = func_423(6102, -1, 0);
		Global_1665531.f_33 = func_423(6101, -1, 0);
		Global_1665531.f_34 = func_423(6104, -1, 0);
		Global_1665531.f_7 = func_689();
		Global_1665531.f_51 = func_690(bParam4);
	}
	else if (func_377(iVar0))
	{
		Global_1665585 = iVar0;
		Global_1665585.f_1 = iParam0;
		Global_1665585.f_21 = 1;
		Global_1665585.f_22 = 1;
		if (func_452() != func_63())
		{
			Global_1665585.f_4 = func_683(func_452());
			Global_1665585.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665585.f_4), &(Global_1665585.f_5));
		}
		Global_1665585.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1665585.f_20 = iParam0;
		}
		Global_1665585.f_24 = func_423(6153, -1, 0);
		Global_1665585.f_25 = func_423(6158, -1, 0);
		Global_1665585.f_26 = func_423(6159, -1, 0);
		Global_1665585.f_27 = func_690((((func_635() || func_634()) || func_633()) || func_632(PLAYER::PLAYER_ID())));
		Global_1665585.f_28 = func_423(6160, -1, 0);
		Global_1665585.f_29 = func_690(func_631());
		Global_1665585.f_31 = 0;
		Global_1665585.f_30 = 0;
		Global_1665585.f_32 = 0;
		Global_1665585.f_33 = 0;
		Global_1665585.f_34 = 0;
		Global_1665585.f_16 = 0;
		Global_1665585.f_7 = func_689();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_412(func_413(PLAYER::PLAYER_ID()))))
	{
		Global_1665718 = iVar0;
		Global_1665718.f_1 = iParam0;
		Global_1665718.f_21 = 1;
		Global_1665718.f_22 = 1;
		Global_1665718.f_7 = func_689();
		if (func_452() != func_63())
		{
			Global_1665718.f_4 = func_683(func_452());
			Global_1665718.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665718.f_4), &(Global_1665718.f_5));
		}
		if (func_452() != -1)
		{
			Global_1665718.f_17 = func_628(func_452());
		}
		Global_1665718.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1665718.f_28 = func_687(PLAYER::PLAYER_ID());
		Global_1665718.f_16 = 0;
		Global_1665718.f_24 = 0;
		Global_1665718.f_23 = 0;
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1665718.f_33 = func_690(func_237(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1665665 = iVar0;
		Global_1665665.f_1 = iParam0;
		Global_1665665.f_21 = 1;
		Global_1665665.f_22 = 1;
		Global_1665665.f_7 = func_689();
		Global_1665665.f_24 = 0;
		Global_1665665.f_23 = 0;
		Global_1665665.f_16 = 0;
		if (func_452() != func_63())
		{
			Global_1665665.f_4 = func_683(func_452());
			Global_1665665.f_5 = func_682(func_452());
		}
		Global_1665665.f_28 = func_687(PLAYER::PLAYER_ID());
		if (Global_1665665.f_28)
		{
			Global_1665665.f_29 = func_622(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1665665.f_29 = 0;
		}
		Global_1665665.f_30 = func_606(PLAYER::PLAYER_ID(), 4, -1);
		Global_1665665.f_31 = func_625(PLAYER::PLAYER_ID());
		Global_1665665.f_32 = func_690(func_605(PLAYER::PLAYER_ID()));
		Global_1665665.f_33 = func_690(func_604(PLAYER::PLAYER_ID()));
		Global_1665665.f_34 = func_690(func_603(PLAYER::PLAYER_ID()));
		Global_1665665.f_35 = func_690(func_602(PLAYER::PLAYER_ID()));
		Global_1665665.f_36 = func_601(PLAYER::PLAYER_ID());
		Global_1665665.f_37 = func_600(PLAYER::PLAYER_ID());
		Global_1665665.f_39 = func_599(PLAYER::PLAYER_ID());
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1665665.f_41 = func_690(func_237(1));
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1665665.f_4), &(Global_1665665.f_5));
		}
		Global_1665665.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1665665.f_28 = func_687(PLAYER::PLAYER_ID());
	}
	else
	{
		if (func_452() != func_63())
		{
			Global_1665352 = func_683(func_452());
			Global_1665352.f_1 = func_682(func_452());
		}
		Global_1665352.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_1665352.f_13 = func_756();
		Global_1665352.f_15 = 0;
		if (func_450(1))
		{
			if (func_240() == func_452())
			{
				Global_1665352.f_15 = 1;
			}
		}
		if (func_755())
		{
			Global_1665487.f_28 = 1;
		}
		if ((((func_754() || func_753()) || func_752()) || func_751()) || func_749())
		{
			Global_1665487.f_30 = 1;
		}
		if (func_747(func_748(joaat("trailersmall2"))))
		{
			Global_1665487.f_32 = 1;
		}
		if (func_739(func_746(joaat("caddy"))))
		{
			Global_1665487.f_31 = 1;
		}
		if (func_670(PLAYER::PLAYER_ID()) || func_669(PLAYER::PLAYER_ID()))
		{
			Global_1665487.f_29 = 1;
		}
		if (func_666(PLAYER::PLAYER_ID()))
		{
			Global_1665487.f_33 = 1;
			Global_1665487.f_34 = 1;
		}
		if (func_667(PLAYER::PLAYER_ID()))
		{
			Global_1665487.f_36 = 1;
		}
		if (func_664(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1665487.f_35 = 1;
		}
		if (func_738(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1665487.f_37 = 1;
		}
		if (func_738(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1665487.f_38 = 1;
		}
		if (func_737(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_736(PLAYER::PLAYER_ID(), iVar2);
				if (func_562(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1665487.f_39 = 1;
				}
				if (func_562(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1665487.f_40 = 1;
				}
				if (func_562(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1665487.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_736(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_557(Global_1589291[iParam0 /*770*/].f_273.f_168[iParam1 /*12*/]))
	{
		uVar0 = Global_1589291[iParam0 /*770*/].f_273.f_168[iParam1 /*12*/];
	}
	return uVar0;
}

int func_737(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_738(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_664(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_744(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_649(11));
		func_648(iVar1, &iVar0, 1);
		iVar2 = func_744(func_741(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_423(func_740(4, iVar0), -1, 0);
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

int func_740(int iParam0, int iParam1)
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
					return 2824;
				
				case 40:
					return 2831;
				
				case 41:
					return 2838;
				
				case 42:
					return 2845;
				
				case 43:
					return 2852;
				
				case 44:
					return 2859;
				
				case 45:
					return 2866;
				
				case 46:
					return 2873;
				
				case 47:
					return 2880;
				
				case 48:
					return 2887;
				
				case 49:
					return 2894;
				
				case 50:
					return 2900;
				
				case 51:
					return 2906;
				
				case 52:
					return 2948;
				
				case 53:
					return 2955;
				
				case 54:
					return 2962;
				
				case 55:
					return 2969;
				
				case 56:
					return 2976;
				
				case 57:
					return 2983;
				
				case 58:
					return 2990;
				
				case 59:
					return 2997;
				
				case 60:
					return 3004;
				
				case 61:
					return 3011;
				
				case 62:
					return 3018;
				
				case 63:
					return 3024;
				
				case 64:
					return 3030;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case 79:
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				case 85:
					return 3391;
				
				case 86:
					return 3398;
				
				case 87:
					return 3405;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4027;
				
				case 89:
					return 4035;
				
				case 90:
					return 4043;
				
				case 91:
					return 4051;
				
				case 92:
					return 4059;
				
				case 93:
					return 4067;
				
				case 94:
					return 4075;
				
				case 95:
					return 4083;
				
				case 96:
					return 4091;
				
				case 97:
					return 4099;
				
				case 98:
					return 4107;
				
				case 99:
					return 4115;
				
				case 100:
					return 4123;
				
				case 101:
					return 4131;
				
				case 102:
					return 4139;
				
				case 103:
					return 4147;
				
				case 104:
					return 4155;
				
				case 105:
					return 4163;
				
				case 106:
					return 4171;
				
				case 107:
					return 4179;
				
				case 108:
					return 4187;
				
				case 109:
					return 4195;
				
				case 110:
					return 4203;
				
				case 111:
					return 4211;
				
				case 112:
					return 4219;
				
				case 113:
					return 4227;
				
				case 114:
					return 4235;
				
				case 115:
					return 4243;
				
				case 116:
					return 4251;
				
				case 117:
					return 4259;
				
				case 118:
					return 4267;
				
				case 119:
					return 4275;
				
				case 120:
					return 4283;
				
				case 121:
					return 4291;
				
				case 122:
					return 4299;
				
				case 123:
					return 4307;
				
				case 124:
					return 4315;
				
				case 125:
					return 4323;
				
				case 126:
					return 4331;
				
				case 127:
					return 4339;
				
				case 128:
					return 4347;
				
				case 129:
					return 4355;
				
				case 130:
					return 4363;
				
				case 131:
					return 4371;
				
				case 132:
					return 4379;
				
				case 133:
					return 4387;
				
				case 134:
					return 4395;
				
				case 135:
					return 4403;
				
				case 136:
					return 4411;
				
				case 137:
					return 4419;
				
				case 138:
					return 4427;
				
				case 139:
					return 4435;
				
				case 140:
					return 4443;
				
				case 141:
					return 4451;
				
				case 142:
					return 4459;
				
				case 143:
					return 4467;
				
				case 144:
					return 4475;
				
				case 145:
					return 4483;
				
				case 146:
					return 4491;
				
				case 147:
					return 4499;
				
				case 148:
					return 4507;
				
				case 149:
					return 4515;
				
				case 150:
					return 4523;
				
				case 151:
					return 4531;
				
				case 152:
					return 4539;
				
				case 153:
					return 4547;
				
				case 154:
					return 4555;
				
				case 155:
					return 4563;
				
				case 156:
					return 4571;
				
				case 157:
					return 4579;
				
				case 158:
					return 5472;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5921;
				
				case 160:
					return 5928;
				
				case 161:
					return 5935;
				
				case 162:
					return 5942;
				
				case 163:
					return 5949;
				
				case 164:
					return 5956;
				
				case 165:
					return 5963;
				
				case 166:
					return 5970;
				
				case 167:
					return 5977;
				
				case 168:
					return 5984;
				
				case 169:
					return 5991;
				
				case 170:
					return 5998;
				
				case 171:
					return 6005;
				
				case 172:
					return 6012;
				
				case 173:
					return 6019;
				
				case 174:
					return 6026;
				
				case 175:
					return 6033;
				
				case 176:
					return 6040;
				
				case 177:
					return 6047;
				
				case 178:
					return 6054;
				
				case 179:
					return 6061;
				
				case 180:
					return 6068;
				
				case 181:
					return 6075;
				
				case 182:
					return 6082;
				
				case 183:
					return 6089;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6166;
				
				case 185:
					return 6173;
				
				case 186:
					return 6180;
				
				case 187:
					return 6187;
				
				case 188:
					return 6194;
				
				case 189:
					return 6201;
				
				case 190:
					return 6208;
				
				case 191:
					return 6215;
				
				case 192:
					return 6222;
				
				case 193:
					return 6229;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6563;
				
				case 195:
					return 6570;
				
				case 196:
					return 6577;
				
				case 197:
					return 6584;
				
				case 198:
					return 6591;
				
				case 199:
					return 6598;
				
				case 200:
					return 6605;
				
				case 201:
					return 6612;
				
				case 202:
					return 6619;
				
				case 203:
					return 6626;
				
				case 204:
					return 6633;
				
				case 205:
					return 6640;
				
				case 206:
					return 6647;
				
				case 207:
					return 6654;
				
				case 208:
					return 6661;
				
				case 209:
					return 6668;
				
				case 210:
					return 6675;
				
				case 211:
					return 6682;
				
				case 212:
					return 6689;
				
				case 213:
					return 6696;
				
				case 214:
					return 6703;
				
				case 215:
					return 6710;
				
				case 216:
					return 6717;
				
				case 217:
					return 6724;
				
				case 218:
					return 6731;
				
				case 219:
					return 6738;
				
				case 220:
					return 6745;
				
				case 221:
					return 6752;
				
				case 222:
					return 6759;
				
				case 223:
					return 6766;
				
				case 224:
					return 6773;
				
				case 225:
					return 6780;
				
				case 226:
					return 6787;
				
				case 227:
					return 6794;
				
				case 228:
					return 6801;
				
				case 229:
					return 6808;
				
				case 230:
					return 6815;
				
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
					return 2825;
				
				case 40:
					return 2832;
				
				case 41:
					return 2839;
				
				case 42:
					return 2846;
				
				case 43:
					return 2853;
				
				case 44:
					return 2860;
				
				case 45:
					return 2867;
				
				case 46:
					return 2874;
				
				case 47:
					return 2881;
				
				case 48:
					return 2888;
				
				case 49:
					return 2895;
				
				case 50:
					return 2901;
				
				case 51:
					return 2907;
				
				case 52:
					return 2949;
				
				case 53:
					return 2956;
				
				case 54:
					return 2963;
				
				case 55:
					return 2970;
				
				case 56:
					return 2977;
				
				case 57:
					return 2984;
				
				case 58:
					return 2991;
				
				case 59:
					return 2998;
				
				case 60:
					return 3005;
				
				case 61:
					return 3012;
				
				case 62:
					return 3019;
				
				case 63:
					return 3025;
				
				case 64:
					return 3031;
				
				case 65:
					return 3232;
				
				case 66:
					return 3240;
				
				case 67:
					return 3248;
				
				case 68:
					return 3256;
				
				case 69:
					return 3264;
				
				case 70:
					return 3272;
				
				case 71:
					return 3280;
				
				case 72:
					return 3288;
				
				case 73:
					return 3296;
				
				case 74:
					return 3304;
				
				case 75:
					return 3312;
				
				case 76:
					return 3320;
				
				case 77:
					return 3328;
				
				case 78:
					return 3336;
				
				case 79:
					return 3344;
				
				case 80:
					return 3352;
				
				case 81:
					return 3360;
				
				case 82:
					return 3368;
				
				case 83:
					return 3376;
				
				case 84:
					return 3384;
				
				case 85:
					return 3392;
				
				case 86:
					return 3399;
				
				case 87:
					return 3406;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4028;
				
				case 89:
					return 4036;
				
				case 90:
					return 4044;
				
				case 91:
					return 4052;
				
				case 92:
					return 4060;
				
				case 93:
					return 4068;
				
				case 94:
					return 4076;
				
				case 95:
					return 4084;
				
				case 96:
					return 4092;
				
				case 97:
					return 4100;
				
				case 98:
					return 4108;
				
				case 99:
					return 4116;
				
				case 100:
					return 4124;
				
				case 101:
					return 4132;
				
				case 102:
					return 4140;
				
				case 103:
					return 4148;
				
				case 104:
					return 4156;
				
				case 105:
					return 4164;
				
				case 106:
					return 4172;
				
				case 107:
					return 4180;
				
				case 108:
					return 4188;
				
				case 109:
					return 4196;
				
				case 110:
					return 4204;
				
				case 111:
					return 4212;
				
				case 112:
					return 4220;
				
				case 113:
					return 4228;
				
				case 114:
					return 4236;
				
				case 115:
					return 4244;
				
				case 116:
					return 4252;
				
				case 117:
					return 4260;
				
				case 118:
					return 4268;
				
				case 119:
					return 4276;
				
				case 120:
					return 4284;
				
				case 121:
					return 4292;
				
				case 122:
					return 4300;
				
				case 123:
					return 4308;
				
				case 124:
					return 4316;
				
				case 125:
					return 4324;
				
				case 126:
					return 4332;
				
				case 127:
					return 4340;
				
				case 128:
					return 4348;
				
				case 129:
					return 4356;
				
				case 130:
					return 4364;
				
				case 131:
					return 4372;
				
				case 132:
					return 4380;
				
				case 133:
					return 4388;
				
				case 134:
					return 4396;
				
				case 135:
					return 4404;
				
				case 136:
					return 4412;
				
				case 137:
					return 4420;
				
				case 138:
					return 4428;
				
				case 139:
					return 4436;
				
				case 140:
					return 4444;
				
				case 141:
					return 4452;
				
				case 142:
					return 4460;
				
				case 143:
					return 4468;
				
				case 144:
					return 4476;
				
				case 145:
					return 4484;
				
				case 146:
					return 4492;
				
				case 147:
					return 4500;
				
				case 148:
					return 4508;
				
				case 149:
					return 4516;
				
				case 150:
					return 4524;
				
				case 151:
					return 4532;
				
				case 152:
					return 4540;
				
				case 153:
					return 4548;
				
				case 154:
					return 4556;
				
				case 155:
					return 4564;
				
				case 156:
					return 4572;
				
				case 157:
					return 4580;
				
				case 158:
					return 5473;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5922;
				
				case 160:
					return 5929;
				
				case 161:
					return 5936;
				
				case 162:
					return 5943;
				
				case 163:
					return 5950;
				
				case 164:
					return 5957;
				
				case 165:
					return 5964;
				
				case 166:
					return 5971;
				
				case 167:
					return 5978;
				
				case 168:
					return 5985;
				
				case 169:
					return 5992;
				
				case 170:
					return 5999;
				
				case 171:
					return 6006;
				
				case 172:
					return 6013;
				
				case 173:
					return 6020;
				
				case 174:
					return 6027;
				
				case 175:
					return 6034;
				
				case 176:
					return 6041;
				
				case 177:
					return 6048;
				
				case 178:
					return 6055;
				
				case 179:
					return 6062;
				
				case 180:
					return 6069;
				
				case 181:
					return 6076;
				
				case 182:
					return 6083;
				
				case 183:
					return 6090;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6167;
				
				case 185:
					return 6174;
				
				case 186:
					return 6181;
				
				case 187:
					return 6188;
				
				case 188:
					return 6195;
				
				case 189:
					return 6202;
				
				case 190:
					return 6209;
				
				case 191:
					return 6216;
				
				case 192:
					return 6223;
				
				case 193:
					return 6230;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6564;
				
				case 195:
					return 6571;
				
				case 196:
					return 6578;
				
				case 197:
					return 6585;
				
				case 198:
					return 6592;
				
				case 199:
					return 6599;
				
				case 200:
					return 6606;
				
				case 201:
					return 6613;
				
				case 202:
					return 6620;
				
				case 203:
					return 6627;
				
				case 204:
					return 6634;
				
				case 205:
					return 6641;
				
				case 206:
					return 6648;
				
				case 207:
					return 6655;
				
				case 208:
					return 6662;
				
				case 209:
					return 6669;
				
				case 210:
					return 6676;
				
				case 211:
					return 6683;
				
				case 212:
					return 6690;
				
				case 213:
					return 6697;
				
				case 214:
					return 6704;
				
				case 215:
					return 6711;
				
				case 216:
					return 6718;
				
				case 217:
					return 6725;
				
				case 218:
					return 6732;
				
				case 219:
					return 6739;
				
				case 220:
					return 6746;
				
				case 221:
					return 6753;
				
				case 222:
					return 6760;
				
				case 223:
					return 6767;
				
				case 224:
					return 6774;
				
				case 225:
					return 6781;
				
				case 226:
					return 6788;
				
				case 227:
					return 6795;
				
				case 228:
					return 6802;
				
				case 229:
					return 6809;
				
				case 230:
					return 6816;
				
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
					return 2826;
				
				case 40:
					return 2833;
				
				case 41:
					return 2840;
				
				case 42:
					return 2847;
				
				case 43:
					return 2854;
				
				case 44:
					return 2861;
				
				case 45:
					return 2868;
				
				case 46:
					return 2875;
				
				case 47:
					return 2882;
				
				case 48:
					return 2889;
				
				case 49:
					return 2896;
				
				case 50:
					return 2902;
				
				case 51:
					return 2908;
				
				case 52:
					return 2950;
				
				case 53:
					return 2957;
				
				case 54:
					return 2964;
				
				case 55:
					return 2971;
				
				case 56:
					return 2978;
				
				case 57:
					return 2985;
				
				case 58:
					return 2992;
				
				case 59:
					return 2999;
				
				case 60:
					return 3006;
				
				case 61:
					return 3013;
				
				case 62:
					return 3020;
				
				case 63:
					return 3026;
				
				case 64:
					return 3032;
				
				case 65:
					return 3233;
				
				case 66:
					return 3241;
				
				case 67:
					return 3249;
				
				case 68:
					return 3257;
				
				case 69:
					return 3265;
				
				case 70:
					return 3273;
				
				case 71:
					return 3281;
				
				case 72:
					return 3289;
				
				case 73:
					return 3297;
				
				case 74:
					return 3305;
				
				case 75:
					return 3313;
				
				case 76:
					return 3321;
				
				case 77:
					return 3329;
				
				case 78:
					return 3337;
				
				case 79:
					return 3345;
				
				case 80:
					return 3353;
				
				case 81:
					return 3361;
				
				case 82:
					return 3369;
				
				case 83:
					return 3377;
				
				case 84:
					return 3385;
				
				case 85:
					return 3393;
				
				case 86:
					return 3400;
				
				case 87:
					return 3407;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4029;
				
				case 89:
					return 4037;
				
				case 90:
					return 4045;
				
				case 91:
					return 4053;
				
				case 92:
					return 4061;
				
				case 93:
					return 4069;
				
				case 94:
					return 4077;
				
				case 95:
					return 4085;
				
				case 96:
					return 4093;
				
				case 97:
					return 4101;
				
				case 98:
					return 4109;
				
				case 99:
					return 4117;
				
				case 100:
					return 4125;
				
				case 101:
					return 4133;
				
				case 102:
					return 4141;
				
				case 103:
					return 4149;
				
				case 104:
					return 4157;
				
				case 105:
					return 4165;
				
				case 106:
					return 4173;
				
				case 107:
					return 4181;
				
				case 108:
					return 4189;
				
				case 109:
					return 4197;
				
				case 110:
					return 4205;
				
				case 111:
					return 4213;
				
				case 112:
					return 4221;
				
				case 113:
					return 4229;
				
				case 114:
					return 4237;
				
				case 115:
					return 4245;
				
				case 116:
					return 4253;
				
				case 117:
					return 4261;
				
				case 118:
					return 4269;
				
				case 119:
					return 4277;
				
				case 120:
					return 4285;
				
				case 121:
					return 4293;
				
				case 122:
					return 4301;
				
				case 123:
					return 4309;
				
				case 124:
					return 4317;
				
				case 125:
					return 4325;
				
				case 126:
					return 4333;
				
				case 127:
					return 4341;
				
				case 128:
					return 4349;
				
				case 129:
					return 4357;
				
				case 130:
					return 4365;
				
				case 131:
					return 4373;
				
				case 132:
					return 4381;
				
				case 133:
					return 4389;
				
				case 134:
					return 4397;
				
				case 135:
					return 4405;
				
				case 136:
					return 4413;
				
				case 137:
					return 4421;
				
				case 138:
					return 4429;
				
				case 139:
					return 4437;
				
				case 140:
					return 4445;
				
				case 141:
					return 4453;
				
				case 142:
					return 4461;
				
				case 143:
					return 4469;
				
				case 144:
					return 4477;
				
				case 145:
					return 4485;
				
				case 146:
					return 4493;
				
				case 147:
					return 4501;
				
				case 148:
					return 4509;
				
				case 149:
					return 4517;
				
				case 150:
					return 4525;
				
				case 151:
					return 4533;
				
				case 152:
					return 4541;
				
				case 153:
					return 4549;
				
				case 154:
					return 4557;
				
				case 155:
					return 4565;
				
				case 156:
					return 4573;
				
				case 157:
					return 4581;
				
				case 158:
					return 5474;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5923;
				
				case 160:
					return 5930;
				
				case 161:
					return 5937;
				
				case 162:
					return 5944;
				
				case 163:
					return 5951;
				
				case 164:
					return 5958;
				
				case 165:
					return 5965;
				
				case 166:
					return 5972;
				
				case 167:
					return 5979;
				
				case 168:
					return 5986;
				
				case 169:
					return 5993;
				
				case 170:
					return 6000;
				
				case 171:
					return 6007;
				
				case 172:
					return 6014;
				
				case 173:
					return 6021;
				
				case 174:
					return 6028;
				
				case 175:
					return 6035;
				
				case 176:
					return 6042;
				
				case 177:
					return 6049;
				
				case 178:
					return 6056;
				
				case 179:
					return 6063;
				
				case 180:
					return 6070;
				
				case 181:
					return 6077;
				
				case 182:
					return 6084;
				
				case 183:
					return 6091;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6168;
				
				case 185:
					return 6175;
				
				case 186:
					return 6182;
				
				case 187:
					return 6189;
				
				case 188:
					return 6196;
				
				case 189:
					return 6203;
				
				case 190:
					return 6210;
				
				case 191:
					return 6217;
				
				case 192:
					return 6224;
				
				case 193:
					return 6231;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6565;
				
				case 195:
					return 6572;
				
				case 196:
					return 6579;
				
				case 197:
					return 6586;
				
				case 198:
					return 6593;
				
				case 199:
					return 6600;
				
				case 200:
					return 6607;
				
				case 201:
					return 6614;
				
				case 202:
					return 6621;
				
				case 203:
					return 6628;
				
				case 204:
					return 6635;
				
				case 205:
					return 6642;
				
				case 206:
					return 6649;
				
				case 207:
					return 6656;
				
				case 208:
					return 6663;
				
				case 209:
					return 6670;
				
				case 210:
					return 6677;
				
				case 211:
					return 6684;
				
				case 212:
					return 6691;
				
				case 213:
					return 6698;
				
				case 214:
					return 6705;
				
				case 215:
					return 6712;
				
				case 216:
					return 6719;
				
				case 217:
					return 6726;
				
				case 218:
					return 6733;
				
				case 219:
					return 6740;
				
				case 220:
					return 6747;
				
				case 221:
					return 6754;
				
				case 222:
					return 6761;
				
				case 223:
					return 6768;
				
				case 224:
					return 6775;
				
				case 225:
					return 6782;
				
				case 226:
					return 6789;
				
				case 227:
					return 6796;
				
				case 228:
					return 6803;
				
				case 229:
					return 6810;
				
				case 230:
					return 6817;
				
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
					return 2827;
				
				case 40:
					return 2834;
				
				case 41:
					return 2841;
				
				case 42:
					return 2848;
				
				case 43:
					return 2855;
				
				case 44:
					return 2862;
				
				case 45:
					return 2869;
				
				case 46:
					return 2876;
				
				case 47:
					return 2883;
				
				case 48:
					return 2890;
				
				case 49:
					return 2897;
				
				case 50:
					return 2903;
				
				case 51:
					return 2909;
				
				case 52:
					return 2951;
				
				case 53:
					return 2958;
				
				case 54:
					return 2965;
				
				case 55:
					return 2972;
				
				case 56:
					return 2979;
				
				case 57:
					return 2986;
				
				case 58:
					return 2993;
				
				case 59:
					return 3000;
				
				case 60:
					return 3007;
				
				case 61:
					return 3014;
				
				case 62:
					return 3021;
				
				case 63:
					return 3027;
				
				case 64:
					return 3033;
				
				case 65:
					return 3234;
				
				case 66:
					return 3242;
				
				case 67:
					return 3250;
				
				case 68:
					return 3258;
				
				case 69:
					return 3266;
				
				case 70:
					return 3274;
				
				case 71:
					return 3282;
				
				case 72:
					return 3290;
				
				case 73:
					return 3298;
				
				case 74:
					return 3306;
				
				case 75:
					return 3314;
				
				case 76:
					return 3322;
				
				case 77:
					return 3330;
				
				case 78:
					return 3338;
				
				case 79:
					return 3346;
				
				case 80:
					return 3354;
				
				case 81:
					return 3362;
				
				case 82:
					return 3370;
				
				case 83:
					return 3378;
				
				case 84:
					return 3386;
				
				case 85:
					return 3394;
				
				case 86:
					return 3401;
				
				case 87:
					return 3408;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4030;
				
				case 89:
					return 4038;
				
				case 90:
					return 4046;
				
				case 91:
					return 4054;
				
				case 92:
					return 4062;
				
				case 93:
					return 4070;
				
				case 94:
					return 4078;
				
				case 95:
					return 4086;
				
				case 96:
					return 4094;
				
				case 97:
					return 4102;
				
				case 98:
					return 4110;
				
				case 99:
					return 4118;
				
				case 100:
					return 4126;
				
				case 101:
					return 4134;
				
				case 102:
					return 4142;
				
				case 103:
					return 4150;
				
				case 104:
					return 4158;
				
				case 105:
					return 4166;
				
				case 106:
					return 4174;
				
				case 107:
					return 4182;
				
				case 108:
					return 4190;
				
				case 109:
					return 4198;
				
				case 110:
					return 4206;
				
				case 111:
					return 4214;
				
				case 112:
					return 4222;
				
				case 113:
					return 4230;
				
				case 114:
					return 4238;
				
				case 115:
					return 4246;
				
				case 116:
					return 4254;
				
				case 117:
					return 4262;
				
				case 118:
					return 4270;
				
				case 119:
					return 4278;
				
				case 120:
					return 4286;
				
				case 121:
					return 4294;
				
				case 122:
					return 4302;
				
				case 123:
					return 4310;
				
				case 124:
					return 4318;
				
				case 125:
					return 4326;
				
				case 126:
					return 4334;
				
				case 127:
					return 4342;
				
				case 128:
					return 4350;
				
				case 129:
					return 4358;
				
				case 130:
					return 4366;
				
				case 131:
					return 4374;
				
				case 132:
					return 4382;
				
				case 133:
					return 4390;
				
				case 134:
					return 4398;
				
				case 135:
					return 4406;
				
				case 136:
					return 4414;
				
				case 137:
					return 4422;
				
				case 138:
					return 4430;
				
				case 139:
					return 4438;
				
				case 140:
					return 4446;
				
				case 141:
					return 4454;
				
				case 142:
					return 4462;
				
				case 143:
					return 4470;
				
				case 144:
					return 4478;
				
				case 145:
					return 4486;
				
				case 146:
					return 4494;
				
				case 147:
					return 4502;
				
				case 148:
					return 4510;
				
				case 149:
					return 4518;
				
				case 150:
					return 4526;
				
				case 151:
					return 4534;
				
				case 152:
					return 4542;
				
				case 153:
					return 4550;
				
				case 154:
					return 4558;
				
				case 155:
					return 4566;
				
				case 156:
					return 4574;
				
				case 157:
					return 4582;
				
				case 158:
					return 5475;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5924;
				
				case 160:
					return 5931;
				
				case 161:
					return 5938;
				
				case 162:
					return 5945;
				
				case 163:
					return 5952;
				
				case 164:
					return 5959;
				
				case 165:
					return 5966;
				
				case 166:
					return 5973;
				
				case 167:
					return 5980;
				
				case 168:
					return 5987;
				
				case 169:
					return 5994;
				
				case 170:
					return 6001;
				
				case 171:
					return 6008;
				
				case 172:
					return 6015;
				
				case 173:
					return 6022;
				
				case 174:
					return 6029;
				
				case 175:
					return 6036;
				
				case 176:
					return 6043;
				
				case 177:
					return 6050;
				
				case 178:
					return 6057;
				
				case 179:
					return 6064;
				
				case 180:
					return 6071;
				
				case 181:
					return 6078;
				
				case 182:
					return 6085;
				
				case 183:
					return 6092;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6169;
				
				case 185:
					return 6176;
				
				case 186:
					return 6183;
				
				case 187:
					return 6190;
				
				case 188:
					return 6197;
				
				case 189:
					return 6204;
				
				case 190:
					return 6211;
				
				case 191:
					return 6218;
				
				case 192:
					return 6225;
				
				case 193:
					return 6232;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6566;
				
				case 195:
					return 6573;
				
				case 196:
					return 6580;
				
				case 197:
					return 6587;
				
				case 198:
					return 6594;
				
				case 199:
					return 6601;
				
				case 200:
					return 6608;
				
				case 201:
					return 6615;
				
				case 202:
					return 6622;
				
				case 203:
					return 6629;
				
				case 204:
					return 6636;
				
				case 205:
					return 6643;
				
				case 206:
					return 6650;
				
				case 207:
					return 6657;
				
				case 208:
					return 6664;
				
				case 209:
					return 6671;
				
				case 210:
					return 6678;
				
				case 211:
					return 6685;
				
				case 212:
					return 6692;
				
				case 213:
					return 6699;
				
				case 214:
					return 6706;
				
				case 215:
					return 6713;
				
				case 216:
					return 6720;
				
				case 217:
					return 6727;
				
				case 218:
					return 6734;
				
				case 219:
					return 6741;
				
				case 220:
					return 6748;
				
				case 221:
					return 6755;
				
				case 222:
					return 6762;
				
				case 223:
					return 6769;
				
				case 224:
					return 6776;
				
				case 225:
					return 6783;
				
				case 226:
					return 6790;
				
				case 227:
					return 6797;
				
				case 228:
					return 6804;
				
				case 229:
					return 6811;
				
				case 230:
					return 6818;
				
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
					return 3333;
				
				case 78:
					return 3341;
				
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
					return 4129;
				
				case 101:
					return 4137;
				
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
					return 4289;
				
				case 121:
					return 4297;
				
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
					return 4449;
				
				case 141:
					return 4457;
				
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
			break;
			break;
	}
	return 1629;
}

int func_741(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 231)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (iParam0 >= func_649(iVar0) && iParam0 < func_742(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_742(int iParam0)
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
			return -1;
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_652(iParam0);
		return func_743(iVar0);
	}
	return (func_650(iParam0, -1) * iParam0 + 1);
}

int func_743(int iParam0)
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
	return -1;
}

int func_744(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16357)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_652(iParam0);
		if (iVar1 == 0 && func_423(5389, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_745(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_687(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1373768[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2559326[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 18)
		{
			return 0;
		}
		return Global_2559219[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_745(int iParam0)
{
	if (!Global_262145.f_22997)
	{
		return 0;
	}
	return func_423(7203, iParam0, 0) != 0;
}

int func_746(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_747(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_648(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_423(func_740(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_749()
{
	return func_423(func_750(3), -1, 0) != 0;
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6534;
			break;
		
		case 1:
			return 6536;
			break;
		
		case 2:
			return 6537;
			break;
		
		case 3:
			return 6538;
			break;
		
		case 4:
			return 6539;
			break;
		
		case 5:
			return 6540;
			break;
	}
	return 8804;
}

bool func_751()
{
	return func_423(6159, -1, 0) != 0;
}

bool func_752()
{
	return func_423(5376, -1, 0) != 0;
}

bool func_753()
{
	return func_423(3824, -1, 0) != 0;
}

bool func_754()
{
	return func_423(3219, -1, 0) != 0;
}

bool func_755()
{
	return func_423(5375, -1, 0) != 0;
}

int func_756()
{
	int iVar0;
	
	iVar0 = func_452();
	if (iVar0 != func_63())
	{
		return Global_1624079[iVar0 /*558*/].f_11.f_93;
	}
	return 0;
}

int func_757(int iParam0)
{
	if (func_101(iParam0) == 225 || func_101(iParam0) == 226)
	{
		return func_414(iParam0);
	}
	return -1;
}

var func_758()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_564(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_759(bool bParam0)
{
	if (bParam0)
	{
		if (!func_105(PLAYER::PLAYER_ID(), 9))
		{
			if (func_130(PLAYER::PLAYER_ID()) != 0)
			{
				func_106(9);
			}
		}
	}
	else if (func_105(PLAYER::PLAYER_ID(), 9))
	{
		func_104(9);
	}
}

int func_760(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2363, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_761(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3070 = iParam6;
			Global_2973[3 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
			Global_3050 = iParam0;
			MISC::SET_BIT(&Global_2363, 1);
			MISC::SET_BIT(&Global_2363, 7);
		}
		return 1;
	}
	return 0;
}

int func_761(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_771();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14493 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14493 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14493 == 1)
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
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_105220.f_14022[Global_14493 /*20*/].f_17 == 1)
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
	if (func_770() == 0)
	{
		func_768();
		return 0;
	}
	func_767(Global_16867);
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/]), sParam1, 64);
	Global_105220.f_14112[Global_16867 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_105220.f_14112[Global_16867 /*104*/].f_24 = iParam2;
	}
	Global_105220.f_14112[Global_16867 /*104*/].f_25 = iParam7;
	Global_105220.f_14112[Global_16867 /*104*/].f_26 = uParam8;
	Global_105220.f_14112[Global_16867 /*104*/].f_29 = uParam9;
	Global_105220.f_14112[Global_16867 /*104*/].f_30 = uParam12;
	Global_105220.f_14112[Global_16867 /*104*/].f_31 = uParam11;
	Global_105220.f_14112[Global_16867 /*104*/].f_28 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_33), sParam4, 64);
	Global_105220.f_14112[Global_16867 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_50), sParam5, 64);
	Global_105220.f_14112[Global_16867 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2363, 10))
	{
		Global_105220.f_14112[Global_16867 /*104*/].f_99[0] = 1;
		Global_105220.f_14112[Global_16867 /*104*/].f_99[1] = 1;
		Global_105220.f_14112[Global_16867 /*104*/].f_99[2] = 1;
		Global_3069 = 4;
		func_766(0);
		func_766(2);
		func_766(1);
	}
	else
	{
		func_771();
		switch (iParam16)
		{
			case 3:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[Global_14493] = 1;
				break;
			
			case 0:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14493)
			{
				case 0:
					func_766(0);
					Global_3069 = 0;
					break;
				
				case 1:
					func_766(1);
					Global_3069 = 1;
					break;
				
				case 2:
					func_766(2);
					Global_3069 = 2;
					break;
				
				case 3:
					func_766(3);
					Global_3069 = 3;
					break;
				
				default:
					Global_3069 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2363, 10))
		{
			Global_105220.f_14022[0 /*20*/].f_17 = 1;
			Global_105220.f_14022[1 /*20*/].f_17 = 1;
			Global_105220.f_14022[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_105220.f_14022[Global_14493 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_105220.f_14022[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_105220.f_14022[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_105220.f_14022[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16869[Global_16867] = 0;
	if (bParam10)
	{
		func_771();
		if (Global_14436)
		{
			StringCopy(&Global_14482, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14493)
			{
				case 0:
					StringCopy(&Global_14482, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14482, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14482, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14482, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_398())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14482, true);
			}
		}
	}
	if (!Global_14660)
	{
		if (Global_14493.f_1 == 6)
		{
			func_765(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_762(1);
			func_765(Global_14474, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14473), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_762(int iParam0)
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
		if (func_764(14))
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
								func_158(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2457694)
							{
								if (iVar1 == 14)
								{
									func_763(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_763(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16868), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_763(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_763(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_763(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_158(&(Global_2370[iVar1 /*15*/]));
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
								func_158(&(Global_2370[iVar1 /*15*/]));
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
								func_158(&(Global_2370[iVar1 /*15*/]));
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
								func_158(&(Global_2370[iVar1 /*15*/]));
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
								func_158(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2370[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622819.f_1;
								func_763(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_763(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_763(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_158(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_158(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_158(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_158(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_158(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

bool func_764(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_765(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_766(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_105220.f_14022[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_767(int iParam0)
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
	Global_105220.f_14112[iParam0 /*104*/].f_18 = iVar0;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_768()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
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
	Global_16867 = 34;
	Global_105220.f_14112[Global_16867 /*104*/].f_18 = -1;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_1 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_2 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_3 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_769(Global_105220.f_14112[iVar2 /*104*/].f_18, Global_105220.f_14112[Global_16867 /*104*/].f_18))
		{
			Global_16867 = iVar2;
		}
		iVar2++;
	}
	Global_105220.f_14112[Global_16867 /*104*/].f_24 = 1;
}

int func_769(struct<6> Param0, struct<6> Param1)
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

int func_770()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
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
		if (Global_105220.f_14112[iVar2 /*104*/].f_24 == 0)
		{
			Global_16867 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16867 = 34;
	Global_105220.f_14112[Global_16867 /*104*/].f_18 = -1;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_1 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_2 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_3 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_105220.f_14112[iVar2 /*104*/].f_24 == 0 || Global_105220.f_14112[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_769(Global_105220.f_14112[iVar2 /*104*/].f_18, Global_105220.f_14112[Global_16867 /*104*/].f_18))
			{
				Global_16867 = iVar2;
			}
		}
		if (Global_105220.f_14112[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16867 == 34)
	{
		return 0;
	}
	Global_105220.f_14112[Global_16867 /*104*/].f_99[0] = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_99[1] = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_99[2] = 0;
	return 1;
}

void func_771()
{
	if (func_764(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_772();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_772()
{
	func_773();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_773()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_776(Global_105220.f_2354.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_775(PLAYER::PLAYER_PED_ID());
			if (func_774(iVar0) && (!func_764(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_774(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_774(int iParam0)
{
	return iParam0 < 3;
}

int func_775(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_776(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_776(int iParam0)
{
	if (func_774(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_777()
{
	if (!func_726())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_722();
}

void func_778()
{
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9)
	{
		case 0:
			func_780();
			func_297();
			if (Local_105.f_117 == 2)
			{
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 2;
			}
			else if (Local_105.f_117 == 3)
			{
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_297();
			if (func_779())
			{
				func_713();
			}
			if (Local_105.f_117 == 3)
			{
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_861();
			break;
	}
}

bool func_779()
{
	return ((MISC::IS_BIT_SET(Local_105.f_1, 1) || MISC::IS_BIT_SET(Local_105.f_1, 3)) || MISC::IS_BIT_SET(Local_105.f_1, 5));
}

void func_780()
{
	func_800();
	func_799();
	func_734();
	func_716();
	func_789();
	func_788();
	func_783();
	func_782();
	func_701();
	func_781();
}

void func_781()
{
}

void func_782()
{
	if (func_779())
	{
		return;
	}
	if (!func_847())
	{
		return;
	}
	if (!Global_262145.f_14393)
	{
		return;
	}
	if (Local_105.f_115 == 0)
	{
		return;
	}
}

void func_783()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_847())
	{
		return;
	}
	if (func_779())
	{
		return;
	}
	fVar2 = func_140(&iVar0, 1);
	if (fVar2 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_114 != iVar0)
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), false) };
				func_90(10, 0, 0, 0, 0);
				func_784(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_114 = iVar0;
				MISC::SET_BIT(&iLocal_107, 16);
			}
		}
	}
	else if (fVar2 > 250000f)
	{
		func_327();
	}
}

void func_784(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413628.f_6))
	{
		if (!Global_2413628.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	else
	{
		Global_2413628.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413628.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_785(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413628 = { Var0 };
}

int func_785(int iParam0)
{
	if (((func_786(iParam0, 1) || func_128(iParam0)) || func_102(iParam0, 0)) || func_368(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_786(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_787(iParam0) != 0;
	}
	return func_265(iParam0, bParam1);
}

int func_787(int iParam0)
{
	if (func_948(iParam0, 0, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_1;
	}
	return 0;
}

void func_788()
{
	int iVar0;
	
	if (iLocal_111 != Local_105.f_115)
	{
		if (func_847())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						switch (Local_105.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_14390)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14390, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_14391)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14391, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_14392)
								{
									PLAYER::SET_MAX_WANTED_LEVEL(Global_262145.f_14392);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14392, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
						}
						iLocal_111 = Local_105.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_111 = Local_105.f_115;
		}
	}
}

void func_789()
{
	int iVar0;
	
	if (!func_362())
	{
		if (func_798("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	iVar0 = func_130(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (func_798("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_107, 2))
	{
		if (!func_797(86))
		{
			if (func_791(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_105.f_118)
				{
					func_790("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_306(1);
					MISC::SET_BIT(&iLocal_107, 2);
				}
				else if (func_848() == Local_105.f_118)
				{
					func_790("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_306(1);
					MISC::SET_BIT(&iLocal_107, 2);
				}
				else if (func_285())
				{
					func_790("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_306(1);
					MISC::SET_BIT(&iLocal_107, 2);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_107, 2))
	{
		if (!MISC::IS_BIT_SET(iLocal_107, 3))
		{
			if (func_791(0, 1, 1, 1))
			{
				if (!func_798("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_105.f_118 || func_848() == Local_105.f_118)
					{
						func_307("HUNT_HELPB", -1);
						func_306(1);
						MISC::SET_BIT(&iLocal_107, 3);
					}
				}
			}
		}
	}
}

void func_790(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_791(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_796())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_265(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_795(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_794())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574164)
	{
		return 0;
	}
	if (func_793())
	{
		return 0;
	}
	if (func_792())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (Global_2528869)
	{
		return 0;
	}
	return 1;
}

bool func_792()
{
	return Global_2447942.f_579;
}

bool func_793()
{
	return Global_2447942.f_731;
}

bool func_794()
{
	return Global_2436641.f_3027.f_578;
}

int func_795(int iParam0)
{
	if (Global_2423644[iParam0 /*406*/].f_204 == 0)
	{
		return 0;
	}
	return 1;
}

int func_796()
{
	if (Global_15800 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_797(int iParam0)
{
	return Global_2436641.f_2703[0 /*80*/].f_1 == iParam0;
}

int func_798(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_799()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_140(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_123(PLAYER::PLAYER_ID()))
		{
			func_122();
		}
	}
}

void func_800()
{
	if (func_133())
	{
		if (MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
		{
			func_108(0);
			MISC::CLEAR_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_130(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
	{
		if (!func_847())
		{
			if (!func_132())
			{
				if (MISC::IS_BIT_SET(Local_105.f_1, 6))
				{
					func_108(1);
					MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_801()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_63();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_105.f_110, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_848() == Local_105.f_118)
							{
								if (func_819(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1)))
								{
									MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_105.f_112, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
				{
					if (func_818(iVar0))
					{
						MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_105.f_111, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), true), 10f, 1))
						{
							MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_817(iVar0);
		if (func_362())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_122[iVar0]))
			{
				if (!func_779())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_122[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1));
							if (func_848() == Local_105.f_118)
							{
								HUD::SET_BLIP_PRIORITY(iLocal_122[iVar0], 12);
								HUD::SET_BLIP_SPRITE(iLocal_122[iVar0], 432);
								func_816(&(iLocal_122[iVar0]), 6);
							}
							else
							{
								HUD::SET_BLIP_SPRITE(iLocal_122[iVar0], 480);
								func_816(&(iLocal_122[iVar0]), 9);
							}
							HUD::SET_BLIP_FLASHES(iLocal_122[iVar0], true);
							HUD::SET_BLIP_FLASH_TIMER(iLocal_122[iVar0], 7000);
							HUD::SET_BLIP_SCALE(iLocal_122[iVar0], 1.1f);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_122[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					HUD::REMOVE_BLIP(&(iLocal_122[iVar0]));
				}
				else if (func_779())
				{
					HUD::REMOVE_BLIP(&(iLocal_122[iVar0]));
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_122[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_122[iVar0]));
		}
		func_815(iVar0);
		func_814(iVar0);
		func_812(iVar0);
		switch (Local_105.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_105.f_2[iVar0 /*26*/].f_2)))
								{
									if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_105.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_105.f_2[iVar0 /*26*/].f_2)))
									{
										if ((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || MISC::IS_BIT_SET(Local_105.f_108, iVar0))
										{
											BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_105.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (MISC::IS_BIT_SET(Local_105.f_108, iVar0))
											{
												MISC::CLEAR_BIT(&(Local_105.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									BRAIN::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
									{
										BRAIN::TASK_WANDER_STANDARD(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_808(iVar0);
										if (!PED::IS_PED_INJURED(iVar2))
										{
											BRAIN::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), false);
									BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_PED_TO_LOAD_COVER(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_807(iVar0, &fVar5);
									if (iVar4 != func_63())
									{
										BRAIN::TASK_SEEK_COVER_FROM_PED(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), PLAYER::GET_PLAYER_PED(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									BRAIN::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_105.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										BRAIN::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											BRAIN::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_847())
	{
		func_802();
	}
}

void func_802()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_803(uLocal_124[iVar0], &(Local_123[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_803(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_806())
		{
			Global_2436641 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_805(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2436641, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_805(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2436641, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_804(iParam1);
	}
}

void func_804(int iParam0)
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
				HUD::_SET_PED_ENEMY_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_805(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
			if (iParam8 == -1)
			{
				HUD::_SET_PED_ENEMY_AI_BLIP(iParam0, 1);
			}
			else
			{
				HUD::_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::_0xE52B8E7F85D39A08(iParam0, iParam2);
			HUD::_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		HUD::_0x0C4BBF625CA98C4E(iParam0, bParam4);
		HUD::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = HUD::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
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
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_0x56176892826A4FE8(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
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
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_806()
{
	return Global_1312831;
}

int func_807(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_63();
	fVar1 = 1E+08f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true) };
	iVar4 = 0;
	while (iVar4 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
			if (!func_17(iVar5, 0))
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (iVar4 == Local_105.f_118 || Local_106[iVar4 /*14*/].f_10 == Local_105.f_118)
				{
					if (!PED::IS_PED_INJURED(iVar6))
					{
						fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), vVar3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar5;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != func_63())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

int func_808(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_809(iParam0);
	if (iVar1 != func_63())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	return iVar0;
}

int func_809(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_63();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (func_179(iVar5, 1))
			{
				if (!MISC::IS_BIT_SET(Local_106[iVar3 /*14*/].f_1, 1))
				{
					if (func_64(iVar5) == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_105.f_118)))
					{
						if (!PED::IS_PED_INJURED(iVar6))
						{
							fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), vVar4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar5;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_810(int iParam0)
{
	if (NETWORK::_0xA1607996431332DF(iParam0))
	{
		return 1;
	}
	if (func_811(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_811(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_42(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_812(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar5;
	
	if (!func_362())
	{
		return;
	}
	if (func_130(PLAYER::PLAYER_ID()) < 1)
	{
		return;
	}
	if (!func_847() && !func_285())
	{
		return;
	}
	if (func_779())
	{
		return;
	}
	if (func_847())
	{
		HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_105.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1)))
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true) };
				GRAPHICS::DRAW_MARKER(2, vVar4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
			else
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 0);
				func_813(iVar5, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_813(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
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
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_814(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	bool bVar4;
	
	if (Local_105.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_105.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_848() != Local_105.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 5625f)
	{
		MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_3[iVar3]))
		{
			if (!func_14(Local_105.f_2[iParam0 /*26*/].f_3[iVar3]))
			{
				bVar4 = true;
			}
		}
		iVar3++;
	}
	if (!bVar4)
	{
		MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
	}
}

void func_815(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (Local_105.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_105.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_848() != Local_105.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 62500f)
	{
		MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_3[iVar4]))
		{
			if (func_14(Local_105.f_2[iParam0 /*26*/].f_3[iVar4]))
			{
				MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
			}
			else
			{
				iVar3 = NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_3[iVar4]);
				if (func_848() == Local_105.f_118)
				{
					if (SYSTEM::VDIST2(vVar1, vVar2) < 40000f)
					{
						MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
					if (func_819(iVar3))
					{
						MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar4++;
	}
}

void func_816(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_324(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_817(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (Local_105.f_2[iParam0 /*26*/] == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_105.f_2[iParam0 /*26*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							vVar2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), true) };
							vVar3 = { vVar2 };
							vVar3.z = (vVar3.z + 500f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &fVar1, 0, 0))
							{
								if (MISC::ABSF((vVar2.z - fVar1)) > 30f)
								{
									ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_105.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_818(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_105.f_2[iParam0 /*26*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_105.f_2[iParam0 /*26*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_819(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_820())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
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

bool func_820()
{
	return Global_1574349;
}

void func_821()
{
	int iVar0;
	int iVar1;
	
	if (Local_105 != 4)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_110);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				if (!func_779())
				{
					if (!func_847())
					{
						if (func_285())
						{
							if (func_179(iVar1, 1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_105.f_118));
								if (func_74(iVar1, iVar0, 1))
								{
									if (!MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_110))
									{
										func_325(iVar1, 432, 1, 0);
										func_319(iVar1, func_324(iLocal_125), 1, 0);
										MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_110);
									}
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_110))
			{
				func_325(iVar1, 432, 0, 0);
				func_319(iVar1, func_324(iLocal_125), 0, 0);
				MISC::CLEAR_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_110);
			}
		}
	}
	iLocal_110++;
	if (iLocal_110 >= 32)
	{
		iLocal_110 = 0;
	}
}

int func_822(bool bParam0)
{
	if (func_826(1))
	{
		return 1;
	}
	if (Global_2519572.f_4882.f_33)
	{
		Global_2519572.f_4882.f_33 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_240() == func_63() || !func_948(func_240(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_371(PLAYER::PLAYER_ID()))
	{
		if (func_825(PLAYER::PLAYER_ID()) && func_823(func_824(PLAYER::PLAYER_ID()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_823(int iParam0, int iParam1)
{
	return func_316(iParam0) == iParam1;
}

int func_824(int iParam0)
{
	if (iParam0 != func_63() && func_948(iParam0, 1, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_305.f_12;
	}
	return -1;
}

int func_825(int iParam0)
{
	if (iParam0 != func_63() && func_948(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_305, 4);
	}
	return 0;
}

int func_826(bool bParam0)
{
	bool bVar0;
	
	if (!func_450(1))
	{
		bVar0 = false;
		if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 != func_63())
		{
			if (func_948(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57, 0, 1))
			{
				if ((Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_24 == 4 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_24 == 8) || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_827(func_101(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_506(31);
				if (func_304(func_101(PLAYER::PLAYER_ID())))
				{
					func_506(81);
				}
				if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 != func_63() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57))
				{
					Global_1622663 = func_343(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57, -2, 0, 0);
					if (!func_239(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57))
					{
						func_506(88);
					}
				}
				else
				{
					Global_1622663 = 1;
				}
				Global_1622647 = { Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_827(int iParam0)
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
	return -1;
}

void func_828()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_105.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_124[iVar0] = Local_105.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_829()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (NETWORK::PARTICIPANT_ID_TO_INT() == Local_105.f_118 || func_848() == Local_105.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_1), PLAYER::PLAYER_ID(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), PLAYER::PLAYER_ID(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_830()
{
	if (Local_105.f_118 > -1)
	{
		iLocal_125 = func_699(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_105.f_118)));
	}
}

void func_831(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_322())
	{
		return;
	}
	fVar0 = (Global_2519572.f_4877 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2519572.f_4878))
	{
		if (!Global_2519572.f_4878 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2519572.f_4877 = fParam0;
	Global_2519572.f_4878 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_832(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 != iParam0)
	{
		func_846(-1);
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 = iParam0;
		if (func_845() != -1)
		{
			func_844(-1);
		}
		if (func_843() != -1)
		{
			func_842(-1);
		}
		func_841(iParam2);
		func_839(iParam0);
		if (!func_112(iParam0))
		{
			fVar0 = func_111(iParam0);
			if (fVar0 != 1f)
			{
				func_831(fVar0);
				MISC::SET_BIT(&(Global_1665343.f_3), 1);
			}
		}
		if (!func_115(iParam0) || iParam3)
		{
			if (func_113(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				MISC::SET_BIT(&(Global_1665343.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_132())
		{
			func_106(27);
		}
		if (bParam1)
		{
			if (!func_133())
			{
				func_108(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2519572.f_4541, 1) || MISC::IS_BIT_SET(Global_2519572.f_4541, 4)) || MISC::IS_BIT_SET(Global_2519572.f_4541, 0))
			{
				func_506(6);
			}
			func_838();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_128(PLAYER::PLAYER_ID()) && func_120(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_1), 8);
		}
		func_834();
		if (func_833(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1665343.f_3), 6);
		}
		Global_2519572.f_6170 = 0;
	}
}

int func_833(int iParam0)
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

void func_834()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_837();
	iVar2 = func_64(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_74(iVar1, iVar2, 1) || func_835(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_835(int iParam0, int iParam1)
{
	if (func_179(iParam0, 1) && func_179(iParam1, 1))
	{
		return (func_836(iParam0) == func_64(iParam1) || func_836(iParam1) == func_64(iParam0));
	}
	return 0;
}

int func_836(int iParam0)
{
	if (func_179(iParam0, 1))
	{
		return Global_1624079[func_64(iParam0) /*558*/].f_11.f_443;
	}
	return func_63();
}

int func_837()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_452();
	if (iVar0 != func_63())
	{
		if (func_948(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1624079[iVar1 /*558*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_838()
{
	if (MISC::IS_BIT_SET(Global_2519572.f_4541, 1))
	{
		MISC::CLEAR_BIT(&(Global_2519572.f_4541), 1);
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4541, 4))
	{
		MISC::CLEAR_BIT(&(Global_2519572.f_4541), 4);
	}
	if (MISC::IS_BIT_SET(Global_2519572.f_4541, 6))
	{
		MISC::CLEAR_BIT(&(Global_2519572.f_4541), 6);
	}
	MISC::CLEAR_BIT(&(Global_2519572.f_4541), 0);
	MISC::CLEAR_BIT(&(Global_2519572.f_4541), 2);
	Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_651 = 0;
	if (Global_2519572.f_4543 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2519572.f_4543);
	}
	Global_2519572.f_4542 = 0;
}

void func_839(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_423(3787, -1, 0);
	iVar1 = func_840(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_421(3787, iVar0, -1, 1, 0);
	}
}

int func_840(int iParam0)
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
	return -1;
}

void func_841(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1624079[iVar0 /*558*/].f_11.f_176 != iParam0)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_176 = iParam0;
	}
}

void func_842(int iParam0)
{
	if (Global_2519572.f_4882.f_329 != iParam0)
	{
		Global_2519572.f_4882.f_329 = iParam0;
	}
}

int func_843()
{
	return Global_2519572.f_4882.f_329;
}

void func_844(int iParam0)
{
	if (Global_2519572.f_4882.f_328 != iParam0)
	{
		Global_2519572.f_4882.f_328 = iParam0;
	}
}

int func_845()
{
	return Global_2519572.f_4882.f_328;
}

void func_846(int iParam0)
{
	Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_32 = iParam0;
}

int func_847()
{
	int iVar0;
	
	iVar0 = func_848();
	if (iVar0 > -1)
	{
		if (Local_105.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_848()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_63();
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		iVar1 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = func_286();
		iVar1 = Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_640;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_106[iVar0 /*14*/].f_10 != -1)
	{
		return Local_106[iVar0 /*14*/].f_10;
	}
	if (func_119(iVar1))
	{
		Local_106[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_105.f_118)
		{
			func_759(1);
		}
	}
	else if (func_179(iVar1, 1))
	{
		iVar2 = func_64(iVar1);
		if (iVar2 != func_63())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_106[iVar0 /*14*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_106[iVar0 /*14*/].f_10;
}

int func_849()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_105.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_850()
{
	return Local_105;
}

int func_851(int iParam0)
{
	return Local_106[iParam0 /*14*/];
}

int func_852()
{
	var uVar0;
	
	func_857(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_856())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_855())
	{
		return 1;
	}
	if (func_854(157))
	{
		if (!func_853())
		{
			return 1;
		}
	}
	if (func_854(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_322() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_322()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_853()
{
	return Global_2447942.f_586;
}

int func_854(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_855()
{
	return Global_2457699;
}

bool func_856()
{
	return Global_2447942.f_581;
}

void func_857(var uParam0)
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
				case 1113296425:
					func_858(iVar0);
					break;
				
				case -319074860:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_858(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_948(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_859(iVar2, &bVar3))
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

int func_859(int iParam0, var uParam1)
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

void func_860()
{
	SYSTEM::WAIT(0);
}

void func_861()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_107, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_847() || func_285())
				{
					func_596(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_107, 6);
				}
			}
		}
		uVar0 = Local_105.f_115;
		uVar1 = Local_105.f_121;
		iVar2 = -1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11;
		}
		func_907(uVar0, uVar1, iVar2, -1082130432);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_112)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_113);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_107, 18))
	{
		func_330(1);
		MISC::CLEAR_BIT(&iLocal_107, 18);
	}
	func_906();
	if (Local_105.f_119 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_107, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_105.f_119)))
			{
			}
		}
	}
	if (func_79(0))
	{
		func_78(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (MISC::IS_BIT_SET(Local_105.f_871, iVar3))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_105.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_107, 17))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_127);
		MISC::CLEAR_BIT(&iLocal_107, 17);
	}
	func_327();
	MISC::SET_BIT(&iLocal_108, 8);
	func_713();
	OBJECT::_0x78857FC65CADB909(1);
	func_759(0);
	func_863(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_318();
	func_862();
}

void func_862()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_863(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1352938.f_1.f_108 != 0)
	{
		Global_1352938.f_1.f_108 = 0;
	}
	Global_1352938.f_1.f_109 = -1;
	Global_1352938.f_1.f_110 = -1;
	if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 167 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 168)
	{
		func_904();
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 4);
	}
	if ((func_448() && iParam1 != 0) && Global_262145.f_16354)
	{
		if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 190 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 192)
		{
			func_886(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 164 || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 208) || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 250) || Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 != -1)
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574452.f_1, 14) && !func_128(PLAYER::PLAYER_ID()))
		{
			func_108(0);
		}
	}
	else if (func_884(PLAYER::PLAYER_ID()) != -1)
	{
		func_846(-1);
	}
	func_883(func_63());
	if (func_79(16))
	{
		func_78(16);
	}
	func_880(0);
	func_841(-1);
	func_879();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_878(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_876(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 5);
	}
	iVar2 = func_311();
	if ((func_209(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_875(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_384(iVar2))
	{
		func_872(-1, 1);
	}
	else if (((((func_310(iVar2) || func_871(iVar2)) || func_870(iVar2)) || func_381(iVar2)) || func_379(iVar2)) || func_377(iVar2))
	{
	}
	else
	{
		func_872(-1, 1);
	}
	func_104(19);
	func_104(20);
	func_104(21);
	func_104(22);
	func_104(27);
	func_78(3);
	func_78(4);
	func_78(7);
	func_869();
	if (func_120(PLAYER::PLAYER_ID()))
	{
		func_759(0);
	}
	func_104(29);
	Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 = func_63();
	if (Global_2519572.f_4882.f_33 != 0)
	{
		Global_2519572.f_4882.f_33 = 0;
	}
	if (bParam0)
	{
		func_80();
	}
	if (!func_128(PLAYER::PLAYER_ID()))
	{
		func_103();
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1665343.f_3, 8))
	{
		func_868("IMPEXP_SELFDES", 0);
		func_866("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 8);
	}
	func_864(iVar2, 0);
}

void func_864(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1665343.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_865(iParam0));
			MISC::SET_BIT(&(Global_1665343.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1665343.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_865(iParam0));
		MISC::CLEAR_BIT(&(Global_1665343.f_3), 9);
	}
}

char* func_865(int iParam0)
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

void func_866(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_105220.f_14112[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_105220.f_14112[iVar0 /*104*/]), sParam0))
			{
				if (Global_105220.f_14112[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_771();
					Global_105220.f_14112[iVar0 /*104*/].f_99[Global_14493] = 0;
					if (func_867(iVar0))
					{
					}
					else
					{
						Global_105220.f_14112[iVar0 /*104*/].f_24 = 0;
						Global_105220.f_14112[iVar0 /*104*/].f_28 = 0;
						Global_105220.f_14112[iVar0 /*104*/].f_29 = 0;
					}
					HUD::_REMOVE_NOTIFICATION(Global_105220.f_14112[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_867(int iParam0)
{
	if ((Global_105220.f_14112[iParam0 /*104*/].f_99[0] == 1 || Global_105220.f_14112[iParam0 /*104*/].f_99[1] == 1) || Global_105220.f_14112[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_868(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_105220.f_14112[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_105220.f_14112[iVar0 /*104*/]), sParam0))
			{
				if (Global_105220.f_14112[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_105220.f_14112[iVar0 /*104*/].f_24 = 1;
				if (Global_105220.f_14112[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_105220.f_14022[0 /*20*/].f_17 = 0;
					}
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_105220.f_14022[1 /*20*/].f_17 = 0;
					}
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_105220.f_14022[2 /*20*/].f_17 = 0;
					}
					if (Global_105220.f_14112[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_105220.f_14022[3 /*20*/].f_17 = 0;
					}
					Global_105220.f_14112[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_105220.f_14112[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_869()
{
	if (func_123(PLAYER::PLAYER_ID()))
	{
		func_104(25);
	}
}

int func_870(int iParam0)
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

int func_871(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_872(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_311();
	}
	if (iParam0 > 0)
	{
		if (func_452() != func_63())
		{
			if (func_372(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2499203.f_93[func_874(iParam0)] = 1;
			}
		}
		iVar0 = func_874(159);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(157);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(148);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(164);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(142);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(152);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(166);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(170);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(173);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(179);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(200);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(201);
		if (func_873(iVar0, Global_262145.f_11995, bParam1))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(182);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(183);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(185);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(186);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(180);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(195);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(197);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(198);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(207);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(208);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(209);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(214);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(215);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(216);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(217);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(218);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(219);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(220);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(221);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_873(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_105(PLAYER::PLAYER_ID(), 19) && !func_105(PLAYER::PLAYER_ID(), 20)) && !func_105(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2499203.f_93[iParam0] == 1 && func_8(&(Global_2499203[iParam0 /*2*/])))
	{
		if (func_715(&(Global_2499203[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2499203.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_874(int iParam0)
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
	return -1;
}

void func_875(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_311();
	}
	if (iParam0 > 0)
	{
		if (func_452() != func_63())
		{
			Global_2499203.f_93[func_874(iParam0)] = 1;
		}
		iVar0 = func_874(155);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(163);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(160);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(153);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(162);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(154);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(171);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(172);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(199);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(194);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(193);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(210);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(205);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(189);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(211);
		if (func_873(iVar0, Global_262145.f_11996, 0))
		{
			func_151(&(Global_2499203[iVar0 /*2*/]));
			func_7(&(Global_2499203[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_876(int iParam0)
{
	if (!func_28(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_303[iParam0 /*3*/], func_877(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_303[iParam0 /*3*/] = { func_877() };
	}
	if (!func_28(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_290[iParam0 /*3*/], func_877(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_290[iParam0 /*3*/] = { func_877() };
	}
}

Vector3 func_877()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_878(int iParam0)
{
	if (!func_28(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_145[iParam0 /*3*/], func_877(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_145[iParam0 /*3*/] = { func_877() };
	}
	if (!func_28(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_120[iParam0 /*3*/], func_877(), 0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_120[iParam0 /*3*/] = { func_877() };
	}
}

void func_879()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573884 = { Var0 };
	Global_1573884.f_13 = func_63();
	if (MISC::IS_BIT_SET(Global_1573342, 3))
	{
		MISC::CLEAR_BIT(&Global_1573342, 3);
	}
}

void func_880(bool bParam0)
{
	if (bParam0)
	{
		if (!func_401(PLAYER::PLAYER_ID(), 14))
		{
			func_882(14);
		}
	}
	else if (func_401(PLAYER::PLAYER_ID(), 14))
	{
		func_881(14);
	}
}

void func_881(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_5), iParam0);
}

void func_882(int iParam0)
{
	MISC::SET_BIT(&(Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_5), iParam0);
}

void func_883(int iParam0)
{
	if (func_119(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_443 != iParam0)
			{
				Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_443 = iParam0;
				if (iParam0 != func_63())
				{
				}
			}
		}
	}
}

int func_884(int iParam0)
{
	if (func_885(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_32;
	}
	return -1;
}

int func_885(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_32 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_886(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_564(iParam0, iParam1) && func_903(iParam0, iParam1))
	{
		iVar0 = func_563(iParam0, iParam1);
		func_890(iVar0, bParam2, bParam3);
		func_887(iVar0, 1);
	}
}

void func_887(int iParam0, bool bParam1)
{
	if (!func_889(iParam0))
	{
		return;
	}
	func_550(func_888(iParam0), bParam1, -1, 1);
	Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_6 = bParam1;
}

int func_888(int iParam0)
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

bool func_889(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_890(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_736(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_902(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2499081[iParam0];
		iVar0 = func_901(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1667015 = -1;
		}
		func_900(iParam0, 0, bParam2);
	}
	else if (func_898(iParam0, bParam2))
	{
		iVar0 = func_897(iVar2, 0);
		iVar3 = func_678(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_896(iVar2, bParam2);
		iVar5 = func_897(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_895(iVar2) && func_894(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_902(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_893(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_892(iParam0, (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_2 - (func_896(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_897(iVar2, bParam2) / func_893(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_895(iVar2) && func_894(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_891(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_891(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589291[iParam0 /*770*/].f_273.f_242 = iParam2;
				}
				else
				{
					Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_892(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_2)
	{
		Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_273.f_168[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_893(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_894(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1) && func_895(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/] == iParam1)
			{
				return Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_895(int iParam0)
{
	return func_445(iParam0) == 5;
}

int func_896(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_445(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16325;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16330;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16324;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16329;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16323;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16328;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16321;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16326;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16322;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16327;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20444;
				if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20445;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20428;
				if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20429;
				}
			}
			break;
	}
	return uVar0;
}

int func_897(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_445(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16306;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16315);
			}
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16320);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16307;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16314);
			}
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16319);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16308;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16313);
			}
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16318);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16309;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16311);
			}
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16316);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16310;
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16312);
			}
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16317);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20441;
			}
			else
			{
				iVar0 = Global_262145.f_20425;
			}
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20442);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20426);
				}
			}
			if (func_562(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20443);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20427);
				}
			}
			if (func_894(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_898(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_551(15384, -1, -1);
	}
	return func_551(func_899(iParam0), -1, -1);
}

int func_899(int iParam0)
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

void func_900(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_550(15384, bParam1, -1, 1);
		return;
	}
	func_550(func_899(iParam0), bParam1, -1, 1);
}

int func_901(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2499081[iParam0];
	iVar1 = func_736(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2499088;
	}
	if (func_895(iVar1))
	{
		if (func_894(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_902(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2499088 = iParam1;
		return;
	}
	Global_2499081[iParam0] = iParam1;
}

int func_903(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_564(iParam0, iParam1))
	{
		iVar0 = func_563(iParam0, iParam1);
		if (Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_4 > 0 && Global_1589291[iParam0 /*770*/].f_273.f_168[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_904()
{
	MISC::CLEAR_BIT(&(Global_2519572.f_1725), 28);
	MISC::CLEAR_BIT(&(Global_2519572.f_1725), 29);
	func_905(24);
}

void func_905(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_7[iVar0]), iVar1);
}

void func_906()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_112);
}

void func_907(var uParam0, var uParam1, int iParam2, int iParam3)
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
	Var1 = Global_1665352;
	Var1.f_1 = Global_1665352.f_1;
	Var1.f_2 = Global_1665352.f_2;
	Var1.f_3 = Global_1665352.f_3;
	Var1.f_4 = Global_1665352.f_4;
	Var1.f_5 = Global_1665352.f_5;
	Var1.f_6 = Global_1665352.f_6;
	Var1.f_7 = Global_1665352.f_7;
	Var1.f_8 = Global_1665352.f_8;
	Var1.f_9 = Global_1665352.f_9;
	Var1.f_10 = Global_1665352.f_10;
	Var1.f_11 = Global_1665352.f_11;
	Var1.f_12 = Global_1665352.f_12;
	Var1.f_13 = Global_1665352.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1665352.f_15;
			Var2.f_15 = Global_1665352.f_16;
			Var2.f_16 = Global_1665352.f_17;
			STATS::_0x8D8ADB562F09A245(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1665352.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = uParam1;
			STATS::_0xD1A1EE3B4FA8E760(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1665352.f_15;
			Var4.f_15 = uParam0;
			STATS::_0x88087EE1F28024AE(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1665352.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = uParam1;
			STATS::_0xFCC228E07217FCAC(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1665352.f_15;
			Var6.f_15 = uParam0;
			STATS::_0x678F86D8FC040BDB(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1665352.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = iParam2;
			STATS::_0xA6F54BB2FFCA35EA(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1665352.f_15;
			STATS::_0x5FF2C33B13A02A11(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1665352.f_15;
			STATS::_0x282B6739644F4347(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1665352.f_15;
			STATS::_0xF06A6F41CB445443(&Var10);
		}
	}
	func_908();
}

void func_908()
{
	struct<18> Var0;
	
	Global_1665352 = { Var0 };
}

void func_909(struct<21> Param0)
{
	func_946(func_947(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(8);
	func_945(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_105, 872);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_106, 449);
	if (!func_944())
	{
		func_861();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_941();
		func_910(0, 0);
		Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 0;
	}
	else
	{
		func_861();
	}
}

void func_910(int iParam0, int iParam1)
{
	func_940();
	if (func_371(PLAYER::PLAYER_ID()))
	{
		func_913(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_912(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1665338, 0);
				break;
			}
	}
	if (!func_435() && !func_179(PLAYER::PLAYER_ID(), 1))
	{
		if (func_136())
		{
			func_107(3);
		}
	}
	func_107(4);
	if (func_450(0))
	{
		Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_57 = func_452();
	}
	if (func_304(iParam0))
	{
		func_676();
		Global_1665370.f_18 = func_656(func_240());
	}
	else if (func_309(func_884(PLAYER::PLAYER_ID())))
	{
		func_674();
		Global_1665424.f_18 = func_656(func_240());
	}
	func_911();
}

void func_911()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1352938.f_533[iVar0 /*42*/].f_1 = func_63();
		Global_1352938.f_533[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_912(int iParam0, bool bParam1)
{
	return func_74(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_913(bool bParam0)
{
	int iVar0;
	
	func_905(33);
	func_905(34);
	func_905(35);
	func_905(36);
	func_905(37);
	func_905(38);
	func_905(39);
	func_905(40);
	func_905(43);
	func_905(41);
	func_905(54);
	func_905(42);
	func_905(47);
	func_939(23);
	func_939(24);
	func_905(92);
	MISC::CLEAR_BIT(&(Global_2519572.f_1725), 2);
	func_938();
	func_933();
	func_928();
	func_923();
	func_915();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2519572.f_4882.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_914(3))
	{
		func_939(3);
	}
	else if (func_914(4))
	{
		func_939(4);
	}
	else if (func_914(5))
	{
		func_939(5);
	}
	else if (func_914(6))
	{
		func_939(6);
	}
	else if (func_914(7))
	{
		func_939(7);
	}
	else if (((((((((((((((((func_914(0) || func_914(1)) || func_914(2)) || func_914(8)) || func_914(9)) || func_914(10)) || func_914(11)) || func_914(12)) || func_914(13)) || func_914(14)) || func_914(15)) || func_914(16)) || func_914(17)) || func_914(18)) || func_914(19)) || func_914(20)) || func_914(21)) || func_914(22))
	{
		func_939(8);
		func_939(0);
		func_939(1);
		func_939(2);
		func_939(9);
		func_939(10);
		func_939(11);
		func_939(12);
		func_939(13);
		func_939(14);
		func_939(15);
		func_939(16);
		func_939(17);
		func_939(18);
		func_939(19);
		func_939(20);
		func_939(21);
		func_939(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2519572.f_4882.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_914(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_14[iVar0], iVar1);
}

void func_915()
{
	int iVar0;
	
	if (func_922())
	{
		func_921(8);
		func_921(9);
		func_921(10);
		func_921(12);
		func_921(13);
		func_921(14);
		func_921(19);
		func_921(20);
		func_921(21);
		func_921(22);
		func_921(23);
		func_921(24);
		func_921(25);
		func_921(26);
		func_921(15);
		func_921(16);
		func_921(17);
		func_921(18);
		func_921(35);
		func_921(45);
		func_921(46);
		if (func_920(11))
		{
			func_921(11);
			iVar0 = func_423(7222, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_421(7222, iVar0, -1, 1, 0);
		}
	}
	if (func_920(48))
	{
		if (func_919(151, 3))
		{
			func_918(151, 3);
		}
		func_921(48);
	}
	if (func_920(49))
	{
		if (func_919(152, 3))
		{
			func_918(152, 3);
		}
		func_921(49);
	}
	if (func_920(50))
	{
		if (func_919(153, 3))
		{
			func_918(153, 3);
		}
		func_921(50);
	}
	if (func_920(51))
	{
		if (func_919(func_916(), 3))
		{
			func_918(func_916(), 3);
		}
		func_921(51);
	}
}

int func_916()
{
	if (func_917())
	{
		Global_105220.f_28021[154 /*29*/].f_24[Global_14493] = 1;
	}
	return 154;
}

int func_917()
{
	int iVar0;
	
	iVar0 = func_64(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_63()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_918(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 144)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_105220.f_28021[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_919(int iParam0, int iParam1)
{
	if (Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_920(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_26[iVar0], iVar1);
}

void func_921(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_26[iVar0]), iVar1);
}

int func_922()
{
	if (((((((((((((((((((((func_920(8) || func_920(9)) || func_920(10)) || func_920(12)) || func_920(11)) || func_920(13)) || func_920(14)) || func_920(19)) || func_920(20)) || func_920(21)) || func_920(22)) || func_920(23)) || func_920(24)) || func_920(25)) || func_920(26)) || func_920(15)) || func_920(16)) || func_920(17)) || func_920(18)) || func_920(35)) || func_920(45)) || func_920(46))
	{
		return 1;
	}
	return 0;
}

void func_923()
{
	if (func_927())
	{
		func_926(0);
		func_926(1);
		func_926(2);
		func_926(3);
		func_926(4);
		func_926(5);
		if (func_925(32))
		{
			if (func_919(func_924(), 3))
			{
				func_918(func_924(), 3);
			}
			func_926(32);
		}
	}
}

int func_924()
{
	if (func_917())
	{
		Global_105220.f_28021[12 /*29*/].f_24[Global_14493] = 1;
	}
	return 12;
}

bool func_925(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_23[iVar0], iVar1);
}

void func_926(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_23[iVar0]), iVar1);
}

int func_927()
{
	if ((((func_925(1) || func_925(0)) || func_925(2)) || func_925(4)) || func_925(5))
	{
		return 1;
	}
	return 0;
}

void func_928()
{
	if (func_932())
	{
		func_931(0);
		func_931(1);
		func_931(2);
		func_931(3);
		func_931(4);
		func_931(5);
		func_931(6);
		func_931(7);
		if (func_930(8))
		{
			func_931(8);
		}
		if (func_930(15))
		{
			if (func_919(func_929(), 3))
			{
				func_918(func_929(), 3);
			}
			func_931(15);
		}
	}
}

int func_929()
{
	if (func_917())
	{
		Global_105220.f_28021[20 /*29*/].f_24[Global_14493] = 1;
	}
	return 20;
}

bool func_930(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_21[iVar0], iVar1);
}

void func_931(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_21[iVar0]), iVar1);
}

int func_932()
{
	if ((((((((func_930(0) || func_930(1)) || func_930(2)) || func_930(3)) || func_930(4)) || func_930(5)) || func_930(6)) || func_930(7)) || func_930(8))
	{
		return 1;
	}
	return 0;
}

void func_933()
{
	if (func_937())
	{
		func_936(0);
		func_936(1);
		func_936(2);
		func_936(3);
		func_936(4);
		func_936(5);
		func_936(6);
		func_936(7);
		func_936(8);
		func_936(9);
		func_936(10);
		func_936(11);
		func_936(12);
		if (func_935(13))
		{
			if (func_919(func_934(), 3))
			{
				func_918(func_934(), 3);
			}
			func_936(13);
		}
	}
}

int func_934()
{
	if (func_917())
	{
		Global_105220.f_28021[76 /*29*/].f_24[Global_14493] = 1;
	}
	return 76;
}

bool func_935(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2519572.f_4882.f_19[iVar0], iVar1);
}

void func_936(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_19[iVar0]), iVar1);
}

int func_937()
{
	if ((((((((((((func_935(0) || func_935(1)) || func_935(2)) || func_935(3)) || func_935(4)) || func_935(5)) || func_935(6)) || func_935(7)) || func_935(8)) || func_935(9)) || func_935(10)) || func_935(11)) || func_935(12))
	{
		return 1;
	}
	return 0;
}

void func_938()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2519572.f_4882.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_939(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2519572.f_4882.f_14[iVar0]), iVar1);
}

void func_940()
{
	struct<14> Var0;
	
	Global_1665352 = { Var0 };
	Global_1665352.f_14 = 0;
	Global_1665352.f_15 = 0;
}

void func_941()
{
	int iVar0;
	int iVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("relHeadHunterPlayer", &iLocal_112);
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574768[iVar1], iLocal_112);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_112, Global_1574768[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574768[iVar1], Global_1574813);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574813, Global_1574768[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, iLocal_112, -1533126372);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, -1533126372, iLocal_112);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_112, Global_1574816[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574816[5], iLocal_112);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_112, Global_1574801);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574801, iLocal_112);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_112, Global_1574813);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574813, iLocal_112);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, Global_1574813);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_112);
	func_943(1, &Global_1574813);
	func_942(&Global_1574813);
	func_942(&iLocal_112);
}

void func_942(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_943(int iParam0, var uParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -183807561);
}

int func_944()
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
		if (func_856())
		{
			return 0;
		}
		if (func_854(155))
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

int func_945(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_862();
			}
			else
			{
				return 0;
			}
		}
		if (!func_806())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_862();
					}
					else
					{
						return 0;
					}
				}
				if (func_856())
				{
					if (!bParam2)
					{
						func_862();
					}
					else
					{
						return 0;
					}
				}
				if (func_854(155))
				{
					if (!bParam2)
					{
						func_862();
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
					func_862();
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
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_862();
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
			func_862();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_946(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_862();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_947(int iParam0)
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

int func_948(int iParam0, bool bParam1, bool bParam2)
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

