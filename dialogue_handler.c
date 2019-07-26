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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	vector3 vLocal_44[24] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[64] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	vector3 vLocal_66[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	vector3 vLocal_73[24] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	vector3 vLocal_85[24] = "";
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_142[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_173[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_204[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_235 = 0;
	var uLocal_236 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		WAIT(0);
		if (IS_BIT_SET(Global_2424, 1))
		{
			if (!IS_BIT_SET(Global_2423, 20))
			{
				if (IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_14541)
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14496)
						{
							func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					CLEAR_BIT(&Global_2424, 1);
				}
			}
		}
		if (IS_BIT_SET(Global_14732, 0))
		{
			if (!func_107())
			{
				if (!IS_BIT_SET(Global_14732, 1))
				{
					SET_BIT(&Global_14732, 1);
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_106 = GET_NETWORK_TIME();
					}
					else
					{
						iLocal_102 = GET_GAME_TIMER();
					}
				}
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), uLocal_106);
				}
				else
				{
					iLocal_103 = GET_GAME_TIMER();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_105(&Global_15320, &Global_15936, &Global_15856, Global_15869, Global_16851, Global_16852, 0))
					{
						Global_14732 = 0;
					}
				}
				else
				{
					Global_14732 = 0;
				}
			}
		}
		if ((!IS_PLAYER_PLAYING(PLAYER_ID()) && !IS_BIT_SET(Global_4456448.f_17, 4)) && !func_104())
		{
			if (Global_15866 != 0)
			{
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_103();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_99();
		}
		switch (Global_15866)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15872)
				{
					if (Global_15862 == 0)
					{
						func_97();
					}
					else
					{
						func_96();
						func_97();
					}
				}
				else if (Global_15862 == 0)
				{
					func_86();
				}
				else
				{
					func_96();
					func_68();
				}
				break;
			
			case 2:
				func_62();
				break;
			
			case 3:
				func_58();
				break;
			
			case 4:
				if (Global_15872)
				{
					if (Global_15874)
					{
						func_57();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_15876 = 0;
	Global_14552 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15877 = 0;
	Global_15878 = 0;
	Global_15879 = 0;
	Global_15880 = 0;
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
	Global_15870 = 0;
	Global_15871 = 0;
	Global_15913 = 0;
	Global_15914 = 0;
	Global_15917 = 0;
	Global_15919 = 0;
	Global_15918 = 0;
	Global_15921 = 0;
	Global_15920 = 0;
	Global_16883 = 0;
	Global_15923 = 0;
	if (Global_14553.f_1 == 10)
	{
	}
	else if (IS_BIT_SET(Global_2423, 11))
	{
		func_3();
	}
	Global_15872 = 0;
	Global_15873 = 0;
	Global_15874 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16856 = 0;
	Global_16863 = 0;
	Global_16862 = 0;
	Global_16859 = 0;
	Global_16858 = 0;
	Global_16860 = 0;
	Global_16861 = 0;
	Global_15862 = 0;
	Global_15863 = 0;
	Global_15864 = 0;
	Global_15865 = 0;
	Global_16124 = 0;
	Global_16887 = 5000;
	Global_14536 = 0;
	CLEAR_BIT(&Global_2423, 20);
	CLEAR_BIT(&Global_2423, 24);
	CLEAR_BIT(&Global_2424, 23);
	CLEAR_BIT(&Global_2425, 0);
	CLEAR_BIT(&Global_2424, 9);
	CLEAR_BIT(&Global_2424, 31);
	CLEAR_BIT(&Global_2424, 17);
	CLEAR_BIT(&Global_2425, 5);
	Global_16850 = 0;
	Global_16849 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_15866 = 4;
	}
	else
	{
		Global_15866 = 0;
		Global_16877 = 0;
		Global_16888 = GET_GAME_TIMER();
	}
}

void func_3()
{
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (IS_BIT_SET(Global_2423, 11))
			{
				if (!Global_14496)
				{
					TASK_USE_MOBILE_PHONE(PLAYER_PED_ID(), 0, 1);
				}
				if (Global_71590)
				{
					SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 244, 1);
					SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 243, 1);
					SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 242, 1);
				}
				CLEAR_BIT(&Global_2423, 11);
			}
		}
	}
}

void func_4()
{
	Global_15876 = 0;
	Global_14552 = 0;
	func_2();
}

void func_5()
{
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (IS_PED_SWIMMING_UNDER_WATER(PLAYER_PED_ID()))
		{
			if (Global_15922 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_16858 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16877 == 1)
			{
				PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16877 == 0)
		{
			RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
		}
	}
	else if (Global_16860 > 0)
	{
		iLocal_37 = GET_GAME_TIMER();
		if ((iLocal_37 - iLocal_36) > Global_16860)
		{
			START_PRELOADED_CONVERSATION();
			Global_16858 = 0;
		}
	}
	if (Global_16877 == 0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_15866 = 6;
		}
	}
}

void func_6()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!IS_BIT_SET(Global_2423, 11))
		{
			if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
			{
				if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					if (Global_71590 == 0)
					{
						func_55();
					}
				}
			}
		}
		else if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER_PED_ID()))
			{
				if (Global_71590 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_71590 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16877 == 1)
		{
			if (Global_16878 == 1)
			{
				PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
				Global_16878 = 0;
			}
		}
	}
	else if (Global_16877 == 0)
	{
		if (Global_16878 == 1)
		{
			RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
			Global_16878 = 0;
		}
	}
	if (Global_15919 == 0)
	{
		if (!Global_15879)
		{
			if (!IS_BIT_SET(Global_2424, 31))
			{
				if (!IS_BIT_SET(Global_2424, 27))
				{
					if (func_49())
					{
						if (Global_14553.f_1 > 6)
						{
							SET_BIT(&Global_2424, 24);
							SET_BIT(&Global_2424, 27);
							CLEAR_BIT(&Global_2424, 26);
							CLEAR_BIT(&Global_2424, 25);
						}
					}
				}
			}
		}
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_15879 == 0)
	{
		if (Global_15919 == 1)
		{
			SET_BIT(&Global_2424, 23);
		}
		else
		{
			CLEAR_BIT(&Global_2424, 23);
		}
		if (Global_15923)
		{
			if (Global_15919 == 0)
			{
				Global_15485 = { Global_15924 };
				Global_15942 = { Global_15930 };
				Global_15876 = 0;
				Global_16883 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15921)
		{
			while (Global_15919 == 1)
			{
				WAIT(0);
				if (Global_14553.f_1 < 6)
				{
					Global_15919 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15921)
						{
							iLocal_30 = 1;
							Global_16881 = 1;
							func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(4), -1f, -1f, &Global_16008, &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
							func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14541)
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								SET_BIT(&Global_2423, 17);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								SET_BIT(&Global_2423, 17);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16879 = 1;
							if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
							{
								func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(4), -1f, -1f, &Global_16008, "CELL_300", &(Global_117[Global_1738 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(4), -1f, -1f, &Global_16008, &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
								func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14541)
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							CLEAR_BIT(&Global_2423, 17);
						}
					}
					if (func_45(2, Global_14522, 0))
					{
						func_43();
						Global_14479 = 0.19f;
						Global_15919 = 0;
						func_41();
						if (Global_15921)
						{
							Global_15485 = { Global_16002 };
							Global_16883 = 5;
						}
						else if (Global_15864 > 0)
						{
							Global_16124 = 1;
							Global_15866 = 0;
							Global_16887 = 0;
							if (IS_BIT_SET(Global_2424, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16850 + 1)
								{
									uLocal_111[iVar0] = func_40(&(Global_16125[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_40(&(Global_16487[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16850, &Global_15155, Global_1738, &Global_15942, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15864 == 2)
							{
								func_22(&Global_15155, Global_1738, &Global_15942, &(Global_16020[0 /*6*/]), &(Global_16072[0 /*6*/]), &(Global_16020[1 /*6*/]), &(Global_16072[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16883 = 1;
							Global_16879 = 0;
							Global_16881 = 0;
							Global_15876 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15485 = { Global_15960 };
							Global_16883 = 1;
						}
						Global_16879 = 0;
						Global_16881 = 0;
						Global_15876 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14523, 0) || IS_BIT_SET(Global_2423, 24))
					{
						func_43();
						Global_14479 = 0.19f;
						Global_15919 = 0;
						func_41();
						if (Global_15921)
						{
							Global_15485 = { Global_15996 };
							Global_16883 = 4;
						}
						else if (Global_15864 > 0)
						{
							Global_16124 = 1;
							Global_15866 = 0;
							Global_16887 = 0;
							if (IS_BIT_SET(Global_2424, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16849 + 1)
								{
									uLocal_173[iVar1] = func_40(&(Global_16306[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_40(&(Global_16668[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16849, &Global_15155, Global_1738, &Global_15942, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15864 == 2)
							{
								func_22(&Global_15155, Global_1738, &Global_15942, &(Global_16033[0 /*6*/]), &(Global_16085[0 /*6*/]), &(Global_16033[1 /*6*/]), &(Global_16085[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16883 = 2;
							Global_16879 = 0;
							Global_16881 = 0;
							Global_15876 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15485 = { Global_15966 };
							Global_16883 = 2;
						}
						Global_16879 = 0;
						Global_16881 = 0;
						Global_15876 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14525, 0))
					{
						if (Global_15921)
						{
							Global_14479 = 0.19f;
							Global_15919 = 0;
							func_41();
							func_43();
							Global_15485 = { Global_15990 };
							Global_16883 = 3;
							Global_16879 = 0;
							Global_16881 = 0;
							Global_15876 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_15919)
			{
				WAIT(0);
				if (Global_14553.f_1 < 6)
				{
					Global_15919 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(18), TO_FLOAT(0), TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(18), TO_FLOAT(1), TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(18), TO_FLOAT(2), TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14534, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14534, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14541)
						{
							func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						CLEAR_BIT(&Global_2423, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14522, 0))
					{
						func_43();
						Global_15919 = 0;
						func_41();
						BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
						uLocal_236 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
						while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_236))
						{
							WAIT(0);
						}
						iVar2 = GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_15485 = { Global_15996 };
								Global_16883 = 4;
								break;
							
							case 1:
								Global_15485 = { Global_15990 };
								Global_16883 = 3;
								break;
							
							case 2:
								Global_15485 = { Global_16002 };
								Global_16883 = 5;
								break;
						}
						Global_16879 = 0;
						Global_16881 = 0;
						Global_15876 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14523, 0))
					{
						Global_15919 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15867 == 0)
		{
			STOP_SCRIPTED_CONVERSATION(0);
			SETTIMERA(0);
			while (TIMERA() < 900 && Global_14553.f_1 == 9)
			{
				WAIT(0);
			}
			Global_15866 = 6;
		}
		PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14542, 1);
		func_13();
		Global_14553.f_1 = Global_14555;
		func_8();
	}
	else if (Global_14725 == 0)
	{
		if (func_45(2, Global_14521, 0))
		{
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
				{
					if (IS_BIT_SET(Global_2423, 20))
					{
					}
					else
					{
						Global_14531 = 1;
						func_41();
						STOP_SCRIPTED_CONVERSATION(0);
						Global_15915 = 1;
						Global_15916 = 1;
						Global_15866 = 6;
						func_13();
						Global_14553.f_1 = Global_14555;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	vector3 vVar0;
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		WAIT(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_3028);
			if (Global_3028 == 1)
			{
				func_46(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_46(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				SET_BIT(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_10();
				func_46(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_46(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15879)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&vVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&vVar0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &vVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &vVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(int iParam0)
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
		if (func_12(14))
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
								func_9(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(uVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return;
	}
	switch (Global_14555)
	{
		case 5:
			Global_14555 = 6;
			break;
		
		case 6:
			if (IS_BIT_SET(Global_2424, 5))
			{
				Global_14555 = 6;
				CLEAR_BIT(&Global_2424, 5);
			}
			else
			{
				Global_14555 = 3;
			}
			break;
		
		case 7:
			Global_14555 = 3;
			break;
		
		case 3:
			if (IS_BIT_SET(Global_2424, 5))
			{
				Global_14555 = 6;
				CLEAR_BIT(&Global_2424, 5);
			}
			else
			{
				Global_14555 = 3;
			}
			break;
		
		default:
			Global_14555 = 3;
			break;
	}
}

void func_14()
{
	if (iLocal_235)
	{
		if (TIMERA() > 50)
		{
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0)
	{
		if (func_45(2, Global_14529, 0) || IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_18();
			iLocal_235 = 1;
			SETTIMERA(0);
		}
		if (func_45(2, Global_14530, 0) || IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_15();
			iLocal_235 = 1;
			SETTIMERA(0);
		}
	}
}

void func_15()
{
	func_46(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_16();
}

void func_16()
{
	if (func_17())
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

int func_17()
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

void func_18()
{
	func_46(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_19();
}

void func_19()
{
	if (func_17())
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

void func_20(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_9(sParam2);
	if (!IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_21()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (IS_BIT_SET(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam2 > Global_15868)
			{
				if (bParam3 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
				}
				else
				{
					func_103();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_33();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16862 = Global_16863;
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15485.f_370 = Global_16855;
		Global_15862 = Global_15863;
		Global_15864 = Global_15865;
		if (Global_16124 == 0)
		{
			Global_16020[0 /*6*/] = { Global_16046[0 /*6*/] };
			Global_16020[1 /*6*/] = { Global_16046[1 /*6*/] };
			Global_16072[0 /*6*/] = { Global_16098[0 /*6*/] };
			Global_16072[1 /*6*/] = { Global_16098[1 /*6*/] };
			Global_16033[0 /*6*/] = { Global_16059[0 /*6*/] };
			Global_16033[1 /*6*/] = { Global_16059[1 /*6*/] };
			Global_16085[0 /*6*/] = { Global_16111[0 /*6*/] };
			Global_16085[1 /*6*/] = { Global_16111[1 /*6*/] };
		}
		if (Global_15872)
		{
			CLEAR_BIT(&Global_2423, 20);
			CLEAR_BIT(&Global_2424, 17);
			CLEAR_BIT(&Global_2425, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_26())
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
					if (Global_16124 == 0)
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
			}
			if (func_25())
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
			}
			func_24();
			Global_15876 = bParam3;
		}
		Global_15868 = iParam2;
		if (Global_15862 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15862)
			{
				StringCopy(&(Global_15485.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15485.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14732 = 0;
		func_48();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15868 || iParam2 == Global_15868)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_103();
	}
	return 0;
}

void func_24()
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

int func_25()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
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

void func_27()
{
	if (func_12(14))
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
		Global_14553 = func_28();
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

var func_28()
{
	func_29();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_29()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_32(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_31(PLAYER_PED_ID());
			if (func_30(iVar0) && (!func_12(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_30(Global_106565.f_2357.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()
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

bool func_34(int iParam0, int iParam1)
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

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_36(var uParam0)
{
	Global_15863 = uParam0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_15880 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)
{
	return uParam0;
}

void func_41()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		_MOVE_FINGER(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				if (!Global_14496)
				{
					if (!IS_BIT_SET(Global_2423, 11))
					{
						func_55();
					}
				}
			}
		}
	}
}

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
		{
			return 0;
		}
		if (IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			if (!_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (IS_ENTITY_IN_WATER(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((IS_PED_SWIMMING(PLAYER_PED_ID()) || IS_PED_SWIMMING_UNDER_WATER(PLAYER_PED_ID())) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_HANGING_ON_TO_VEHICLE(PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				uVar3 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
				if ((((((((IS_THIS_MODEL_A_BIKE(GET_ENTITY_MODEL(uVar3)) || IS_THIS_MODEL_A_BICYCLE(GET_ENTITY_MODEL(uVar3))) || IS_THIS_MODEL_A_QUADBIKE(GET_ENTITY_MODEL(uVar3))) || GET_ENTITY_MODEL(uVar3) == joaat("seashark")) || GET_ENTITY_MODEL(uVar3) == joaat("seashark2")) || GET_ENTITY_MODEL(uVar3) == joaat("rhino")) || GET_ENTITY_MODEL(uVar3) == joaat("submersible")) || GET_ENTITY_MODEL(uVar3) == joaat("submersible2")) || GET_ENTITY_MODEL(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269586 || iVar2 == 1)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
		{
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0, var uParam1, int iParam2)
{
	if (IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1)))
	{
		if (IS_PC_VERSION())
		{
			if (UPDATE_ONSCREEN_KEYBOARD() == 0 || (_NETWORK_IS_TEXT_CHAT_ACTIVE() && _IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (IS_PAUSE_MENU_ACTIVE() || IS_WARNING_MESSAGE_ACTIVE())
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

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_47()
{
	if (func_44())
	{
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				if (!Global_14496)
				{
					if (IS_BIT_SET(Global_2423, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()
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

int func_49()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_108 = GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), uLocal_107);
	}
	else
	{
		iLocal_105 = GET_GAME_TIMER();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (func_53())
	{
		return;
	}
	if (Global_14725)
	{
		func_51(0, 0);
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
	if (!func_25())
	{
		Global_14553.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_52(int iParam0)
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

bool func_53()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_54()
{
	if (func_45(2, Global_14530, 0))
	{
		if (Global_16877 == 0)
		{
			if (Global_15872)
			{
				if (IS_BIT_SET(Global_2424, 17))
				{
				}
				else
				{
					SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (func_56() && IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = GET_PED_PROP_INDEX(PLAYER_PED_ID(), 0);
			if (Global_71590)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || IS_PED_WEARING_HELMET(PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (IS_PED_WEARING_HELMET(PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14496)
			{
				if (Global_1738 != 128)
				{
					if (iVar0 == 0)
					{
						if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
						{
							if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_71590)
								{
									SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 244, 0);
									SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 243, 0);
									SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 242, 0);
								}
								SET_BIT(&Global_2423, 11);
								TASK_USE_MOBILE_PHONE(PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_56()
{
	var uVar0;
	int iVar1;
	
	uVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_57()
{
	if (Global_71590 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16879 = 1;
		if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
		{
			func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(4), -1f, -1f, &Global_16008, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(4), -1f, -1f, &Global_16008, &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
			func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14479 = 0.2f;
		if (Global_14541)
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(&Global_2423, 17);
	}
	if (Global_15919 == 1)
	{
		if (Global_14553.f_1 < 6)
		{
			Global_15919 = 0;
		}
		else
		{
			if (Global_14493 == 0)
			{
				if (func_45(2, Global_14522, 0))
				{
					Global_14479 = 0.19f;
					Global_15919 = 0;
					func_41();
					Global_16884 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14523, 0))
			{
				Global_14479 = 0.19f;
				Global_15919 = 0;
				func_41();
				Global_16884 = 2;
			}
		}
	}
	else if (Global_16884 == 2)
	{
		if (Global_15867 == 0)
		{
			STOP_SCRIPTED_CONVERSATION(0);
			Global_15866 = 6;
		}
		func_13();
		Global_14553.f_1 = Global_14555;
		func_8();
	}
	else if (!IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_32 = 0;
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14542, 1);
		func_13();
		Global_14553.f_1 = Global_14555;
		func_8();
	}
}

void func_58()
{
	if (Global_14733 == 1)
	{
		if (IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (_0xE73364DB90778FFA())
			{
				Global_14733 = 0;
			}
		}
		if (!IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			Global_14733 = 0;
			STOP_SCRIPTED_CONVERSATION(0);
			Global_15866 = 6;
		}
	}
	if (TIMERB() > iLocal_35)
	{
		if (Global_14733 == 1)
		{
			Global_14733 = 0;
		}
	}
	if (TIMERA() < Global_16887 || Global_14733 == 1)
	{
		if (func_45(2, Global_14521, 0))
		{
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
				{
					if (IS_BIT_SET(Global_2423, 20))
					{
					}
					else
					{
						Global_14531 = 1;
						func_41();
						STOP_SCRIPTED_CONVERSATION(0);
						Global_15915 = 1;
						Global_15866 = 6;
						CLEAR_BIT(&Global_2423, 27);
						if (!Global_15877)
						{
							SET_BIT(&Global_2424, 5);
						}
						func_13();
						Global_14553.f_1 = Global_14555;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		CLEAR_BIT(&Global_2423, 27);
		Global_15866 = 4;
		Global_15923 = 0;
		func_61();
		func_60();
		if (!Global_15879)
		{
			if (Global_16883 == 0)
			{
				if (!IS_BIT_SET(Global_2425, 5))
				{
					START_PRELOADED_CONVERSATION();
				}
				CLEAR_BIT(&Global_2425, 5);
			}
			else
			{
				START_SCRIPT_PHONE_CONVERSATION(Global_15485.f_368, Global_15485.f_369);
			}
		}
		func_59();
	}
}

void func_59()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_107 = GET_NETWORK_TIME();
	}
	else
	{
		iLocal_104 = GET_GAME_TIMER();
	}
}

void func_60()
{
	if (Global_15879)
	{
		if (Global_71590)
		{
			if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
			{
				if (!IS_PC_VERSION())
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					SET_BIT(&(Global_2528542.f_1723), 15);
				}
			}
		}
	}
}

void func_61()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (!Global_15874)
		{
			func_108(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15879)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
				END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				END_SCALEFORM_MOVIE_METHOD();
			}
			else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
			{
				func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_108(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_219", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_62()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_109 = GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), uLocal_95);
		iLocal_110 = GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), uLocal_98);
	}
	else
	{
		iLocal_94 = GET_GAME_TIMER();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = GET_GAME_TIMER();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_15913 == 1)
	{
		if (func_44())
		{
			if (iLocal_109 > 4000)
			{
				if (IS_BIT_SET(Global_2423, 14))
				{
					if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
					{
						func_41();
						Global_14552 = 2;
						func_61();
						func_60();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (IS_BIT_SET(Global_2423, 14))
			{
				if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
				{
					func_41();
					Global_14552 = 2;
					func_61();
					func_60();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_14552 = 3;
	}
	if (Global_14552 == 2)
	{
		iLocal_30 = 0;
		Global_15866 = 4;
		func_55();
		Global_15923 = 0;
		func_61();
		func_60();
		if (!Global_15879)
		{
			if (Global_16883 == 0)
			{
				START_PRELOADED_CONVERSATION();
			}
			else
			{
				START_SCRIPT_PHONE_CONVERSATION(Global_15485.f_368, Global_15485.f_369);
			}
		}
		func_59();
		Global_16882 = 0;
	}
	if (Global_15913 == 0)
	{
		if (Global_14552 == 3)
		{
			if (Global_15879)
			{
				func_64();
				func_50(0);
			}
			else
			{
				func_63();
				Global_16882 = 1;
				STOP_SCRIPTED_CONVERSATION(0);
				Global_15866 = 6;
				func_13();
				Global_14553.f_1 = Global_14555;
				func_8();
			}
		}
	}
	else if (Global_14552 == 3)
	{
	}
}

void func_63()
{
}

void func_64()
{
	Global_2534821.f_2 = 1;
	Global_2534821.f_38 = 1;
	if (NETWORK_IS_SIGNED_ONLINE())
	{
		if (_0x855BC38818F6F684())
		{
			while (_0xEF0912DDF7C4CB4B())
			{
				WAIT(0);
			}
			NETWORK_SESSION_VOICE_LEAVE();
			Global_2534821 = 0;
			Global_2534821.f_2 = 0;
		}
		else if (func_67(Global_2534821.f_20))
		{
			if (NETWORK_IS_FRIEND(&(Global_2534821.f_20)))
			{
				if (!_NETWORK_IS_FRIEND_ONLINE_2(&(Global_2534821.f_20)))
				{
					func_65();
				}
			}
		}
		else
		{
			func_65();
		}
	}
	else
	{
		func_65();
	}
	if (Global_2534821.f_37)
	{
		func_50(0);
	}
	Global_2534821.f_37 = 0;
	Global_2534821.f_3 = 0;
}

void func_65()
{
	Global_2534821.f_1 = 0;
	Global_2534821 = 0;
	Global_2534821.f_2 = 0;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	StringCopy(&(Global_2534821.f_4), "", 64);
	StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
	Global_2534821.f_38 = 0;
	Global_2534821.f_56 = 0;
	Global_2534821.f_57 = 0;
	Global_2534821.f_58 = -2;
	Global_2534821.f_3 = 0;
	func_66(&(Global_2534821.f_20));
}

void func_66(var uParam0)
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

bool func_67(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_15862)
	{
		func_85();
		func_84();
		func_83();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_15485.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_14734[iVar2 /*6*/] = { Global_15485.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_14734[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14734[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14734[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (DOES_TEXT_LABEL_EXIST(&cLocal_38))
			{
				StringCopy(&cLocal_50, _GET_LABEL_TEXT(&cLocal_38), 64);
				iVar3 = func_82(iVar13);
				iVar4 = func_81(iVar13);
				uVar5 = func_79(iVar13);
				uLocal_82 = func_78();
				uLocal_83 = func_77();
				uLocal_84 = func_76();
				uVar6 = func_75(iVar13);
				uVar7 = func_74(iVar13);
				uVar8 = func_73(iVar13);
				uVar12 = func_72(iVar13);
				uVar9 = func_71(iVar13);
				uVar10 = func_70(iVar13);
				uVar11 = func_69(iVar13);
				if (DOES_TEXT_LABEL_EXIST(&(Global_14734[iVar2 /*6*/])))
				{
					if (ARE_STRINGS_EQUAL(&(Global_14734[iVar2 /*6*/]), &(Global_15485.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_14734[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (DOES_TEXT_LABEL_EXIST(&cLocal_44))
			{
				StringCopy(&cLocal_50, _GET_LABEL_TEXT(&cLocal_44), 64);
				iVar3 = func_82(0);
				iVar4 = func_81(0);
				uVar5 = func_79(0);
				uLocal_82 = func_78();
				uLocal_83 = func_77();
				uLocal_84 = func_76();
				uVar6 = func_75(0);
				uVar7 = func_74(0);
				uVar8 = func_73(0);
				uVar12 = func_72(0);
				uVar9 = func_71(0);
				uVar10 = func_70(0);
				uVar11 = func_69(0);
				ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_15485.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14734[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14734[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15872 == 0)
	{
		_0x0B568201DD99F0EB(uLocal_83);
		_0x61631F5DF50D1C34(uLocal_84);
		START_SCRIPT_CONVERSATION(Global_15485.f_368, Global_15485.f_369, Global_15485.f_370, uLocal_82);
		Global_15866 = 4;
	}
}

int func_69(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 1;
	}
	if (ARE_STRINGS_EQUAL(uVar0, "1"))
	{
		return 1;
	}
	if (ARE_STRINGS_EQUAL(uVar0, "2"))
	{
		return 2;
	}
	if (ARE_STRINGS_EQUAL(uVar0, "3"))
	{
		return 3;
	}
	if (ARE_STRINGS_EQUAL(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 2, 3);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 1, 2);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78()
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 0, 1);
	if (ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_80(uVar0);
}

int func_80(var uParam0)
{
	if (ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 0;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "1"))
	{
		return 1;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "2"))
	{
		return 2;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "3"))
	{
		return 3;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "4"))
	{
		return 4;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "5"))
	{
		return 5;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "6"))
	{
		return 6;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "7"))
	{
		return 7;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "8"))
	{
		return 8;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "9"))
	{
		return 9;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "A"))
	{
		return 10;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "B"))
	{
		return 11;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "C"))
	{
		return 12;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "D"))
	{
		return 13;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "E"))
	{
		return 14;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "F"))
	{
		return 15;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "G"))
	{
		return 16;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "H"))
	{
		return 17;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "I"))
	{
		return 18;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "J"))
	{
		return 19;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "K"))
	{
		return 20;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "L"))
	{
		return 21;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "M"))
	{
		return 22;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "N"))
	{
		return 23;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "O"))
	{
		return 24;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "P"))
	{
		return 25;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "Q"))
	{
		return 26;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "R"))
	{
		return 27;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "S"))
	{
		return 28;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "T"))
	{
		return 29;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "U"))
	{
		return 30;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "V"))
	{
		return 31;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "W"))
	{
		return 32;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "X"))
	{
		return 33;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "Y"))
	{
		return 34;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "Z"))
	{
		return 35;
	}
	if (ARE_STRINGS_EQUAL(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_66), (iParam0 * 3 + 1), iParam0 * 3 + 2);
	return func_80(uVar0);
}

int func_82(int iParam0)
{
	var uVar0;
	
	uVar0 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_80(uVar0);
}

void func_83()
{
	cLocal_85 = { Global_15485.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_85))
	{
		uLocal_91 = _GET_LABEL_TEXT(&cLocal_85);
		if (IS_STRING_NULL(uLocal_91))
		{
		}
	}
}

void func_84()
{
	cLocal_73 = { Global_15485.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_73))
	{
		uLocal_79 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 0, 1);
		if (IS_STRING_NULL(uLocal_79))
		{
		}
		uLocal_80 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 1, 2);
		if (IS_STRING_NULL(uLocal_80))
		{
		}
		uLocal_81 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 2, 3);
		if (IS_STRING_NULL(uLocal_81))
		{
		}
	}
}

void func_85()
{
	cLocal_66 = { Global_15485.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_66))
	{
		uLocal_72 = _GET_LABEL_TEXT(&cLocal_66);
		if (IS_STRING_NULL(uLocal_72))
		{
		}
	}
}

void func_86()
{
	func_87();
	_0x0B568201DD99F0EB(uLocal_83);
	_0x61631F5DF50D1C34(uLocal_84);
	if (Global_16858)
	{
		PRELOAD_SCRIPT_CONVERSATION(Global_15485.f_368, Global_15485.f_369, Global_15485.f_370, uLocal_82);
		iLocal_36 = GET_GAME_TIMER();
	}
	else
	{
		START_SCRIPT_CONVERSATION(Global_15485.f_368, Global_15485.f_369, Global_15485.f_370, uLocal_82);
	}
	Global_15866 = 4;
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (DOES_TEXT_BLOCK_EXIST(&Global_15942))
	{
		if (ARE_STRINGS_EQUAL(&Global_15942, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (IS_ORBIS_VERSION() || IS_DURANGO_VERSION())
		{
			if (Global_1573347 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_71590 || func_95())
		{
			if (Global_1573347 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_93())
		{
			iVar14 = 1;
		}
		if (func_92(GET_HASH_KEY(&Global_15942)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15868 < 5 || Global_15868 == 10) || Global_15868 == 12) || Global_15868 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				REQUEST_ADDITIONAL_TEXT(&Global_15942, 7);
				while (!HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					WAIT(0);
				}
			}
			else
			{
				_REQUEST_ADDITIONAL_TEXT_2(&Global_15942, 15);
				while (!HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			REQUEST_ADDITIONAL_TEXT(&Global_15942, 6);
			while (!HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				WAIT(0);
			}
		}
		else
		{
			_REQUEST_ADDITIONAL_TEXT_2(&Global_15942, 14);
			while (!HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	CREATE_NEW_SCRIPTED_CONVERSATION();
	func_91();
	func_90();
	func_89();
	func_88();
	Global_16876 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_15485 };
		StringConCat(&cLocal_44, "A", 24);
		Global_14734[iVar2 /*6*/] = { Global_15485 };
		StringConCat(&(Global_14734[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14734[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14734[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (DOES_TEXT_LABEL_EXIST(&cLocal_38))
		{
			StringCopy(&cLocal_50, _GET_LABEL_TEXT(&cLocal_38), 64);
			iVar3 = func_82(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4269496 == 0)
				{
				}
			}
			iVar4 = func_81(iVar2);
			uVar5 = func_79(iVar2);
			uLocal_82 = func_78();
			uLocal_83 = func_77();
			uLocal_84 = func_76();
			uVar6 = func_75(iVar2);
			uVar7 = func_74(iVar2);
			uVar8 = func_73(iVar2);
			uVar12 = func_72(iVar2);
			uVar9 = func_71(iVar2);
			uVar10 = func_70(iVar2);
			uVar11 = func_69(iVar2);
			if (DOES_TEXT_LABEL_EXIST(&(Global_14734[iVar2 /*6*/])))
			{
				if (Global_16856 == 0 && Global_16862 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_14734[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (ARE_STRINGS_EQUAL(&(Global_14734[iVar2 /*6*/]), &Global_16864))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &(Global_14734[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16876 = iVar2;
					if (Global_16862 == 1)
					{
						Global_16862 = 0;
					}
				}
			}
			else if (Global_16862 == 0 && Global_16856 == 0)
			{
				ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (DOES_TEXT_LABEL_EXIST(&cLocal_44))
			{
				StringCopy(&cLocal_50, _GET_LABEL_TEXT(&cLocal_44), 64);
				iVar3 = func_82(iVar2);
				iVar4 = func_81(iVar2);
				uVar5 = func_79(iVar2);
				uLocal_82 = func_78();
				uLocal_83 = func_77();
				uLocal_84 = func_76();
				uVar6 = func_75(iVar2);
				uVar7 = func_74(iVar2);
				uVar8 = func_73(iVar2);
				uVar12 = func_72(iVar2);
				uVar9 = func_71(iVar2);
				uVar10 = func_70(iVar2);
				uVar11 = func_69(iVar2);
				ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_50, &Global_15485, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15155[iVar0 /*10*/].f_7 == 1)
		{
			if (DOES_ENTITY_EXIST(Global_15155[iVar0 /*10*/]) || Global_15155[iVar0 /*10*/] == 0)
			{
				ADD_PED_TO_CONVERSATION(iVar0, Global_15155[iVar0 /*10*/], &(Global_15155[iVar0 /*10*/].f_1));
			}
			if (Global_15155.f_161 == iVar0)
			{
				if ((Global_15155.f_162 != 0f && Global_15155.f_162.f_1 != 0f) && Global_15155.f_162.f_2 != 0f)
				{
					WAIT(0);
					_0x33E3C6C6F2F0B506(Global_15155.f_161, Global_15155.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4269496 == 1)
	{
		Global_4269496 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4269315[iVar0 /*9*/].f_7 == 1)
			{
				if (DOES_ENTITY_EXIST(Global_4269315[iVar0 /*9*/]) || Global_4269315[iVar0 /*9*/] == 0)
				{
					ADD_PED_TO_CONVERSATION(Global_4269315[iVar0 /*9*/].f_8, Global_4269315[iVar0 /*9*/], &(Global_4269315[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_89()
{
	cLocal_85 = { Global_15485 };
	StringConCat(&cLocal_85, "LF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_85))
	{
		uLocal_91 = _GET_LABEL_TEXT(&cLocal_85);
		if (IS_STRING_NULL(uLocal_91))
		{
		}
	}
}

void func_90()
{
	cLocal_73 = { Global_15485 };
	StringConCat(&cLocal_73, "IF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_73))
	{
		uLocal_79 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 0, 1);
		if (IS_STRING_NULL(uLocal_79))
		{
		}
		uLocal_80 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 1, 2);
		if (IS_STRING_NULL(uLocal_80))
		{
		}
		uLocal_81 = _GET_TEXT_SUBSTRING(_GET_LABEL_TEXT(&cLocal_73), 2, 3);
		if (IS_STRING_NULL(uLocal_81))
		{
		}
	}
}

void func_91()
{
	cLocal_66 = { Global_15485 };
	StringConCat(&cLocal_66, "SL", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_66))
	{
		uLocal_72 = _GET_LABEL_TEXT(&cLocal_66);
		if (IS_STRING_NULL(uLocal_72))
		{
		}
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case -360992886:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
		case -556967217:
		case 510894735:
		case -96774198:
		case 1931750438:
		case 962651001:
		case -805815803:
		case -1396474296:
		case 188331744:
		case -667145730:
		case 1027410289:
		case -190066836:
		case 5422313:
		case -591754196:
		case 1414208944:
		case -657203993:
		case 365230037:
		case -1508790734:
			return 1;
		
		default:
	}
	return 0;
}

int func_93()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_94(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_94(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

var func_95()
{
	return Global_1312844;
}

void func_96()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (IS_ORBIS_VERSION() || IS_DURANGO_VERSION())
	{
		if (Global_1573347 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_71590)
	{
		if (Global_1573347 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_93())
	{
		iVar1 = 1;
	}
	if (DOES_TEXT_BLOCK_EXIST(&Global_15942))
	{
		if (ARE_STRINGS_EQUAL(&Global_15942, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_92(GET_HASH_KEY(&Global_15942)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15868 < 5 || Global_15868 == 10) || Global_15868 == 12) || Global_15868 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			REQUEST_ADDITIONAL_TEXT(&Global_15942, 7);
			while (!HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				WAIT(0);
			}
		}
		else
		{
			_REQUEST_ADDITIONAL_TEXT_2(&Global_15942, 15);
			while (!HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		REQUEST_ADDITIONAL_TEXT(&Global_15942, 6);
		while (!HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			WAIT(0);
		}
	}
	else
	{
		_REQUEST_ADDITIONAL_TEXT_2(&Global_15942, 14);
		while (!HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			WAIT(0);
		}
	}
	CREATE_NEW_SCRIPTED_CONVERSATION();
	func_88();
}

void func_97()
{
	while (Global_14536 == 1 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		WAIT(0);
	}
	Global_14536 = 0;
	if (IS_BIT_SET(Global_2423, 20))
	{
		SET_BIT(&Global_2424, 1);
	}
	else
	{
		CLEAR_BIT(&Global_2424, 1);
	}
	Global_14537 = 0;
	if (Global_15862 == 0)
	{
		if (!Global_15879)
		{
			func_87();
		}
	}
	else
	{
		func_68();
	}
	Global_14733 = 0;
	if (Global_15876)
	{
		if (Global_16883 == 0)
		{
			if (Global_15879 == 0)
			{
				iLocal_34 = 5000;
				PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_15485.f_368, Global_15485.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_14733 = 1;
		SETTIMERB(0);
		while ((Global_14733 == 1 && Global_15866 == 1) && TIMERB() < iLocal_34)
		{
			WAIT(0);
			if (!IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				Global_14733 = 0;
				STOP_SCRIPTED_CONVERSATION(0);
				Global_15866 = 6;
			}
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (_0xE73364DB90778FFA())
				{
					Global_14733 = 0;
				}
			}
		}
		if (TIMERB() > iLocal_34)
		{
		}
		if (Global_15866 != 1)
		{
		}
		if (Global_14733 == 0)
		{
		}
	}
	Global_14733 = 0;
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 0) || Global_15866 != 1) || Global_14519 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
	else
	{
		if (Global_15874)
		{
			Global_16884 = 0;
			iLocal_32 = 0;
		}
		if (Global_15876 == 0)
		{
			if (Global_15917 == 0)
			{
				Global_14555 = Global_14553.f_1;
				Global_15917 = 1;
			}
			iLocal_30 = 0;
			if (Global_16883 == 0)
			{
				PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_15485.f_368, Global_15485.f_369);
				WAIT(0);
				Global_15866 = 3;
				Global_14733 = 1;
				SETTIMERB(0);
				SET_BIT(&Global_2423, 27);
				SETTIMERA(0);
			}
			else
			{
				Global_14733 = 0;
				Global_15866 = 4;
			}
			Global_14552 = 0;
			if (Global_15877 == 1)
			{
				if (Global_14553.f_1 == 10)
				{
				}
				if (!Global_14553.f_1 == 9)
				{
					if (Global_14553.f_1 > 4)
					{
						if (Global_14536 == 0)
						{
							Global_14553.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14553.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14553.f_1 == 4)
				{
					WAIT(0);
					if (Global_14733 == 1)
					{
						if (IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (_0xE73364DB90778FFA())
							{
								Global_14733 = 0;
							}
						}
					}
				}
				if (Global_14553.f_1 == 6)
				{
				}
				if (Global_14553.f_1 == 10)
				{
				}
				if (Global_14553.f_1 == 3)
				{
					STOP_SCRIPTED_CONVERSATION(0);
					Global_15866 = 6;
					Global_14537 = 1;
					return;
				}
				Global_14553.f_1 = 9;
				func_8();
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_101 = GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = GET_GAME_TIMER();
			}
			while (Global_14553.f_1 != 9 && Global_14536 == 0)
			{
				WAIT(0);
				if (Global_14733 == 1)
				{
					if (IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (_0xE73364DB90778FFA())
						{
							Global_14733 = 0;
						}
					}
				}
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), uLocal_101);
				}
				else
				{
					iLocal_100 = GET_GAME_TIMER();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_16882 = 1;
						Global_14536 = 1;
					}
				}
			}
			if (!IS_BIT_SET(Global_2423, 11))
			{
				if (func_44() == 0)
				{
					func_55();
				}
			}
			if (Global_14536 == 0)
			{
				if (!Global_16883 == 0)
				{
					Global_15923 = 0;
					func_61();
					func_60();
					if (!Global_15879)
					{
						if (Global_16883 == 0)
						{
							START_PRELOADED_CONVERSATION();
						}
						else
						{
							START_SCRIPT_PHONE_CONVERSATION(Global_15485.f_368, Global_15485.f_369);
						}
					}
					func_59();
				}
			}
			else
			{
				func_98();
				Global_14537 = 1;
			}
		}
		else
		{
			Global_14552 = 1;
			if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
			{
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					if (Global_14553.f_1 == 3)
					{
					}
				}
				else
				{
					CLEAR_BIT(&Global_2424, 21);
				}
			}
			if (Global_15917 == 0)
			{
				Global_14555 = Global_14553.f_1;
				Global_15917 = 1;
			}
			if (Global_14553.f_1 == 3)
			{
				Global_14553.f_1 = 4;
			}
			else
			{
				while (Global_14553.f_1 == 4)
				{
					WAIT(0);
				}
				if (Global_14553.f_1 == 6)
				{
				}
				Global_14553.f_1 = 9;
				func_8();
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_101 = GET_NETWORK_TIME();
			}
			else
			{
				iLocal_99 = GET_GAME_TIMER();
			}
			while (Global_14553.f_1 != 9 && Global_14536 == 0)
			{
				WAIT(0);
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_108 = GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), uLocal_101);
				}
				else
				{
					iLocal_100 = GET_GAME_TIMER();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_16882 = 1;
						Global_14536 = 1;
						CLEAR_BIT(&Global_2424, 21);
					}
				}
			}
			if (Global_14536 == 0)
			{
				Global_15866 = 2;
			}
			else
			{
				func_98();
				Global_14537 = 1;
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_95 = GET_NETWORK_TIME();
				uLocal_98 = GET_NETWORK_TIME();
			}
			else
			{
				iLocal_93 = GET_GAME_TIMER();
				iLocal_96 = GET_GAME_TIMER();
			}
		}
	}
}

void func_98()
{
	Global_14732 = 0;
	func_103();
}

void func_99()
{
	float fVar0;
	
	fVar0 = func_100(Global_14506[Global_14498 /*3*/], Global_14499[Global_14498 /*3*/], Global_14513, Global_14484, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16880 == 0)
		{
			DISPLAY_RADAR(1);
		}
		iLocal_32 = 0;
	}
}

float func_100(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4269587 == 0)
	{
		if (IS_BIT_SET(Global_2423, 14) && Global_14553.f_1 < 4)
		{
			GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_14506[Global_14498 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269587 = 1;
			}
		}
	}
	if (func_44() && Global_4269587 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GET_GAME_TIMER();
	}
	fVar3 = func_102((TO_FLOAT((GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SIN((fVar3 * 90f));
		}
		Global_14481 = { func_101(vParam0, vParam3, fVar4) };
		Global_14484 = { func_101(vParam6, vParam9, fVar4) };
	}
	else
	{
		Global_14481 = { vParam3 };
		Global_14484 = { vParam9 };
	}
	SET_MOBILE_PHONE_POSITION(Global_14481);
	SET_MOBILE_PHONE_ROTATION(Global_14484, 0);
	return fVar3;
}

Vector3 func_101(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_102(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_103()
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

bool func_104()
{
	return IS_BIT_SET(Global_4456448.f_154961, 12);
}

bool func_105(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_106(sParam2, iParam3, 0);
}

int func_106(char* sParam0, int iParam1, bool bParam2)
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
					func_103();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_33();
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
				func_27();
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
				if (func_26())
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
			if (func_25())
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
			func_24();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_48();
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
		func_103();
	}
	return 0;
}

int func_107()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_9(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_9(iParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_9(iParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_9(iParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_9(iParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

