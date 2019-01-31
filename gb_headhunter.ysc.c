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
	struct<872> Local_110 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_111[32];
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127[4] = { 0, 0, 0, 0 };
	struct<8> Local_128[30];
	var uLocal_129[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	struct<21> Local_137 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_119 = 4294967295;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_956(CAM::_0xDC9DA9E8789F5246(), 0, 1))
	{
		func_917(ScriptParam_137);
	}
	else
	{
		func_869();
	}
	while (true)
	{
		func_868();
		if (func_860())
		{
			func_869();
		}
		Global_196EF6.f_2 = Local_110.f_35F;
		Global_196EF6.f_3 = Local_110.f_360;
		switch (func_859(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_858() == 1)
				{
					if (func_857())
					{
						func_856();
						if (func_855())
						{
							func_840(166, 1, 4294967295, 0);
							HUD::_0x14621BB1DF14E2B2(3);
							func_839(0f);
							iLocal_118 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330(), iLocal_117);
						}
						else
						{
							func_840(166, 0, 4294967295, 0);
						}
						func_838();
						func_837();
						func_836();
						Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/] = 1;
					}
				}
				else if (func_858() == 4)
				{
					Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_830(1))
				{
					Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/] = 2;
				}
				if (func_858() == 1)
				{
					func_829();
					func_809();
					func_786();
					func_297();
					func_288();
					if (func_855() || func_286())
					{
						func_141(&(Global_14B91C.f_216), &Global_14B91C, 27, &(Global_14B91C.f_1), &(Global_14B91C.f_75), 4294967295, 0, 0);
					}
					func_76();
				}
				else if (func_858() == 4)
				{
					Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/] = 3;
					func_73();
				}
				func_72();
				break;
			
			case 3:
				func_71(&(Local_110.f_34D));
				if (func_70(&(Local_110.f_34D)))
				{
					Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/] = 4;
			
			case 4:
				func_869();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_858())
			{
				case 0:
					func_68();
					func_67();
					if (func_25())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_110.f_35F), &(Local_110.f_360));
						Local_110 = 1;
						Local_110.f_76 = NETSHOP::_NETWORK_SHOP_BASKET_START();
						Local_110.f_77 = CAM::_0xDC9DA9E8789F5246();
						func_840(166, 1, 4294967295, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_110 = 4;
					}
					else if (func_1())
					{
						Local_110 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2C6
{
	if (Global_26862F.f_1313.f_22)
	{
		Global_26862F.f_1313.f_22 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x2E9
{
	if (func_3())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x30D
{
	return 0;
}

void func_4()//Position - 0x316
{
	switch (Local_110.f_75)
	{
		case 0:
			func_9();
			func_5();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
			{
				Local_110.f_75 = 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3))
			{
				Local_110.f_75 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()//Position - 0x36F
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
	{
		if (!func_8(&(Local_110.f_351)))
		{
			func_7(&(Local_110.f_351), 0, 0);
		}
		else if (func_6(&(Local_110.f_351), 500, 0))
		{
			MISC::SET_BIT(&(Local_110.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x3B8
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x416
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

bool func_8(var uParam0)//Position - 0x45B
{
	return uParam0->f_1;
}

void func_9()//Position - 0x467
{
	if (!func_8(&(Local_110.f_34F)))
	{
		func_7(&(Local_110.f_34F), 0, 0);
	}
	else if (func_6(&(Local_110.f_34F), func_10(), 0))
	{
		MISC::SET_BIT(&(Local_110.f_1), 3);
	}
}

int func_10()//Position - 0x4A4
{
	return Global_40001.f_3A27;
}

void func_11()//Position - 0x4B3
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_110.f_2[iVar0 /*26*/].f_11)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_110.f_2[iVar0 /*26*/] == 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								Local_110.f_2[iVar0 /*26*/].f_11 = 1;
							}
						}
						else if (Local_110.f_2[iVar0 /*26*/] == 1)
						{
							Local_110.f_2[iVar0 /*26*/].f_11 = 5;
						}
						else
						{
							Local_110.f_2[iVar0 /*26*/].f_11 = 8;
						}
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2)))
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6D, iVar0))
										{
											MISC::SET_BIT(&(Local_110.f_6C), iVar0);
											Local_110.f_2[iVar0 /*26*/].f_11 = 2;
										}
										else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6E, iVar0))
										{
											MISC::SET_BIT(&(Local_110.f_6C), iVar0);
											Local_110.f_2[iVar0 /*26*/].f_11 = 2;
										}
										else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6F, iVar0))
										{
											MISC::SET_BIT(&(Local_110.f_6C), iVar0);
											Local_110.f_2[iVar0 /*26*/].f_11 = 2;
										}
										else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_70, iVar0))
										{
											Local_110.f_2[iVar0 /*26*/].f_11 = 3;
										}
									}
									else
									{
										Local_110.f_2[iVar0 /*26*/].f_11 = 4;
									}
								}
								else
								{
									Local_110.f_2[iVar0 /*26*/].f_11 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1)))
							{
								Local_110.f_2[iVar0 /*26*/].f_11 = 4;
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_110.f_2[iVar0 /*26*/].f_2))
								{
									Local_110.f_2[iVar0 /*26*/].f_11 = 3;
								}
								else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_70, iVar0))
								{
									Local_110.f_2[iVar0 /*26*/].f_11 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_110.f_2[iVar0 /*26*/].f_11 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6E, iVar0))
							{
								Local_110.f_2[iVar0 /*26*/].f_11 = 4;
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6F, iVar0))
							{
								Local_110.f_2[iVar0 /*26*/].f_11 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_110.f_2[iVar0 /*26*/].f_18)
						{
							Local_110.f_2[iVar0 /*26*/].f_11 = 9;
						}
					}
					break;
				
				case 9:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_110.f_2[iVar0 /*26*/].f_19)
						{
							Local_110.f_2[iVar0 /*26*/].f_11 = 6;
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
				switch (Local_110.f_2[iVar0 /*26*/].f_12[iVar1])
				{
					case 0:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/] == 0)
							{
								Local_110.f_2[iVar0 /*26*/].f_12[iVar1] = 1;
							}
							else if (Local_110.f_2[iVar0 /*26*/] == 2)
							{
								Local_110.f_2[iVar0 /*26*/].f_12[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/].f_11 == 2)
							{
								Local_110.f_2[iVar0 /*26*/].f_12[iVar1] = 7;
							}
							else if (Local_110.f_2[iVar0 /*26*/].f_11 == 3 || Local_110.f_2[iVar0 /*26*/].f_11 == 4)
							{
								Local_110.f_2[iVar0 /*26*/].f_12[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/].f_18)
							{
								Local_110.f_2[iVar0 /*26*/].f_12[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/].f_11 == 3 || Local_110.f_2[iVar0 /*26*/].f_11 == 4)
							{
								Local_110.f_2[iVar0 /*26*/].f_12[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_110.f_2[iVar0 /*26*/].f_12[iVar1] = 6;
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

int func_12(int iParam0)//Position - 0x9F3
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_13(int iParam0)//Position - 0xA13
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
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

int func_14(int iParam0)//Position - 0xA4C
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_15()//Position - 0xA6B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_74, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						MISC::SET_BIT(&(Local_110.f_74), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)//Position - 0xACE
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
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)//Position - 0xB24
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_18(4294967295, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0xB6F
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

int func_19()//Position - 0xBB0
{
	return Global_1407E0;
}

int func_20(int iParam0)//Position - 0xBBC
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_110.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()//Position - 0xC32
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_110 != 4)
	{
		iLocal_114 = 0;
		while (iLocal_114 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_114)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_114));
				if (!func_17(iVar3, 0))
				{
					if (func_956(iVar3, 1, 1))
					{
					}
					func_24(iLocal_114);
					func_23(iLocal_114);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 2))
					{
						if (!bVar2)
						{
							if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iLocal_114 /*14*/].f_1, 4))
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
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5))
			{
				if (Local_110.f_76 > 4294967295)
				{
					if (iLocal_114 == Local_110.f_76)
					{
						MISC::SET_BIT(&(Local_110.f_1), 5);
					}
				}
			}
			iLocal_114++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_71, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_110.f_73 != iVar0)
		{
			Local_110.f_73 = iVar0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				MISC::SET_BIT(&(Local_110.f_1), 1);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 2))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_110.f_1), 2);
			}
		}
	}
}

void func_22()//Position - 0xD95
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_71, iVar0))
			{
				if (!func_8(&(Local_110.f_355[iVar0 /*2*/])))
				{
					if (func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_110.f_355[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_110.f_355[iVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_110.f_71), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)//Position - 0xE20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6D, iVar0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_5, iVar0))
			{
				MISC::SET_BIT(&(Local_110.f_6D), iVar0);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6E, iVar0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_2, iVar0))
			{
				MISC::SET_BIT(&(Local_110.f_6E), iVar0);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_70, iVar0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_3, iVar0))
			{
				MISC::SET_BIT(&(Local_110.f_70), iVar0);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6F, iVar0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_4, iVar0))
			{
				MISC::SET_BIT(&(Local_110.f_6F), iVar0);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_71, iVar0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_6, iVar0))
			{
				MISC::SET_BIT(&(Local_110.f_71), iVar0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_7, iVar0))
			{
				MISC::SET_BIT(&(Local_110.f_71), iVar0);
			}
		}
		if (Local_110.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_110.f_2[iVar0 /*26*/].f_18)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_C, iVar0))
				{
					Local_110.f_2[iVar0 /*26*/].f_18 = 1;
				}
			}
			if (!Local_110.f_2[iVar0 /*26*/].f_19)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iParam0 /*14*/].f_D, iVar0))
				{
					Local_110.f_2[iVar0 /*26*/].f_19 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)//Position - 0xF8D
{
	int iVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_72, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 1);
							MISC::SET_BIT(&(Local_110.f_72), iParam0);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_110.f_72), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()//Position - 0x102E
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

int func_26()//Position - 0x105B
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

int func_27(int iParam0)//Position - 0x10B2
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = Local_110.f_2[iParam0 /*26*/].f_16;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		vVar2 = { Local_110.f_7B[iVar0 /*36*/].f_12[iVar1 /*3*/] };
		if (!func_28(vVar2, 0f, 0f, 0f, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1117
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(int iParam0)//Position - 0x115E
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = Local_110.f_2[iParam0 /*26*/].f_16;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			vVar3 = { Local_110.f_7B[iVar0 /*36*/].f_12[iVar1 /*3*/] };
			fVar4 = Local_110.f_7B[iVar0 /*36*/].f_1C[iVar1];
			if (!func_28(vVar3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_110.f_7B[iVar0 /*36*/].f_20[iVar1];
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_31(iVar2))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_2[iParam0 /*26*/].f_17, iVar1))
						{
							MISC::CLEAR_AREA(vVar3, 10f, 1, 0, 0, true);
							MISC::SET_BIT(&(Local_110.f_2[iParam0 /*26*/].f_17), iVar1);
						}
						if (func_30(&(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, vVar3, fVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_117);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
							unk_0x8389D644A7CF28CF(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x12C4
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
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
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
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
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

bool func_31(int iParam0)//Position - 0x13BE
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_32(int iParam0)//Position - 0x13DC
{
	int iVar0;
	
	if (Local_110.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_110.f_2[iParam0 /*26*/].f_16;
	return !func_28(Local_110.f_7B[iVar0 /*36*/].f_12[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_33()//Position - 0x1418
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

int func_34(int iParam0)//Position - 0x146F
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = Local_110.f_2[iParam0 /*26*/];
	iVar2 = Local_110.f_2[iParam0 /*26*/].f_16;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				vVar3 = { Local_110.f_7B[iVar2 /*36*/].f_4[iVar0 /*3*/] };
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

int func_35(int iParam0)//Position - 0x14F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_110.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_110.f_2[iParam0 /*26*/].f_2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), Local_110.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0xF82197F205B9D8FD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), Global_180851);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_117);
											PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, false, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
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
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_110.f_2[iParam0 /*26*/].f_16;
								vVar5 = { Local_110.f_7B[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar6 = Local_110.f_7B[iVar2 /*36*/].f_E[iVar1];
								if (!func_28(vVar5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, vVar5, fVar6, 1, 1, 1))
									{
										unk_0xF82197F205B9D8FD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), Global_180851);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_117);
										WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, false, true);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), vVar5, 7f, 0, 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_38();
										ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = func_37();
										PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
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

int func_36()//Position - 0x1951
{
	return SYSTEM::ROUND(Global_40001.f_3A2F);
}

int func_37()//Position - 0x1964
{
	return 200;
}

var func_38()//Position - 0x196E
{
	return Global_40001.f_3A2E;
}

int func_39(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x197D
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
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x19DC
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(iParam1), 0))
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
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_41()//Position - 0x1A64
{
	return joaat("s_m_m_chemsec_01");
}

int func_42(int iParam0)//Position - 0x1A71
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_43(int iParam0)//Position - 0x1A93
{
	return (Local_110.f_2[iParam0 /*26*/] == 0 || Local_110.f_2[iParam0 /*26*/] == 2);
}

int func_44()//Position - 0x1AB5
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

int func_45(int iParam0)//Position - 0x1AFA
{
	switch (Local_110.f_2[iParam0 /*26*/])
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x1B63
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	switch (Local_110.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_110.f_2[iParam0 /*26*/].f_B;
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_110.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_110.f_2[iParam0 /*26*/].f_D = { vVar2 };
								Local_110.f_2[iParam0 /*26*/].f_10 = uVar3;
							}
						}
						if (!func_28(Local_110.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_110.f_2[iParam0 /*26*/].f_2), iVar0, Local_110.f_2[iParam0 /*26*/].f_D, Local_110.f_2[iParam0 /*26*/].f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), true, true, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_2), 1, iLocal_117);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), false);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), false, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), true, 1);
								VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x8389D644A7CF28CF(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
					{
						iVar1 = Local_110.f_2[iParam0 /*26*/].f_C;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_110.f_2[iParam0 /*26*/].f_1), Local_110.f_2[iParam0 /*26*/].f_2, 22, iVar1, 4294967295, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, 0);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Global_180851);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, iLocal_117);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_110.f_6B), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_110.f_2[iParam0 /*26*/].f_C;
					if (func_31(iVar1))
					{
						if (func_28(Local_110.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_110.f_2[iParam0 /*26*/].f_D = { vVar2 };
								Local_110.f_2[iParam0 /*26*/].f_10 = uVar3;
							}
						}
						if (!func_28(Local_110.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_110.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_110.f_2[iParam0 /*26*/].f_D, Local_110.f_2[iParam0 /*26*/].f_10, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, 0);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Global_180851);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, iLocal_117);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								MISC::SET_BIT(&(Local_110.f_6B), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_110.f_2[iParam0 /*26*/].f_C;
					if (func_31(iVar1))
					{
						if (func_28(Local_110.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_110.f_2[iParam0 /*26*/].f_D = { vVar2 };
								Local_110.f_2[iParam0 /*26*/].f_10 = uVar3;
								Local_110.f_2[iParam0 /*26*/].f_16 = uVar4;
								func_51(vVar2);
							}
						}
						if (!func_28(Local_110.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_110.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_110.f_2[iParam0 /*26*/].f_D, Local_110.f_2[iParam0 /*26*/].f_10, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, 0);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Global_180851);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, iLocal_117);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 42, true);
								PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 11, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 44, true);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, false, true);
								fVar7 = func_50(iParam0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Local_110.f_2[iParam0 /*26*/].f_D, fVar7, 0, 0);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 132, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar5 = func_49();
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), iVar5);
								unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								iVar6 = func_48();
								PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), iVar6);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), func_47());
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true, 1);
								MISC::SET_BIT(&(Local_110.f_6B), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_47()//Position - 0x2201
{
	return SYSTEM::ROUND(Global_40001.f_3A2D);
}

int func_48()//Position - 0x2214
{
	return 100;
}

var func_49()//Position - 0x221E
{
	return Global_40001.f_3A2C;
}

float func_50(int iParam0)//Position - 0x222D
{
	if (func_28(Local_110.f_2[iParam0 /*26*/].f_D, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_51(vector3 vParam0)//Position - 0x2261
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == 4294967295)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_367, iVar1))
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
		Local_110.f_361[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_110.f_367), iVar0);
	}
	if (func_28(vParam0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_110.f_361[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_110.f_367), iVar0);
	}
	if (func_28(vParam0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_110.f_361[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_110.f_367), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x239F
{
	int iVar0;
	
	switch (Local_110.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_110.f_7A);
			if (!func_28(Local_110.f_7B[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_110.f_7B[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_110.f_7B[iVar0 /*36*/] };
					*uParam2 = Local_110.f_7B[iVar0 /*36*/].f_3;
					Local_110.f_7B[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_110.f_7A);
			if (!func_28(Local_110.f_7B[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_110.f_7B[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_110.f_7B[iVar0 /*36*/] };
					*uParam2 = Local_110.f_7B[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_110.f_7B[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (!func_28(Local_110.f_1E4[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_110.f_1E4[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_110.f_1E4[iVar0 /*36*/] };
					*uParam2 = Local_110.f_1E4[iVar0 /*36*/].f_3;
					Local_110.f_1E4[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x2567
{
	Global_24B2CE.f_2 = 0;
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
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_60(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
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
	Global_24B2CE.f_2++;
	return 1;
}

int func_54(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x2678
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_956(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_56(CAM::_0xDC9DA9E8789F5246()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_956(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_55(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
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
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
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

int func_55(int iParam0)//Position - 0x2830
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)//Position - 0x285B
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_59() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_58(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_57(iParam0);
}

Vector3 func_57(int iParam0)//Position - 0x28AE
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_58(vector3 vParam0)//Position - 0x28C1
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_59()//Position - 0x28EB
{
	return Global_255C02.f_10;
}

int func_60(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x28F9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_956(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && uParam7) && bParam4) && func_61(iVar1))
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

int func_61(int iParam0)//Position - 0x29F5
{
	if (func_66(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_65(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_62(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)//Position - 0x2A3C
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

int func_63()//Position - 0x2A67
{
	return 4294967295;
}

int func_64(int iParam0)//Position - 0x2A70
{
	if (iParam0 != func_63())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_63();
}

struct<13> func_65(int iParam0)//Position - 0x2A93
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, int iParam1)//Position - 0x2AAA
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_65(iParam0) };
		Global_2633EE = { func_65(iParam1) };
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

void func_67()//Position - 0x2B17
{
	Local_110.f_2[0 /*26*/] = 2;
	Local_110.f_2[0 /*26*/].f_B = joaat("BALLER3");
	Local_110.f_2[0 /*26*/].f_C = joaat("a_m_y_business_03");
	Local_110.f_2[1 /*26*/] = 2;
	Local_110.f_2[1 /*26*/].f_B = joaat("DUBSTA");
	Local_110.f_2[1 /*26*/].f_C = joaat("a_m_y_business_03");
	Local_110.f_2[2 /*26*/] = 0;
	Local_110.f_2[2 /*26*/].f_B = joaat("COG552");
	Local_110.f_2[2 /*26*/].f_C = joaat("a_m_y_business_03");
	Local_110.f_2[3 /*26*/] = 0;
	Local_110.f_2[3 /*26*/].f_B = joaat("BALLER5");
	Local_110.f_2[3 /*26*/].f_C = joaat("a_m_y_business_03");
}

void func_68()//Position - 0x2BAF
{
	func_69();
	if (Local_110.f_7A == 0)
	{
		if (Local_110.f_79 == 0)
		{
			Local_110.f_7A = 10;
		}
		else
		{
			Local_110.f_7A = 9;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 4))
	{
		return;
	}
	switch (Local_110.f_79)
	{
		case 0:
			Local_110.f_7B[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_110.f_7B[0 /*36*/].f_3 = 45.1956f;
			Local_110.f_7B[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_110.f_7B[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_110.f_7B[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_110.f_7B[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_110.f_7B[1 /*36*/].f_3 = 136.8281f;
			Local_110.f_7B[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_110.f_7B[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_110.f_7B[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_110.f_7B[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_110.f_7B[2 /*36*/].f_3 = 312.8899f;
			Local_110.f_7B[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_110.f_7B[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_110.f_7B[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_110.f_7B[3 /*36*/].f_3 = 252.8763f;
			Local_110.f_7B[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_110.f_7B[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_110.f_7B[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_110.f_7B[4 /*36*/].f_3 = 27.8866f;
			Local_110.f_7B[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_110.f_7B[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_110.f_7B[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_110.f_7B[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_110.f_7B[5 /*36*/].f_3 = 186.7157f;
			Local_110.f_7B[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_110.f_7B[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_110.f_7B[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_110.f_7B[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_110.f_7B[6 /*36*/].f_3 = 0.3174f;
			Local_110.f_7B[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_110.f_7B[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_110.f_7B[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_110.f_7B[6 /*36*/].f_E[2] = 180f;
			Local_110.f_7B[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_110.f_7B[7 /*36*/].f_3 = 358.2249f;
			Local_110.f_7B[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_110.f_7B[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_110.f_7B[7 /*36*/].f_12[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_110.f_7B[7 /*36*/].f_1C[0] = 85.9643f;
			Local_110.f_7B[7 /*36*/].f_20[0] = joaat("BALLER5");
			Local_110.f_7B[7 /*36*/].f_12[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_110.f_7B[7 /*36*/].f_1C[1] = 263.6038f;
			Local_110.f_7B[7 /*36*/].f_20[1] = joaat("COG552");
			Local_110.f_7B[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_110.f_7B[9 /*36*/].f_3 = 241.2612f;
			Local_110.f_7B[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_110.f_7B[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_110.f_7B[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_110.f_7B[8 /*36*/].f_12[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_110.f_7B[8 /*36*/].f_1C[0] = 145.1394f;
			Local_110.f_7B[8 /*36*/].f_20[0] = joaat("BALLER5");
			Local_110.f_7B[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_110.f_7B[9 /*36*/].f_3 = 63.2117f;
			Local_110.f_7B[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_110.f_7B[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_110.f_7B[9 /*36*/].f_12[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_110.f_7B[9 /*36*/].f_1C[0] = 148.5301f;
			Local_110.f_7B[9 /*36*/].f_20[0] = joaat("BALLER5");
			Local_110.f_7B[9 /*36*/].f_12[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_110.f_7B[9 /*36*/].f_1C[1] = 44.2995f;
			Local_110.f_7B[9 /*36*/].f_20[1] = joaat("COG552");
			Local_110.f_1E4[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_110.f_1E4[0 /*36*/].f_3 = 179.583f;
			Local_110.f_1E4[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_110.f_1E4[1 /*36*/].f_3 = 268.6526f;
			Local_110.f_1E4[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_110.f_1E4[2 /*36*/].f_3 = 90.3809f;
			Local_110.f_1E4[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_110.f_1E4[3 /*36*/].f_3 = 229.4149f;
			Local_110.f_1E4[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_110.f_1E4[4 /*36*/].f_3 = 141.0009f;
			Local_110.f_1E4[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_110.f_1E4[5 /*36*/].f_3 = 359.1567f;
			Local_110.f_1E4[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_110.f_1E4[6 /*36*/].f_3 = 212.8829f;
			Local_110.f_1E4[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_110.f_1E4[7 /*36*/].f_3 = 257.1156f;
			Local_110.f_1E4[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_110.f_1E4[8 /*36*/].f_3 = 174.0491f;
			Local_110.f_1E4[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_110.f_1E4[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_110.f_7B[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_110.f_7B[0 /*36*/].f_3 = 225.1522f;
			Local_110.f_7B[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_110.f_7B[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_110.f_7B[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_110.f_7B[9 /*36*/].f_3 = 128.6356f;
			Local_110.f_7B[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_110.f_7B[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_110.f_7B[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_110.f_7B[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_110.f_7B[2 /*36*/].f_3 = 214.3712f;
			Local_110.f_7B[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_110.f_7B[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_110.f_7B[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_110.f_7B[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_110.f_7B[3 /*36*/].f_3 = 151.8443f;
			Local_110.f_7B[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_110.f_7B[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_110.f_7B[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_110.f_7B[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_110.f_7B[4 /*36*/].f_3 = 186.7534f;
			Local_110.f_7B[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_110.f_7B[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_110.f_7B[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_110.f_7B[5 /*36*/].f_3 = 101.7629f;
			Local_110.f_7B[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_110.f_7B[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_110.f_7B[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_110.f_7B[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_110.f_7B[6 /*36*/].f_3 = 352.4692f;
			Local_110.f_7B[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_110.f_7B[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_110.f_7B[6 /*36*/].f_12[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_110.f_7B[6 /*36*/].f_1C[0] = 88.1481f;
			Local_110.f_7B[6 /*36*/].f_20[0] = joaat("BALLER5");
			Local_110.f_7B[6 /*36*/].f_12[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_110.f_7B[6 /*36*/].f_1C[1] = 97.3821f;
			Local_110.f_7B[6 /*36*/].f_20[1] = joaat("COG552");
			Local_110.f_7B[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_110.f_7B[7 /*36*/].f_3 = 335.1092f;
			Local_110.f_7B[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_110.f_7B[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_110.f_7B[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_110.f_7B[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_110.f_7B[8 /*36*/].f_3 = 296.2108f;
			Local_110.f_7B[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_110.f_7B[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_110.f_7B[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_110.f_7B[8 /*36*/].f_12[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_110.f_7B[8 /*36*/].f_1C[0] = 312.3839f;
			Local_110.f_7B[8 /*36*/].f_20[0] = joaat("BALLER5");
			Local_110.f_1E4[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_110.f_1E4[0 /*36*/].f_3 = 87.1735f;
			Local_110.f_1E4[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_110.f_1E4[1 /*36*/].f_3 = 251.7144f;
			Local_110.f_1E4[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_110.f_1E4[2 /*36*/].f_3 = 351.6842f;
			Local_110.f_1E4[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_110.f_1E4[3 /*36*/].f_3 = 297.6164f;
			Local_110.f_1E4[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_110.f_1E4[4 /*36*/].f_3 = 346.6894f;
			Local_110.f_1E4[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_110.f_1E4[5 /*36*/].f_3 = 30.2635f;
			Local_110.f_1E4[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_110.f_1E4[6 /*36*/].f_3 = 155.2497f;
			Local_110.f_1E4[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_110.f_1E4[7 /*36*/].f_3 = 11.7033f;
			Local_110.f_1E4[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_110.f_1E4[8 /*36*/].f_3 = 290.5464f;
			Local_110.f_1E4[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_110.f_1E4[9 /*36*/].f_3 = 113.551f;
			break;
	}
	MISC::SET_BIT(&(Local_110.f_1), 4);
}

var func_69()//Position - 0x39D6
{
	if (Local_110.f_79 != 4294967295)
	{
		return Local_110.f_79;
	}
	if (Local_110.f_79 == 4294967295)
	{
		if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false)) == 4005646697)
		{
			Local_110.f_79 = 0;
		}
		else
		{
			Local_110.f_79 = 1;
		}
	}
	return Local_110.f_79;
}

int func_70(var uParam0)//Position - 0x3A1B
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

void func_71(var uParam0)//Position - 0x3A44
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_72()//Position - 0x3A63
{
}

void func_73()//Position - 0x3A6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_110.f_77 != 4294967295)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77);
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
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_180824[iVar1], Global_180851);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_180851, Global_180824[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x3B00
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
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_63())
		{
			return iParam1 == Global_18CD5B[iParam0 /*560*/].f_B;
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x3B4A
{
	if (iParam1 != func_63())
	{
		if (iParam0 != func_63())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_63())
			{
				if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_76()//Position - 0x3B8F
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	
	if (func_855())
	{
		return;
	}
	if (!func_286())
	{
		return;
	}
	iVar1 = 4294967295;
	fVar2 = func_140(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!func_133())
			{
				func_129(0);
				unk_0xEF791AEFDDE09A3D(false);
				MISC::SET_BIT(&iLocal_112, 18);
			}
		}
	}
	if (Local_110.f_77 > 4294967295)
	{
		if (iVar1 > 4294967295)
		{
			vVar0 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iVar1 /*26*/].f_1), false) };
		}
	}
	if (!func_28(vVar0, 0f, 0f, 0f, 0))
	{
		func_77(166, vVar0, &uLocal_131, 1140457472, 1144750080, 0);
	}
}

void func_77(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3C37
{
	float fVar0;
	float fVar1;
	
	if ((((func_128(CAM::_0xDC9DA9E8789F5246()) && !func_127(CAM::_0xDC9DA9E8789F5246())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 8)) && (func_126(CAM::_0xDC9DA9E8789F5246()) || func_125(CAM::_0xDC9DA9E8789F5246()))) || func_58(vParam1))
	{
		return;
	}
	Global_196EED = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vParam1);
	func_121(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_120(CAM::_0xDC9DA9E8789F5246()) || func_118(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				HUD::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			HUD::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_117(CAM::_0xDC9DA9E8789F5246(), 21))
		{
			func_116(vParam1, 1, 0);
		}
		if (!*uParam2 && func_956(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 1;
			if (func_115(iParam0))
			{
				GRAPHICS::_0x54E22EA2C1956A8D(func_114(iParam0));
				if (func_113(iParam0, 4294967295))
				{
					HUD::_0x14621BB1DF14E2B2(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 1);
						HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 1);
					}
					MISC::SET_BIT(&(Global_196EED.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				fVar1 = func_111(iParam0);
				if (fVar1 != 1f)
				{
					func_839(fVar1);
					MISC::SET_BIT(&(Global_196EED.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_110(iParam0) && func_120(CAM::_0xDC9DA9E8789F5246()))
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
			if (func_105(CAM::_0xDC9DA9E8789F5246(), 19))
			{
				func_104(19);
			}
		}
		if (*uParam2 && func_956(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			*uParam2 = 0;
			if (func_115(iParam0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0))
				{
					GRAPHICS::_0x54E22EA2C1956A8D(1f);
					HUD::_0x14621BB1DF14E2B2(5);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				func_103();
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 1);
			}
			if (iParam5 && !func_128(CAM::_0xDC9DA9E8789F5246()))
			{
				if (func_101(CAM::_0xDC9DA9E8789F5246()) != 152)
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

void func_78(int iParam0)//Position - 0x3EAA
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_27), iParam0);
}

bool func_79(int iParam0)//Position - 0x3EC1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_27, iParam0);
}

void func_80()//Position - 0x3ED8
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C348, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C34A, 18);
	func_99();
	func_83(1, 1, 0);
	func_81();
}

void func_81()//Position - 0x3F0E
{
	func_82(0, 0);
}

void func_82(int iParam0, int iParam1)//Position - 0x3F1C
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_83(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3F34
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
		func_98();
	}
	if (!bParam2)
	{
		func_86(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_85(0);
	func_84();
}

void func_84()//Position - 0x3FD3
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E4.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24B2CE.f_1E4 = { Var0 };
	}
}

void func_85(bool bParam0)//Position - 0x3FF8
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

void func_86(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x4019
{
	if (bParam0)
	{
		if (func_97())
		{
			func_96();
		}
		Global_24B2CE.f_2BF.f_203 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_24B2CE.f_2BF.f_1F8 = iParam1;
		Global_24B2CE.f_2BF.f_1F9 = iParam2;
		Global_24B2CE.f_2BF.f_1FA = iParam10;
		func_94();
		func_90(8, 0, 0, 0, 0);
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
		func_87();
	}
}

void func_87()//Position - 0x40E0
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
		Global_24B2CE.f_6C8 = 0;
		Global_24B2CE.f_6C7 = 0;
	}
}

void func_88()//Position - 0x4128
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BF), &(Global_24B2CE.f_4C3), 516);
	Global_24B2CE.f_1E4 = { Global_24B2CE.f_1EA };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203)
	{
		Global_24B2CE.f_6C7 = 0;
	}
}

int func_89()//Position - 0x4170
{
	if ((Global_24B2CE.f_6C7 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_4C3.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_4C3.f_203))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x41AF
{
	if (Global_252F9E.f_761.f_2B2.f_10 != func_63())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_252F9E.f_761.f_2B2.f_10 /*413*/].f_191, 0) && func_91())
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

int func_91()//Position - 0x424E
{
	if (((func_101(CAM::_0xDC9DA9E8789F5246()) == 229 || func_101(CAM::_0xDC9DA9E8789F5246()) == 191) || func_93()) || func_92())
	{
		return 0;
	}
	return 1;
}

var func_92()//Position - 0x428E
{
	return Global_1805F4;
}

int func_93()//Position - 0x429A
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x42AF
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	func_95();
	Global_24B2CE.f_2BF = 0;
}

void func_95()//Position - 0x42D8
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

void func_96()//Position - 0x4313
{
	if (func_89())
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

int func_97()//Position - 0x4381
{
	if ((Global_24B2CE.f_6C8 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_2BF.f_203) && SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_2BF.f_203))
	{
		return 1;
	}
	return 0;
}

void func_98()//Position - 0x43C0
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_16A), &Global_24C49A, 121);
}

void func_99()//Position - 0x43D9
{
	func_100();
	Global_24B2CE.f_8C5 = 0;
}

void func_100()//Position - 0x43ED
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2CE.f_8C6[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_101(int iParam0)//Position - 0x4419
{
	if (func_102(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_102(int iParam0, int iParam1)//Position - 0x443C
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_103()//Position - 0x4477
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_26862F.f_130E < 1f)
		{
			return;
		}
	}
	Global_26862F.f_130F = 4294967295;
	Global_26862F.f_130E = 1f;
}

void func_104(int iParam0)//Position - 0x44BE
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

bool func_105(int iParam0, int iParam1)//Position - 0x44DB
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

void func_106(int iParam0)//Position - 0x44F6
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_4), iParam0);
}

void func_107(int iParam0)//Position - 0x4513
{
	MISC::SET_BIT(&(Global_26862F.f_1313.f_27), iParam0);
}

void func_108(int iParam0)//Position - 0x452A
{
	if (func_109() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_109()//Position - 0x455F
{
	if ((((Global_EC6C9 != 4294967295 && Global_EC6C9 != 33) && Global_EC6C9 != 35) && Global_EC6C9 != 37) && Global_EC6C9 != 21)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x45A5
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

float func_111(int iParam0)//Position - 0x45F5
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

int func_112(int iParam0)//Position - 0x4789
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

int func_113(int iParam0, int iParam1)//Position - 0x4851
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

float func_114(int iParam0)//Position - 0x49D2
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

int func_115(int iParam0)//Position - 0x4A8A
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

void func_116(vector3 vParam0, int iParam1, int iParam2)//Position - 0x4B88
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

bool func_117(int iParam0, int iParam1)//Position - 0x4BB2
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

int func_118(int iParam0)//Position - 0x4BCB
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

int func_119(int iParam0)//Position - 0x4BEA
{
	if (iParam0 != func_63())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_63())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x4C1F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_105(iParam0, 9);
	}
	return 0;
}

void func_121(int iParam0, float fParam1)//Position - 0x4C3D
{
	int iVar0;
	
	iVar0 = func_124(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_122();
	}
}

void func_122()//Position - 0x4C63
{
	if (!func_123(CAM::_0xDC9DA9E8789F5246()))
	{
		func_106(25);
	}
}

bool func_123(int iParam0)//Position - 0x4C7D
{
	return func_105(iParam0, 25);
}

int func_124(int iParam0)//Position - 0x4C8D
{
	switch (iParam0)
	{
		case 152:
			return Global_40001.f_3079;
		
		case 142:
			return Global_40001.f_306D;
		
		case 157:
			return Global_40001.f_304C;
		
		case 159:
			return Global_40001.f_303B;
		
		case 162:
			return Global_40001.f_30AA;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return 4294967295;
}

int func_125(int iParam0)//Position - 0x4D03
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x4D29
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

bool func_127(int iParam0)//Position - 0x4D4F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 2);
}

int func_128(int iParam0)//Position - 0x4D67
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

void func_129(int iParam0)//Position - 0x4D88
{
	if (!func_139(CAM::_0xDC9DA9E8789F5246()))
	{
		if (iParam0 || func_130(CAM::_0xDC9DA9E8789F5246()) != 0)
		{
			func_106(20);
			if (func_128(CAM::_0xDC9DA9E8789F5246()))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 8);
				}
			}
		}
	}
}

int func_130(int iParam0)//Position - 0x4DEF
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_128(iParam0) && !func_127(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8));
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
	if (Global_26862F.f_1313.f_D2 != iVar0)
	{
		Global_26862F.f_1313.f_D2 = iVar0;
	}
	return iVar0;
}

bool func_131(int iParam0)//Position - 0x4EAD
{
	return func_105(iParam0, 19);
}

bool func_132()//Position - 0x4EBD
{
	return Global_1406A0;
}

int func_133()//Position - 0x4EC9
{
	if ((func_105(CAM::_0xDC9DA9E8789F5246(), 21) || func_105(CAM::_0xDC9DA9E8789F5246(), 22)) || func_136())
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

int func_134()//Position - 0x4F0E
{
	if (func_102(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if ((func_132() && !func_135()) || func_117(CAM::_0xDC9DA9E8789F5246(), 21))
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

bool func_135()//Position - 0x4F51
{
	return Global_1406A0.f_1;
}

bool func_136()//Position - 0x4F5F
{
	return func_137(306, 4294967295);
}

int func_137(int iParam0, int iParam1)//Position - 0x4F6F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_138(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x4F9B
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

bool func_139(int iParam0)//Position - 0x4FCF
{
	return func_105(iParam0, 20);
}

float func_140(int iParam0, bool bParam1)//Position - 0x4FDF
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	vVar3 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_110.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_110.f_2[iVar2 /*26*/].f_1))
				{
					vVar4 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iVar2 /*26*/].f_1), true) };
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

void func_141(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x5081
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
	
	if (func_285(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_283() || iParam2 == 27)
	{
		if (func_225(iParam1, iParam2, uParam3, Global_180518, 0, func_281(), sParam7))
		{
			func_224(1);
			if ((!func_222() && !func_220()) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
			{
				if (func_219())
				{
					func_216();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_215(1);
						Global_180518 = 0;
						iVar19 = 4294967295;
						if (Global_1805F5 != 1)
						{
							func_214(iParam1, 0, 0);
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = 4294967295;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_17(iVar3, 0))
									{
										if ((func_213(iVar3) || Global_24FBF9[iVar3 /*413*/].f_EC != 4294967295) || func_212(iVar3))
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
						if (!func_208(CAM::_0xDC9DA9E8789F5246(), 0) && func_101(CAM::_0xDC9DA9E8789F5246()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_207())
							{
								if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
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
							if ((func_206(iVar3) && func_202(iVar3, iParam2)) && func_956(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
								Var6 = { func_197(iVar3) };
								if (iVar3 == CAM::_0xDC9DA9E8789F5246())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_65(iVar3) };
								iVar5 = func_191(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_180518++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 4294967295)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 4294967295 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									if (!func_207())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_186(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_185(iParam5, 1, 0, 0), 16);
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
										iVar13 = 4294967294;
									}
								}
								iVar16 = func_180(iVar3, 0);
								if (bVar2)
								{
									if (func_179(iVar3, 1) && iVar1[iVar9] != 4294967295)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 4294967295)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_178(iParam5))
								{
									func_177(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_177(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_956(iVar3, 0, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_63();
							}
							if (func_206(iVar3))
							{
								if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1841F3[iVar9 /*790*/].f_D3.f_6;
									Var6 = { func_197(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_65(iVar3) };
									iVar5 = func_191(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_180518++;
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
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_155(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							func_152(uParam3, iParam1);
						}
						func_151(&(uParam3->f_15));
						func_150();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
						{
							func_149(uParam3, iParam1);
							func_148(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_21), 7);
						}
						func_149(uParam3, iParam1);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 11))
						{
							MISC::SET_BIT(&(uParam3->f_21), 11);
						}
						if (func_144(uParam3))
						{
							Global_1805F5 = 1;
						}
						func_142(uParam3);
						if (Global_1805F5 == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_1805F5 == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_150();
			func_215(0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 7))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 7);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 10))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam3->f_21), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_142(var uParam0)//Position - 0x56CE
{
	if (!func_8(&(uParam0->f_15)))
	{
		func_7(&(uParam0->f_15), 0, 0);
	}
	else if (func_6(&(uParam0->f_15), 250, 0))
	{
		func_151(&(uParam0->f_15));
		func_143(0);
	}
}

void func_143(bool bParam0)//Position - 0x570A
{
	if (bParam0)
	{
		if (Global_1805F5 != 2)
		{
			Global_1805F5 = 2;
		}
	}
	else
	{
		switch (Global_1805F5)
		{
			case 0:
				Global_1805F5 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_144(var uParam0)//Position - 0x5750
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_25);
	if (iVar3 != func_63() && func_956(iVar3, 0, 1))
	{
		Var2 = { func_65(iVar3) };
		iVar1 = func_147(uParam0, uParam0->f_25);
		if (func_146(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
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
					if (unk_0x926C9CB9879D0731(&Var2))
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
					if (unk_0x926C9CB9879D0731(&Var2))
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
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_145(var uParam0, int iParam1, int iParam2)//Position - 0x587D
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x588F
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_147(var uParam0, int iParam1)//Position - 0x589F
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_148(int iParam0, bool bParam1, int iParam2)//Position - 0x58AF
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SET_SEETHROUGH(bParam1);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

void func_149(var uParam0, int iParam1)//Position - 0x58E5
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_23);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		MISC::SET_BIT(&(uParam0->f_21), 10);
	}
}

void func_150()//Position - 0x591C
{
	if (Global_1805F5 != 0)
	{
		Global_1805F5 = 0;
	}
}

void func_151(var uParam0)//Position - 0x5931
{
	uParam0->f_1 = 0;
}

void func_152(var uParam0, int iParam1)//Position - 0x593E
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
			if (func_956(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_154(uParam0->f_26[iVar0 /*2*/], 0);
					func_153(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1841F3[iVar0 /*790*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x59B1
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

int func_154(int iParam0, bool bParam1)//Position - 0x59ED
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

void func_155(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x5A21
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_176() && iParam4 < func_175())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_174("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
			}
			func_174(sParam1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_174("");
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
			}
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			func_174("");
			if (uParam3->f_6C == 6)
			{
				func_174("");
			}
			else
			{
				func_174(&sParam5);
			}
			func_160(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
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
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

bool func_156(var uParam0)//Position - 0x5B41
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 6);
}

bool func_157(var uParam0)//Position - 0x5B52
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_21, 5);
}

void func_158(char* sParam0)//Position - 0x5B63
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_159(var uParam0)//Position - 0x5B75
{
	if (func_157(uParam0) && func_156(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_160(var uParam0, int iParam1)//Position - 0x5B96
{
	if (func_173(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(121);
	}
	else if (func_165(iParam1))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(122);
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam1 /*413*/].f_19A, 0))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(123);
	}
	else
	{
		if (func_161())
		{
			uParam0->f_24 = 0;
		}
		GRAPHICS::SET_SEETHROUGH(uParam0->f_24);
	}
}

int func_161()//Position - 0x5C17
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

var func_162()//Position - 0x5C3C
{
	return Global_255C02.f_E;
}

int func_163()//Position - 0x5C4A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_162();
	}
	return func_164(Global_440000.f_1FEDE);
}

int func_164(int iParam0)//Position - 0x5C6E
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1378[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x5CA8
{
	if ((func_956(iParam0, 0, 1) && func_169()) && func_166(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0, bool bParam1)//Position - 0x5CD5
{
	return func_167(iParam0, bParam1, 1);
}

int func_167(int iParam0, bool bParam1, int iParam2)//Position - 0x5CE6
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
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_63() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)//Position - 0x5D42
{
	if (iParam0 != func_63())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_63())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()//Position - 0x5D91
{
	if (func_128(CAM::_0xDC9DA9E8789F5246()) || func_172())
	{
		if (!func_170(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_170(int iParam0, int iParam1)//Position - 0x5DC1
{
	if (func_171(iParam0) == iParam1)
	{
		return func_126(iParam0);
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x5DDE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/];
	}
	return 4294967295;
}

int func_172()//Position - 0x5DFD
{
	switch (func_101(CAM::_0xDC9DA9E8789F5246()))
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

int func_173(int iParam0)//Position - 0x5E3B
{
	if (func_161())
	{
		if (func_956(iParam0, 0, 1))
		{
			return func_119(iParam0);
		}
	}
	if ((func_956(iParam0, 0, 1) && func_169()) && func_168(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_174(char* sParam0)//Position - 0x5E83
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_175()//Position - 0x5E91
{
	int iVar0;
	
	if (Global_18051A)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_176()//Position - 0x5EAD
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18051A)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_177(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x5EC5
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_176() && iParam3 < func_175())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_18051A)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 4294967294)
			{
				iParam10 = 4294967295;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805F5 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_174("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam9);
				}
				if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_158(sParam16);
				}
				else
				{
					func_174(&(uParam2->f_1));
				}
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_174("");
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
				}
				if (func_207())
				{
					func_174("");
				}
				else if (uParam2->f_6C == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != 4294967295)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_68));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
				}
				else if (iParam15 > 4294967295)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_68)))
					{
						func_158(&(uParam2->f_68));
					}
					else
					{
						func_174("");
					}
				}
				else if (iParam14 != 4294967295)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (iParam10 != 4294967295)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam10);
				}
				else
				{
					func_174("");
				}
				if (uParam2->f_6C == 6)
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
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
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
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

int func_178(int iParam0)//Position - 0x6208
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

bool func_179(int iParam0, bool bParam1)//Position - 0x622C
{
	if (!bParam1)
	{
		if (func_119(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_63();
}

int func_180(int iParam0, bool bParam1)//Position - 0x6257
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_128(iParam0)) && !func_139(iParam0))
	{
		iVar0 = func_184();
	}
	iVar1 = func_183(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_181(iVar1);
	}
	return iVar0;
}

int func_181(int iParam0)//Position - 0x62A1
{
	int iVar0;
	
	if (iParam0 > 4294967295)
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

var func_182(int iParam0)//Position - 0x6364
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_183(int iParam0)//Position - 0x637B
{
	if (!iParam0 == func_63())
	{
		if (func_179(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_64(iParam0)];
		}
	}
	return 4294967295;
}

int func_184()//Position - 0x63AD
{
	return 21;
}

char* func_185(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x63B7
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
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
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
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
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

int func_186(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x6539
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

float func_187(int iParam0, int iParam1)//Position - 0x6589
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
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_189(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
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

float func_188(float fParam0)//Position - 0x662C
{
	return (fParam0 / 1.609344f);
}

float func_189(float fParam0)//Position - 0x663C
{
	return (fParam0 / 0.3048f);
}

int func_190(int iParam0)//Position - 0x664C
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

int func_191(int iParam0)//Position - 0x66A8
{
	int iVar0;
	
	iVar0 = func_194(iParam0);
	if (iVar0 == 4294967295)
	{
		func_192(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_192(int iParam0, bool bParam1)//Position - 0x66DE
{
	if (!func_956(iParam0, 0, 1))
	{
		return;
	}
	if (func_194(iParam0) != 4294967295)
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
	if (func_193(iParam0))
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

int func_193(int iParam0)//Position - 0x674A
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

int func_194(int iParam0)//Position - 0x677C
{
	int iVar0;
	
	if (!func_956(iParam0, 0, 1))
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
			func_195(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_195(int iParam0)//Position - 0x67FB
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
	func_196(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_196(var uParam0)//Position - 0x68B1
{
	*uParam0 = 0;
	uParam0->f_1 = func_63();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

struct<4> func_197(int iParam0)//Position - 0x68DE
{
	char cVar0[32];
	
	if (func_956(iParam0, 0, 1))
	{
		Global_2633E1 = { func_65(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_146(Global_2633E1))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2633E1))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_201(&Global_2633E1))
		{
			Global_26339B = { func_199(iParam0) };
			func_198(&Global_26339B, &cVar0);
		}
	}
	return cVar0;
}

void func_198(var uParam0, char* sParam1)//Position - 0x695F
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_199(int iParam0)//Position - 0x6971
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_200(iParam0))
	{
		return Global_140879[CAM::_0xDC9DA9E8789F5246() /*35*/];
	}
	Var0 = { func_65(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_200(int iParam0)//Position - 0x69AD
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return 1;
	}
	return 0;
}

int func_201(var uParam0)//Position - 0x69C3
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (GRAPHICS::_DRAW_SHOWROOM() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0, int iParam1)//Position - 0x69E9
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
	if ((!func_213(iParam0) && Global_24FBF9[iParam0 /*413*/].f_EC == 4294967295) && !func_212(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_203(int iParam0)//Position - 0x6A58
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_8E, 22);
}

bool func_204(int iParam0)//Position - 0x6A71
{
	if (func_127(iParam0))
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 8);
}

int func_205(int iParam0)//Position - 0x6A97
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 10) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_206(int iParam0)//Position - 0x6AD5
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
	if (iVar0 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iVar0 /*790*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_207()//Position - 0x6B1A
{
	switch (func_101(CAM::_0xDC9DA9E8789F5246()))
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
	switch (func_171(CAM::_0xDC9DA9E8789F5246()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_139(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_101(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_170(CAM::_0xDC9DA9E8789F5246(), 236))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)//Position - 0x6C56
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 && func_209(Global_18CD5B[iParam0 /*560*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295)
	{
		if (func_209(Global_18CD5B[iParam0 /*560*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x6CBC
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

int func_210(int iParam0, int iParam1)//Position - 0x6D16
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

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6D6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_213(iVar1) || Global_24FBF9[iVar1 /*413*/].f_EC != 4294967295) || func_212(iVar1))
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

bool func_212(int iParam0)//Position - 0x6DF5
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_213(int iParam0)//Position - 0x6E0A
{
	if (func_956(iParam0, 0, 1))
	{
		if (func_956(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, CAM::_0xDC9DA9E8789F5246()) || func_101(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214(int iParam0, int iParam1, int iParam2)//Position - 0x6E4B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_215(bool bParam0)//Position - 0x6E79
{
	if (bParam0)
	{
		if (Global_14E0B2.f_2 == 0)
		{
			Global_14E0B2.f_2 = 1;
		}
	}
	else if (Global_14E0B2.f_2 == 1)
	{
		Global_14E0B2.f_2 = 0;
	}
}

void func_216()//Position - 0x6EAB
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1))
	{
		if (func_218())
		{
			func_217();
		}
	}
}

void func_217()//Position - 0x6ECD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252F9E.f_A90[iVar0 /*80*/].f_2 != 0)
		{
			Global_252F9E.f_A90[iVar0 /*80*/].f_2 = 5;
			MISC::SET_BIT(&(Global_252F9E.f_A90[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

bool func_218()//Position - 0x6F18
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

int func_219()//Position - 0x6F2E
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0) && func_218())
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_220()//Position - 0x6F6F
{
	if (func_218())
	{
		if (func_221(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x6F96
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

int func_222()//Position - 0x7016
{
	if (func_218())
	{
		if (func_223(Global_252F9E.f_A90[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x703D
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

void func_224(int iParam0)//Position - 0x70CF
{
	if (Global_14E0B2.f_1 != Global_14E0B2)
	{
		Global_14E0B2.f_1 = Global_14E0B2;
	}
	if (Global_14E0B2 != iParam0)
	{
		Global_14E0B2 = iParam0;
	}
}

int func_225(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x70FD
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_280(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_279();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_278())
		{
			if (func_277() > 0 && Global_18051A)
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
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 26))
	{
		func_258(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_13)))
	{
		if (func_277() == 1)
		{
			func_257(bVar3, iParam0, 0);
			func_7(&(uParam2->f_13), 0, 0);
			func_258(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_26862F.f_11E2), 5);
		}
	}
	if (func_8(&(uParam2->f_13)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_13), 10000, 0) || (func_277() == 0 && !bParam5))
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
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
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
					sVar1 = func_254(iParam1, &(Global_440000.f_1FEE5), bParam4);
					Var0 = { func_252(iParam1) };
					if (bParam4)
					{
						func_249(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 26)
					{
						func_242(iParam0, func_246(uParam2), func_243(uParam2), 4294967295);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_235(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar5 = sParam6;
						}
						func_233(iParam0, sVar5, func_234(), 4294967295);
					}
					else if (func_161())
					{
						uParam2->f_22 = Global_180519;
						func_249(iParam0, sVar1, &Var0, 1, 4294967295, Global_180519, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180519;
						func_249(iParam0, sVar1, "", 0, 4294967295, Global_180519, 1);
					}
					else
					{
						iVar6 = func_226(iParam1);
						func_249(iParam0, sVar1, &Var0, 1, iVar6, 4294967295, 1);
					}
					MISC::SET_BIT(&(uParam2->f_21), 0);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam2->f_21, 0))
			{
				Global_180518 = uParam3;
				Global_180517 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_180519)
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x73CD
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_232())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
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
			if (func_231(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 20;
			}
			if (func_230(CAM::_0xDC9DA9E8789F5246()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_229(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 2;
	}
	if (func_227())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_227()//Position - 0x7519
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_59();
	}
	return func_228(Global_440000.f_1FEDE);
}

int func_228(int iParam0)//Position - 0x753D
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

bool func_229(int iParam0)//Position - 0x7577
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 4;
}

bool func_230(int iParam0)//Position - 0x758C
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

bool func_231(int iParam0)//Position - 0x75A1
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_232()//Position - 0x75B6
{
	return Global_440000.f_1 == 0;
}

void func_233(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x75C6
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_158(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_158("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_234()//Position - 0x7624
{
	switch (func_101(CAM::_0xDC9DA9E8789F5246()))
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

char* func_235(var uParam0)//Position - 0x767B
{
	switch (uParam0->f_70)
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
	switch (uParam0->f_6E)
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
	switch (func_101(CAM::_0xDC9DA9E8789F5246()))
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
			if (func_236(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_236(int iParam0)//Position - 0x7AA6
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

bool func_237(bool bParam0)//Position - 0x7AD8
{
	return func_166(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_238()//Position - 0x7AEA
{
	return (func_241() && func_239(func_240()));
}

bool func_239(int iParam0)//Position - 0x7B03
{
	return func_168(iParam0, 1);
}

int func_240()//Position - 0x7B12
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23;
}

bool func_241()//Position - 0x7B29
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148;
}

void func_242(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x7B3F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_158(sParam1);
		}
		else if (func_171(CAM::_0xDC9DA9E8789F5246()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		func_158("");
		if (iParam3 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

char* func_243(var uParam0)//Position - 0x7BC5
{
	int iVar0;
	
	iVar0 = func_171(CAM::_0xDC9DA9E8789F5246());
	if (func_245())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
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

int func_244()//Position - 0x7D6B
{
	if (func_171(CAM::_0xDC9DA9E8789F5246()) == 133)
	{
		return Global_26862F.f_12C4;
	}
	return 4294967295;
}

bool func_245()//Position - 0x7D8E
{
	return Global_184174;
}

char* func_246(var uParam0)//Position - 0x7D9A
{
	int iVar0;
	
	iVar0 = func_171(CAM::_0xDC9DA9E8789F5246());
	if (func_245())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
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

int func_247()//Position - 0x7F8E
{
	return Global_26862F.f_12C7;
}

int func_248()//Position - 0x7F9D
{
	if (func_171(CAM::_0xDC9DA9E8789F5246()) == 132)
	{
		return Global_26862F.f_12C2;
	}
	return 4294967295;
}

void func_249(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7FC0
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_174(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_158(sParam1);
		}
		if (func_278() && iParam6)
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
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		else
		{
			func_158(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
			if (func_250(CAM::_0xDC9DA9E8789F5246()))
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(166);
			}
			else if (func_59())
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(220);
			}
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_250(int iParam0)//Position - 0x8082
{
	if (func_231(iParam0) || func_230(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_251()//Position - 0x80A4
{
	return Global_18051A;
}

struct<4> func_252(int iParam0)//Position - 0x80B0
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_253(CAM::_0xDC9DA9E8789F5246()) || func_229(CAM::_0xDC9DA9E8789F5246()))
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
			StringIntConCat(&Var0, Global_440000.f_26, 16);
			break;
	}
	if (func_161() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_26, 16);
	}
	return Var0;
}

bool func_253(int iParam0)//Position - 0x814A
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 5;
}

char* func_254(int iParam0, char* sParam1, bool bParam2)//Position - 0x815F
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
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_180607 == 1)
		{
			Global_180607 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_180607 == 0)
		{
			Global_180607 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
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

char* func_255()//Position - 0x82C3
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

void func_256()//Position - 0x8307
{
	Global_90A3 = 1;
}

bool func_257(bool bParam0, int iParam1, bool bParam2)//Position - 0x8313
{
	if (bParam0)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_258(int iParam0, var uParam1, bool bParam2)//Position - 0x8353
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 7);
	Global_180518 = 0;
	func_150();
	Global_180517 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_13)))
		{
			func_151(&(uParam1->f_13));
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11E2), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_21, 0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_21), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_259()//Position - 0x83C5
{
	if (func_276())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (!func_273())
	{
		return 0;
	}
	if (!func_271())
	{
		return 0;
	}
	if (func_270(8, 4294967295))
	{
		return 0;
	}
	if (func_277() == 2)
	{
		return 0;
	}
	if (Global_26862F.f_11B2)
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	else if (!func_266(CAM::_0xDC9DA9E8789F5246(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_265(1) || func_263(1)) || Global_434C.f_7C) || Global_434C)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_262() && Global_19BACA == 2)
	{
		return 0;
	}
	if (func_260(CAM::_0xDC9DA9E8789F5246()) && !func_262())
	{
		return 0;
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (Global_193F15)
	{
		return 0;
	}
	if (func_79(0))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (Global_14C619)
	{
		return 0;
	}
	if ((Global_19A0DD.f_2C1.f_5 || Global_19ABD8.f_2C1.f_5) || Global_199D20.f_2C1.f_5)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)//Position - 0x852D
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_261())
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

bool func_261()//Position - 0x856F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_262()//Position - 0x8580
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_1E, 12) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19BACB, 0));
}

int func_263(bool bParam0)//Position - 0x85A2
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (func_264(AUDIO::_0x0626A247D2405330()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_434C.f_82)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && unk_0xE11F00B4AC919F45(0, 19)))
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
			if (((unk_0xE11F00B4AC919F45(0, 166) || unk_0xE11F00B4AC919F45(0, 167)) || unk_0xE11F00B4AC919F45(0, 168)) || unk_0xE11F00B4AC919F45(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_264(int iParam0)//Position - 0x868D
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_265(bool bParam0)//Position - 0x86EA
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

int func_266(int iParam0, bool bParam1)//Position - 0x8713
{
	if (bParam1)
	{
		if (func_267(iParam0))
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

bool func_267(int iParam0)//Position - 0x873F
{
	return func_268(iParam0);
}

bool func_268(int iParam0)//Position - 0x874D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

bool func_269()//Position - 0x8767
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_270(int iParam0, int iParam1)//Position - 0x877E
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

int func_271()//Position - 0x87B9
{
	if (func_272() == 0)
	{
		return 1;
	}
	return 0;
}

int func_272()//Position - 0x87CE
{
	return Global_1406D2.f_12;
}

int func_273()//Position - 0x87DC
{
	if (func_274())
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

bool func_274()//Position - 0x881B
{
	return Global_1406B6;
}

bool func_275()//Position - 0x8827
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 5;
}

bool func_276()//Position - 0x883C
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_277()//Position - 0x8851
{
	return Global_14E0B5.f_44;
}

int func_278()//Position - 0x885F
{
	if (Global_180519 > 16)
	{
		return 1;
	}
	return 0;
}

float func_279()//Position - 0x8875
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_280(int iParam0)//Position - 0x8899
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

int func_281()//Position - 0x88C2
{
	if (func_282(CAM::_0xDC9DA9E8789F5246()))
	{
		return Global_141784;
	}
	return 0;
}

int func_282(int iParam0)//Position - 0x88DD
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

int func_283()//Position - 0x8900
{
	if (func_281())
	{
		return 1;
	}
	if (func_204(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_245())
	{
		return 1;
	}
	if (func_128(CAM::_0xDC9DA9E8789F5246()))
	{
		switch (func_171(CAM::_0xDC9DA9E8789F5246()))
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
				if (!func_284(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_284(CAM::_0xDC9DA9E8789F5246()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_284(CAM::_0xDC9DA9E8789F5246()))
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

bool func_284(int iParam0)//Position - 0x89DB
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

int func_285(int iParam0)//Position - 0x89F3
{
	if (iParam0 == 27)
	{
		if ((func_128(CAM::_0xDC9DA9E8789F5246()) && !func_139(CAM::_0xDC9DA9E8789F5246())) && !func_170(CAM::_0xDC9DA9E8789F5246(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_102(CAM::_0xDC9DA9E8789F5246(), 0) && func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
		if (func_130(CAM::_0xDC9DA9E8789F5246()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_286()//Position - 0x8A64
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar0 = NETSHOP::_NETWORK_SHOP_BASKET_START();
	}
	else
	{
		iVar0 = func_287();
	}
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_287()//Position - 0x8AA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
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

void func_288()//Position - 0x8AE1
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
				func_289(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_289(int iParam0)//Position - 0x8B1E
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
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_71, iVar7))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_6, iVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6D, iVar7))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_5, iVar7))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar7 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_2[iVar7 /*26*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_110.f_2[iVar7 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == AUDIO::_0x0626A247D2405330())
														{
															if (func_856() == Local_110.f_76)
															{
																MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_5), iVar7);
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
							if (iVar2 == NETWORK::NET_TO_PED(Local_110.f_2[iVar7 /*26*/].f_1))
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
													if (iVar4 == CAM::_0xDC9DA9E8789F5246())
													{
														Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_B++;
														MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_6), iVar7);
														Var6.f_2 = 702987651;
														Var6.f_A = CAM::_0xDC9DA9E8789F5246();
														func_295(Var6, func_296(0));
														func_290("HUNT_TCKP", 1);
													}
												}
											}
											else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7, iVar7))
											{
												if (Var0.f_3)
												{
													iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
													MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7), iVar7);
												}
											}
										}
										else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7, iVar7))
										{
											if (Var0.f_3)
											{
												MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7), iVar7);
											}
										}
									}
									else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7, iVar7))
									{
										if (Var0.f_3)
										{
											MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7), iVar7);
										}
									}
								}
								else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7, iVar7))
								{
									if (Var0.f_3)
									{
										MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_7), iVar7);
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
	if (func_286())
	{
		if (!func_105(CAM::_0xDC9DA9E8789F5246(), 20))
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
									if (iVar4 == CAM::_0xDC9DA9E8789F5246())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
										{
											if (func_179(iVar3, 1))
											{
												if (Local_110.f_76 > 4294967295)
												{
													iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_76));
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

int func_290(char* sParam0, int iParam1)//Position - 0x8E67
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_291(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_291(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x8E93
{
	int iVar0;
	
	if ((!func_294() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_292(iParam2);
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

int func_292(int iParam0)//Position - 0x8F9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_293(iVar0);
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

void func_293(int iParam0)//Position - 0x8FFD
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_294()//Position - 0x9036
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

void func_295(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x9047
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_296(int iParam0)//Position - 0x9074
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
			if (func_956(iVar2, 0, 0))
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

void func_297()//Position - 0x90D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 14))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 14);
		}
		return;
	}
	iVar0 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 14))
	{
		if (Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1 != 0)
		{
			Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_112, 14);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 15))
	{
		MISC::SET_BIT(&iLocal_112, 15);
		func_785();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_111[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_741();
					func_723();
					func_708();
					break;
				
				case 2:
					func_298();
					break;
				
				case 3:
					func_869();
					break;
				}
			}
	}
}

void func_298()//Position - 0x91B8
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
	Var0.f_9 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	iVar1 = NETSHOP::_NETWORK_SHOP_BASKET_START();
	iVar2 = CAM::_0xDC9DA9E8789F5246();
	if (func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar1 = func_287();
		iVar2 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iVar1 /*14*/].f_1, 4))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 9))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1))
			{
				if (iVar1 == Local_110.f_76 || func_856() == Local_110.f_76)
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_707(iVar2);
						iVar4 = func_706(iVar2);
						func_704(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
					}
					if (iVar2 == CAM::_0xDC9DA9E8789F5246())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
						{
							func_603(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							MISC::SET_BIT(&iLocal_112, 6);
						}
						Var0 = func_602();
						Var0.f_1 = func_601();
						func_415(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar2);
						iLocal_132 = PLAYER::GET_MAX_WANTED_LEVEL();
						HUD::_0x14621BB1DF14E2B2(0);
						MISC::SET_BIT(&iLocal_112, 17);
						func_7(&uLocal_133, 0, 0);
					}
				}
				else if (func_286())
				{
					if (func_179(iVar2, 1))
					{
						if (func_130(iVar2) >= 2)
						{
							sVar3 = func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
							iVar4 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
							func_704(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						if (iVar2 == CAM::_0xDC9DA9E8789F5246())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
							{
								func_603(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
								MISC::SET_BIT(&iLocal_112, 6);
							}
							if (func_123(iVar2))
							{
								Var0 = func_414();
								Var0.f_1 = func_413();
							}
							func_415(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_130(iVar2) >= 2)
						{
							sVar3 = func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
							iVar4 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
							func_704(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
						}
						if (iVar2 == CAM::_0xDC9DA9E8789F5246())
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
							{
								func_603(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
								MISC::SET_BIT(&iLocal_112, 6);
							}
							if (func_123(iVar2))
							{
								Var0 = func_414();
								Var0.f_1 = func_413();
							}
							func_415(166, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_112, 9);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3))
			{
				iVar5 = (4 - Local_110.f_73);
				if (iVar1 == Local_110.f_76 || func_856() == Local_110.f_76)
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_407();
						iVar4 = func_706(iVar2);
						func_704(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
					}
					if (iVar2 == CAM::_0xDC9DA9E8789F5246())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
						{
							func_603(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							MISC::SET_BIT(&iLocal_112, 6);
						}
						Var0 = func_602();
						Var0.f_1 = func_601();
						func_415(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
						iVar4 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
						if (iVar5 == 1)
						{
							func_704(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, 4294967295, 4294967295, 2, 4294967295);
						}
						else if (iVar5 > 1)
						{
							func_704(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, 4294967295, 4294967295, 2, 4294967295);
						}
					}
					if (iVar2 == CAM::_0xDC9DA9E8789F5246())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
						{
							func_603(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
							MISC::SET_BIT(&iLocal_112, 6);
						}
						if (func_123(iVar2))
						{
							Var0 = func_414();
							Var0.f_1 = func_413();
						}
						func_415(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
					}
				}
				MISC::SET_BIT(&iLocal_112, 9);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5))
			{
				if (func_366())
				{
					if (func_855())
					{
						if (func_130(iVar2) >= 2)
						{
						}
					}
					else if (func_130(iVar2) >= 2)
					{
						func_332(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, 4294967295, 2, 1);
					}
				}
				if (iVar2 == CAM::_0xDC9DA9E8789F5246())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
					{
						func_603(0, 8, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
						MISC::SET_BIT(&iLocal_112, 6);
					}
					func_415(166, 0, &Var0, 0);
				}
				MISC::SET_BIT(&iLocal_112, 9);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 9))
		{
			func_785();
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 8))
			{
				func_318();
				func_73();
				MISC::SET_BIT(&iLocal_113, 8);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 10))
			{
			}
			if (func_299(&uLocal_120, 0, 0))
			{
				if (iVar1 == NETSHOP::_NETWORK_SHOP_BASKET_START())
				{
					MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1), 4);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
			{
				if (func_6(&uLocal_133, 10000, 0))
				{
					HUD::_0x14621BB1DF14E2B2(iLocal_132);
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 17);
				}
			}
		}
	}
}

int func_299(var uParam0, bool bParam1, int iParam2)//Position - 0x96B7
{
	bool bVar0;
	
	func_106(29);
	if ((*uParam0 > 0 && !func_218()) && func_130(CAM::_0xDC9DA9E8789F5246()) != 0)
	{
		if (!func_315())
		{
			func_314();
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
				MISC::SET_BIT(&(Global_196EED.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_26862F.f_11DE), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_313(uParam0, 1);
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
				func_306(iParam2);
				func_313(uParam0, 2);
			}
			break;
		
		case 2:
			func_306(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_300(func_301(0)))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_313(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 2);
				func_313(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 2);
			return 1;
	}
	return 0;
}

int func_300(char* sParam0)//Position - 0x9831
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_301(int iParam0)//Position - 0x9844
{
	if (((func_304(CAM::_0xDC9DA9E8789F5246()) || func_303(CAM::_0xDC9DA9E8789F5246())) || func_238()) || iParam0)
	{
		if (func_303(CAM::_0xDC9DA9E8789F5246()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_209(func_302()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_302()//Position - 0x98A6
{
	return Global_19135D;
}

bool func_303(int iParam0)//Position - 0x98B2
{
	return func_210(func_101(iParam0), 0);
}

bool func_304(int iParam0)//Position - 0x98C5
{
	return func_305(func_101(iParam0));
}

int func_305(int iParam0)//Position - 0x98D7
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148 && func_168(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_23, 1))
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

void func_306(int iParam0)//Position - 0x99B9
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11DE, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_310, 2)) && func_956(CAM::_0xDC9DA9E8789F5246(), 1, 1)) && !Global_10B8E) && !Global_D072) && !CAM::IS_SCREEN_FADED_OUT()) && !func_105(CAM::_0xDC9DA9E8789F5246(), 22)) && func_130(CAM::_0xDC9DA9E8789F5246()) != 0) && !func_311(func_312())) && !func_304(CAM::_0xDC9DA9E8789F5246())) && !func_310(func_101(CAM::_0xDC9DA9E8789F5246()))) && !func_309(func_101(CAM::_0xDC9DA9E8789F5246())))
		{
			MISC::SET_BIT(&(Global_26862F.f_11DE), 1);
			func_308(func_301(iParam0), 4294967295);
			func_307(1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DE), 0);
		}
	}
}

void func_307(int iParam0)//Position - 0x9A9D
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_237(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_218())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Boss_Message_Orange", sVar0, false);
	}
}

void func_308(char* sParam0, int iParam1)//Position - 0x9AD4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_309(int iParam0)//Position - 0x9AEB
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

int func_310(int iParam0)//Position - 0x9B41
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

int func_311(int iParam0)//Position - 0x9B91
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

int func_312()//Position - 0x9BB7
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

void func_313(var uParam0, int iParam1)//Position - 0xA142
{
	*uParam0 = iParam1;
}

void func_314()//Position - 0xA14F
{
	Global_258852 = 1;
}

int func_315()//Position - 0xA15C
{
	if (((((((func_101(CAM::_0xDC9DA9E8789F5246()) == 170 || func_101(CAM::_0xDC9DA9E8789F5246()) == 219) || func_101(CAM::_0xDC9DA9E8789F5246()) == 221) || func_101(CAM::_0xDC9DA9E8789F5246()) == 220) || func_101(CAM::_0xDC9DA9E8789F5246()) == 216) || func_101(CAM::_0xDC9DA9E8789F5246()) == 215) || func_101(CAM::_0xDC9DA9E8789F5246()) == 214) || func_101(CAM::_0xDC9DA9E8789F5246()) == 218)
	{
		return 1;
	}
	if (func_316(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0)//Position - 0xA1FD
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_317(int iParam0)//Position - 0xA243
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
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

void func_318()//Position - 0xA59D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_127[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_127[iVar0]));
		}
		iVar0++;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 18))
	{
		func_331(1);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 18);
	}
	func_328();
	func_319();
}

void func_319()//Position - 0xA5F2
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 7))
	{
		MISC::SET_BIT(&iLocal_112, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != CAM::_0xDC9DA9E8789F5246())
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_8, iVar0))
					{
						func_326(iVar1, 432, 0, 0);
						func_320(iVar1, func_325(iLocal_130), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_320(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xA669
{
	var uVar0;
	
	if (func_322(iParam0))
	{
		return;
	}
	if (func_321(&(Global_24DCF5.f_266[iParam0]), &(Global_24DCF5.f_3D1[iParam0]), &(Global_24DCF5.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1C1[iParam0] = uParam1;
		}
	}
}

int func_321(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0xA6BB
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
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam4))
			{
				*uParam6 = 1;
				GRAPHICS::_0x35FB78DC42B7BD21(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = 4294967295;
			}
			*uParam0 = 4294967295;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_322(int iParam0)//Position - 0xA780
{
	if (iParam0 == func_63())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_323())
	{
		return 1;
	}
	return 0;
}

int func_323()//Position - 0xA7A9
{
	switch (func_324())
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

int func_324()//Position - 0xA7DD
{
	return Global_6373;
}

int func_325(int iParam0)//Position - 0xA7E8
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

void func_326(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xAA50
{
	bool bVar0;
	
	if (func_322(iParam0))
	{
		return;
	}
	if (func_321(&(Global_24DCF5.f_245[iParam0]), &(Global_24DCF5.f_3B0[iParam0]), &(Global_24DCF5.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCF5.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_327();
		}
	}
}

void func_327()//Position - 0xAAAB
{
	Global_24DCF5.f_5E4 = 1;
}

void func_328()//Position - 0xAABB
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 16))
	{
		func_84();
		func_329();
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 16);
	}
}

void func_329()//Position - 0xAAE0
{
	if (Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_330();
	}
}

void func_330()//Position - 0xAAF9
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		if (!Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = 3212836864;
	Global_24D471 = { Var0 };
	Global_24D471.f_6 = 4294967295;
}

void func_331(bool bParam0)//Position - 0xAB56
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_132())
		{
			if (func_956(CAM::_0xDC9DA9E8789F5246(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(AUDIO::_0x0626A247D2405330(), 1);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 342, false);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(true);
			if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
			{
				Global_1406A0.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_956(CAM::_0xDC9DA9E8789F5246(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(AUDIO::_0x0626A247D2405330(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 342, true);
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), 0.5f);
				if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			unk_0x6CF2954DEC49C61F(1);
			unk_0xEF791AEFDDE09A3D(false);
		}
	}
}

int func_332(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAC4F
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
	func_365(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_333(&Var0);
}

int func_333(var uParam0)//Position - 0xACBF
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252F9E.f_BD2)
		{
			return 0;
		}
	}
	func_343(uParam0, uParam0->f_11);
	func_342(uParam0);
	if (func_59())
	{
		func_342(uParam0);
	}
	if (func_341(uParam0->f_1))
	{
		func_334();
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
				func_334();
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
				if (func_221(Global_252F9E.f_A90[iVar0 /*80*/].f_1))
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

void func_334()//Position - 0xAE90
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
	func_335();
	if (bVar0)
	{
		Global_11731 = 0;
	}
}

void func_335()//Position - 0xAEC3
{
	Global_252F9E.f_BD4 = 0;
	Global_252F9E.f_BD4.f_242 = 0;
	func_339(&(Global_252F9E.f_BD4.f_1));
	Global_252F9E.f_BD4.f_1.f_1 = 0;
	func_336(&(Global_252F9E.f_BD4.f_1));
}

void func_336(var uParam0)//Position - 0xAF04
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
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_234 = 0;
	}
	if (!Global_11731)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_11732)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_338(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_337(0);
}

void func_337(int iParam0)//Position - 0xAFAB
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_338(bool bParam0)//Position - 0xAFBF
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_339(var uParam0)//Position - 0xAFEA
{
	func_340(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_340(var uParam0)//Position - 0xB014
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

int func_341(int iParam0)//Position - 0xB093
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_342(var uParam0)//Position - 0xB195
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_48 = func_184();
	}
}

void func_343(var uParam0, int iParam1)//Position - 0xB1B0
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_63() || !func_956(iParam1, 0, 1))
	{
		return;
	}
	if (func_221(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_344(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_344(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB207
{
	int iVar0;
	int iVar1;
	
	if (func_260(iParam0) && !bParam4)
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
	if (((func_260(CAM::_0xDC9DA9E8789F5246()) || (func_364() && func_363())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_362();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_956(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_360(iParam1, iParam0, 0);
							}
							else
							{
								return func_355(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_355(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_360(iParam1, iParam0, 0);
				}
				else
				{
					return func_345(0, 4294967295, 0);
				}
			}
			else
			{
				return func_345(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_360(iParam1, iParam0, 0);
		}
		else
		{
			return func_355(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_355(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_345(bool bParam0, int iParam1, bool bParam2)//Position - 0xB3E7
{
	return func_346(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_346(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xB3FD
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_353() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_352(iParam2, iVar0);
		}
		else
		{
			return func_352(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_351(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_350(1);
				}
				else
				{
					return func_350(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_347(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_347(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_350(1);
	}
	return func_350(0);
}

int func_347(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB4F1
{
	int iVar0;
	
	iVar0 = func_349(iParam0, iParam1, iParam3);
	if (func_348(Global_440000.f_1FEDE, 1))
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

int func_348(int iParam0, bool bParam1)//Position - 0xB609
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

int func_349(int iParam0, int iParam1, int iParam2)//Position - 0xB65A
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
			if (!func_351(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_350(bool bParam0)//Position - 0xB6A1
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_351(int iParam0, int iParam1, int iParam2)//Position - 0xB6B8
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

int func_352(int iParam0, int iParam1)//Position - 0xB883
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_349(iParam1, iParam0, 4);
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

int func_353()//Position - 0xB8D1
{
	if (func_354() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_354()//Position - 0xB8EE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_355(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB906
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
			if (func_358(1))
			{
				iVar3 = func_183(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_181(iVar3);
				}
			}
			if ((func_357(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_351(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_350(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_356(1);
			}
			else
			{
				return func_346(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_350(1);
			}
			else
			{
				return func_346(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_183(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_181(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_356(bool bParam0)//Position - 0xBAAA
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_357(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBAC1
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

int func_358(int iParam0)//Position - 0xBB39
{
	if ((func_162() || func_359()) || (func_59() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_359()//Position - 0xBB68
{
	return Global_255C02.f_F;
}

int func_360(int iParam0, int iParam1, bool bParam2)//Position - 0xBB76
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_358(1))
	{
		iVar2 = func_183(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_181(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_63())
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
			iVar0 = func_346(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_361(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_351(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_356(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_361(int iParam0)//Position - 0xBD04
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

var func_362()//Position - 0xBDD9
{
	return Global_240006.f_2;
}

bool func_363()//Position - 0xBDE7
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_364()//Position - 0xBDF8
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

void func_365(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0xBE15
{
	uParam1->f_11 = func_63();
	uParam1->f_12 = func_63();
	uParam1->f_13 = func_63();
	uParam1->f_14 = func_63();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

int func_366()//Position - 0xBE91
{
	int iVar0;
	
	if (!func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (!func_367(1, 1, 1))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1, 6))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_133())
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1, 6))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1, 6))
		{
			MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_287();
		if (iVar0 == 4294967295)
		{
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_367(bool bParam0, bool bParam1, bool bParam2)//Position - 0xBF54
{
	if (func_406(CAM::_0xDC9DA9E8789F5246(), 29))
	{
		return 0;
	}
	if (func_117(CAM::_0xDC9DA9E8789F5246(), 21))
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
	if (!func_203(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_405(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_404())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_267(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!func_271())
	{
		return 0;
	}
	if (func_117(CAM::_0xDC9DA9E8789F5246(), 0) || func_117(CAM::_0xDC9DA9E8789F5246(), 3))
	{
		return 0;
	}
	if ((func_117(CAM::_0xDC9DA9E8789F5246(), 12) || func_117(CAM::_0xDC9DA9E8789F5246(), 14)) || func_117(CAM::_0xDC9DA9E8789F5246(), 13))
	{
		return 0;
	}
	if (func_399(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_374())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_373())
		{
			return 0;
		}
	}
	if (Global_193F0F)
	{
		return 0;
	}
	if (func_372(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_371())
	{
		return 0;
	}
	if (func_370(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (func_369())
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_16, 4))
	{
		return 0;
	}
	if (func_368(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_368(int iParam0)//Position - 0xC0FD
{
	if (Global_24FBF9[iParam0 /*413*/].f_105.f_4 != 0 || Global_24FBF9[iParam0 /*413*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_369()//Position - 0xC131
{
	return Global_197632.f_D1F != 4294967295;
}

int func_370(int iParam0)//Position - 0xC142
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 14))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11))
	{
		return 1;
	}
	return 0;
}

int func_371()//Position - 0xC181
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0)//Position - 0xC199
{
	if (!func_956(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

bool func_373()//Position - 0xC1BC
{
	return Global_16C64.f_148 > 0;
}

int func_374()//Position - 0xC1CD
{
	int iVar0;
	
	iVar0 = func_101(CAM::_0xDC9DA9E8789F5246());
	if (((func_398(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_18) || func_397(CAM::_0xDC9DA9E8789F5246())) || func_396(CAM::_0xDC9DA9E8789F5246())) || func_391(CAM::_0xDC9DA9E8789F5246()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_389(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_388(iVar0) || func_387(iVar0))
		{
			return 1;
		}
	}
	if (func_316(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_387(iVar0))
		{
			return 1;
		}
	}
	if (func_386(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_385(iVar0))
		{
			return 1;
		}
	}
	if (func_384(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_383(iVar0))
		{
			return 1;
		}
	}
	if (func_382(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_381(iVar0))
		{
			return 1;
		}
	}
	if (func_380(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_379(iVar0))
		{
			return 1;
		}
	}
	if (func_378(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (func_377(iVar0))
		{
			if (func_375(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)//Position - 0xC30E
{
	if (func_376(iParam0) != func_63())
	{
		return func_376(iParam0) == func_64(iParam0);
	}
	return 0;
}

int func_376(int iParam0)//Position - 0xC334
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_23;
}

int func_377(int iParam0)//Position - 0xC349
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

int func_378(int iParam0, bool bParam1)//Position - 0xC381
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_63())
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)//Position - 0xC40F
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

int func_380(int iParam0)//Position - 0xC43B
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)//Position - 0xC482
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_382(int iParam0)//Position - 0xC49C
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)//Position - 0xC4E3
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

int func_384(int iParam0)//Position - 0xC503
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_385(int iParam0)//Position - 0xC549
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

int func_386(int iParam0)//Position - 0xC56F
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)//Position - 0xC5B5
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

int func_388(int iParam0)//Position - 0xC5DB
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

int func_389(int iParam0)//Position - 0xC631
{
	if (func_390(Global_1841F3[iParam0 /*790*/].f_111.f_18, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0, int iParam1)//Position - 0xC654
{
	if (iParam1 == 4294967295)
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

int func_391(int iParam0)//Position - 0xC731
{
	if (func_392(Global_1841F3[iParam0 /*790*/].f_111.f_18, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0, bool bParam1, bool bParam2)//Position - 0xC755
{
	if (bParam2)
	{
		return func_393(CAM::_0xDC9DA9E8789F5246(), 0);
	}
	if (bParam1)
	{
		if (func_393(CAM::_0xDC9DA9E8789F5246(), 0))
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

bool func_393(int iParam0, bool bParam1)//Position - 0xC830
{
	if (Global_184156 != func_63())
	{
		if (!func_395(Global_184156))
		{
			return 0;
		}
		if (bParam1)
		{
			if (CAM::_0xDC9DA9E8789F5246() != Global_184156)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[Global_184156 /*413*/].f_C3, 24) || func_394(Global_184156))
				{
					return 1;
				}
			}
		}
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 24);
}

int func_394(int iParam0)//Position - 0xC89C
{
	if (iParam0 != func_63())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 9);
	}
	return 0;
}

int func_395(int iParam0)//Position - 0xC8C2
{
	if (iParam0 != func_63())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 2);
	}
	return 0;
}

int func_396(int iParam0)//Position - 0xC8EE
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_397(int iParam0)//Position - 0xC934
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_398(int iParam0)//Position - 0xC97A
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

int func_399(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0xC9A9
{
	if (Global_1841F3[iParam0 /*790*/].f_111.f_18 > 0)
	{
		if (bParam1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
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
		if (func_397(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_316(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_396(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_386(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_384(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_402(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_380(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_401(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_378(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_400(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0)//Position - 0xCABC
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_401(int iParam0)//Position - 0xCB03
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)//Position - 0xCB4A
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_63())
			{
				return func_317(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

bool func_403()//Position - 0xCBAA
{
	return Global_140859;
}

bool func_404()//Position - 0xCBB6
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

int func_405(int iParam0)//Position - 0xCBD2
{
	if (func_266(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_406(int iParam0, int iParam1)//Position - 0xCBF6
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

char* func_407()//Position - 0xCC11
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_64(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 != func_63())
	{
		if (iVar0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (((func_105(iVar0, 28) || func_105(CAM::_0xDC9DA9E8789F5246(), 28)) || func_412(iVar0)) && !func_411(iVar0))
			{
				return func_409(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_409(iVar0, 0);
			}
		}
		sVar1 = func_408(&(Global_18CD5B[iVar0 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_409(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_408(var uParam0)//Position - 0xCCC1
{
	return uParam0;
}

char* func_409(int iParam0, bool bParam1)//Position - 0xCCCB
{
	if (!bParam1)
	{
		if (func_166(iParam0, 1))
		{
			return func_410();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_410()//Position - 0xCCF2
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_411(int iParam0)//Position - 0xCD02
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

int func_412(int iParam0)//Position - 0xCD32
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

int func_413()//Position - 0xCD8B
{
	return ((4 - Local_110.f_73) * Global_40001.f_3C1F);
}

int func_414()//Position - 0xCDA1
{
	return ((4 - Local_110.f_73) * Global_40001.f_3C1E);
}

void func_415(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xCDB7
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
	
	func_599(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_40001.f_46E7);
		}
		else
		{
			iVar1 = (iVar1 + func_598(iParam0, uParam2->f_D));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_597(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_40001.f_46E6);
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
	if (uParam2->f_12 > 4294967295)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > 4294967295)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_595(iParam0))
	{
		if (bParam1)
		{
			if (func_594(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				func_593();
			}
			else
			{
				func_592();
			}
		}
		else
		{
			func_591();
		}
	}
	func_575(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_573(iParam0, uParam2, &iVar0, &iVar5);
	func_551(iParam0, uParam2, &iVar0, &iVar5);
	func_537(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_520(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26862F.f_1313.f_175 = iVar4;
	}
	else
	{
		Global_26862F.f_1313.f_175 = iVar5;
	}
	iVar8 = func_240();
	if (iVar8 != func_63() && iParam0 != 148)
	{
		if (func_179(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			if (!func_74(CAM::_0xDC9DA9E8789F5246(), iVar8, 1))
			{
				func_509(&iVar0, 1);
			}
		}
	}
	func_505(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_196EF6.f_A = iVar1;
		func_504();
		func_461(0, AUDIO::_0x0626A247D2405330(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_196EF6.f_9 = iVar0;
		iVar13 = func_460();
		if (iVar13 != func_63())
		{
			func_459(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_458(1);
		if (iParam0 == 168)
		{
			if (!func_457())
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_456())
			{
				if (!func_457())
				{
					Var15 = { func_455() };
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_454(Var15)), func_453(Var15), iVar5);
				}
			}
			else if (func_457())
			{
				func_441(3438960429, iVar0, &iVar16, 0, 1, 0);
				Global_410C0F[iVar16 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar16 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar16 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_440())
			{
				if (!func_457())
				{
					unk_0x7C78EDD3BFB2E833(iVar0, MISC::GET_HASH_KEY(func_454(func_439(CAM::_0xDC9DA9E8789F5246()))), 5, iVar5);
				}
			}
			else if (func_457())
			{
				func_441(3438960429, iVar0, &iVar17, 0, 1, 0);
				Global_410C0F[iVar17 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar17 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar17 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_440())
			{
				if (!func_457())
				{
					iVar18 = func_435(uParam2->f_10, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0xB6DC534CAEB0D937(iVar19, iVar5, iVar7, iVar18, uParam2->f_10);
				}
			}
			else if (func_457())
			{
				func_441(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_410C0F[iVar20 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar20 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar20 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xACD5CE18E734968D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_457())
			{
				func_441(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_410C0F[iVar21 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar21 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar21 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x02A33E5F88B092E3(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_440())
			{
				if (!func_457())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_14, iVar5);
				}
			}
			else if (func_457())
			{
				func_441(3438960429, iVar0, &iVar22, 0, 1, 0);
				Global_410C0F[iVar22 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar22 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar22 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_457())
			{
				func_441(3333932415, iVar0, &iVar23, 0, 1, 0);
				Global_410C0F[iVar23 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar23 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar23 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x70275A5DEC872CA2(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_457())
			{
				func_441(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_410C0F[iVar24 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar24 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar24 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF03B782EEA848691(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_457())
			{
				func_441(3660240660, iVar0, &iVar25, 0, 1, 0);
				Global_410C0F[iVar25 /*80*/].f_6 = uVar11;
				Global_410C0F[iVar25 /*80*/].f_7 = uVar12;
				Global_410C0F[iVar25 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_457())
		{
			func_441(3438960429, iVar0, &iVar26, 0, 1, 0);
			Global_410C0F[iVar26 /*80*/].f_6 = uVar11;
			Global_410C0F[iVar26 /*80*/].f_7 = uVar12;
			Global_410C0F[iVar26 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0xECDF3A47BBA3F980(uVar11, uVar12, iVar0, bVar14);
		}
		func_434(iParam0, iVar0);
		if (func_433(iParam0))
		{
			if (func_432(iParam0) > 4294967295)
			{
				func_431(func_432(iParam0), iVar0);
			}
		}
		Global_258AE3 = iVar0;
		func_430(&Global_25841E, 0, 0);
	}
	if (func_120(CAM::_0xDC9DA9E8789F5246()) || func_139(CAM::_0xDC9DA9E8789F5246()))
	{
		func_421(iParam0);
	}
	if (func_305(iParam0))
	{
		Global_196F08.f_D = iVar0;
		Global_196F08.f_E = iVar1;
	}
	if (func_310(iParam0))
	{
		Global_196F3E.f_D = iVar0;
		Global_196F3E.f_E = iVar1;
	}
	if (func_385(iParam0))
	{
		Global_196F7D.f_C = iVar0;
		Global_196F7D.f_D = iVar1;
	}
	if (func_383(iParam0))
	{
		Global_196FA9.f_C = iVar0;
		Global_196FA9.f_D = iVar1;
	}
	if (func_381(iParam0))
	{
		Global_196FDF.f_C = iVar0;
		Global_196FDF.f_D = iVar1;
	}
	if (func_309(iParam0))
	{
		if (func_420(iParam0))
		{
			Global_197030.f_C = iVar0;
			Global_197030.f_D = iVar1;
		}
		else if (func_416(iParam0))
		{
			Global_197065.f_C = iVar0;
			Global_197065.f_D = iVar1;
		}
	}
}

int func_416(int iParam0)//Position - 0xD577
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_417(func_418(CAM::_0xDC9DA9E8789F5246()))))
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0)//Position - 0xD600
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

int func_418(int iParam0)//Position - 0xD638
{
	if (func_101(iParam0) == 237 || func_101(iParam0) == 250)
	{
		return func_419(iParam0);
	}
	return 4294967295;
}

int func_419(int iParam0)//Position - 0xD665
{
	if (func_102(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_B0;
	}
	return 4294967295;
}

int func_420(int iParam0)//Position - 0xD688
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_421(int iParam0)//Position - 0xD69C
{
	if (func_429(CAM::_0xDC9DA9E8789F5246()) && func_456())
	{
		if (func_388(iParam0))
		{
			func_424(8657, 4294967295);
		}
		else if (func_423(iParam0))
		{
			func_424(8659, 4294967295);
		}
		else if (func_210(iParam0, 1))
		{
			func_424(8660, 4294967295);
		}
		else if (func_422(iParam0))
		{
			func_424(8661, 4294967295);
		}
	}
}

int func_422(int iParam0)//Position - 0xD706
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

int func_423(int iParam0)//Position - 0xD732
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

void func_424(int iParam0, int iParam1)//Position - 0xD75E
{
	int iVar0;
	
	iVar0 = func_428(iParam0, func_138(iParam1), 0);
	iVar0++;
	if (!func_427(iParam0))
	{
		func_426(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_425(iParam0, iVar0, iParam1, 1);
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD79F
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_138(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_138(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_138(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_138(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_138(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_138(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_138(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_138(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_138(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_138(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_138(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_138(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_138(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_138(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_138(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_138(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_138(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_138(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_138(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_138(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_138(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_138(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_138(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_138(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_138(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_138(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_138(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_138(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_138(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_138(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_138(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_138(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_426(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xDFAA
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_427(int iParam0)//Position - 0xDFDA
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

int func_428(int iParam0, int iParam1, int iParam2)//Position - 0xE1E4
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_138(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_429(int iParam0)//Position - 0xE216
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_73, 14);
}

void func_430(var uParam0, bool bParam1, bool bParam2)//Position - 0xE23C
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

void func_431(int iParam0, int iParam1)//Position - 0xE279
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5B34 == 0 || Global_40001.f_5B34 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_40001.f_5B34 == 1)
			{
				Global_26862F.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1949)
				{
					iParam1 = Global_40001.f_1949;
				}
				Global_26862F.f_111 = iParam1;
				Global_26862F.f_112 = 0;
			}
		}
	}
}

int func_432(int iParam0)//Position - 0xE2EB
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

int func_433(int iParam0)//Position - 0xE3CC
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

void func_434(int iParam0, int iParam1)//Position - 0xE434
{
	if (func_429(CAM::_0xDC9DA9E8789F5246()) && func_456())
	{
		if (func_388(iParam0) && iParam1 > 0)
		{
			func_426(8658, (func_428(8658, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

int func_435(int iParam0, int iParam1)//Position - 0xE478
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_438(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_436(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_436(int iParam0, int iParam1)//Position - 0xE4A1
{
	return (func_437(iParam0) * iParam1);
}

int func_437(int iParam0)//Position - 0xE4B2
{
	switch (iParam0)
	{
		case 8:
			return Global_40001.f_569E;
		
		case 0:
			return Global_40001.f_569F;
		
		case 1:
			return Global_40001.f_56A0;
		
		case 2:
			return Global_40001.f_56A1;
		
		case 3:
			return Global_40001.f_56A2;
		
		case 4:
			return Global_40001.f_56A3;
		
		case 5:
			return Global_40001.f_56A4;
		
		case 6:
			return Global_40001.f_56A5;
		
		case 7:
			return Global_40001.f_56A6;
		
		default:
	}
	return 0;
}

float func_438(int iParam0, int iParam1)//Position - 0xE552
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A8);
	switch (iParam0)
	{
		case 4294967295:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_40001.f_56AA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A7);
			break;
		
		case 3:
			fVar0 = Global_40001.f_56AA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A7);
			break;
		
		case 0:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 1:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 4:
			fVar0 = Global_40001.f_56AB;
			break;
		
		case 6:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
		
		case 2:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
		
		case 5:
			fVar0 = Global_40001.f_56AC;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_56A9);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_439(int iParam0)//Position - 0xE66A
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_111.f_AE[5 /*12*/];
}

bool func_440()//Position - 0xE690
{
	return func_119(CAM::_0xDC9DA9E8789F5246());
}

void func_441(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE6A0
{
	int iVar0;
	
	if (!func_457())
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
				func_442(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_442(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_442(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_442(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_442(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xEC0D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_457())
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
			*uParam0 = func_449(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_448(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_443(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_443(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEDB8
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_444(iParam0);
	}
}

void func_444(int iParam0)//Position - 0xEDF0
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_457())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_447(iParam0))
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
		func_445(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_445(var uParam0)//Position - 0xEE44
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
	func_446(&(uParam0->f_D));
	func_446(&(uParam0->f_D.f_D));
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

void func_446(var uParam0)//Position - 0xEF47
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

int func_447(int iParam0)//Position - 0xEF8F
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_448(int iParam0, int iParam1)//Position - 0xEFB9
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xEFCD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_457())
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
				func_450(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_450(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xF109
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
	iVar1 = func_452(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_451();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_451()//Position - 0xF19B
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_452(int iParam0)//Position - 0xF1AB
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_453(int iParam0)//Position - 0xF1BD
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
	return 4294967295;
}

char* func_454(int iParam0)//Position - 0xF303
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

struct<2> func_455()//Position - 0xF4E5
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_BC;
}

bool func_456()//Position - 0xF4FE
{
	return func_239(CAM::_0xDC9DA9E8789F5246());
}

int func_457()//Position - 0xF50E
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_458(bool bParam0)//Position - 0xF525
{
	return func_179(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

void func_459(int iParam0, var uParam1, var uParam2)//Position - 0xF537
{
	*uParam1 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
	*uParam2 = Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_460()//Position - 0xF565
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

int func_461(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xF57A
{
	return func_462(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_462(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xF59C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_472(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_468(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_463(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_463(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xF615
{
	vector3 vVar0;
	
	vVar0 = { func_466(iParam0, 1) };
	if (iParam0 == func_465(AUDIO::_0x0626A247D2405330()))
	{
		func_464(1);
	}
	func_468(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_464(int iParam0)//Position - 0xF649
{
	Global_252F9E.f_75E = iParam0;
}

int func_465(int iParam0)//Position - 0xF65A
{
	return iParam0;
}

Vector3 func_466(int iParam0, bool bParam1)//Position - 0xF664
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
	if (iParam0 == func_467(AUDIO::_0x0626A247D2405330()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
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

int func_467(int iParam0)//Position - 0xF728
{
	return iParam0;
}

void func_468(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xF732
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
			Global_252F9E.f_505[iVar1 /*30*/].f_4 = func_471(Global_252F9E.f_505[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252F9E.f_505[iVar1 /*30*/].f_7 = HUD::_0x13C4B962653A5280();
			Global_252F9E.f_505[iVar1 /*30*/].f_3 = iParam1;
			Global_252F9E.f_505[iVar1 /*30*/].f_8 = iParam2;
			Global_252F9E.f_505[iVar1 /*30*/].f_9 = func_470();
			Global_252F9E.f_505[iVar1 /*30*/].f_A = func_469();
			StringCopy(&(Global_252F9E.f_505[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252F9E.f_505[iVar1 /*30*/].f_1A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam4);
		}
	}
}

int func_469()//Position - 0xF849
{
	if (Global_252F9E.f_75E)
	{
		Global_252F9E.f_75E = 0;
		return 1;
	}
	Global_252F9E.f_75E = 0;
	return 0;
}

var func_470()//Position - 0xF873
{
	var uVar0;
	
	uVar0 = Global_252F9E.f_760;
	Global_252F9E.f_760 = 1;
	return uVar0;
}

float func_471(vector3 vParam0, var uParam1, var uParam2)//Position - 0xF88E
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

var func_472(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xF927
{
	var uVar0;
	
	uVar0 = func_473(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_473(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xF94A
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_503(CAM::_0xDC9DA9E8789F5246()) || func_502(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_227() || func_501(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_500(sParam2))
	{
	}
	if (func_499())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_497(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_496(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_494(0, &iVar1);
					break;
				
				case 3:
					func_494(1, &iVar1);
					break;
				
				case 1:
					func_492(&iVar1);
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
			func_491(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_483((func_490(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_491(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_478(iVar1);
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
				func_474((func_476(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_474((func_476(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_474(int iParam0)//Position - 0xFB48
{
	if (func_499())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_475(joaat("mpply_globalxp"), iParam0);
	}
}

void func_475(int iParam0, int iParam1)//Position - 0xFB73
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_476(int iParam0)//Position - 0xFB8F
{
	if (iParam0 > 4294967295)
	{
		if (func_956(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_477(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_477(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_477(int iParam0)//Position - 0xFBE0
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

void func_478(int iParam0)//Position - 0xFBFE
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_65(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_481(func_482(&Var0));
			if (iVar1 == 0)
			{
				func_480(&Global_150A08, iParam0);
				func_479(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_480(&Global_150A09, iParam0);
				func_479(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_480(&Global_150A0A, iParam0);
				func_479(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_480(&Global_150A0B, iParam0);
				func_479(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_480(&Global_150A0C, iParam0);
				func_479(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_479(int iParam0, int iParam1)//Position - 0xFCD2
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

void func_480(var uParam0, int iParam1)//Position - 0xFDF7
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_481(int iParam0)//Position - 0xFE08
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

int func_482(var uParam0)//Position - 0xFE65
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

void func_483(int iParam0, int iParam1, int iParam2)//Position - 0xFE88
{
	if (func_499())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_138(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_138(4294967295)])
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
		if (func_489(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_487(iParam0, 1);
		}
		func_425(639, iParam0, 4294967295, 1);
		func_426(640, func_487(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_138(4294967295)] = iParam0;
		func_484(7, 0);
	}
}

void func_484(int iParam0, int iParam1)//Position - 0xFFA9
{
	int iVar0;
	
	if (func_486(iParam0, iParam1))
	{
		iVar0 = func_485();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_485()//Position - 0xFFCC
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

int func_486(int iParam0, var uParam1)//Position - 0x10003
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

int func_487(int iParam0, bool bParam1)//Position - 0x10089
{
	if (bParam1)
	{
	}
	return func_488(iParam0, 0);
}

int func_488(int iParam0, int iParam1)//Position - 0x1009D
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

int func_489(int iParam0)//Position - 0x1015C
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

int func_490(int iParam0)//Position - 0x10181
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_138(4294967295)];
			}
			else if (func_489(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_138(4294967295)];
	}
	return 0;
}

void func_491(int iParam0, int iParam1, int iParam2)//Position - 0x101DE
{
	int iVar0;
	
	iVar0 = func_428(iParam0, func_138(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_427(iParam0))
	{
		func_426(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_425(iParam0, iVar0, iParam2, 1);
	}
}

void func_492(int iParam0)//Position - 0x10220
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_351(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_66(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_493(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_493(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_493(int iParam0, int iParam1)//Position - 0x1030B
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_494(bool bParam0, int iParam1)//Position - 0x1032C
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
				if (func_956(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_66(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_956(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_495(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_66(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_493(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_493(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_495(int iParam0, int iParam1)//Position - 0x10444
{
	return SYSTEM::VDIST(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_496(int iParam0)//Position - 0x10460
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_493(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_497(int iParam0)//Position - 0x10497
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_490(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_490(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_498(8000, 0, 0) > 0)
	{
		if (func_498(8000, 0, 0) < (iParam0 + func_490(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_498(8000, 0, 0) - func_490(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_498(int iParam0, bool bParam1, int iParam2)//Position - 0x104FB
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

int func_499()//Position - 0x10523
{
	return 1;
}

int func_500(char* sParam0)//Position - 0x1052C
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

int func_501(int iParam0)//Position - 0x10564
{
	return func_381(func_101(iParam0));
}

bool func_502(int iParam0)//Position - 0x10576
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_503(int iParam0)//Position - 0x1058B
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_504()//Position - 0x105A0
{
	Global_258851 = 1;
}

void func_505(int iParam0, var uParam1, var uParam2)//Position - 0x105AD
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
	iVar0 = func_508(iParam0);
	iVar1 = func_507(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_26862F.f_1313.f_103, HUD::_0x13C4B962653A5280()));
	if (func_506(iParam0) != 4294967295)
	{
		if (iVar2 > func_506(iParam0))
		{
			iVar2 = func_506(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_2FFA)
	{
		iVar2 = Global_40001.f_2FFA;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_506(int iParam0)//Position - 0x10657
{
	if (func_210(iParam0, 0) || func_423(iParam0))
	{
		return Global_40001.f_47B4;
	}
	if (func_388(iParam0))
	{
		return Global_40001.f_47B3;
	}
	switch (iParam0)
	{
		case 192:
			return Global_40001.f_47B0;
		
		case 191:
			return Global_40001.f_47B2;
		
		case 190:
			return Global_40001.f_47B1;
		
		case 227:
			return Global_40001.f_51AF;
		
		case 226:
			return Global_40001.f_51A3;
		
		case 225:
			return Global_40001.f_51B7;
		
		case 230:
			return Global_40001.f_569B;
		
		case 229:
			return Global_40001.f_563B;
		
		case 233:
			return Global_40001.f_5875;
		
		case 237:
			return Global_40001.f_5CF9;
		
		case 238:
			return Global_40001.f_5D68;
		
		case 249:
			return Global_40001.f_5D78;
		
		default:
	}
	return 4294967295;
}

int func_507(int iParam0)//Position - 0x1075A
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_3055;
		
		case 152:
			return Global_40001.f_3078;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_306C;
		
		case 157:
			return Global_40001.f_304B;
		
		case 159:
			return Global_40001.f_303A;
		
		case 164:
			return Global_40001.f_3062;
		
		case 160:
			return Global_40001.f_3094;
		
		case 162:
			return Global_40001.f_30A8;
		
		case 163:
			return Global_40001.f_3085;
		
		case 154:
			return Global_40001.f_30CB;
		
		case 155:
			return Global_40001.f_30C1;
		
		case 153:
			return Global_40001.f_309D;
		
		case 170:
			return Global_40001.f_3A14;
		
		case 171:
			return Global_40001.f_3A4F;
		
		case 172:
			return Global_40001.f_3A61;
		
		case 173:
			return Global_40001.f_3A26;
		
		case 166:
			return Global_40001.f_3A35;
		
		case 167:
			return Global_40001.f_3A90;
		
		case 169:
			return Global_40001.f_3A74;
		
		case 168:
			return Global_40001.f_3A6D;
		
		case 179:
			return Global_40001.f_473B;
		
		case 180:
			return Global_40001.f_465E;
		
		case 182:
			return Global_40001.f_465E;
		
		case 183:
			return Global_40001.f_465E;
		
		case 185:
			return Global_40001.f_465E;
		
		case 186:
			return Global_40001.f_465E;
		
		case 189:
			return Global_40001.f_473B;
		
		case 190:
			return Global_40001.f_45E2;
		
		case 191:
			return Global_40001.f_463D;
		
		case 192:
			return Global_40001.f_456F;
		
		case 193:
			return Global_40001.f_473B;
		
		case 194:
			return Global_40001.f_473B;
		
		case 195:
			return Global_40001.f_465E;
		
		case 197:
			return Global_40001.f_465E;
		
		case 198:
			return Global_40001.f_465E;
		
		case 199:
			return Global_40001.f_473B;
		
		case 200:
			return Global_40001.f_473B;
		
		case 201:
			return Global_40001.f_473B;
		
		case 205:
			return Global_40001.f_473B;
		
		case 207:
			return Global_40001.f_465E;
		
		case 208:
			return Global_40001.f_465E;
		
		case 209:
			return Global_40001.f_465E;
		
		case 210:
			return Global_40001.f_473B;
		
		case 211:
			return Global_40001.f_473B;
		
		case 214:
			return Global_40001.f_4A8C;
		
		case 215:
			return Global_40001.f_4A8E;
		
		case 216:
			return Global_40001.f_4A90;
		
		case 217:
			return Global_40001.f_4A92;
		
		case 218:
			return Global_40001.f_4A94;
		
		case 219:
			return Global_40001.f_4A96;
		
		case 220:
			return Global_40001.f_4A98;
		
		case 221:
			return Global_40001.f_4A9A;
		
		case 225:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_51B9;
			}
			break;
		
		case 226:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_51A5;
			}
			break;
		
		case 227:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_51B1;
			}
			break;
		
		case 229:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_563D;
			}
			break;
		
		case 230:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_569D;
			}
			break;
		
		case 233:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_5874;
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
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_5CFB;
			}
			break;
		
		case 238:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_5D6A;
			}
			break;
		
		case 249:
			if (func_458(0) || func_237(0))
			{
				return Global_40001.f_5D7A;
			}
			break;
	}
	return 0;
}

int func_508(int iParam0)//Position - 0x10C57
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_3054;
		
		case 152:
			return Global_40001.f_3077;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_306B;
		
		case 157:
			return Global_40001.f_304A;
		
		case 159:
			return Global_40001.f_3039;
		
		case 164:
			return Global_40001.f_3061;
		
		case 160:
			return Global_40001.f_3093;
		
		case 162:
			return Global_40001.f_30A7;
		
		case 163:
			return Global_40001.f_3084;
		
		case 154:
			return Global_40001.f_30CA;
		
		case 155:
			return Global_40001.f_30C0;
		
		case 153:
			return Global_40001.f_309C;
		
		case 170:
			return Global_40001.f_3A13;
		
		case 171:
			return Global_40001.f_3A4E;
		
		case 172:
			return Global_40001.f_3A60;
		
		case 173:
			return Global_40001.f_3A25;
		
		case 166:
			return Global_40001.f_3A34;
		
		case 179:
			return Global_40001.f_473A;
		
		case 180:
			return Global_40001.f_465D;
		
		case 182:
			return Global_40001.f_465D;
		
		case 183:
			return Global_40001.f_465D;
		
		case 185:
			return Global_40001.f_465D;
		
		case 186:
			return Global_40001.f_465D;
		
		case 189:
			return Global_40001.f_473A;
		
		case 193:
			return Global_40001.f_473A;
		
		case 194:
			return Global_40001.f_473A;
		
		case 195:
			return Global_40001.f_465D;
		
		case 197:
			return Global_40001.f_465D;
		
		case 198:
			return Global_40001.f_465D;
		
		case 199:
			return Global_40001.f_473A;
		
		case 200:
			return Global_40001.f_473A;
		
		case 201:
			return Global_40001.f_473A;
		
		case 205:
			return Global_40001.f_473A;
		
		case 207:
			return Global_40001.f_465D;
		
		case 208:
			return Global_40001.f_465D;
		
		case 209:
			return Global_40001.f_465D;
		
		case 210:
			return Global_40001.f_473A;
		
		case 211:
			return Global_40001.f_473A;
		
		case 190:
			if (!func_440())
			{
				return Global_40001.f_45E1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_440())
			{
				return Global_40001.f_463C;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_440())
			{
				return Global_40001.f_456E;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_40001.f_4A8B;
		
		case 215:
			return Global_40001.f_4A8D;
		
		case 216:
			return Global_40001.f_4A8F;
		
		case 217:
			return Global_40001.f_4A91;
		
		case 218:
			return Global_40001.f_4A93;
		
		case 219:
			return Global_40001.f_4A95;
		
		case 220:
			return Global_40001.f_4A97;
		
		case 221:
			return Global_40001.f_4A99;
		
		case 225:
			if (func_237(0))
			{
				return Global_40001.f_51B8;
			}
			break;
		
		case 226:
			if (func_237(0))
			{
				return Global_40001.f_51A4;
			}
			break;
		
		case 227:
			if (func_237(0))
			{
				return Global_40001.f_51B0;
			}
			break;
		
		case 229:
			if (func_237(0))
			{
				return Global_40001.f_563C;
			}
			break;
		
		case 230:
			if (func_237(0))
			{
				return Global_40001.f_569C;
			}
			break;
		
		case 233:
			if (func_237(0))
			{
				return Global_40001.f_5876;
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
				return Global_40001.f_5CFA;
			}
			break;
		
		case 238:
			if (func_237(0))
			{
				return Global_40001.f_5D69;
			}
			break;
		
		case 249:
			if (func_237(0))
			{
				return Global_40001.f_5D79;
			}
			break;
	}
	return 0;
}

void func_509(int iParam0, int iParam1)//Position - 0x110FE
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_440())
		{
			if (func_458(0))
			{
				if (!func_237(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_460()))
					{
						if (func_519() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_519());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_517(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_514("GB_BCUT_TICK1", func_460(), iVar0, 0, 0, 1, 1);
						}
						func_513(20);
						func_510(func_460(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_510(int iParam0, int iParam1, int iParam2)//Position - 0x1119F
{
	struct<8> Var0;
	
	if (func_956(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_512(iParam0);
		func_511(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_452(iParam0));
	}
}

void func_511(var uParam0, var uParam1)//Position - 0x111F5
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_512(int iParam0)//Position - 0x1120F
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_513(int iParam0)//Position - 0x11223
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_514(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x1124C
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_344(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_515(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_291(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_515(char* sParam0)//Position - 0x112E4
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_516(&cVar0);
}

var func_516(char[4] cParam0)//Position - 0x11308
{
	return cParam0;
}

void func_517(int iParam0, bool bParam1)//Position - 0x11312
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_518(1);
	}
	else
	{
		iVar1 = func_518(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_518(bool bParam0)//Position - 0x11344
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_519()//Position - 0x1136A
{
	return Global_40001.f_2FF4;
}

void func_520(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x11379
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
		if (func_440())
		{
			iVar17 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar17 = func_460();
		}
		iVar11 = iVar17;
		if (iVar11 != 4294967295)
		{
			iVar0 = Global_1841F3[iVar11 /*790*/].f_300.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1841F3[iVar11 /*790*/].f_300.f_2;
			}
			else
			{
				iVar2 = func_536(Global_1841F3[iVar11 /*790*/].f_300, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_535(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == CAM::_0xDC9DA9E8789F5246())
				{
					func_534("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_197030.f_31 = *uParam3;
			if (iVar17 == CAM::_0xDC9DA9E8789F5246())
			{
				if (iVar2 > 0)
				{
					func_533(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_531(*uParam3);
				}
				iVar6 = func_530(&uVar5);
				iVar7 = Global_40001.f_5D18;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5D17));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_513(140);
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
								if (func_529(iVar23))
								{
									func_521(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5CFC;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5CFD;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_513(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_521(int iParam0, int iParam1, int iParam2)//Position - 0x115E0
{
	var uVar0;
	
	uVar0 = func_523(iParam0);
	func_522(iParam0, uVar0, iParam1, iParam2);
}

void func_522(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x115FC
{
	struct<8> Var0;
	
	Var0 = 2440128305;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_512(iParam0);
	func_511(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_63())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_452(iParam0));
		}
	}
}

int func_523(int iParam0)//Position - 0x11662
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_528();
	iVar0 = func_526(iParam0, iVar0);
	iVar1 = Global_18CD5B[func_460() /*560*/].f_B.f_198;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_39EC));
	if (iVar0 < func_525())
	{
		iVar0 = func_525();
	}
	if (iVar0 > func_524())
	{
		iVar0 = func_524();
	}
	return iVar0;
}

int func_524()//Position - 0x116BB
{
	return Global_40001.f_39ED;
}

int func_525()//Position - 0x116CA
{
	return Global_40001.f_3E84;
}

int func_526(int iParam0, int iParam1)//Position - 0x116D9
{
	int iVar0;
	
	iVar0 = (func_594(iParam0) * func_527());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_527()//Position - 0x116F7
{
	return Global_40001.f_3E83;
}

var func_528()//Position - 0x11706
{
	return Global_40001.f_2FEC;
}

int func_529(int iParam0)//Position - 0x11715
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != CAM::_0xDC9DA9E8789F5246())
		{
			if (func_74(iParam0, CAM::_0xDC9DA9E8789F5246(), 0))
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

int func_530(var uParam0)//Position - 0x1174E
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
			if (!func_17(iVar2, 0) && !func_74(iVar2, CAM::_0xDC9DA9E8789F5246(), 1))
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

void func_531(int iParam0)//Position - 0x117BA
{
	func_532(iParam0, 7236);
}

void func_532(int iParam0, int iParam1)//Position - 0x117CB
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_428(iParam1, 4294967295, 0);
	func_426(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_533(int iParam0)//Position - 0x117F4
{
	func_532(iParam0, 7231);
}

int func_534(char* sParam0, int iParam1, int iParam2)//Position - 0x11805
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_291(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_535(int iParam0)//Position - 0x11839
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5D19);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_536(struct<5> Param0, int iParam1)//Position - 0x1186D
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

void func_537(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x118D7
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
		if (func_440())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_460();
		}
		if (iVar15 != 4294967295)
		{
			if (uParam1->f_10 == 8)
			{
				iVar0 = (func_549(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_540(uParam1->f_10) + uParam1->f_8);
			}
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_436(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_435(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_539(*iParam2) > 0)
			{
				if (iVar15 == CAM::_0xDC9DA9E8789F5246())
				{
					func_534("SMTICK_RONCUT", func_539(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_539(*iParam2));
			}
			if (iVar15 == CAM::_0xDC9DA9E8789F5246())
			{
				func_538(iVar2, iVar9);
				iVar6 = func_530(&uVar5);
				iVar7 = Global_40001.f_56AE;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_56AD));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_513(44);
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
								if (func_529(iVar20))
								{
									func_521(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_566B;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_566C;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_513(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_538(int iParam0, int iParam1)//Position - 0x11B1D
{
	if (iParam0 > 0)
	{
		func_532(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_532(iParam1, 6117);
	}
}

int func_539(int iParam0)//Position - 0x11B43
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_568D);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_568E))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_568E);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_540(int iParam0)//Position - 0x11B83
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_547())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_549(CAM::_0xDC9DA9E8789F5246());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_542(func_543(func_546(iVar0), 4294967295, 4294967295));
		if (func_541(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_541(int iParam0)//Position - 0x11BE1
{
	switch (iParam0)
	{
		case 3786007249:
			return 5;
		
		case 2298388584:
			return 5;
		
		case 3970904288:
			return 7;
		
		case 2757724536:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case 2473282811:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case 3072258214:
			return 0;
		
		case 4034544605:
			return 0;
		
		case 3177327825:
			return 3;
		
		case 2860494080:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return 4294967295;
}

int func_542(int iParam0)//Position - 0x11C91
{
	switch (iParam0)
	{
		case 1:
			return 3786007249;
		
		case 2:
			return 2298388584;
		
		case 3:
			return 3970904288;
		
		case 4:
			return 2757724536;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return 2473282811;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return 3072258214;
		
		case 12:
			return 4034544605;
		
		case 13:
			return 3177327825;
		
		case 14:
			return 2860494080;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_543(int iParam0, int iParam1, int iParam2)//Position - 0x11D81
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_545(iParam0, iParam1);
	iVar2 = func_544(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_544(int iParam0)//Position - 0x11DC7
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

int func_545(int iParam0, int iParam1)//Position - 0x12169
{
	int iVar0;
	
	if (iParam1 == 4294967295)
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
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_546(int iParam0)//Position - 0x124BE
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

bool func_547()//Position - 0x12728
{
	return func_548() != 0;
}

int func_548()//Position - 0x12736
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_FF;
}

int func_549(int iParam0)//Position - 0x1274E
{
	if (iParam0 != func_63() && func_550(iParam0))
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF.f_3;
	}
	return 0;
}

int func_550(int iParam0)//Position - 0x1277F
{
	if (iParam0 != func_63())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_FF != 0;
	}
	return 0;
}

void func_551(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x127A4
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
		if (func_440())
		{
			iVar15 = CAM::_0xDC9DA9E8789F5246();
		}
		else
		{
			iVar15 = func_460();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_439(iVar15);
			iVar0 = (func_572(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_568(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_51A7));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_51A6));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == CAM::_0xDC9DA9E8789F5246())
			{
				func_565(iVar16, iVar2);
				if (func_561(iVar16) >= Global_40001.f_4FE3 || iVar2 >= Global_40001.f_4FE3)
				{
					func_552(5);
				}
				iVar6 = func_530(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_51A9);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_51A8));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_513(108);
					}
					else
					{
						func_513(110);
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
								if (func_529(iVar20))
								{
									func_521(iVar20, 1, 2389839094);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_51AA;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_51AB;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19993F = *iParam2;
					func_513(112);
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

void func_552(int iParam0)//Position - 0x129DF
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_4FD7)
			{
				if (func_554(Global_40001.f_4FD8))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_4FD9)
			{
				if (func_554(Global_40001.f_4FDA))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_4FDB)
			{
				if (func_554(Global_40001.f_4FDC))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_4FDD)
			{
				if (func_554(Global_40001.f_4FDE))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_4FDF)
			{
				if (func_554(Global_40001.f_4FE0))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_4FE1)
			{
				if (func_554(Global_40001.f_4FE2))
				{
					func_534("CLOTHAWDSTRAP3", Global_40001.f_4FE3, 1);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_4FE4)
			{
				if (func_554(Global_40001.f_4FE5))
				{
					func_534("CLOTHAWDSTRAP5", Global_40001.f_5069, 1);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_4FE7)
			{
				if (func_554(Global_40001.f_4FE8))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_4FE9)
			{
				if (func_554(Global_40001.f_4FEA))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_4FEB)
			{
				if (func_554(Global_40001.f_4FEC))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_4FED)
			{
				if (func_554(Global_40001.f_4FEE))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_4FEF)
			{
				if (func_554(Global_40001.f_4FF0))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_4FF1)
			{
				if (func_554(Global_40001.f_4FF2))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_4FF3)
			{
				if (func_554(Global_40001.f_4FF4))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_4FF5)
			{
				if (func_554(Global_40001.f_4FF6))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_553(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x12CDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
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
		Global_2633E1 = { func_65(CAM::_0xDC9DA9E8789F5246()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_26339B.f_16), "Leader") && Global_26339B.f_1E == 0)
			{
				iVar1 = 1;
			}
			if (Global_26339B.f_15 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar1, 0, Global_26339B, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), Global_140CDE, Global_140CDF, Global_140CE0);
		}
		else
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_291(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_554(int iParam0)//Position - 0x12DD0
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_558(15417, 4294967295, 4294967295))
			{
				func_557(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_558(15418, 4294967295, 4294967295))
			{
				func_557(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_558(15425, 4294967295, 4294967295))
			{
				func_557(15425, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 3599602535:
		case 1263491585:
		case 2987652061:
		case 258618816:
			if (!func_558(15405, 4294967295, 4294967295))
			{
				func_557(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_558(15393, 4294967295, 4294967295))
			{
				func_557(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_558(15409, 4294967295, 4294967295))
			{
				func_557(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_558(15396, 4294967295, 4294967295))
			{
				func_557(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_558(15412, 4294967295, 4294967295))
			{
				func_557(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_558(15403, 4294967295, 4294967295))
			{
				func_557(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_558(15389, 4294967295, 4294967295))
			{
				func_557(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_558(15398, 4294967295, 4294967295))
			{
				func_557(15398, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2933869803:
		case 4221319652:
		case 3258386893:
		case 2529150874:
		case 2303587303:
		case 2563356175:
			if (!func_558(15400, 4294967295, 4294967295))
			{
				func_557(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_558(15408, 4294967295, 4294967295))
			{
				func_557(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_558(15411, 4294967295, 4294967295))
			{
				func_557(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_558(15397, 4294967295, 4294967295))
			{
				func_557(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_558(15413, 4294967295, 4294967295))
			{
				func_557(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_558(15391, 4294967295, 4294967295))
			{
				func_557(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_558(15388, 4294967295, 4294967295))
			{
				func_557(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_558(15401, 4294967295, 4294967295))
			{
				func_557(15401, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case 3972875916:
		case 2690230073:
		case 3458584499:
			if (!func_558(15394, 4294967295, 4294967295))
			{
				func_557(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_558(15406, 4294967295, 4294967295))
			{
				func_557(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_558(15395, 4294967295, 4294967295))
			{
				func_557(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_558(15410, 4294967295, 4294967295))
			{
				func_557(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_558(15407, 4294967295, 4294967295))
			{
				func_557(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_558(15414, 4294967295, 4294967295))
			{
				func_557(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_558(15415, 4294967295, 4294967295))
			{
				func_557(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_558(15399, 4294967295, 4294967295))
			{
				func_557(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_558(15404, 4294967295, 4294967295))
			{
				func_557(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_558(15392, 4294967295, 4294967295))
			{
				func_557(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_558(15390, 4294967295, 4294967295))
			{
				func_557(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_558(15402, 4294967295, 4294967295))
			{
				func_557(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_558(15416, 4294967295, 4294967295))
			{
				func_557(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_137(209, 4294967295))
			{
				func_555(209, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2171481858:
		case 1457900554:
		case 4280650683:
		case 619771057:
			if (!func_558(15426, 4294967295, 4294967295))
			{
				func_557(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_558(15422, 4294967295, 4294967295))
			{
				func_557(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_558(15423, 4294967295, 4294967295))
			{
				func_557(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_558(15421, 4294967295, 4294967295))
			{
				func_557(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_558(15427, 4294967295, 4294967295))
			{
				func_557(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_558(15419, 4294967295, 4294967295))
			{
				func_557(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_558(15420, 4294967295, 4294967295))
			{
				func_557(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_555(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13945
{
	int iVar0;
	
	if (func_556())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_138(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_556()//Position - 0x13977
{
	return 1;
	return 0;
}

int func_557(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x13984
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
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_558(int iParam0, int iParam1, int iParam2)//Position - 0x13EEC
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_19();
	}
	iVar1 = func_560(iParam0, iParam1);
	uVar2 = func_559(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_559(int iParam0)//Position - 0x13F29
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

int func_560(int iParam0, int iParam1)//Position - 0x14243
{
	int iVar0;
	
	if (iParam1 == 4294967295)
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
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_561(int iParam0)//Position - 0x1453B
{
	int iVar0;
	
	iVar0 = func_563(iParam0);
	return func_428(func_562(iVar0), 4294967295, 0);
}

int func_562(int iParam0)//Position - 0x14557
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_563(int iParam0)//Position - 0x145B1
{
	int iVar0;
	
	if (func_564(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_564(int iParam0)//Position - 0x145F3
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_565(int iParam0, int iParam1)//Position - 0x14612
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_563(iParam0);
	iVar1 = func_562(iVar0);
	iVar2 = (func_428(iVar1, 4294967295, 0) + iParam1);
	func_426(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_543(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iVar0 /*12*/] != 0)
			{
				iVar1 = func_562(iVar0);
				iVar3 = (iVar3 + func_428(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_567(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_566(9357, iVar5, 4294967295, 1);
	}
}

var func_566(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x146C7
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
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

int func_567(int iParam0)//Position - 0x14C05
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

int func_568(int iParam0, int iParam1, int iParam2)//Position - 0x14C45
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_453(iParam1);
	if (func_564(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_41C2;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C7);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CC);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_41C1;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C6);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CB);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_41C0;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C5);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41CA);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_41BE;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C3);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C8);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_41BF;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_41C4);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_41C9);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_51C0;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_51C2);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_51C1);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_569(int iParam0, int iParam1, int iParam2)//Position - 0x14E1D
{
	int iVar0;
	
	if (func_571(iParam0, iParam1))
	{
		iVar0 = func_570(iParam0, iParam1);
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_570(int iParam0, int iParam1)//Position - 0x14E58
{
	int iVar0;
	
	if (func_564(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_571(int iParam0, int iParam1)//Position - 0x14EA4
{
	int iVar0;
	
	if (func_564(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_572(int iParam0, int iParam1)//Position - 0x14EEF
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_573(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x14F4E
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
		if (uParam1->f_A > 0)
		{
			if (func_456())
			{
				Var0 = { func_455() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_568(CAM::_0xDC9DA9E8789F5246(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_4820);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_481F);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_530(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4816);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4815));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_513(86);
				}
				Global_26862F.f_1313.f_174 = *iParam2;
			}
			else if (func_237(0))
			{
				Var14 = { func_574(func_460()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_568(func_460(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_4820));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_481F));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_4847;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_4848;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
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

struct<2> func_574(int iParam0)//Position - 0x151F1
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_BC;
}

void func_575(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x15208
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
		if (func_119(CAM::_0xDC9DA9E8789F5246()))
		{
			if (bParam1)
			{
				func_590();
			}
			func_589();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_119(CAM::_0xDC9DA9E8789F5246()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_581(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B1));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_580(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_530(&uVar2);
					iVar4 = Global_40001.f_3E8E;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3B77));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_513(44);
					}
				}
				func_578(*iParam3);
				func_577();
				Global_26862F.f_1313.f_174 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_529(iVar9))
						{
							func_521(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_119(CAM::_0xDC9DA9E8789F5246()))
		{
			func_576();
		}
	}
}

void func_576()//Position - 0x15374
{
	int iVar0;
	
	iVar0 = Global_27304E[func_19()];
	iVar0++;
	func_425(3667, iVar0, 4294967295, 1);
}

void func_577()//Position - 0x15399
{
	int iVar0;
	
	iVar0 = Global_273054[func_19()];
	iVar0++;
	func_425(3666, iVar0, 4294967295, 1);
}

void func_578(int iParam0)//Position - 0x153BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_273057[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_425(3668, iVar0, 4294967295, 1);
	if (func_543(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_579(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_566(7666, iVar2, 4294967295, 1);
	}
}

int func_579(int iParam0)//Position - 0x15420
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_3F13;
			break;
		
		case 2:
			return Global_40001.f_3F14;
			break;
		
		case 3:
			return Global_40001.f_3F15;
			break;
		
		case 4:
			return Global_40001.f_3F16;
			break;
		
		case 5:
			return Global_40001.f_3F17;
			break;
		
		case 6:
			return Global_40001.f_3F18;
			break;
		
		case 7:
			return Global_40001.f_3F19;
			break;
		
		case 8:
			return Global_40001.f_3F1A;
			break;
		
		case 9:
			return Global_40001.f_3F1B;
			break;
		
		case 10:
			return Global_40001.f_3F1C;
			break;
		
		case 11:
			return Global_40001.f_3F1D;
			break;
		
		case 12:
			return Global_40001.f_3F1E;
			break;
		
		case 13:
			return Global_40001.f_3F1F;
			break;
		
		case 14:
			return Global_40001.f_3F20;
			break;
		
		case 15:
			return Global_40001.f_3F21;
			break;
		
		case 16:
			return Global_40001.f_3F22;
			break;
		
		case 17:
			return Global_40001.f_3F23;
			break;
		
		case 18:
			return Global_40001.f_3F24;
			break;
		
		case 19:
			return Global_40001.f_3F25;
			break;
		
		case 20:
			return Global_40001.f_3F26;
			break;
		
		case 21:
			return Global_40001.f_3F27;
			break;
		
		case 22:
			return Global_40001.f_3F28;
			break;
		
		case 23:
			return Global_40001.f_3F29;
			break;
		
		case 24:
			return Global_40001.f_3F2A;
			break;
	}
	return 0;
}

var func_580(int iParam0)//Position - 0x155F8
{
	if (iParam0 >= Global_40001.f_3B61)
	{
		return Global_40001.f_3B76;
	}
	else if (iParam0 >= Global_40001.f_3B60)
	{
		return Global_40001.f_3B75;
	}
	else if (iParam0 >= Global_40001.f_3B5F)
	{
		return Global_40001.f_3B74;
	}
	else if (iParam0 >= Global_40001.f_3B5E)
	{
		return Global_40001.f_3B73;
	}
	else if (iParam0 >= Global_40001.f_3B5D)
	{
		return Global_40001.f_3B72;
	}
	else if (iParam0 >= Global_40001.f_3B5C)
	{
		return Global_40001.f_3B71;
	}
	else if (iParam0 >= Global_40001.f_3B5B)
	{
		return Global_40001.f_3B70;
	}
	else if (iParam0 >= Global_40001.f_3B5A)
	{
		return Global_40001.f_3B6F;
	}
	else if (iParam0 >= Global_40001.f_3B59)
	{
		return Global_40001.f_3B6E;
	}
	else if (iParam0 >= Global_40001.f_3B58)
	{
		return Global_40001.f_3B6D;
	}
	else if (iParam0 >= Global_40001.f_3B57)
	{
		return Global_40001.f_3B6C;
	}
	else if (iParam0 >= Global_40001.f_3B56)
	{
		return Global_40001.f_3B6B;
	}
	else if (iParam0 >= Global_40001.f_3B55)
	{
		return Global_40001.f_3B6A;
	}
	else if (iParam0 >= Global_40001.f_3B54)
	{
		return Global_40001.f_3B69;
	}
	else if (iParam0 >= Global_40001.f_3B53)
	{
		return Global_40001.f_3B68;
	}
	else if (iParam0 >= Global_40001.f_3B52)
	{
		return Global_40001.f_3B67;
	}
	else if (iParam0 >= Global_40001.f_3B51)
	{
		return Global_40001.f_3B66;
	}
	else if (iParam0 >= Global_40001.f_3B50)
	{
		return Global_40001.f_3B65;
	}
	else if (iParam0 >= Global_40001.f_3B4F)
	{
		return Global_40001.f_3B64;
	}
	else if (iParam0 >= Global_40001.f_3B4E)
	{
		return Global_40001.f_3B63;
	}
	return Global_40001.f_3B62;
}

int func_581(int iParam0)//Position - 0x157F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_588(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_587(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_586(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_582(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_582(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_586(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_582(int iParam0)//Position - 0x15874
{
	int iVar0;
	
	if (func_585(iParam0))
	{
		iVar0 = func_583(func_584(iParam0));
		return func_428(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_583(int iParam0)//Position - 0x1589D
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_584(int iParam0)//Position - 0x158F0
{
	int iVar0;
	
	if (func_585(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_62[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_585(int iParam0)//Position - 0x15932
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_586(int iParam0)//Position - 0x15951
{
	if (iParam0 == 1)
	{
		return Global_40001.f_3C29;
	}
	else if (iParam0 == 2)
	{
		return Global_40001.f_3C27;
	}
	else if (iParam0 == 3)
	{
		return Global_40001.f_3C2B;
	}
	else if (iParam0 == 4)
	{
		return Global_40001.f_3C25;
	}
	else if (iParam0 == 5)
	{
		return Global_40001.f_3C23;
	}
	else if (iParam0 == 6)
	{
		return Global_40001.f_3C2D;
	}
	return 0;
}

int func_587(int iParam0, int iParam1)//Position - 0x159C9
{
	int iVar0;
	
	if (func_585(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_197512[iVar0] == iParam1 && Global_197519[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_588(int iParam0)//Position - 0x15A0F
{
	int iVar0;
	
	if (func_585(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_62[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_589()//Position - 0x15A50
{
	int iVar0;
	
	iVar0 = Global_27304B[func_19()];
	iVar0++;
	Global_27304B[func_19()] = iVar0;
	func_425(3665, iVar0, 4294967295, 1);
}

void func_590()//Position - 0x15A81
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_273048[func_19()];
	iVar1 = Global_273051[func_19()];
	iVar0++;
	iVar1++;
	Global_273048[func_19()] = iVar0;
	Global_273051[func_19()] = iVar1;
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_78 = iVar1;
	func_425(3663, iVar0, 4294967295, 1);
	func_425(3664, iVar1, 4294967295, 1);
}

void func_591()//Position - 0x15AED
{
	if (func_440())
	{
		Global_255F11.f_BFC.f_86 = 0;
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
	}
}

void func_592()//Position - 0x15B1F
{
	if (func_440())
	{
		if (Global_255F11.f_BFC.f_86 < 10)
		{
			Global_255F11.f_BFC.f_86++;
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

void func_593()//Position - 0x15B69
{
	if (func_440())
	{
		if (Global_255F11.f_BFC.f_86 > 0)
		{
			Global_255F11.f_BFC.f_86 = (Global_255F11.f_BFC.f_86 - 1);
			Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_198 = Global_255F11.f_BFC.f_86;
		}
	}
}

int func_594(int iParam0)//Position - 0x15BB2
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_1C;
}

int func_595(int iParam0)//Position - 0x15BC7
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
			if (func_458(1) && !func_237(1))
			{
				if (func_596(func_460()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_596(int iParam0)//Position - 0x15C3C
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 26);
}

int func_597(int iParam0)//Position - 0x15C62
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3069) * Global_40001.f_306E));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3037) * Global_40001.f_303C));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3052) * Global_40001.f_3056));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_305F) * Global_40001.f_3063));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3075) * Global_40001.f_307A));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3117) * Global_40001.f_3118));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_311D) * Global_40001.f_311E));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_311B) * Global_40001.f_311C));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3115) * Global_40001.f_3116));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3119) * Global_40001.f_311A));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3113) * Global_40001.f_3114));
		
		case 170:
			return 0;
		
		case 171:
			return Global_40001.f_3A4C;
		
		case 172:
			return Global_40001.f_3A5C;
		
		case 173:
			return Global_40001.f_3A23;
		
		case 166:
			return 0;
		
		case 179:
			return Global_40001.f_46EE;
		
		case 180:
			return Global_40001.f_4672;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_467A;
		
		case 185:
			return Global_40001.f_4683;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4746;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4757;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_46BF;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4776;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_46FC;
		
		case 205:
			return Global_40001.f_4769;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_46DB;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4764;
		
		case 211:
			return Global_40001.f_4740;
		
		case 214:
			return Global_40001.f_4991;
		
		case 215:
			return Global_40001.f_499B;
		
		case 216:
			return Global_40001.f_49A5;
		
		case 217:
			return Global_40001.f_49AE;
		
		case 218:
			return Global_40001.f_49B7;
		
		case 219:
			return Global_40001.f_49C7;
		
		case 241:
			return Global_40001.f_5D8D;
		
		case 242:
			return Global_40001.f_5D89;
		
		case 248:
			return Global_40001.f_5D8C;
		
		case 244:
			return Global_40001.f_5D8A;
		
		case 239:
			return Global_40001.f_5D8E;
		
		case 240:
			return Global_40001.f_5D8F;
		
		default:
	}
	return 0;
}

int func_598(int iParam0, bool bParam1)//Position - 0x16007
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_306A) * Global_40001.f_306F));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3038) * Global_40001.f_303D));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3053) * Global_40001.f_3057));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3060) * Global_40001.f_3064));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3076) * Global_40001.f_307B));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_309B) * Global_40001.f_309E));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C9) * Global_40001.f_30CC));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30BF) * Global_40001.f_30C2));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3092) * Global_40001.f_3095));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A6) * Global_40001.f_30AB));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3083) * Global_40001.f_3086));
		
		case 170:
			return Global_40001.f_3A12;
		
		case 171:
			return Global_40001.f_3A4D;
		
		case 172:
			return Global_40001.f_3A5D;
		
		case 173:
			return Global_40001.f_3A24;
		
		case 166:
			return 0;
		
		case 167:
			return Global_40001.f_4242;
		
		case 168:
			return Global_40001.f_4241;
		
		case 179:
			return Global_40001.f_46EF;
		
		case 180:
			return Global_40001.f_4673;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_467B;
		
		case 185:
			return Global_40001.f_4684;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4747;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4758;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_46C0;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4777;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_46FD;
		
		case 205:
			return Global_40001.f_476A;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_46DC;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4765;
		
		case 211:
			return Global_40001.f_4741;
		
		case 214:
			return Global_40001.f_4992;
		
		case 215:
			return Global_40001.f_499C;
		
		case 216:
			return Global_40001.f_49A6;
		
		case 217:
			return Global_40001.f_49AF;
		
		case 218:
			return Global_40001.f_49B8;
		
		case 219:
			return Global_40001.f_49C8;
		
		case 178:
			if (func_440())
			{
				return Global_40001.f_4917;
			}
			else if (bParam1)
			{
				return Global_40001.f_4918;
			}
			break;
		
		case 188:
			if (func_440())
			{
				return Global_40001.f_496B;
			}
			else if (bParam1)
			{
				return Global_40001.f_496C;
			}
			break;
		
		case 225:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51B4;
				}
				else
				{
					return Global_40001.f_51B5;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_51B6;
			}
			break;
		
		case 226:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51A0;
				}
				else
				{
					return Global_40001.f_51A1;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_51A2;
			}
			break;
		
		case 227:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_51AC;
				}
				else
				{
					return Global_40001.f_51AD;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_51AE;
			}
			break;
		
		case 229:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5638;
				}
				else
				{
					return Global_40001.f_5639;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_563A;
			}
			break;
		
		case 230:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5698;
				}
				else
				{
					return Global_40001.f_5699;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_569A;
			}
			break;
		
		case 233:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5872;
				}
				else
				{
					return Global_40001.f_5873;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_5871;
			}
			break;
		
		case 241:
			return Global_40001.f_5D94;
		
		case 242:
			return Global_40001.f_5D90;
		
		case 244:
			return Global_40001.f_5D91;
		
		case 248:
			return Global_40001.f_5D93;
		
		case 239:
			return Global_40001.f_5D95;
		
		case 240:
			return Global_40001.f_5D96;
		
		case 237:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5CF6;
				}
				else
				{
					return Global_40001.f_5CF7;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_5CF8;
			}
			break;
		
		case 238:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D65;
				}
				else
				{
					return Global_40001.f_5D66;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_5D67;
			}
			break;
		
		case 249:
			if (func_440() && !func_456())
			{
				if (func_596(CAM::_0xDC9DA9E8789F5246()))
				{
					return Global_40001.f_5D75;
				}
				else
				{
					return Global_40001.f_5D76;
				}
			}
			else if (func_456())
			{
				return Global_40001.f_5D77;
			}
			break;
	}
	return 0;
}

void func_599(int iParam0, var uParam1, var uParam2)//Position - 0x166FA
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_600(iParam0))
	{
		if (!func_440())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_2FFF;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_179(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_305(iParam0))
		{
			*uParam1 = (Global_40001.f_465B / 100f);
			*uParam2 = (Global_40001.f_465B / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_40001.f_5D97;
			*uParam2 = Global_40001.f_5D97;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_40001.f_5D98;
			*uParam2 = Global_40001.f_5D98;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_40001.f_5D9A;
			*uParam2 = Global_40001.f_5D9A;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_40001.f_5D9B;
			*uParam2 = Global_40001.f_5D9B;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_40001.f_5D9C;
			*uParam2 = Global_40001.f_5D9C;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_40001.f_5D9D;
			*uParam2 = Global_40001.f_5D9D;
		}
		else
		{
			*uParam1 = Global_40001.f_2FFC;
			*uParam2 = Global_40001.f_2FFB;
		}
	}
	else if (func_305(iParam0))
	{
		*uParam1 = (Global_40001.f_465C / 100f);
		*uParam2 = (Global_40001.f_465C / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_40001.f_5D9E;
		*uParam2 = Global_40001.f_5D9E;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_40001.f_5D9F;
		*uParam2 = Global_40001.f_5D9F;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_40001.f_5DA1;
		*uParam2 = Global_40001.f_5DA1;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_40001.f_5DA2;
		*uParam2 = Global_40001.f_5DA2;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_40001.f_5DA3;
		*uParam2 = Global_40001.f_5DA3;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_40001.f_5DA4;
		*uParam2 = Global_40001.f_5DA4;
	}
	else
	{
		*uParam1 = Global_40001.f_2FFE;
		*uParam2 = Global_40001.f_2FFD;
	}
	iVar0 = func_240();
	if (iVar0 != func_63())
	{
		if (func_74(CAM::_0xDC9DA9E8789F5246(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_600(int iParam0)//Position - 0x1695D
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

int func_601()//Position - 0x169A1
{
	return (Local_110.f_73 * Global_40001.f_3A33);
}

int func_602()//Position - 0x169B5
{
	return (Local_110.f_73 * Global_40001.f_3A32);
}

void func_603(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x169C9
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
		iVar0 = func_171(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_4 = func_703();
		Global_19700D.f_5 = func_702();
		if (func_125(CAM::_0xDC9DA9E8789F5246()) || func_126(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_19700D.f_6 = 1;
		}
		else
		{
			Global_19700D.f_6 = 0;
		}
		Global_19700D.f_1 = func_698(bParam9);
		Global_19700D.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_19700D.f_9 = func_697(bParam0);
		Global_19700D.f_A = iParam1;
		Global_19700D.f_11 = Global_19700D.f_2;
		Global_19700D.f_12 = Global_19700D.f_2;
		Global_19700D.f_13 = func_696();
		Global_19700D.f_15 = (Global_19700D.f_8 - Global_19700D.f_7);
		if (func_179(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_19700D.f_17 = func_697(func_237(1));
		}
		Global_19700D.f_18 = func_695(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_1C = func_694(CAM::_0xDC9DA9E8789F5246());
		if (Global_19700D.f_18 > 2)
		{
			Global_19700D.f_18 = 2;
		}
		func_692(iVar0);
	}
	else
	{
		iVar0 = func_101(CAM::_0xDC9DA9E8789F5246());
	}
	if (func_305(iVar0))
	{
		Global_196F08.f_2 = func_703();
		Global_196F08.f_3 = func_702();
		Global_196F08.f_32 = iParam4;
		Global_196F08.f_33 = iParam5;
		Global_196F08.f_A = NETWORK::_GET_POSIX_TIME();
		Global_196F08.f_14 = (Global_196F08.f_A - Global_196F08.f_9);
		Global_196F08.f_C = iParam1;
		Global_196F08.f_13 = func_686(iVar0, bParam0, func_691(bParam3));
		if (bParam0)
		{
			Global_196F08.f_B = 1;
		}
		else
		{
			Global_196F08.f_B = 0;
		}
		if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F08.f_8 = 1;
		}
		else
		{
			Global_196F08.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_196F08.f_2B = 0;
			Global_196F08.f_2D = func_685(func_460(), iParam2);
			Global_196F08.f_2F = iParam7;
			Global_196F08.f_2E = iParam6;
			Global_196F08.f_34 = func_684(func_460(), iParam2);
		}
		func_682(iVar0);
	}
	else if (func_310(iVar0))
	{
		Global_196F3E.f_2 = func_703();
		Global_196F3E.f_3 = func_702();
		Global_196F3E.f_A = NETWORK::_GET_POSIX_TIME();
		Global_196F3E.f_13 = (Global_196F3E.f_A - Global_196F3E.f_9);
		Global_196F3E.f_C = iParam1;
		if (bParam0)
		{
			Global_196F3E.f_B = 1;
		}
		else
		{
			Global_196F3E.f_B = 0;
		}
		if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F3E.f_8 = 1;
		}
		else
		{
			Global_196F3E.f_8 = 0;
		}
		func_680(iVar0);
	}
	else if (func_385(iVar0))
	{
		Global_196F7D.f_2 = func_703();
		Global_196F7D.f_3 = func_702();
		Global_196F7D.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196F7D.f_12 = (Global_196F7D.f_9 - Global_196F7D.f_8);
		Global_196F7D.f_B = iParam1;
		Global_196F7D.f_7 = func_696();
		Global_196F7D.f_2A = func_678(func_19(), 5);
		iVar1 = CAM::_0xDC9DA9E8789F5246();
		iVar2 = func_439(iVar1);
		Global_196F7D.f_1C = iVar2;
		Global_196F7D.f_1D = func_697((func_677(iVar1) || func_676(iVar1)));
		Global_196F7D.f_1E = func_697(func_675(iVar1));
		Global_196F7D.f_20 = func_697(func_674(iVar1));
		Global_196F7D.f_21 = func_697(func_673(iVar1));
		Global_196F7D.f_22 = func_697(func_672(iVar1));
		Global_196F7D.f_23 = func_697(func_671(0, iVar1) == 1);
		Global_196F7D.f_24 = func_697(func_670(iVar1));
		Global_196F7D.f_25 = func_697(func_669(iVar1));
		Global_196F7D.f_26 = func_697(func_668(iVar1));
		Global_196F7D.f_27 = func_697(func_569(iVar1, iVar2, 0));
		Global_196F7D.f_28 = func_697(func_569(iVar1, iVar2, 2));
		Global_196F7D.f_29 = func_697(func_569(iVar1, iVar2, 1));
		if (func_667(iVar1))
		{
			Global_196F7D.f_1F = 2;
		}
		else if (func_666(iVar1))
		{
			Global_196F7D.f_1F = 1;
		}
		if (bParam0)
		{
			Global_196F7D.f_A = 1;
		}
		else
		{
			Global_196F7D.f_A = 0;
		}
		if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_6 = 1;
		}
		else
		{
			Global_196F7D.f_6 = 0;
		}
		Global_196F7D.f_15 = 4294967294;
		Global_196F7D.f_16 = 4294967294;
		func_664(iVar0);
	}
	else if (func_383(iVar0))
	{
		Global_196FA9.f_2 = func_703();
		Global_196FA9.f_3 = func_702();
		if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196FA9.f_6 = 1;
		}
		else
		{
			Global_196FA9.f_6 = 0;
		}
		Global_196FA9.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196FA9.f_A = func_697(bParam0);
		Global_196FA9.f_B = iParam1;
		Global_196FA9.f_11 = func_663(func_240());
		Global_196FA9.f_12 = (Global_196FA9.f_9 - Global_196FA9.f_8);
		Global_196FA9.f_14 = iParam8;
		Global_196FA9.f_15 = 4294967294;
		Global_196FA9.f_16 = 4294967294;
		Global_196FA9.f_1B = func_662();
		Global_196FA9.f_1D = func_428(6107, 4294967295, 0);
		Global_196FA9.f_1E = func_428(6103, 4294967295, 0);
		Global_196FA9.f_1F = func_428(6104, 4294967295, 0);
		Global_196FA9.f_20 = func_428(6106, 4294967295, 0);
		Global_196FA9.f_21 = func_428(6105, 4294967295, 0);
		Global_196FA9.f_22 = func_428(6108, 4294967295, 0);
		Global_196FA9.f_24 = func_697(func_237(1));
		Global_196FA9.f_25 = func_660();
		func_645();
		func_643(iVar0);
	}
	else if (func_381(iVar0))
	{
		Global_196FDF.f_2 = func_703();
		Global_196FDF.f_3 = func_702();
		if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196FDF.f_6 = 1;
		}
		else
		{
			Global_196FDF.f_6 = 0;
		}
		Global_196FDF.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_196FDF.f_A = func_697(bParam0);
		Global_196FDF.f_B = iParam1;
		Global_196FDF.f_12 = (Global_196FDF.f_9 - Global_196FDF.f_8);
		Global_196FDF.f_14 = iParam8;
		Global_196FDF.f_17 = Global_C0073;
		Global_196FDF.f_24 = Global_C0073.f_1;
		Global_196FDF.f_18 = func_428(6157, 4294967295, 0);
		Global_196FDF.f_19 = func_428(6162, 4294967295, 0);
		Global_196FDF.f_1A = func_428(6163, 4294967295, 0);
		Global_196FDF.f_1B = func_697((((func_642() || func_641()) || func_640()) || func_639(CAM::_0xDC9DA9E8789F5246())));
		Global_196FDF.f_1C = func_428(6164, 4294967295, 0);
		Global_196FDF.f_1D = func_697(func_638());
		Global_196FDF.f_23 = 4294967295;
		Global_196FDF.f_26 = 4294967295;
		Global_196FDF.f_27 = Global_196FDF.f_4;
		Global_196FDF.f_28 = Global_196FDF.f_5;
		Global_196FDF.f_29 = func_703();
		Global_196FDF.f_2A = func_697(func_237(1));
		Global_196FDF.f_2C = Global_196FDF.f_12;
		func_636(iVar0);
	}
	else if (func_416(iVar0))
	{
		if (Global_197065.f_2 == 4294967295)
		{
			Global_197065.f_2 = func_703();
		}
		if (Global_197065.f_3 == 4294967295)
		{
			Global_197065.f_3 = func_702();
		}
		if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_197065.f_6 = 1;
		}
		else
		{
			Global_197065.f_6 = 0;
		}
		Global_197065.f_1 = func_698(0);
		Global_197065.f_7 = func_696();
		Global_197065.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_197065.f_A = func_697(bParam0);
		Global_197065.f_B = iParam1;
		if (func_460() != 4294967295)
		{
			Global_197065.f_11 = func_635(func_460());
		}
		Global_197065.f_12 = (Global_197065.f_9 - Global_197065.f_8);
		Global_197065.f_13 = Global_26862F.f_185C;
		Global_197065.f_1C = func_694(CAM::_0xDC9DA9E8789F5246());
		Global_197065.f_1D = func_697(func_634(CAM::_0xDC9DA9E8789F5246()));
		Global_197065.f_1E = func_697(func_633(CAM::_0xDC9DA9E8789F5246()));
		Global_197065.f_1F = func_632(CAM::_0xDC9DA9E8789F5246());
		if (func_179(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197065.f_21 = func_697(func_237(1));
		}
		if (Global_197065.f_22 > 2)
		{
			Global_197065.f_22 = 2;
		}
		func_630(iVar0);
	}
	else if (func_420(iVar0))
	{
		Global_197030.f_2 = func_703();
		Global_197030.f_3 = func_702();
		if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_197030.f_6 = 1;
		}
		else
		{
			Global_197030.f_6 = 0;
		}
		Global_197030.f_1 = func_698(0);
		Global_197030.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_197030.f_A = func_697(bParam0);
		Global_197030.f_B = iParam1;
		Global_197030.f_12 = (Global_197030.f_9 - Global_197030.f_8);
		Global_197030.f_1C = func_694(CAM::_0xDC9DA9E8789F5246());
		if (Global_197030.f_1C)
		{
			Global_197030.f_1D = func_629(CAM::_0xDC9DA9E8789F5246());
		}
		else
		{
			Global_197030.f_1D = 0;
		}
		Global_197030.f_1E = func_613(CAM::_0xDC9DA9E8789F5246(), 4, 4294967295);
		Global_197030.f_1F = func_632(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_20 = func_697(func_612(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_21 = func_697(func_611(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_22 = func_697(func_610(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_23 = func_697(func_609(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_24 = func_608(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_25 = func_607(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_27 = func_606(CAM::_0xDC9DA9E8789F5246());
		if (func_179(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197030.f_29 = func_697(func_237(1));
		}
		if (Global_197030.f_2A > 2)
		{
			Global_197030.f_2A = 2;
		}
		func_604(iVar0);
	}
	else
	{
		Global_196EF6.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_196EF6.f_7 = 1;
		}
		else
		{
			Global_196EF6.f_7 = 0;
		}
		Global_196EF6.f_8 = iParam1;
		if (Global_196EF6.f_4 == 0)
		{
			if ((func_120(CAM::_0xDC9DA9E8789F5246()) || func_131(CAM::_0xDC9DA9E8789F5246())) || func_139(CAM::_0xDC9DA9E8789F5246()))
			{
				Global_196EF6.f_4 = 1;
			}
		}
	}
}

void func_604(int iParam0)//Position - 0x17421
{
	unk_0x2D7A9B577E72385E(&Global_197030);
	func_605();
}

void func_605()//Position - 0x17435
{
	struct<53> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Global_197030 = { Var0 };
}

int func_606(int iParam0)//Position - 0x1755E
{
	if (iParam0 != func_63())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 12);
	}
	return 0;
}

int func_607(int iParam0)//Position - 0x17588
{
	if (iParam0 != func_63())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 10);
	}
	return 0;
}

int func_608(int iParam0)//Position - 0x175B2
{
	if (iParam0 != func_63())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 11);
	}
	return 0;
}

bool func_609(int iParam0)//Position - 0x175DC
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 4);
}

bool func_610(int iParam0)//Position - 0x17607
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 3);
}

bool func_611(int iParam0)//Position - 0x17632
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 2);
}

bool func_612(int iParam0)//Position - 0x1765D
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 1);
}

int func_613(int iParam0, int iParam1, int iParam2)//Position - 0x17688
{
	if (iParam0 == func_63() || !func_628(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_623(iParam0, iParam2);
		
		case 1:
			return func_621(iParam0, iParam2);
		
		case 3:
			return func_620(iParam0);
		
		case 2:
			return func_615(iParam0, iParam2);
		
		case 4:
			return func_614(iParam0);
		
		default:
	}
	return 0;
}

bool func_614(int iParam0)//Position - 0x17704
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 6);
}

int func_615(int iParam0, int iParam1)//Position - 0x1772F
{
	switch (iParam1)
	{
		case 10:
			return func_619(iParam0);
		
		case 11:
			return func_618(iParam0);
		
		case 12:
			return func_617(iParam0);
		
		case 13:
			return func_616(iParam0);
		
		default:
	}
	return 0;
}

bool func_616(int iParam0)//Position - 0x1777B
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 15);
}

bool func_617(int iParam0)//Position - 0x177A7
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 14);
}

bool func_618(int iParam0)//Position - 0x177D3
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 13);
}

bool func_619(int iParam0)//Position - 0x177FF
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 12);
}

bool func_620(int iParam0)//Position - 0x1782B
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 5);
}

int func_621(int iParam0, int iParam1)//Position - 0x17856
{
	switch (iParam1)
	{
		case 5:
			return func_622(iParam0);
		
		case 6:
			return func_612(iParam0);
		
		case 7:
			return func_611(iParam0);
		
		case 8:
			return func_610(iParam0);
		
		case 9:
			return func_609(iParam0);
		
		default:
	}
	return 0;
}

bool func_622(int iParam0)//Position - 0x178B1
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 0);
}

int func_623(int iParam0, int iParam1)//Position - 0x178DC
{
	switch (iParam1)
	{
		case 0:
			return func_627(iParam0);
		
		case 1:
			return func_626(iParam0);
		
		case 2:
			return func_625(iParam0);
		
		case 3:
			return func_624(iParam0);
		
		case 4:
			return func_632(iParam0);
		
		default:
	}
	return 0;
}

bool func_624(int iParam0)//Position - 0x17937
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 10);
}

bool func_625(int iParam0)//Position - 0x17963
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 9);
}

bool func_626(int iParam0)//Position - 0x1798F
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 8);
}

bool func_627(int iParam0)//Position - 0x179BB
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_110.f_4, 7);
}

bool func_628(int iParam0)//Position - 0x179E6
{
	return (iParam0 != 4294967295 && iParam0 != 6);
}

int func_629(int iParam0)//Position - 0x179FB
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_613(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_613(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_613(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_613(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_630(int iParam0)//Position - 0x17A5A
{
	unk_0x6481F441CE5CA40E(&Global_197065);
	func_631();
}

void func_631()//Position - 0x17A6E
{
	struct<39> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Global_197065 = { Var0 };
}

bool func_632(int iParam0)//Position - 0x17B61
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 31);
}

bool func_633(int iParam0)//Position - 0x17B7E
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 0);
}

bool func_634(int iParam0)//Position - 0x17BA9
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 19);
}

var func_635(int iParam0)//Position - 0x17BD5
{
	return Global_1841F3[iParam0 /*790*/].f_D3.f_6;
}

void func_636(int iParam0)//Position - 0x17BEA
{
	unk_0x0360568A8CE21561(&Global_196FDF);
	func_637();
}

void func_637()//Position - 0x17BFE
{
	struct<46> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Global_196FDF = { Var0 };
	Global_196FDF.f_10 = 0;
}

bool func_638()//Position - 0x17D0C
{
	return func_428(6156, 4294967295, 0) != 0;
}

int func_639(int iParam0)//Position - 0x17D1F
{
	if (iParam0 != func_63())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_106 != 0;
	}
	return 0;
}

bool func_640()//Position - 0x17D45
{
	return func_428(6164, 4294967295, 0) == 3;
}

bool func_641()//Position - 0x17D58
{
	return func_428(6164, 4294967295, 0) == 2;
}

bool func_642()//Position - 0x17D6B
{
	return func_428(6164, 4294967295, 0) == 1;
}

void func_643(int iParam0)//Position - 0x17D7E
{
	unk_0x04824802BBD52BB4(&Global_196FA9);
	func_644();
}

void func_644()//Position - 0x17D92
{
	struct<54> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_196FA9 = { Var0 };
	Global_196FA9.f_17 = 0;
	Global_196FA9.f_18 = 0;
	Global_196FA9.f_10 = 0;
}

void func_645()//Position - 0x17EDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_656(12));
		func_655(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_142958[iVar1 /*141*/].f_42 != 0 && func_647(Global_142958[iVar1 /*141*/].f_42, 1))
			{
				if (Global_26862F.f_375 != iVar1)
				{
					if (func_646(Global_142958[iVar1 /*141*/].f_42))
					{
						if (Global_142958[iVar1 /*141*/].f_42 != 0)
						{
							iVar3 = Global_142958[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0:
								Global_196FA9.f_26 = iVar3;
								break;
							
							case 1:
								Global_196FA9.f_27 = iVar3;
								break;
							
							case 2:
								Global_196FA9.f_28 = iVar3;
								break;
							
							case 3:
								Global_196FA9.f_29 = iVar3;
								break;
							
							case 4:
								Global_196FA9.f_2A = iVar3;
								break;
							
							case 5:
								Global_196FA9.f_2B = iVar3;
								break;
							
							case 6:
								Global_196FA9.f_2C = iVar3;
								break;
							
							case 7:
								Global_196FA9.f_2D = iVar3;
								break;
							
							case 8:
								Global_196FA9.f_2E = iVar3;
								break;
							
							case 9:
								Global_196FA9.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_646(int iParam0)//Position - 0x18025
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		return 1;
	}
	return 0;
}

int func_647(int iParam0, bool bParam1)//Position - 0x18161
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
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_654())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILE::GET_NUM_DLC_VEHICLES())
		{
			if (FILE::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILE::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_653() && !func_652()) && !func_651()) && !func_650()) && !func_654())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_651())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_649(iParam0))
		{
			return 0;
		}
	}
	if (!func_648(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_648(int iParam0)//Position - 0x182E1
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_457())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_649(int iParam0)//Position - 0x183AD
{
	int iVar0;
	int iVar1;
	
	if (Global_263409)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_40001.f_1958 && !Global_40001.f_31FD) && iVar1 < Global_40001.f_31FE)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_40001.f_370F && iVar1 < Global_40001.f_371B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_40001.f_370B && iVar1 < Global_40001.f_3717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_40001.f_370C && iVar1 < Global_40001.f_3718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_40001.f_370D && iVar1 < Global_40001.f_3719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_40001.f_370E && iVar1 < Global_40001.f_371A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_40001.f_3710 && iVar1 < Global_40001.f_371C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_40001.f_3711 && iVar1 < Global_40001.f_3714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_40001.f_3712 && iVar1 < Global_40001.f_3715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_40001.f_3713 && iVar1 < Global_40001.f_3716)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_40001.f_4157 && iVar1 < Global_40001.f_4133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_40001.f_4152 && iVar1 < Global_40001.f_412E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_40001.f_4156 && iVar1 < Global_40001.f_4132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_40001.f_4155 && iVar1 < Global_40001.f_4131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_40001.f_414F && iVar1 < Global_40001.f_412B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_40001.f_4150 && iVar1 < Global_40001.f_412C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_40001.f_4153 && iVar1 < Global_40001.f_412F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_40001.f_4154 && iVar1 < Global_40001.f_4130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_40001.f_4151 && iVar1 < Global_40001.f_412D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_40001.f_4159 && iVar1 < Global_40001.f_4135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_40001.f_415A && iVar1 < Global_40001.f_4136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_40001.f_414E && iVar1 < Global_40001.f_412A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_40001.f_414D && iVar1 < Global_40001.f_4129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_40001.f_414C && iVar1 < Global_40001.f_4128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_40001.f_4158 && iVar1 < Global_40001.f_4134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_40001.f_415B && iVar1 < Global_40001.f_4137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_40001.f_415C && iVar1 < Global_40001.f_4138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_40001.f_415D && iVar1 < Global_40001.f_4139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_40001.f_415E && iVar1 < Global_40001.f_413A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_40001.f_41EF && iVar1 < Global_40001.f_4205)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_40001.f_41F0 && iVar1 < Global_40001.f_4206)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_40001.f_41F1 && iVar1 < Global_40001.f_4207)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_40001.f_41F2 && iVar1 < Global_40001.f_4208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_40001.f_41F3 && iVar1 < Global_40001.f_4209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_40001.f_41F4 && iVar1 < Global_40001.f_420A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_40001.f_41F6 && iVar1 < Global_40001.f_420B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_40001.f_41F7 && iVar1 < Global_40001.f_420C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_40001.f_41F8 && iVar1 < Global_40001.f_420D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_40001.f_41F9 && iVar1 < Global_40001.f_420E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_40001.f_41FA && iVar1 < Global_40001.f_420F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_40001.f_41FB && iVar1 < Global_40001.f_4210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_40001.f_41FC && iVar1 < Global_40001.f_4211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_40001.f_4202 && iVar1 < Global_40001.f_4218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_40001.f_41FF && iVar1 < Global_40001.f_4214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_40001.f_4200 && iVar1 < Global_40001.f_4215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_40001.f_4201 && iVar1 < Global_40001.f_4216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_40001.f_41F5 && iVar1 < Global_40001.f_4217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_40001.f_4203 && iVar1 < Global_40001.f_4219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_40001.f_41FD && iVar1 < Global_40001.f_4212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_40001.f_41FE && iVar1 < Global_40001.f_4213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_40001.f_4204 && iVar1 < Global_40001.f_421A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_40001.f_4860 && iVar1 < Global_40001.f_48C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_40001.f_4861 && iVar1 < Global_40001.f_48C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_40001.f_4862 && iVar1 < Global_40001.f_48C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_40001.f_4863 && iVar1 < Global_40001.f_48C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_40001.f_4864 && iVar1 < Global_40001.f_48C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_40001.f_4865 && iVar1 < Global_40001.f_48C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_40001.f_4866 && iVar1 < Global_40001.f_48C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_40001.f_4867 && iVar1 < Global_40001.f_48C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_40001.f_4868 && iVar1 < Global_40001.f_48C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_40001.f_4869 && iVar1 < Global_40001.f_48CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_40001.f_486A && iVar1 < Global_40001.f_48CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_40001.f_486B && iVar1 < Global_40001.f_48CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_40001.f_486C && iVar1 < Global_40001.f_48CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_40001.f_486D && iVar1 < Global_40001.f_48CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_40001.f_486E && iVar1 < Global_40001.f_48CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_40001.f_486F && iVar1 < Global_40001.f_48D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_40001.f_4870 && iVar1 < Global_40001.f_48D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_40001.f_4871 && iVar1 < Global_40001.f_48D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_40001.f_4872 && iVar1 < Global_40001.f_48D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_40001.f_4873 && iVar1 < Global_40001.f_48D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_40001.f_4874 && iVar1 < Global_40001.f_48D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_40001.f_4875 && iVar1 < Global_40001.f_48D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_40001.f_4876 && iVar1 < Global_40001.f_48D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_40001.f_4877 && iVar1 < Global_40001.f_48D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_40001.f_4878 && iVar1 < Global_40001.f_48D9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_40001.f_4C98 && iVar1 < Global_40001.f_4C94)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_40001.f_4C99 && iVar1 < Global_40001.f_4C95)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_40001.f_4C9A && iVar1 < Global_40001.f_4C96)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_40001.f_4C9B && iVar1 < Global_40001.f_4C97)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_40001.f_5007 && iVar1 < Global_40001.f_500F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_40001.f_5008 && iVar1 < Global_40001.f_5010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_40001.f_5009 && iVar1 < Global_40001.f_5011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_40001.f_500A && iVar1 < Global_40001.f_5012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_40001.f_500B && iVar1 < Global_40001.f_5013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_40001.f_500C && iVar1 < Global_40001.f_5014)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_40001.f_5310 && iVar1 < Global_40001.f_5324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_40001.f_531C && iVar1 < Global_40001.f_5330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_40001.f_5313 && iVar1 < Global_40001.f_5327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_40001.f_531D && iVar1 < Global_40001.f_5331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_40001.f_5311 && iVar1 < Global_40001.f_5325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_40001.f_5321 && iVar1 < Global_40001.f_5335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_40001.f_531F && iVar1 < Global_40001.f_5333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_40001.f_5320 && iVar1 < Global_40001.f_5334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_40001.f_531B && iVar1 < Global_40001.f_532F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_40001.f_5322 && iVar1 < Global_40001.f_5336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_40001.f_531E && iVar1 < Global_40001.f_5332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_40001.f_531A && iVar1 < Global_40001.f_532E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_40001.f_5312 && iVar1 < Global_40001.f_5326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_40001.f_5314 && iVar1 < Global_40001.f_5328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_40001.f_5315 && iVar1 < Global_40001.f_5329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_40001.f_5316 && iVar1 < Global_40001.f_532A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_40001.f_5317 && iVar1 < Global_40001.f_532B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_40001.f_5318 && iVar1 < Global_40001.f_532C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_40001.f_5319 && iVar1 < Global_40001.f_532D)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_40001.f_56D1 && iVar1 < Global_40001.f_56ED)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_40001.f_56D2 && iVar1 < Global_40001.f_56EE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_40001.f_56D3 && iVar1 < Global_40001.f_56EF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_40001.f_56D4 && iVar1 < Global_40001.f_56F0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_40001.f_56D5 && iVar1 < Global_40001.f_56F1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_40001.f_56D6 && iVar1 < Global_40001.f_56F2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_40001.f_56D7 && iVar1 < Global_40001.f_56F3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_40001.f_56D8 && iVar1 < Global_40001.f_56F4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_40001.f_56D9 && iVar1 < Global_40001.f_56F5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_40001.f_56DA && iVar1 < Global_40001.f_56F6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_56DB && iVar1 < Global_40001.f_56F7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_56DC && iVar1 < Global_40001.f_56F8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_40001.f_56DD && iVar1 < Global_40001.f_56F9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_40001.f_56DE && iVar1 < Global_40001.f_56FA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_40001.f_56DF && iVar1 < Global_40001.f_56FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_40001.f_56E0 && iVar1 < Global_40001.f_56FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_40001.f_56E1 && iVar1 < Global_40001.f_56FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_40001.f_56E2 && iVar1 < Global_40001.f_56FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_40001.f_56E3 && iVar1 < Global_40001.f_56FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_40001.f_56E4 && iVar1 < Global_40001.f_5700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_40001.f_56E5 && iVar1 < Global_40001.f_5701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_40001.f_56E6 && iVar1 < Global_40001.f_5702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_40001.f_56E7 && iVar1 < Global_40001.f_5703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_40001.f_56E8 && iVar1 < Global_40001.f_5704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_40001.f_56E9 && iVar1 < Global_40001.f_5705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_40001.f_56EA && iVar1 < Global_40001.f_5706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_40001.f_56EB && iVar1 < Global_40001.f_5707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_40001.f_56EC && iVar1 < Global_40001.f_5708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_40001.f_5B88 && iVar1 < Global_40001.f_5B98)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_40001.f_5B89 && iVar1 < Global_40001.f_5B99)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_40001.f_5B8D && iVar1 < Global_40001.f_5B9D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_40001.f_5B90 && iVar1 < Global_40001.f_5BA0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_40001.f_5B95 && iVar1 < Global_40001.f_5BA5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_40001.f_5B8F && iVar1 < Global_40001.f_5B9F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_40001.f_5B87 && iVar1 < Global_40001.f_5B97)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_40001.f_5B8E && iVar1 < Global_40001.f_5B9E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_40001.f_5B94 && iVar1 < Global_40001.f_5BA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_40001.f_5B93 && iVar1 < Global_40001.f_5BA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_40001.f_5B8A && iVar1 < Global_40001.f_5B9A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_40001.f_5B8C && iVar1 < Global_40001.f_5B9C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_40001.f_5B96 && iVar1 < Global_40001.f_5BA6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_40001.f_5B92 && iVar1 < Global_40001.f_5BA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_40001.f_5B8B && iVar1 < Global_40001.f_5B9B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_40001.f_5B91 && iVar1 < Global_40001.f_5BA1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_40001.f_5BE2 && iVar1 < Global_40001.f_5BD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_40001.f_5BE3 && iVar1 < Global_40001.f_5BD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_40001.f_5BE8 && iVar1 < Global_40001.f_5BDB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_40001.f_5BE7 && iVar1 < Global_40001.f_5BDA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_40001.f_5BE5 && iVar1 < Global_40001.f_5BD8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_40001.f_5BEB && iVar1 < Global_40001.f_5BDE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_40001.f_5BED && iVar1 < Global_40001.f_5BE0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_40001.f_5BEE && iVar1 < Global_40001.f_5BE1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_40001.f_5BEC && iVar1 < Global_40001.f_5BDF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_40001.f_5BE4 && iVar1 < Global_40001.f_5BD7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_40001.f_5BE6 && iVar1 < Global_40001.f_5BD9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_40001.f_5BEA && iVar1 < Global_40001.f_5BDD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_40001.f_5BE9 && iVar1 < Global_40001.f_5BDC)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_40001.f_641C && iVar1 < Global_40001.f_641E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_40001.f_606B && iVar1 < Global_40001.f_6064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_40001.f_606C && iVar1 < Global_40001.f_6065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_40001.f_606D && iVar1 < Global_40001.f_6066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_40001.f_606E && iVar1 < Global_40001.f_6067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_40001.f_641D && iVar1 < Global_40001.f_641F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_40001.f_606F && iVar1 < Global_40001.f_6068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_40001.f_6070 && iVar1 < Global_40001.f_6069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_40001.f_6071 && iVar1 < Global_40001.f_606A)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_650()//Position - 0x1A0A8
{
	return 0;
}

int func_651()//Position - 0x1A0B1
{
	return 1;
}

int func_652()//Position - 0x1A0BA
{
	return 1;
}

int func_653()//Position - 0x1A0C3
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_654()//Position - 0x1A0DC
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
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
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_655(int iParam0, int iParam1, bool bParam2)//Position - 0x1A197
{
	if (Global_40001.f_2742)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1962F6[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = 4294967295;
	}
}

int func_656(int iParam0)//Position - 0x1A1D7
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
			return 4294967295;
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
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_659(iParam0);
		return func_658(iVar0);
	}
	return (func_657(iParam0, 4294967295) * iParam0);
}

int func_657(int iParam0, int iParam1)//Position - 0x1A2E8
{
	if (iParam0 == 4294967295)
	{
		if (iParam1 >= 1)
		{
			if (func_392(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_398(iParam1))
			{
				return 0;
			}
			else if (func_390(iParam1, 4294967295))
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
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 <= 124 && iParam1 > 0)
			{
				if (Global_1004B2[iParam1 /*1951*/].f_21 == 2)
				{
					return 3;
				}
				else if (Global_1004B2[iParam1 /*1951*/].f_21 == 6)
				{
					return 8;
				}
				else if (Global_1004B2[iParam1 /*1951*/].f_21 == 10)
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
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
	}
	return 0;
}

int func_658(int iParam0)//Position - 0x1A4E1
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
	return 4294967295;
}

int func_659(int iParam0)//Position - 0x1A512
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return 4294967295;
}

var func_660()//Position - 0x1A538
{
	var uVar0;
	
	uVar0 = func_661();
	if (!func_440())
	{
		if (func_460() != func_63())
		{
			uVar0 = func_695(func_460()) + 1;
		}
	}
	return uVar0;
}

int func_661()//Position - 0x1A567
{
	return func_695(CAM::_0xDC9DA9E8789F5246()) + 1;
}

int func_662()//Position - 0x1A579
{
	return func_428(6113, 4294967295, 0);
}

int func_663(int iParam0)//Position - 0x1A58A
{
	if (func_179(iParam0, 1))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_19A;
	}
	return 4294967295;
}

void func_664(int iParam0)//Position - 0x1A5AE
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F080E7F4F761E28(&Global_196F7D);
	func_665();
}

void func_665()//Position - 0x1A5C8
{
	struct<44> Var0;
	
	Global_196F7D = { Var0 };
	Global_196F7D.f_17 = 0;
	Global_196F7D.f_18 = 0;
	Global_196F7D.f_10 = 0;
}

bool func_666(int iParam0)//Position - 0x1A5F1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 12);
}

bool func_667(int iParam0)//Position - 0x1A60E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 13);
}

int func_668(int iParam0)//Position - 0x1A62B
{
	if (iParam0 != func_63())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 12) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 13)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_669(int iParam0)//Position - 0x1A68C
{
	if (iParam0 != func_63())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_670(int iParam0)//Position - 0x1A6EA
{
	if (iParam0 != func_63())
	{
		if (((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 5)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_671(int iParam0, int iParam1)//Position - 0x1A793
{
	if (iParam1 == func_63())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 0))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 3))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 6))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 9))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 12))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 15))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 18))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 21))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 1))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 4))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 7))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 10))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 13))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 16))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 19))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 22))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 2))
			{
				return 3;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 5))
			{
				return 2;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 8))
			{
				return 4;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 11))
			{
				return 1;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 14))
			{
				return 7;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 17))
			{
				return 5;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 20))
			{
				return 6;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 23))
			{
				return 0;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam1 /*790*/].f_111.f_FA, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_672(int iParam0)//Position - 0x1AAE7
{
	if (iParam0 != func_63())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 6) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 7)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_673(int iParam0)//Position - 0x1AB46
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 8);
}

bool func_674(int iParam0)//Position - 0x1AB63
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 7);
}

bool func_675(int iParam0)//Position - 0x1AB7F
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 9);
}

bool func_676(int iParam0)//Position - 0x1ABA9
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 11);
}

bool func_677(int iParam0)//Position - 0x1ABD3
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_155, 10);
}

int func_678(int iParam0, int iParam1)//Position - 0x1ABFD
{
	return func_428(func_679(iParam1), iParam0, 0);
}

int func_679(int iParam0)//Position - 0x1AC12
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_680(int iParam0)//Position - 0x1AC6C
{
	if (iParam0 == 0)
	{
	}
	unk_0x446AB56E5D45010D(&Global_196F3E);
	func_681();
}

void func_681()//Position - 0x1AC86
{
	struct<63> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Var0.f_36 = 4294967295;
	Var0.f_37 = 4294967295;
	Var0.f_38 = 4294967295;
	Var0.f_39 = 4294967295;
	Var0.f_3A = 4294967295;
	Var0.f_3B = 4294967295;
	Var0.f_3C = 4294967295;
	Var0.f_3D = 4294967295;
	Var0.f_3E = 4294967295;
	Global_196F3E = { Var0 };
	Global_196F3E.f_18 = 0;
	Global_196F3E.f_19 = 0;
	Global_196F3E.f_11 = 0;
}

void func_682(int iParam0)//Position - 0x1ADF0
{
	if (iParam0 == 0)
	{
	}
	unk_0xF1381B4DBB31FA25(&Global_196F08);
	func_683();
}

void func_683()//Position - 0x1AE0A
{
	struct<54> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_196F08 = { Var0 };
	Global_196F08.f_1D = 0;
	Global_196F08.f_1E = 0;
	Global_196F08.f_11 = 0;
}

int func_684(int iParam0, int iParam1)//Position - 0x1AF3E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_569(iParam0, iParam1, 2);
	bVar1 = func_569(iParam0, iParam1, 1);
	bVar2 = func_569(iParam0, iParam1, 0);
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

int func_685(int iParam0, int iParam1)//Position - 0x1AFF4
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_686(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B053
{
	int iVar0;
	int iVar1;
	
	if (func_388(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_44A1;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_44A0;
		}
		else
		{
			iVar0 = Global_40001.f_448E;
		}
		iVar1 = 19;
	}
	else if (func_387(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_210(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_448D;
			iVar1 = 20;
		}
	}
	else if (func_305(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_44A1;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_44A0;
		}
		else
		{
			iVar0 = Global_40001.f_448E;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_690(func_460()), func_689(func_460()), func_703(), func_702(), iVar1, iVar0);
	}
	func_688(iVar0);
	func_687(iVar0);
	return iVar0;
}

void func_687(int iParam0)//Position - 0x1B146
{
	int iVar0;
	
	iVar0 = func_428(3968, 4294967295, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1C1 = iVar0;
	func_426(3968, iVar0, 4294967295, 1, 0);
}

void func_688(int iParam0)//Position - 0x1B194
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 + iParam0);
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 < 4294957297)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
	else if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 > 9999)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
}

int func_689(int iParam0)//Position - 0x1B20E
{
	if (iParam0 == func_63())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_690(int iParam0)//Position - 0x1B233
{
	if (iParam0 == func_63())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
}

int func_691(bool bParam0)//Position - 0x1B258
{
	if (bParam0)
	{
		return 0;
	}
	if (func_120(CAM::_0xDC9DA9E8789F5246()) || func_139(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

void func_692(var uParam0)//Position - 0x1B287
{
	unk_0x316DB59CD14C1774(&Global_19700D);
	func_693();
}

void func_693()//Position - 0x1B29B
{
	struct<35> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Global_19700D = { Var0 };
}

int func_694(int iParam0)//Position - 0x1B37C
{
	if (iParam0 != func_63())
	{
		return Global_1841F3[iParam0 /*790*/].f_111.f_139 != 0;
	}
	return 0;
}

int func_695(int iParam0)//Position - 0x1B3A2
{
	return Global_18CD5B[iParam0 /*560*/].f_B.f_13;
}

int func_696()//Position - 0x1B3B7
{
	int iVar0;
	
	if (func_456())
	{
		return 4;
	}
	else if (func_440())
	{
		if (func_596(CAM::_0xDC9DA9E8789F5246()))
		{
			return 8;
		}
		return 6;
	}
	if (func_237(1))
	{
		iVar0 = func_663(CAM::_0xDC9DA9E8789F5246());
		if (iVar0 == 4294967295)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_458(1))
	{
		if (func_596(func_460()))
		{
			return 9;
		}
		return 7;
	}
	return 4294967294;
}

int func_697(bool bParam0)//Position - 0x1B42A
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_698(bool bParam0)//Position - 0x1B43C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	if (bParam0)
	{
		iVar0 = func_171(CAM::_0xDC9DA9E8789F5246());
	}
	else
	{
		iVar0 = func_101(CAM::_0xDC9DA9E8789F5246());
	}
	if (iVar0 != 4294967295)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_701(CAM::_0xDC9DA9E8789F5246());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_700(CAM::_0xDC9DA9E8789F5246());
			if (func_417(func_418(CAM::_0xDC9DA9E8789F5246())))
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
			iVar2 = func_700(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_699(CAM::_0xDC9DA9E8789F5246());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_699(CAM::_0xDC9DA9E8789F5246());
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

int func_699(int iParam0)//Position - 0x1B574
{
	if (func_101(CAM::_0xDC9DA9E8789F5246()) == 238 || func_101(CAM::_0xDC9DA9E8789F5246()) == 249)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C9;
	}
	return 4294967295;
}

int func_700(int iParam0)//Position - 0x1B5AD
{
	if (func_101(CAM::_0xDC9DA9E8789F5246()) == 237 || func_101(CAM::_0xDC9DA9E8789F5246()) == 250)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C8;
	}
	return 4294967295;
}

int func_701(int iParam0)//Position - 0x1B5E6
{
	if (func_171(iParam0) == 236)
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_1C7;
	}
	return 4294967295;
}

int func_702()//Position - 0x1B60B
{
	if (Global_196EF6.f_3 != 0)
	{
		return Global_196EF6.f_3;
	}
	return 4294967295;
}

int func_703()//Position - 0x1B627
{
	if (Global_196EF6.f_2 != 0)
	{
		return Global_196EF6.f_2;
	}
	return 4294967295;
}

int func_704(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1B643
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_63();
	iVar1 = func_63();
	iVar2 = func_63();
	return func_705(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_705(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1B67E
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
	func_365(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_45), 2);
	return func_333(&Var0);
}

int func_706(int iParam0)//Position - 0x1B732
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_181(iVar0);
	}
	return 1;
}

char* func_707(int iParam0)//Position - 0x1B752
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		sVar0 = func_408(&(Global_18CD5B[iParam0 /*560*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_73 != Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_73)
	{
		sVar0 = func_409(iParam0, 0);
		return sVar0;
	}
	if (((func_105(iParam0, 28) || func_105(CAM::_0xDC9DA9E8789F5246(), 28)) || func_412(iParam0)) && !func_411(iParam0))
	{
		return func_409(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_63())
	{
		if (iVar1 != CAM::_0xDC9DA9E8789F5246())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, 4294967295, 1))
			{
				return func_409(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_63())
	{
		sVar0 = func_408(&(Global_18CD5B[iVar1 /*560*/].f_B.f_63));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_409(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_708()//Position - 0x1B857
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_855() && !func_286())
	{
		return;
	}
	if (!func_366())
	{
		return;
	}
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar0 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
	}
	iVar1 = func_130(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_110.f_34F)))
	{
		iVar2 = (func_10() - func_722(&(Local_110.f_34F), 0, 0));
		iVar3 = (func_721() - Local_110.f_73);
		func_719(iVar2);
		if (iVar2 > 30000)
		{
			func_709(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_709(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_709(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_709(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x1B927
{
	char* sVar0;
	
	if (func_717(0) == 0)
	{
		return;
	}
	func_716();
	func_713(iParam0, sParam1, 4294967295, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_500(sParam4))
	{
		sVar0 = sParam4;
	}
	func_710(iParam2, sVar0, 0, 0, 4294967295, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_710(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x1B98C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_712(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_711(7, iVar0);
		Global_14E696.f_112F[iVar0] = uParam0;
		StringCopy(&(Global_14E696.f_112F.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_112F.f_AC[iVar0] = iParam2;
		Global_14E696.f_112F.f_D8[iVar0] = iParam3;
		Global_14E696.f_112F.f_B7[iVar0] = iParam4;
		Global_14E696.f_112F.f_C2[iVar0] = iParam5;
		Global_14E696.f_112F.f_F9[iVar0] = iParam6;
		Global_14E696.f_112F.f_104[iVar0] = iParam7;
		Global_14E696.f_112F.f_CD[iVar0] = uParam8;
		Global_14E696.f_112F.f_13A[iVar0] = iParam9;
		Global_14E696.f_112F.f_145[iVar0] = iParam10;
		Global_14E696.f_112F.f_165[iVar0] = iParam11;
		Global_14E696.f_112F.f_EE[iVar0] = uParam12;
		Global_14E696.f_112F.f_10F[iVar0] = iParam13;
		Global_14E696.f_112F.f_170[iVar0] = iParam14;
		Global_14E696.f_112F.f_17B[iVar0] = iParam15;
		Global_14E696.f_112F.f_186[iVar0] = iParam16;
	}
}

void func_711(int iParam0, int iParam1)//Position - 0x1BADA
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_712(int iParam0, int iParam1)//Position - 0x1BAF3
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

void func_713(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x1BB0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_712(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_711(6, iVar0);
		Global_14E696.f_EC5[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_EC5.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_EC5.f_B7[iVar0] = iParam3;
		Global_14E696.f_EC5.f_AC[iVar0] = iParam2;
		Global_14E696.f_EC5.f_104[iVar0] = iParam4;
		Global_14E696.f_EC5.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14E696.f_EC5.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14E696.f_EC5.f_1BB[iVar0] = iParam7;
		Global_14E696.f_EC5.f_1C6[iVar0] = iParam8;
		Global_14E696.f_EC5.f_1F1[iVar0] = iParam9;
		Global_14E696.f_EC5.f_1FC[iVar0] = iParam10;
		Global_14E696.f_EC5.f_CD[iVar0] = iParam11;
		Global_14E696.f_EC5.f_D8[iVar0] = iParam12;
		Global_14E696.f_EC5.f_E3[iVar0] = iParam13;
		Global_14E696.f_EC5.f_EE[iVar0] = iParam14;
		Global_14E696.f_EC5.f_F9[iVar0] = iParam15;
		Global_14E696.f_EC5.f_207[iVar0] = iParam16;
		Global_14E696.f_EC5.f_212[iVar0] = iParam17;
		Global_14E696.f_EC5.f_21D[iVar0] = iParam18;
		Global_14E696.f_EC5.f_228[iVar0] = iParam19;
		Global_14E696.f_EC5.f_233[iVar0] = iParam20;
		Global_14E696.f_EC5.f_23E[iVar0] = iParam21;
		Global_14E696.f_EC5.f_249[iVar0] = iParam22;
		Global_14E696.f_EC5.f_254[iVar0] = iParam23;
		Global_14E696.f_EC5.f_25F[iVar0] = iParam24;
		if (iParam15 == 5 && func_715())
		{
			Global_14E696.f_440 = 1;
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
				Global_14E696.f_444 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_14E696.f_443 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_14E696.f_440 = 1;
			}
			if (func_714())
			{
				Global_14E696.f_444 = 1;
			}
		}
	}
}

int func_714()//Position - 0x1BD6E
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

int func_715()//Position - 0x1BD92
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_716()//Position - 0x1BDD0
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_258855 = 1;
}

int func_717(bool bParam0)//Position - 0x1BDF3
{
	if (func_718())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_956(CAM::_0xDC9DA9E8789F5246(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_718()//Position - 0x1BE2A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 12);
}

void func_719(int iParam0)//Position - 0x1BE3C
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 8))
	{
		func_720();
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_113, 15);
				MISC::SET_BIT(&iLocal_113, 9);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					MISC::SET_BIT(&iLocal_113, 11);
				}
			}
			else
			{
				INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 11);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 14))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						MISC::SET_BIT(&iLocal_113, 14);
					}
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_113, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_113, 9);
						}
					}
				}
			}
		}
	}
}

void func_720()//Position - 0x1BF6D
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 8))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 9))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 10))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 11))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_113, 16);
					}
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 16))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_113, 13);
						}
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_113, 13))
					{
						MISC::SET_BIT(&iLocal_113, 10);
					}
				}
			}
		}
	}
}

int func_721()//Position - 0x1C02F
{
	return 4;
}

int func_722(var uParam0, bool bParam1, bool bParam2)//Position - 0x1C038
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

void func_723()//Position - 0x1C07F
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = CAM::_0xDC9DA9E8789F5246();
	iVar3 = NETSHOP::_NETWORK_SHOP_BASKET_START();
	if (func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar3 = func_287();
		iVar2 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
	}
	iVar4 = func_130(iVar2);
	if (!func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (!func_366())
		{
			if (func_740("HUNT_OBJ"))
			{
				func_785();
			}
			if (func_740("HUNT_OBJ1L"))
			{
				func_785();
			}
			if (func_740("HUNT_TOBJ"))
			{
				func_785();
			}
			if (func_740("HUNT_DOBJ"))
			{
				func_785();
			}
			if (func_740("HUNT_DOBJ1L"))
			{
				func_785();
			}
			return;
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iVar3 /*14*/].f_1, 6))
	{
		func_785();
		return;
	}
	if (iVar4 < 3)
	{
		if (func_740("HUNT_OBJ"))
		{
			func_785();
		}
		if (func_740("HUNT_OBJ1L"))
		{
			func_785();
		}
		if (func_740("HUNT_TOBJ"))
		{
			func_785();
		}
		if (func_740("HUNT_DOBJ"))
		{
			func_785();
		}
		if (func_740("HUNT_DOBJ1L"))
		{
			func_785();
		}
		return;
	}
	bVar5 = func_739() == true;
	if (iVar3 == Local_110.f_76)
	{
		if (!bVar5)
		{
			if (!func_740("HUNT_OBJ"))
			{
				func_736("HUNT_OBJ", 0);
			}
		}
		else if (!func_740("HUNT_OBJ1L"))
		{
			func_736("HUNT_OBJ1L", 0);
		}
	}
	else if (func_856() == Local_110.f_76)
	{
		if (!bVar5)
		{
			if (!func_740("HUNT_OBJ"))
			{
				func_736("HUNT_OBJ", 0);
			}
		}
		else if (!func_740("HUNT_OBJ1L"))
		{
			func_736("HUNT_OBJ1L", 0);
		}
	}
	else if (func_286())
	{
		if (Local_110.f_77 > 4294967295)
		{
			if (!bVar5)
			{
				if (!func_740("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77)), 64);
					iVar0 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
					func_724("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_740("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77)), 64);
				iVar0 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77));
				func_724("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_724(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1C29E
{
	if (func_725(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140740 = 16;
		Global_140740.f_38 = iParam2;
	}
}

int func_725(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x1C2C3
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
	if (func_735(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_729();
	Global_140740 = 3;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = uParam3;
	Global_140740.f_38 = uParam3;
	func_728();
	func_727(bParam2);
	func_726();
	return 1;
}

void func_726()//Position - 0x1C36D
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_727(bool bParam0)//Position - 0x1C380
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_728()//Position - 0x1C3A6
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

void func_729()//Position - 0x1C3CB
{
	func_731();
	func_730(0);
}

void func_730(bool bParam0)//Position - 0x1C3DC
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = HUD::_0x13C4B962653A5280();
		Global_140740.f_B = HUD::_0x13C4B962653A5280();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = 4294967295;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_731()//Position - 0x1C46A
{
	if (!func_734())
	{
	}
	if (func_733())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_732();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_732()//Position - 0x1C493
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_35);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_733()//Position - 0x1C705
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_734()//Position - 0x1C71B
{
	if (!func_733())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_732();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_735(char* sParam0, char* sParam1)//Position - 0x1C741
{
	if (!func_733())
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
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

void func_736(char* sParam0, bool bParam1)//Position - 0x1C799
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_737(sParam0))
	{
		return;
	}
	func_729();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_728();
	func_727(bParam1);
	func_726();
}

bool func_737(char* sParam0)//Position - 0x1C804
{
	if (!func_733())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_738(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_738(char* sParam0)//Position - 0x1C848
{
	if (!func_733())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

int func_739()//Position - 0x1C87A
{
	return (4 - Local_110.f_73);
}

int func_740(char* sParam0)//Position - 0x1C888
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_733())
	{
		return 0;
	}
	if (Global_140740 == 11)
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
	return func_737(sParam0);
}

void func_741()//Position - 0x1C8D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_855() && !func_286())
	{
		return;
	}
	if (!func_366())
	{
		return;
	}
	iVar1 = func_63();
	iVar2 = 4294967295;
	if (!func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar1 = CAM::_0xDC9DA9E8789F5246();
		iVar2 = NETSHOP::_NETWORK_SHOP_BASKET_START();
	}
	else
	{
		iVar2 = func_287();
		iVar1 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
	}
	if (iVar2 == 4294967295)
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 1))
	{
		iVar0 = func_130(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_110.f_76 || func_856() == Local_110.f_76)
			{
				if (func_768(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_332(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, 4294967295, 2, 1);
					if (iVar2 == NETSHOP::_NETWORK_SHOP_BASKET_START())
					{
						func_767(1);
						func_742(4294967295, 0, 0, 4294967295, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == NETSHOP::_NETWORK_SHOP_BASKET_START())
				{
					func_742(4294967295, 0, 0, 4294967295, 0, 0);
				}
				func_332(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, 4294967295, 2, 1);
			}
		}
		MISC::SET_BIT(&iLocal_112, 1);
	}
}

void func_742(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1C9EC
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_171(CAM::_0xDC9DA9E8789F5246());
		Global_19700D = iVar0;
		Global_19700D.f_1 = iParam0;
		if (func_460() != func_63())
		{
			Global_19700D.f_2 = func_690(func_460());
			Global_19700D.f_3 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_19700D.f_2), &(Global_19700D.f_3));
		}
		Global_19700D.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_19700D.f_1C = func_694(CAM::_0xDC9DA9E8789F5246());
		Global_19700D.f_D = 0;
		Global_19700D.f_E = 0;
		if (func_179(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_19700D.f_17 = func_697(func_237(1));
		}
	}
	else
	{
		iVar0 = func_101(CAM::_0xDC9DA9E8789F5246());
	}
	if (iParam2 || func_305(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_196F08 = iVar0;
		if (func_388(iVar0))
		{
			Global_196F08.f_1 = 4;
		}
		else if (func_387(iVar0))
		{
			Global_196F08.f_1 = 5;
		}
		else if (func_210(iVar0, 0))
		{
			Global_196F08.f_1 = 2;
			if (func_422(iVar0))
			{
				Global_196F08.f_1 = 3;
			}
		}
		else
		{
			Global_196F08.f_1 = 1;
		}
		if (func_460() != func_63())
		{
			Global_196F08.f_4 = func_690(func_460());
			Global_196F08.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_196F08.f_6), &(Global_196F08.f_7));
		}
		Global_196F08.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_196F08.f_1B = 1;
			Global_196F08.f_1C = 1;
		}
		if (iParam0 != 4294967295)
		{
			Global_196F08.f_1A = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_196F08.f_28 = func_453(iParam1);
			Global_196F08.f_29 = func_766();
			Global_196F08.f_2A = func_572(CAM::_0xDC9DA9E8789F5246(), iParam1);
			Global_196F08.f_2C = func_685(CAM::_0xDC9DA9E8789F5246(), iParam1);
		}
		if (!func_440() || iVar0 != 192)
		{
			Global_196F08.f_35 = 0;
		}
	}
	else if (func_385(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_196F7D = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_196F7D = iParam0 + 1;
		}
		else
		{
			Global_196F7D = func_765(CAM::_0xDC9DA9E8789F5246());
		}
		switch (iVar0)
		{
			case 225:
				if (func_419(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					Global_196F7D.f_1 = 0;
				}
				else
				{
					Global_196F7D.f_1 = 1;
				}
				break;
			
			case 226:
				Global_196F7D.f_1 = 2;
				break;
			
			case 227:
				Global_196F7D.f_1 = 3;
				break;
		}
		Global_196F7D.f_15 = 1;
		Global_196F7D.f_16 = 1;
		if (func_460() != func_63())
		{
			Global_196F7D.f_4 = func_690(func_460());
			Global_196F7D.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_196F7D.f_4), &(Global_196F7D.f_5));
		}
		Global_196F7D.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196F7D.f_14 = iParam0;
		}
	}
	else if (func_310(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
		}
		Global_196F3E = iVar0;
		Global_196F08.f_1 = 1;
		if (func_460() != func_63())
		{
			Global_196F3E.f_4 = func_690(func_460());
			Global_196F3E.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_196F3E.f_6), &(Global_196F3E.f_7));
		}
		Global_196F3E.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196F3E.f_15 = iParam0;
		}
	}
	else if (func_383(iVar0))
	{
		Global_196FA9 = iVar0;
		Global_196FA9.f_1 = iParam0;
		Global_196FA9.f_15 = 1;
		Global_196FA9.f_16 = 1;
		if (func_460() != func_63())
		{
			Global_196FA9.f_4 = func_690(func_460());
			Global_196FA9.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_196FA9.f_4), &(Global_196FA9.f_5));
		}
		Global_196FA9.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196FA9.f_14 = iParam0;
		}
		Global_196FA9.f_1B = func_678(func_19(), 5);
		Global_196FA9.f_1C = func_697(func_550(CAM::_0xDC9DA9E8789F5246()));
		Global_196FA9.f_1D = func_428(6107, 4294967295, 0);
		Global_196FA9.f_1E = func_428(6103, 4294967295, 0);
		Global_196FA9.f_1F = func_428(6104, 4294967295, 0);
		Global_196FA9.f_20 = func_428(6106, 4294967295, 0);
		Global_196FA9.f_21 = func_428(6105, 4294967295, 0);
		Global_196FA9.f_22 = func_428(6108, 4294967295, 0);
		Global_196FA9.f_7 = func_696();
		Global_196FA9.f_33 = func_697(bParam4);
	}
	else if (func_381(iVar0))
	{
		Global_196FDF = iVar0;
		Global_196FDF.f_1 = iParam0;
		Global_196FDF.f_15 = 1;
		Global_196FDF.f_16 = 1;
		if (func_460() != func_63())
		{
			Global_196FDF.f_4 = func_690(func_460());
			Global_196FDF.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_196FDF.f_4), &(Global_196FDF.f_5));
		}
		Global_196FDF.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != 4294967295)
		{
			Global_196FDF.f_14 = iParam0;
		}
		Global_196FDF.f_18 = func_428(6157, 4294967295, 0);
		Global_196FDF.f_19 = func_428(6162, 4294967295, 0);
		Global_196FDF.f_1A = func_428(6163, 4294967295, 0);
		Global_196FDF.f_1B = func_697((((func_642() || func_641()) || func_640()) || func_639(CAM::_0xDC9DA9E8789F5246())));
		Global_196FDF.f_1C = func_428(6164, 4294967295, 0);
		Global_196FDF.f_1D = func_697(func_638());
		Global_196FDF.f_1F = 0;
		Global_196FDF.f_1E = 0;
		Global_196FDF.f_20 = 0;
		Global_196FDF.f_21 = 0;
		Global_196FDF.f_22 = 0;
		Global_196FDF.f_10 = 0;
		Global_196FDF.f_7 = func_696();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_417(func_418(CAM::_0xDC9DA9E8789F5246()))))
	{
		Global_197065 = iVar0;
		Global_197065.f_1 = iParam0;
		Global_197065.f_15 = 1;
		Global_197065.f_16 = 1;
		Global_197065.f_7 = func_696();
		if (func_460() != func_63())
		{
			Global_197065.f_4 = func_690(func_460());
			Global_197065.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_197065.f_4), &(Global_197065.f_5));
		}
		if (func_460() != 4294967295)
		{
			Global_197065.f_11 = func_635(func_460());
		}
		Global_197065.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_197065.f_1C = func_694(CAM::_0xDC9DA9E8789F5246());
		Global_197065.f_10 = 0;
		Global_197065.f_18 = 0;
		Global_197065.f_17 = 0;
		if (func_179(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197065.f_21 = func_697(func_237(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_197030 = iVar0;
		Global_197030.f_1 = iParam0;
		Global_197030.f_15 = 1;
		Global_197030.f_16 = 1;
		Global_197030.f_7 = func_696();
		Global_197030.f_18 = 0;
		Global_197030.f_17 = 0;
		Global_197030.f_10 = 0;
		if (func_460() != func_63())
		{
			Global_197030.f_4 = func_690(func_460());
			Global_197030.f_5 = func_689(func_460());
		}
		Global_197030.f_1C = func_694(CAM::_0xDC9DA9E8789F5246());
		if (Global_197030.f_1C)
		{
			Global_197030.f_1D = func_629(CAM::_0xDC9DA9E8789F5246());
		}
		else
		{
			Global_197030.f_1D = 0;
		}
		Global_197030.f_1E = func_613(CAM::_0xDC9DA9E8789F5246(), 4, 4294967295);
		Global_197030.f_1F = func_632(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_20 = func_697(func_612(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_21 = func_697(func_611(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_22 = func_697(func_610(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_23 = func_697(func_609(CAM::_0xDC9DA9E8789F5246()));
		Global_197030.f_24 = func_608(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_25 = func_607(CAM::_0xDC9DA9E8789F5246());
		Global_197030.f_27 = func_606(CAM::_0xDC9DA9E8789F5246());
		if (func_179(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Global_197030.f_29 = func_697(func_237(1));
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_197030.f_4), &(Global_197030.f_5));
		}
		Global_197030.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_197030.f_1C = func_694(CAM::_0xDC9DA9E8789F5246());
	}
	else
	{
		if (func_460() != func_63())
		{
			Global_196EF6 = func_690(func_460());
			Global_196EF6.f_1 = func_689(func_460());
		}
		Global_196EF6.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_196EF6.f_D = func_764();
		Global_196EF6.f_F = 0;
		if (func_458(1))
		{
			if (func_240() == func_460())
			{
				Global_196EF6.f_F = 1;
			}
		}
		if (func_763())
		{
			Global_196F7D.f_1C = 1;
		}
		if (((((func_762() || func_761()) || func_760()) || func_759()) || func_757()) || func_756(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_1E = 1;
		}
		if (func_754(func_755(joaat("TRAILERSMALL2"))))
		{
			Global_196F7D.f_20 = 1;
		}
		if (func_746(func_753(joaat("CADDY"))))
		{
			Global_196F7D.f_1F = 1;
		}
		if (func_677(CAM::_0xDC9DA9E8789F5246()) || func_676(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_1D = 1;
		}
		if (func_673(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_21 = 1;
			Global_196F7D.f_22 = 1;
		}
		if (func_674(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_196F7D.f_24 = 1;
		}
		if (func_671(0, CAM::_0xDC9DA9E8789F5246()) == 1)
		{
			Global_196F7D.f_23 = 1;
		}
		if (func_745(CAM::_0xDC9DA9E8789F5246(), 3, &uVar1))
		{
			Global_196F7D.f_25 = 1;
		}
		if (func_745(CAM::_0xDC9DA9E8789F5246(), 7, &uVar1))
		{
			Global_196F7D.f_26 = 1;
		}
		if (func_744(CAM::_0xDC9DA9E8789F5246()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_743(CAM::_0xDC9DA9E8789F5246(), iVar2);
				if (func_569(CAM::_0xDC9DA9E8789F5246(), iVar3, 0))
				{
					Global_196F7D.f_27 = 1;
				}
				if (func_569(CAM::_0xDC9DA9E8789F5246(), iVar3, 2))
				{
					Global_196F7D.f_28 = 1;
				}
				if (func_569(CAM::_0xDC9DA9E8789F5246(), iVar3, 1))
				{
					Global_196F7D.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_743(int iParam0, int iParam1)//Position - 0x1D459
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
	if (func_564(Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/]))
	{
		uVar0 = Global_1841F3[iParam0 /*790*/].f_111.f_AE[iParam1 /*12*/];
	}
	return uVar0;
}

int func_744(int iParam0)//Position - 0x1D4B2
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_745(int iParam0, int iParam1, var uParam2)//Position - 0x1D4F4
{
	int iVar0;
	
	if (iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_671(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_746(int iParam0)//Position - 0x1D52E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_751(11, 4294967295) == 0)
	{
		return 0;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = (iParam0 + func_656(11));
		func_655(iVar1, &iVar0, 1);
		iVar2 = func_751(func_748(iVar1), 4294967295);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_428(func_747(4, iVar0), 4294967295, 0);
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

int func_747(int iParam0, int iParam1)//Position - 0x1D5AA
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
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
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
					return 3332;
				
				case 78:
					return 3340;
				
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
					return 4128;
				
				case 101:
					return 4136;
				
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
					return 4288;
				
				case 121:
					return 4296;
				
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
					return 4448;
				
				case 141:
					return 4456;
				
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
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
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
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
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
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
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
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
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
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
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
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
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
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
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
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
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
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
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
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_748(int iParam0)//Position - 0x22CAC
{
	int iVar0;
	
	if (iParam0 < 261)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0 >= func_656(iVar0) && iParam0 < func_749(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_749(int iParam0)//Position - 0x22CEF
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
			return 4294967295;
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
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_659(iParam0);
		return func_750(iVar0);
	}
	return (func_657(iParam0, 4294967295) * iParam0 + 1);
}

int func_750(int iParam0)//Position - 0x22E03
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
	return 4294967295;
}

int func_751(int iParam0, int iParam1)//Position - 0x22E34
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 4294967295)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_40001.f_41D8)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_659(iParam0);
		if (iVar1 == 0 && func_428(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_752(4294967295) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_694(CAM::_0xDC9DA9E8789F5246()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_150A87[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_273025[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 21)
		{
			return 0;
		}
		return Global_272FA8[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_752(int iParam0)//Position - 0x22F0F
{
	if (!Global_40001.f_5BE2)
	{
		return 0;
	}
	return func_428(7207, iParam0, 0) != 0;
}

int func_753(int iParam0)//Position - 0x22F32
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
			break;
		
		case joaat("BOXVILLE5"):
			return 1;
			break;
		
		case joaat("WASTELANDER"):
			return 2;
			break;
		
		case joaat("PHANTOM2"):
			return 3;
			break;
		
		case joaat("VOLTIC2"):
			return 4;
			break;
		
		case joaat("DUNE4"):
			return 5;
			break;
		
		case joaat("DUNE5"):
			return 5;
			break;
		
		case joaat("RUINER2"):
			return 6;
			break;
		
		case joaat("BLAZER5"):
			return 7;
			break;
	}
	return 4294967295;
}

int func_754(int iParam0)//Position - 0x22FBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = iParam0 + 157;
		func_655(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_428(func_747(4, iVar0), 4294967295, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_755(int iParam0)//Position - 0x23001
{
	switch (iParam0)
	{
		case joaat("TRAILERSMALL2"):
			return 0;
			break;
	}
	return 4294967295;
}

int func_756(int iParam0)//Position - 0x2301E
{
	if (iParam0 != func_63())
	{
		if (Global_1841F3[iParam0 /*790*/].f_111.f_14A != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_757()//Position - 0x23047
{
	return func_428(func_758(3), 4294967295, 0) != 0;
}

int func_758(int iParam0)//Position - 0x2305C
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 9954;
}

bool func_759()//Position - 0x230C8
{
	return func_428(6163, 4294967295, 0) != 0;
}

bool func_760()//Position - 0x230DB
{
	return func_428(5380, 4294967295, 0) != 0;
}

bool func_761()//Position - 0x230EE
{
	return func_428(3828, 4294967295, 0) != 0;
}

bool func_762()//Position - 0x23101
{
	return func_428(3223, 4294967295, 0) != 0;
}

bool func_763()//Position - 0x23114
{
	return func_428(5379, 4294967295, 0) != 0;
}

int func_764()//Position - 0x23127
{
	int iVar0;
	
	iVar0 = func_460();
	if (iVar0 != func_63())
	{
		return Global_18CD5B[iVar0 /*560*/].f_B.f_5D;
	}
	return 0;
}

int func_765(int iParam0)//Position - 0x2314F
{
	if (func_101(iParam0) == 225 || func_101(iParam0) == 226)
	{
		return func_419(iParam0);
	}
	return 4294967295;
}

var func_766()//Position - 0x2317C
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_571(CAM::_0xDC9DA9E8789F5246(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_767(bool bParam0)//Position - 0x231AE
{
	if (bParam0)
	{
		if (!func_105(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			if (func_130(CAM::_0xDC9DA9E8789F5246()) != 0)
			{
				func_106(9);
			}
		}
	}
	else if (func_105(CAM::_0xDC9DA9E8789F5246(), 9))
	{
		func_104(9);
	}
}

int func_768(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x231F4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = 4294967197;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_769(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_C12 = iParam6;
			Global_BB1[3 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
			Global_BFE = iParam0;
			MISC::SET_BIT(&Global_94F, 1);
			MISC::SET_BIT(&Global_94F, 7);
		}
		return 1;
	}
	return 0;
}

int func_769(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x2328C
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_779();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_38B1 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_38B1 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_38B1 == 1)
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
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
			{
				return 0;
			}
		}
		if (Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 == 1)
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
	if (func_778() == 0)
	{
		func_776();
		return 0;
	}
	func_775(Global_41F9);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/]), sParam1, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = iParam2;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_19 = iParam7;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1A = uParam8;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1D = uParam9;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1E = uParam12;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1F = uParam11;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1C = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_21), sParam4, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_32), sParam5, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_53), sParam15, 64);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
		Global_C11 = 4;
		func_774(0);
		func_774(2);
		func_774(1);
	}
	else
	{
		func_779();
		switch (iParam16)
		{
			case 3:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[Global_38B1] = 1;
				break;
			
			case 0:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_38B1)
			{
				case 0:
					func_774(0);
					Global_C11 = 0;
					break;
				
				case 1:
					func_774(1);
					Global_C11 = 1;
					break;
				
				case 2:
					func_774(2);
					Global_C11 = 2;
					break;
				
				case 3:
					func_774(3);
					Global_C11 = 3;
					break;
				
				default:
					Global_C11 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
		{
			Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_41FB[Global_41F9] = 0;
	if (bParam10)
	{
		func_779();
		if (Global_3878)
		{
			StringCopy(&Global_38A6, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_38B1)
			{
				case 0:
					StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_403())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, true);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_773(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_770(1);
			func_773(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

void func_770(int iParam0)//Position - 0x23742
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
		if (func_772(14))
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
								func_158(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_771(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_771(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_771(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_771(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_771(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_158(&(Global_956[iVar1 /*15*/]));
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
								func_158(&(Global_956[iVar1 /*15*/]));
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
								func_158(&(Global_956[iVar1 /*15*/]));
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
								func_158(&(Global_956[iVar1 /*15*/]));
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
								func_158(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_771(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_771(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_771(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x23CDB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
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
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

bool func_772(int iParam0)//Position - 0x23D8E
{
	return Global_8D15 == iParam0;
}

void func_773(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x23D9C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
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

void func_774(int iParam0)//Position - 0x23DFF
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19E56.f_36C7[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_775(int iParam0)//Position - 0x23E1E
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
	Global_19E56.f_3721[iParam0 /*104*/].f_12 = iVar0;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_776()//Position - 0x23EB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
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
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_777(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
		{
			Global_41F9 = iVar2;
		}
		iVar2++;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = 1;
}

int func_777(struct<6> Param0, struct<6> Param1)//Position - 0x23F7B
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

int func_778()//Position - 0x24067
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
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
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0)
		{
			Global_41F9 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0 || Global_19E56.f_3721[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_777(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
			{
				Global_41F9 = iVar2;
			}
		}
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_41F9 == 34)
	{
		return 0;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 0;
	return 1;
}

void func_779()//Position - 0x241CF
{
	if (func_772(14))
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
		Global_38B1 = func_780();
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

var func_780()//Position - 0x24271
{
	func_781();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_781()//Position - 0x2428A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_784(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_783(AUDIO::_0x0626A247D2405330());
			if (func_782(iVar0) && (!func_772(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_782(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_782(int iParam0)//Position - 0x24387
{
	return iParam0 < 3;
}

int func_783(int iParam0)//Position - 0x24393
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_784(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_784(int iParam0)//Position - 0x243D0
{
	if (func_782(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_785()//Position - 0x243FA
{
	if (!func_733())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_729();
}

void func_786()//Position - 0x24427
{
	if (func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	switch (Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_9)
	{
		case 0:
			func_788();
			func_298();
			if (Local_110.f_75 == 2)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_9 = 2;
			}
			else if (Local_110.f_75 == 3)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_298();
			if (func_787())
			{
				func_720();
			}
			if (Local_110.f_75 == 3)
			{
				Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_869();
			break;
	}
}

bool func_787()//Position - 0x244C3
{
	return ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 3)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 5));
}

void func_788()//Position - 0x244F2
{
	func_808();
	func_807();
	func_741();
	func_723();
	func_797();
	func_796();
	func_791();
	func_790();
	func_708();
	func_789();
}

void func_789()//Position - 0x24522
{
}

void func_790()//Position - 0x2452A
{
	if (func_787())
	{
		return;
	}
	if (!func_855())
	{
		return;
	}
	if (!Global_40001.f_3A2B)
	{
		return;
	}
	if (Local_110.f_73 == 0)
	{
		return;
	}
}

void func_791()//Position - 0x24560
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_855())
	{
		return;
	}
	if (func_787())
	{
		return;
	}
	fVar2 = func_140(&iVar0, 1);
	if (fVar2 < 62500f)
	{
		if (iVar0 > 4294967295)
		{
			if (iLocal_119 != iVar0)
			{
				vVar1 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), false) };
				func_90(10, 0, 0, 0, 0);
				func_792(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, 3212836864);
				iLocal_119 = iVar0;
				MISC::SET_BIT(&iLocal_112, 16);
			}
		}
	}
	else if (fVar2 > 250000f)
	{
		func_328();
	}
}

void func_792(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x24603
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = 3212836864;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		if (!Global_24D471.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_24D471.f_6))
	{
		Global_24D471.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_24D471.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_A = 0;
	Var0.f_B = { 0f, 0f, 0f };
	Var0.f_E = { 0f, 0f, 0f };
	Var0.f_11 = 0f;
	Var0.f_15 = fParam7;
	Var0.f_16 = iParam8;
	if (func_793(CAM::_0xDC9DA9E8789F5246()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_17 = 1;
		}
		else
		{
			Var0.f_17 = 0;
		}
	}
	else
	{
		Var0.f_17 = 0;
	}
	if (Var0.f_15 < 1f)
	{
		Var0.f_15 = 1f;
	}
	Var0.f_18 = iParam9;
	Var0.f_1A = iParam10;
	Var0.f_1B = iParam12;
	Global_24D471 = { Var0 };
}

int func_793(int iParam0)//Position - 0x2472C
{
	if (((func_794(iParam0, 1) || func_128(iParam0)) || func_102(iParam0, 0)) || func_372(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_794(int iParam0, bool bParam1)//Position - 0x24768
{
	if (Global_1406BF != 0)
	{
		return func_795(iParam0) != 0;
	}
	return func_266(iParam0, bParam1);
}

int func_795(int iParam0)//Position - 0x2478E
{
	if (func_956(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

void func_796()//Position - 0x247B0
{
	int iVar0;
	
	if (iLocal_116 != Local_110.f_73)
	{
		if (func_855())
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
				{
					if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
						switch (Local_110.f_73)
						{
							case 1:
								if (iVar0 < Global_40001.f_3A28)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), Global_40001.f_3A28, 0);
									HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_40001.f_3A29)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), Global_40001.f_3A29, 0);
									HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_40001.f_3A2A)
								{
									HUD::_0x14621BB1DF14E2B2(Global_40001.f_3A2A);
									PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), Global_40001.f_3A2A, 0);
									HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
								}
								break;
						}
						iLocal_116 = Local_110.f_73;
					}
				}
			}
		}
		else
		{
			iLocal_116 = Local_110.f_73;
		}
	}
}

void func_797()//Position - 0x248A1
{
	int iVar0;
	
	if (!func_366())
	{
		if (func_806("HUNT_HELPA", "HUNT_TARBLP"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return;
	}
	iVar0 = func_130(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 < 2)
	{
		if (func_806("HUNT_HELPA", "HUNT_TARBLP"))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 2))
	{
		if (!func_805(86))
		{
			if (func_799(0, 1, 1, 1))
			{
				if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_110.f_76)
				{
					func_798("HUNT_HELPA", "HUNT_TARBLP", 6, 4294967295);
					func_307(1);
					MISC::SET_BIT(&iLocal_112, 2);
				}
				else if (func_856() == Local_110.f_76)
				{
					func_798("HUNT_HELPAG", "HUNT_TARBLP", 6, 4294967295);
					func_307(1);
					MISC::SET_BIT(&iLocal_112, 2);
				}
				else if (func_286())
				{
					func_798("HUNT_HELPD", "HUNT_TARRVL", 9, 4294967295);
					func_307(1);
					MISC::SET_BIT(&iLocal_112, 2);
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 2))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 3))
		{
			if (func_799(0, 1, 1, 1))
			{
				if (!func_806("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_110.f_76 || func_856() == Local_110.f_76)
					{
						func_308("HUNT_HELPB", 4294967295);
						func_307(1);
						MISC::SET_BIT(&iLocal_112, 3);
					}
				}
			}
		}
	}
}

void func_798(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x249E8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_799(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x24A13
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_804())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	if (func_404())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_266(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_803(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_802())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (Global_180517)
	{
		return 0;
	}
	if (func_801())
	{
		return 0;
	}
	if (func_800())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (Global_10B8E)
	{
		return 0;
	}
	if (Global_26AAFF)
	{
		return 0;
	}
	return 1;
}

bool func_800()//Position - 0x24B00
{
	return Global_255C02.f_244;
}

bool func_801()//Position - 0x24B0F
{
	return Global_255C02.f_2DD;
}

bool func_802()//Position - 0x24B1E
{
	return Global_252F9E.f_BD4.f_242;
}

int func_803(int iParam0)//Position - 0x24B30
{
	if (Global_24FBF9[iParam0 /*413*/].f_D0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_804()//Position - 0x24B4C
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_805(int iParam0)//Position - 0x24B6E
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 == iParam0;
}

int func_806(char* sParam0, int iParam1)//Position - 0x24B85
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_807()//Position - 0x24B9E
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_140(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_123(CAM::_0xDC9DA9E8789F5246()))
		{
			func_122();
		}
	}
}

void func_808()//Position - 0x24BCA
{
	if (func_133())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1, 1))
		{
			func_108(0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_130(CAM::_0xDC9DA9E8789F5246()) == 0)
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1, 1))
	{
		if (!func_855())
		{
			if (!func_132())
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_1, 6))
				{
					func_108(1);
					MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_809()//Position - 0x24C58
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
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_2, iVar0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6E, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (func_856() == Local_110.f_76)
							{
								if (func_827(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1)))
								{
									MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_3, iVar0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_70, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
				{
					if (func_826(iVar0))
					{
						MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_4, iVar0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6F, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (MISC::IS_BULLET_IN_AREA(unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), true), 10f, 1))
						{
							MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_825(iVar0);
		if (func_366())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_127[iVar0]))
			{
				if (!func_787())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_127[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1));
							if (func_856() == Local_110.f_76)
							{
								HUD::SET_BLIP_PRIORITY(iLocal_127[iVar0], 12);
								HUD::SET_BLIP_SPRITE(iLocal_127[iVar0], 432);
								func_824(&(iLocal_127[iVar0]), 6);
							}
							else
							{
								HUD::SET_BLIP_SPRITE(iLocal_127[iVar0], 480);
								func_824(&(iLocal_127[iVar0]), 9);
							}
							HUD::SET_BLIP_FLASHES(iLocal_127[iVar0], 1);
							HUD::SET_BLIP_FLASH_TIMER(iLocal_127[iVar0], 7000);
							HUD::SET_BLIP_SCALE(iLocal_127[iVar0], 1.1f);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_127[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					HUD::REMOVE_BLIP(&(iLocal_127[iVar0]));
				}
				else if (func_787())
				{
					HUD::REMOVE_BLIP(&(iLocal_127[iVar0]));
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_127[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_127[iVar0]));
		}
		func_823(iVar0);
		func_822(iVar0);
		func_820(iVar0);
		switch (Local_110.f_2[iVar0 /*26*/].f_11)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2)))
								{
									if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 4036695475) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 4036695475) != 0)
									{
										BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2), 20f, 786603);
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
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2)))
									{
										if ((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 4036695475) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 4036695475) != 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6C, iVar0))
										{
											BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_6C, iVar0))
											{
												GRAPHICS::_0x35FB78DC42B7BD21(&(Local_110.f_6C), iVar0);
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
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 3466132403) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 3466132403) != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									BRAIN::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 3148068810) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 3148068810) != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
									{
										BRAIN::TASK_WANDER_STANDARD(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_816(iVar0);
										if (!PED::IS_PED_INJURED(iVar2))
										{
											BRAIN::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), iVar2, 500f, 4294967295, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 2852500626);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), false);
									BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_PED_TO_LOAD_COVER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_815(iVar0, &fVar5);
									if (iVar4 != func_63())
									{
										BRAIN::TASK_SEEK_COVER_FROM_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), PLAYER::GET_PLAYER_PED(iVar4), 4294967295, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									BRAIN::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
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
			switch (Local_110.f_2[iVar0 /*26*/].f_12[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										BRAIN::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 2852500626);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 2852500626);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 3466132403);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											BRAIN::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
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
	if (func_855())
	{
		func_810();
	}
}

void func_810()//Position - 0x25890
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_811(uLocal_129[iVar0], &(Local_128[iVar0 /*8*/]), 3212836864, 0, 0, 0, 0, 4294967295, 4294967295, 1);
		iVar0++;
	}
}

void func_811(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x258C9
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_814())
		{
			Global_252F9E = CAM::_0xDC9DA9E8789F5246();
		}
		if (bParam3)
		{
			func_813(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_813(NETWORK::NET_TO_PED(iParam0), iParam1, 4294967295, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_812(iParam1);
	}
}

void func_812(int iParam0)//Position - 0x25944
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
				HUD::_SET_PED_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_813(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x259B6
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
			if (iParam8 == 4294967295)
			{
				HUD::_SET_PED_AI_BLIP(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::_SET_AI_BLIP_TYPE(iParam0, iParam2);
			HUD::_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == 4294967295)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		HUD::_IS_AI_BLIP_ALWAYS_SHOWN(iParam0, iParam4);
		HUD::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = HUD::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == 4294967295)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == 4294967295)
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
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == 4294967295)
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
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_814()//Position - 0x25B8B
{
	return Global_140842;
}

int func_815(int iParam0, float fParam1)//Position - 0x25B97
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
	vVar3 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true) };
	iVar4 = 0;
	while (iVar4 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
			if (!func_17(iVar5, 0))
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (iVar4 == Local_110.f_76 || Local_111[iVar4 /*14*/].f_A == Local_110.f_76)
				{
					if (!PED::IS_PED_INJURED(iVar6))
					{
						fVar2 = SYSTEM::VDIST2(unk_0x8000C77B5F336760(iVar6, true), vVar3);
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

int func_816(int iParam0)//Position - 0x25C5D
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_817(iParam0);
	if (iVar1 != func_63())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	return iVar0;
}

int func_817(int iParam0)//Position - 0x25C80
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
	vVar4 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (func_179(iVar5, 1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[iVar3 /*14*/].f_1, 1))
				{
					if (func_64(iVar5) == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_76)))
					{
						if (!PED::IS_PED_INJURED(iVar6))
						{
							fVar2 = SYSTEM::VDIST2(unk_0x8000C77B5F336760(iVar6, true), vVar4);
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

int func_818(int iParam0)//Position - 0x25D43
{
	if (unk_0xDD5EE7D9FC37FA16(iParam0))
	{
		return 1;
	}
	if (func_819(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_819(int iParam0)//Position - 0x25D66
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

void func_820(int iParam0)//Position - 0x25D96
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar5;
	
	if (!func_366())
	{
		return;
	}
	if (func_130(CAM::_0xDC9DA9E8789F5246()) < 1)
	{
		return;
	}
	if (!func_855() && !func_286())
	{
		return;
	}
	if (func_787())
	{
		return;
	}
	if (func_855())
	{
		HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_110.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1)))
			{
				vVar4 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true) };
				GRAPHICS::DRAW_MARKER(2, vVar4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
			else
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 0);
				func_821(iVar5, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_821(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x25EA6
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
	GRAPHICS::DRAW_MARKER(2, unk_0x8000C77B5F336760(iParam0, true) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_822(int iParam0)//Position - 0x25F3D
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	bool bVar4;
	
	if (Local_110.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_110.f_2[iParam0 /*26*/].f_19)
	{
		return;
	}
	if (func_856() != Local_110.f_76)
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_D, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_C), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1);
	vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false) };
	vVar2 = { unk_0x8000C77B5F336760(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 5625f)
	{
		MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_D), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar3]))
		{
			if (!func_14(Local_110.f_2[iParam0 /*26*/].f_3[iVar3]))
			{
				bVar4 = true;
			}
		}
		iVar3++;
	}
	if (!bVar4)
	{
		MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_D), iParam0);
	}
}

void func_823(int iParam0)//Position - 0x2607C
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (Local_110.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_110.f_2[iParam0 /*26*/].f_18)
	{
		return;
	}
	if (func_856() != Local_110.f_76)
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_C, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_C), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1);
	vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false) };
	vVar2 = { unk_0x8000C77B5F336760(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 62500f)
	{
		MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_C), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar4]))
		{
			if (func_14(Local_110.f_2[iParam0 /*26*/].f_3[iVar4]))
			{
				MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_C), iParam0);
			}
			else
			{
				iVar3 = NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar4]);
				if (func_856() == Local_110.f_76)
				{
					if (SYSTEM::VDIST2(vVar1, vVar2) < 40000f)
					{
						MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_C), iParam0);
						return;
					}
					if (func_827(iVar3))
					{
						MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_C), iParam0);
						return;
					}
				}
			}
		}
		iVar4++;
	}
}

void func_824(var uParam0, int iParam1)//Position - 0x26216
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_325(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_825(int iParam0)//Position - 0x2623C
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (Local_110.f_2[iParam0 /*26*/] == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_110.f_2[iParam0 /*26*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							vVar2 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), true) };
							vVar3 = { vVar2 };
							vVar3.z = (vVar3.z + 500f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &fVar1, 0, 0))
							{
								if (MISC::ABSF((vVar2.z - fVar1)) > 30f)
								{
									unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_826(int iParam0)//Position - 0x2631E
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_110.f_2[iParam0 /*26*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_827(int iParam0)//Position - 0x2638A
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	if (func_828())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(CAM::_0xDC9DA9E8789F5246(), &iVar0))
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

bool func_828()//Position - 0x263FC
{
	return Global_1805F3;
}

void func_829()//Position - 0x26408
{
	int iVar0;
	int iVar1;
	
	if (Local_110 != 4)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_115);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				if (!func_787())
				{
					if (!func_855())
					{
						if (func_286())
						{
							if (func_179(iVar1, 1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_76));
								if (func_74(iVar1, iVar0, 1))
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_8, iLocal_115))
									{
										func_326(iVar1, 432, 1, 0);
										func_320(iVar1, func_325(iLocal_130), 1, 0);
										MISC::SET_BIT(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_8), iLocal_115);
									}
								}
							}
						}
					}
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_8, iLocal_115))
			{
				func_326(iVar1, 432, 0, 0);
				func_320(iVar1, func_325(iLocal_130), 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_8), iLocal_115);
			}
		}
	}
	iLocal_115++;
	if (iLocal_115 >= 32)
	{
		iLocal_115 = 0;
	}
}

int func_830(bool bParam0)//Position - 0x26506
{
	if (func_834(1))
	{
		return 1;
	}
	if (Global_26862F.f_1313.f_23)
	{
		Global_26862F.f_1313.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_240() == func_63() || !func_956(func_240(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_375(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_833(CAM::_0xDC9DA9E8789F5246()) && func_831(func_832(CAM::_0xDC9DA9E8789F5246()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_831(int iParam0, int iParam1)//Position - 0x26589
{
	return func_317(iParam0) == iParam1;
}

int func_832(int iParam0)//Position - 0x2659A
{
	if (iParam0 != func_63() && func_956(iParam0, 1, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_135.f_D;
	}
	return 4294967295;
}

int func_833(int iParam0)//Position - 0x265CB
{
	if (iParam0 != func_63() && func_956(iParam0, 1, 1))
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135, 4);
	}
	return 0;
}

int func_834(bool bParam0)//Position - 0x265FF
{
	bool bVar0;
	
	if (!func_458(1))
	{
		bVar0 = false;
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_63())
		{
			if (func_956(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 0, 1))
			{
				if ((Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 4 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 8) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_835(func_101(CAM::_0xDC9DA9E8789F5246())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_513(31);
				if (func_305(func_101(CAM::_0xDC9DA9E8789F5246())))
				{
					func_513(81);
				}
				if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 != func_63() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
				{
					Global_18C773 = func_344(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_239(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39))
					{
						func_513(88);
					}
				}
				else
				{
					Global_18C773 = 1;
				}
				Global_18C763 = { Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_63 };
			}
			return 1;
		}
	}
	return 0;
}

int func_835(int iParam0)//Position - 0x26751
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
	return 4294967295;
}

void func_836()//Position - 0x26905
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_110.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_129[iVar0] = Local_110.f_2[iVar1 /*26*/].f_3[iVar2];
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

void func_837()//Position - 0x2698A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (NETSHOP::_NETWORK_SHOP_BASKET_START() == Local_110.f_76 || func_856() == Local_110.f_76);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), CAM::_0xDC9DA9E8789F5246(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), CAM::_0xDC9DA9E8789F5246(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_838()//Position - 0x26A31
{
	if (Local_110.f_76 > 4294967295)
	{
		iLocal_130 = func_706(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_76)));
	}
}

void func_839(float fParam0)//Position - 0x26A54
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_323())
	{
		return;
	}
	fVar0 = (Global_26862F.f_130E - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_26862F.f_130F))
	{
		if (!Global_26862F.f_130F == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26862F.f_130E = fParam0;
	Global_26862F.f_130F = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_840(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x26AC0
{
	float fVar0;
	
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 != iParam0)
	{
		func_854(4294967295);
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 = iParam0;
		if (func_853() != 4294967295)
		{
			func_852(4294967295);
		}
		if (func_851() != 4294967295)
		{
			func_850(4294967295);
		}
		func_849(iParam2);
		func_847(iParam0);
		if (!func_112(iParam0))
		{
			fVar0 = func_111(iParam0);
			if (fVar0 != 1f)
			{
				func_839(fVar0);
				MISC::SET_BIT(&(Global_196EED.f_3), 1);
			}
		}
		if (!func_115(iParam0) || iParam3)
		{
			if (func_113(iParam0, iParam2) && iParam3 == 1)
			{
				HUD::_0x14621BB1DF14E2B2(0);
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), 0, 0);
					HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				}
				MISC::SET_BIT(&(Global_196EED.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				GRAPHICS::_0x54E22EA2C1956A8D(1f);
				HUD::_0x14621BB1DF14E2B2(5);
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
			if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 0))
			{
				func_513(6);
			}
			func_846();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_128(CAM::_0xDC9DA9E8789F5246()) && func_120(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_1), 8);
		}
		func_842();
		if (func_841(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_196EED.f_3), 6);
		}
		Global_26862F.f_185C = 0;
	}
}

int func_841(int iParam0)//Position - 0x26CDD
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

void func_842()//Position - 0x26D27
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_845();
	iVar2 = func_64(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_74(iVar1, iVar2, 1) || func_843(iVar1, CAM::_0xDC9DA9E8789F5246()))
			{
				unk_0xB7BCAAFF114A94F2(CAM::_0xDC9DA9E8789F5246(), iVar1, iVar3);
				unk_0xB7BCAAFF114A94F2(iVar1, CAM::_0xDC9DA9E8789F5246(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_843(int iParam0, int iParam1)//Position - 0x26D97
{
	if (func_179(iParam0, 1) && func_179(iParam1, 1))
	{
		return (func_844(iParam0) == func_64(iParam1) || func_844(iParam1) == func_64(iParam0));
	}
	return 0;
}

int func_844(int iParam0)//Position - 0x26DD9
{
	if (func_179(iParam0, 1))
	{
		return Global_18CD5B[func_64(iParam0) /*560*/].f_B.f_1BB;
	}
	return func_63();
}

int func_845()//Position - 0x26E04
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_460();
	if (iVar0 != func_63())
	{
		if (func_956(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != 4294967295)
			{
				return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar1 /*560*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_846()//Position - 0x26E45
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 1);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 4))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 4);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11BE, 6))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 6);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11BE), 2);
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_29A = 0;
	if (Global_26862F.f_11C0 > 0)
	{
		HUD::_0x14621BB1DF14E2B2(Global_26862F.f_11C0);
	}
	Global_26862F.f_11BF = 0;
}

void func_847(int iParam0)//Position - 0x26EE3
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_428(3791, 4294967295, 0);
	iVar1 = func_848(iParam0);
	if (iVar1 != 4294967295)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_426(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_848(int iParam0)//Position - 0x26F18
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
	return 4294967295;
}

void func_849(int iParam0)//Position - 0x26FAF
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_B0 != iParam0)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_B0 = iParam0;
	}
}

void func_850(int iParam0)//Position - 0x26FDE
{
	if (Global_26862F.f_1313.f_14B != iParam0)
	{
		Global_26862F.f_1313.f_14B = iParam0;
	}
}

int func_851()//Position - 0x27001
{
	return Global_26862F.f_1313.f_14B;
}

void func_852(int iParam0)//Position - 0x27013
{
	if (Global_26862F.f_1313.f_14A != iParam0)
	{
		Global_26862F.f_1313.f_14A = iParam0;
	}
}

int func_853()//Position - 0x27036
{
	return Global_26862F.f_1313.f_14A;
}

void func_854(int iParam0)//Position - 0x27048
{
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_20 = iParam0;
}

int func_855()//Position - 0x27061
{
	int iVar0;
	
	iVar0 = func_856();
	if (iVar0 > 4294967295)
	{
		if (Local_110.f_76 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_856()//Position - 0x27083
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = func_63();
	if (!func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		iVar0 = NETSHOP::_NETWORK_SHOP_BASKET_START();
		iVar1 = CAM::_0xDC9DA9E8789F5246();
	}
	else
	{
		iVar0 = func_287();
		iVar1 = Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28F;
	}
	if (iVar0 == 4294967295)
	{
		return 4294967295;
	}
	if (Local_111[iVar0 /*14*/].f_A != 4294967295)
	{
		return Local_111[iVar0 /*14*/].f_A;
	}
	if (func_119(iVar1))
	{
		Local_111[iVar0 /*14*/].f_A = iVar0;
		if (iVar0 == Local_110.f_76)
		{
			func_767(1);
		}
	}
	else if (func_179(iVar1, 1))
	{
		iVar2 = func_64(iVar1);
		if (iVar2 != func_63())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_111[iVar0 /*14*/].f_A = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_111[iVar0 /*14*/].f_A;
}

int func_857()//Position - 0x2714A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
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

int func_858()//Position - 0x271D3
{
	return Local_110;
}

int func_859(int iParam0)//Position - 0x271DD
{
	return Local_111[iParam0 /*14*/];
}

int func_860()//Position - 0x271EC
{
	var uVar0;
	
	func_865(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_864())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_863())
	{
		return 1;
	}
	if (func_862(157))
	{
		if (!func_861())
		{
			return 1;
		}
	}
	if (func_862(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_323() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_323()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_861()//Position - 0x27276
{
	return Global_255C02.f_24B;
}

int func_862(int iParam0)//Position - 0x27285
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_863()//Position - 0x2729C
{
	return Global_25824F;
}

bool func_864()//Position - 0x272A8
{
	return Global_255C02.f_246;
}

void func_865(var uParam0)//Position - 0x272B7
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
					func_866(iVar0);
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

void func_866(int iParam0)//Position - 0x2732A
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_956(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_867(iVar2, &bVar3))
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

int func_867(int iParam0, var uParam1)//Position - 0x273AB
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

void func_868()//Position - 0x2740A
{
	SYSTEM::WAIT(0);
}

void func_869()//Position - 0x27417
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_855() || func_286())
				{
					func_603(0, 4, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					MISC::SET_BIT(&iLocal_112, 6);
				}
			}
		}
		uVar0 = Local_110.f_73;
		uVar1 = Local_110.f_79;
		iVar2 = 4294967295;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/].f_B;
		}
		func_915(uVar0, uVar1, iVar2, 3212836864);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330()) == iLocal_117)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330(), iLocal_118);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 18))
	{
		func_331(1);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 18);
	}
	func_914();
	if (Local_110.f_77 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_77)))
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
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_110.f_367, iVar3))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_110.f_361[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112, 17))
	{
		HUD::_0x14621BB1DF14E2B2(iLocal_132);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_112, 17);
	}
	func_328();
	MISC::SET_BIT(&iLocal_113, 8);
	func_720();
	OBJECT::_0x78857FC65CADB909(1);
	func_767(0);
	func_871(1, 0);
	HUD::_0x14621BB1DF14E2B2(5);
	func_319();
	func_870();
}

void func_870()//Position - 0x2758E
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_871(bool bParam0, int iParam1)//Position - 0x2759A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14B91C.f_1.f_6C != 0)
	{
		Global_14B91C.f_1.f_6C = 0;
	}
	Global_14B91C.f_1.f_6D = 4294967295;
	Global_14B91C.f_1.f_6E = 4294967295;
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 167 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 168)
	{
		func_912();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 4);
	}
	if ((func_456() && iParam1 != 0) && Global_40001.f_41D5)
	{
		if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 190 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 192)
		{
			func_894(CAM::_0xDC9DA9E8789F5246(), iParam1, 1, 0);
		}
	}
	if (((Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 164 || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 208) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 250) || Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 != 4294967295)
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 = 4294967295;
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1806E7.f_1, 14) && !func_128(CAM::_0xDC9DA9E8789F5246()))
		{
			func_108(0);
		}
	}
	else if (func_892(CAM::_0xDC9DA9E8789F5246()) != 4294967295)
	{
		func_854(4294967295);
	}
	func_891(func_63());
	if (func_79(16))
	{
		func_78(16);
	}
	func_888(0);
	func_849(4294967295);
	func_887();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_886(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_884(iVar1);
		iVar1++;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 0))
	{
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 5))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 5);
	}
	iVar2 = func_312();
	if ((func_209(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_883(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_388(iVar2))
	{
		func_880(4294967295, 1);
	}
	else if (((((func_311(iVar2) || func_879(iVar2)) || func_878(iVar2)) || func_385(iVar2)) || func_383(iVar2)) || func_381(iVar2))
	{
	}
	else
	{
		func_880(4294967295, 1);
	}
	func_104(19);
	func_104(20);
	func_104(21);
	func_104(22);
	func_104(27);
	func_78(3);
	func_78(4);
	func_78(7);
	func_877();
	if (func_120(CAM::_0xDC9DA9E8789F5246()))
	{
		func_767(0);
	}
	func_104(29);
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_63();
	if (Global_26862F.f_1313.f_23 != 0)
	{
		Global_26862F.f_1313.f_23 = 0;
	}
	if (bParam0)
	{
		func_80();
	}
	if (!func_128(CAM::_0xDC9DA9E8789F5246()))
	{
		func_103();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 1);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 6);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 7))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 7);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 8))
	{
		func_876("IMPEXP_SELFDES", 0);
		func_874("IMPEXP_SELFDES");
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 8);
	}
	func_872(iVar2, 0);
}

void func_872(int iParam0, bool bParam1)//Position - 0x27963
{
	if (bParam1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_873(iParam0));
			MISC::SET_BIT(&(Global_196EED.f_3), 9);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_196EED.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_873(iParam0));
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_196EED.f_3), 9);
	}
}

char* func_873(int iParam0)//Position - 0x279BF
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

void func_874(char* sParam0)//Position - 0x27A38
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_19E56.f_3721[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_3721[iVar0 /*104*/]), sParam0))
			{
				if (Global_19E56.f_3721[iVar0 /*104*/].f_18 == 2)
				{
				}
				else
				{
					func_779();
					Global_19E56.f_3721[iVar0 /*104*/].f_63[Global_38B1] = 0;
					if (func_875(iVar0))
					{
					}
					else
					{
						Global_19E56.f_3721[iVar0 /*104*/].f_18 = 0;
						Global_19E56.f_3721[iVar0 /*104*/].f_1C = 0;
						Global_19E56.f_3721[iVar0 /*104*/].f_1D = 0;
					}
					HUD::_REMOVE_NOTIFICATION(Global_19E56.f_3721[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_875(int iParam0)//Position - 0x27AEC
{
	if ((Global_19E56.f_3721[iParam0 /*104*/].f_63[0] == 1 || Global_19E56.f_3721[iParam0 /*104*/].f_63[1] == 1) || Global_19E56.f_3721[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_876(char* sParam0, int iParam1)//Position - 0x27B41
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_19E56.f_3721[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_3721[iVar0 /*104*/]), sParam0))
			{
				if (Global_19E56.f_3721[iVar0 /*104*/].f_18 == 0)
				{
				}
				Global_19E56.f_3721[iVar0 /*104*/].f_18 = 1;
				if (Global_19E56.f_3721[iVar0 /*104*/].f_19 == 1)
				{
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[0] == 1)
					{
						Global_19E56.f_36C7[0 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[1] == 1)
					{
						Global_19E56.f_36C7[1 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[2] == 1)
					{
						Global_19E56.f_36C7[2 /*20*/].f_11 = 0;
					}
					if (Global_19E56.f_3721[iVar0 /*104*/].f_63[3] == 1)
					{
						Global_19E56.f_36C7[3 /*20*/].f_11 = 0;
					}
					Global_19E56.f_3721[iVar0 /*104*/].f_19 = 0;
					if (iParam1 == 1)
					{
						Global_19E56.f_3721[iVar0 /*104*/].f_1B = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_877()//Position - 0x27C59
{
	if (func_123(CAM::_0xDC9DA9E8789F5246()))
	{
		func_104(25);
	}
}

int func_878(int iParam0)//Position - 0x27C72
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

int func_879(int iParam0)//Position - 0x27C92
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_880(int iParam0, bool bParam1)//Position - 0x27CBD
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_312();
	}
	if (iParam0 > 0)
	{
		if (func_460() != func_63())
		{
			if (func_376(CAM::_0xDC9DA9E8789F5246()) == CAM::_0xDC9DA9E8789F5246())
			{
				Global_26366D.f_5D[func_882(iParam0)] = 1;
			}
		}
		iVar0 = func_882(159);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(157);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(148);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(164);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(142);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(152);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(166);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(170);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(173);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(179);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(200);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(201);
		if (func_881(iVar0, Global_40001.f_30CD, bParam1))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(182);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(183);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(185);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(186);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(180);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(195);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(197);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(198);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(207);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(208);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(209);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(214);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(215);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(216);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(217);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(218);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(219);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(220);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(221);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_881(int iParam0, int iParam1, bool bParam2)//Position - 0x2833B
{
	if (bParam2)
	{
		if ((!func_105(CAM::_0xDC9DA9E8789F5246(), 19) && !func_105(CAM::_0xDC9DA9E8789F5246(), 20)) && !func_105(CAM::_0xDC9DA9E8789F5246(), 9))
		{
			return 0;
		}
	}
	if (Global_26366D.f_5D[iParam0] == 1 && func_8(&(Global_26366D[iParam0 /*2*/])))
	{
		if (func_722(&(Global_26366D[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_26366D.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_882(int iParam0)//Position - 0x283C1
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
	return 4294967295;
}

void func_883(int iParam0)//Position - 0x285C3
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_312();
	}
	if (iParam0 > 0)
	{
		if (func_460() != func_63())
		{
			Global_26366D.f_5D[func_882(iParam0)] = 1;
		}
		iVar0 = func_882(155);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(163);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(160);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(153);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(162);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(154);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(171);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(172);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(199);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(194);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(193);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(210);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(205);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(189);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(211);
		if (func_881(iVar0, Global_40001.f_30CE, 0))
		{
			func_151(&(Global_26366D[iVar0 /*2*/]));
			func_7(&(Global_26366D[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_884(int iParam0)//Position - 0x288F4
{
	if (!func_28(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/], func_885(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_12F[iParam0 /*3*/] = { func_885() };
	}
	if (!func_28(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/], func_885(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_122[iParam0 /*3*/] = { func_885() };
	}
}

Vector3 func_885()//Position - 0x28976
{
	vector3 vVar0;
	
	return vVar0;
}

void func_886(int iParam0)//Position - 0x28982
{
	if (!func_28(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/], func_885(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_91[iParam0 /*3*/] = { func_885() };
	}
	if (!func_28(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/], func_885(), 0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_78[iParam0 /*3*/] = { func_885() };
	}
}

void func_887()//Position - 0x28A00
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_1803FE = { Var0 };
	Global_1803FE.f_D = func_63();
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1801DE, 3))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_1801DE, 3);
	}
}

void func_888(bool bParam0)//Position - 0x28A5A
{
	if (bParam0)
	{
		if (!func_406(CAM::_0xDC9DA9E8789F5246(), 14))
		{
			func_890(14);
		}
	}
	else if (func_406(CAM::_0xDC9DA9E8789F5246(), 14))
	{
		func_889(14);
	}
}

void func_889(int iParam0)//Position - 0x28A91
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_890(int iParam0)//Position - 0x28AAE
{
	MISC::SET_BIT(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

void func_891(int iParam0)//Position - 0x28ACB
{
	if (func_119(CAM::_0xDC9DA9E8789F5246()))
	{
		if (CAM::_0xDC9DA9E8789F5246() != iParam0)
		{
			if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB != iParam0)
			{
				Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1BB = iParam0;
				if (iParam0 != func_63())
				{
				}
			}
		}
	}
}

int func_892(int iParam0)//Position - 0x28B1A
{
	if (func_893(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_20;
	}
	return 4294967295;
}

int func_893(int iParam0, int iParam1)//Position - 0x28B3D
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_894(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x28B78
{
	int iVar0;
	
	if (func_571(iParam0, iParam1) && func_911(iParam0, iParam1))
	{
		iVar0 = func_570(iParam0, iParam1);
		func_898(iVar0, bParam2, bParam3);
		func_895(iVar0, 1);
	}
}

void func_895(int iParam0, bool bParam1)//Position - 0x28BB3
{
	if (!func_897(iParam0))
	{
		return;
	}
	func_557(func_896(iParam0), bParam1, 4294967295, 1);
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_6 = bParam1;
}

int func_896(int iParam0)//Position - 0x28BEF
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

bool func_897(int iParam0)//Position - 0x28C49
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_898(int iParam0, bool bParam1, bool bParam2)//Position - 0x28C5E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_743(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (!bParam1)
	{
		func_910(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2634DD[iParam0];
		iVar0 = func_909(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1975A4 = 4294967295;
		}
		func_908(iParam0, 0, bParam2);
	}
	else if (func_906(iParam0, bParam2))
	{
		iVar0 = func_905(iVar2, 0);
		iVar3 = func_685(CAM::_0xDC9DA9E8789F5246(), iVar2);
		iVar4 = func_904(iVar2, bParam2);
		iVar5 = func_905(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_903(iVar2) && func_902(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_910(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_901(CAM::_0xDC9DA9E8789F5246(), iVar2) > 0)
		{
			func_900(iParam0, (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 - (func_904(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_905(iVar2, bParam2) / func_901(CAM::_0xDC9DA9E8789F5246(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_903(iVar2) && func_902(CAM::_0xDC9DA9E8789F5246(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_899(CAM::_0xDC9DA9E8789F5246(), iVar2, iVar0, bParam2);
}

void func_899(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x28DCF
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return;
	}
	if (func_564(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1841F3[iParam0 /*790*/].f_111.f_F8 = iParam2;
				}
				else
				{
					Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_900(int iParam0, int iParam1)//Position - 0x28E43
{
	if (iParam0 != 4294967295 && iParam1 != Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2)
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_AE[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_901(int iParam0, int iParam1)//Position - 0x28E88
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_902(int iParam0, int iParam1)//Position - 0x28EE7
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1) && func_903(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/] == iParam1)
			{
				return Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_903(int iParam0)//Position - 0x28F51
{
	return func_453(iParam0) == 5;
}

int func_904(int iParam0, bool bParam1)//Position - 0x28F61
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_453(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_41B8;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BD;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_41B7;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BC;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_41B6;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BB;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_41B4;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41B9;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_41B5;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				uVar0 = Global_40001.f_41BA;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_51CE;
				if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51CF;
				}
			}
			else
			{
				uVar0 = Global_40001.f_51BE;
				if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
				{
					uVar0 = Global_40001.f_51BF;
				}
			}
			break;
	}
	return uVar0;
}

int func_905(int iParam0, bool bParam1)//Position - 0x29098
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_453(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_41A5;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AE);
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B3);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_41A6;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AD);
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B2);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_41A7;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AC);
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B1);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_41A8;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AA);
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41AF);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_41A9;
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_41AB);
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_41B0);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_40001.f_51CB;
			}
			else
			{
				iVar0 = Global_40001.f_51BB;
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_51CC);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_51BC);
				}
			}
			if (func_569(CAM::_0xDC9DA9E8789F5246(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_51CD);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_51BD);
				}
			}
			if (func_902(CAM::_0xDC9DA9E8789F5246(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_906(int iParam0, bool bParam1)//Position - 0x292A2
{
	if (bParam1)
	{
		return func_558(15384, 4294967295, 4294967295);
	}
	return func_558(func_907(iParam0), 4294967295, 4294967295);
}

int func_907(int iParam0)//Position - 0x292C7
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

void func_908(int iParam0, bool bParam1, bool bParam2)//Position - 0x29321
{
	if (bParam2)
	{
		func_557(15384, bParam1, 4294967295, 1);
		return;
	}
	func_557(func_907(iParam0), bParam1, 4294967295, 1);
}

int func_909(int iParam0, bool bParam1)//Position - 0x2934C
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2634DD[iParam0];
	iVar1 = func_743(CAM::_0xDC9DA9E8789F5246(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2634E4;
	}
	if (func_903(iVar1))
	{
		if (func_902(CAM::_0xDC9DA9E8789F5246(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_910(int iParam0, int iParam1, bool bParam2)//Position - 0x29394
{
	if (bParam2)
	{
		Global_2634E4 = iParam1;
		return;
	}
	Global_2634DD[iParam0] = iParam1;
}

int func_911(int iParam0, int iParam1)//Position - 0x293B4
{
	int iVar0;
	
	if (func_571(iParam0, iParam1))
	{
		iVar0 = func_570(iParam0, iParam1);
		if (Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_4 > 0 && Global_1841F3[iParam0 /*790*/].f_111.f_AE[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_912()//Position - 0x29408
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 28);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 29);
	func_913(24);
}

void func_913(int iParam0)//Position - 0x29430
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

void func_914()//Position - 0x29459
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_117);
}

void func_915(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x29468
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
	Var1 = Global_196EF6;
	Var1.f_1 = Global_196EF6.f_1;
	Var1.f_2 = Global_196EF6.f_2;
	Var1.f_3 = Global_196EF6.f_3;
	Var1.f_4 = Global_196EF6.f_4;
	Var1.f_5 = Global_196EF6.f_5;
	Var1.f_6 = Global_196EF6.f_6;
	Var1.f_7 = Global_196EF6.f_7;
	Var1.f_8 = Global_196EF6.f_8;
	Var1.f_9 = Global_196EF6.f_9;
	Var1.f_A = Global_196EF6.f_A;
	Var1.f_B = Global_196EF6.f_B;
	Var1.f_C = Global_196EF6.f_C;
	Var1.f_D = Global_196EF6.f_E;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_E = Global_196EF6.f_F;
			Var2.f_F = Global_196EF6.f_10;
			Var2.f_10 = Global_196EF6.f_11;
			unk_0x6899EB66155B3500(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_E = Global_196EF6.f_F;
			Var3.f_F = uParam0;
			Var3.f_10 = uParam1;
			unk_0x536E90877E33B644(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_E = Global_196EF6.f_F;
			Var4.f_F = uParam0;
			unk_0x3A6ACC2FAB290CDC(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_E = Global_196EF6.f_F;
			Var5.f_F = uParam0;
			Var5.f_10 = uParam1;
			unk_0x4071F63CF95F324E(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_E = Global_196EF6.f_F;
			Var6.f_F = uParam0;
			unk_0x217787AB4F2FB1E9(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_E = Global_196EF6.f_F;
			Var7.f_F = uParam0;
			Var7.f_10 = uParam1;
			Var7.f_11 = iParam2;
			unk_0x63FAAF4414D8B3D5(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_E = uParam0;
			Var8.f_F = uParam1;
			Var8.f_10 = iParam2;
			Var8.f_11 = Global_196EF6.f_F;
			unk_0xFDDF5012CAC01420(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_F = uParam0;
			Var9.f_10 = uParam1;
			Var9.f_11 = iParam2;
			Var9.f_E = iParam3;
			Var9.f_12 = Global_196EF6.f_F;
			unk_0x26687349CB68A516(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_E = uParam0;
			Var10.f_F = uParam1;
			Var10.f_10 = iParam2;
			Var10.f_11 = Global_196EF6.f_F;
			unk_0x37D5D670955A5AA7(&Var10);
		}
	}
	func_916();
}

void func_916()//Position - 0x29706
{
	struct<18> Var0;
	
	Global_196EF6 = { Var0 };
}

void func_917(struct<21> Param0)//Position - 0x2971A
{
	func_954(func_955(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(8);
	func_953(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_110, 872);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_111, 449);
	if (!func_952())
	{
		func_869();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_949();
		func_918(0, 0);
		Local_111[NETSHOP::_NETWORK_SHOP_BASKET_START() /*14*/] = 0;
	}
	else
	{
		func_869();
	}
}

void func_918(int iParam0, int iParam1)//Position - 0x29792
{
	func_948();
	if (func_375(CAM::_0xDC9DA9E8789F5246()))
	{
		func_921(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_920(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_196EE8, 0);
				break;
			}
	}
	if (!func_440() && !func_179(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (func_136())
		{
			func_107(3);
		}
	}
	func_107(4);
	if (func_458(0))
	{
		Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_39 = func_460();
	}
	if (func_305(iParam0))
	{
		func_683();
		Global_196F08.f_12 = func_663(func_240());
	}
	else if (func_310(func_892(CAM::_0xDC9DA9E8789F5246())))
	{
		func_681();
		Global_196F3E.f_12 = func_663(func_240());
	}
	func_919();
}

void func_919()//Position - 0x2986E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14B91C.f_216[iVar0 /*42*/].f_1 = func_63();
		Global_14B91C.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_920(int iParam0, bool bParam1)//Position - 0x298A8
{
	return func_74(CAM::_0xDC9DA9E8789F5246(), iParam0, bParam1);
}

void func_921(bool bParam0)//Position - 0x298BC
{
	int iVar0;
	
	func_913(33);
	func_913(34);
	func_913(35);
	func_913(36);
	func_913(37);
	func_913(38);
	func_913(39);
	func_913(40);
	func_913(43);
	func_913(41);
	func_913(54);
	func_913(42);
	func_913(47);
	func_947(23);
	func_947(24);
	func_913(92);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_6BD), 2);
	func_946();
	func_941();
	func_936();
	func_931();
	func_923();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26862F.f_1313.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_922(3))
	{
		func_947(3);
	}
	else if (func_922(4))
	{
		func_947(4);
	}
	else if (func_922(5))
	{
		func_947(5);
	}
	else if (func_922(6))
	{
		func_947(6);
	}
	else if (func_922(7))
	{
		func_947(7);
	}
	else if (((((((((((((((((func_922(0) || func_922(1)) || func_922(2)) || func_922(8)) || func_922(9)) || func_922(10)) || func_922(11)) || func_922(12)) || func_922(13)) || func_922(14)) || func_922(15)) || func_922(16)) || func_922(17)) || func_922(18)) || func_922(19)) || func_922(20)) || func_922(21)) || func_922(22))
	{
		func_947(8);
		func_947(0);
		func_947(1);
		func_947(2);
		func_947(9);
		func_947(10);
		func_947(11);
		func_947(12);
		func_947(13);
		func_947(14);
		func_947(15);
		func_947(16);
		func_947(17);
		func_947(18);
		func_947(19);
		func_947(20);
		func_947(21);
		func_947(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26862F.f_1313.f_E[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_922(int iParam0)//Position - 0x29B1A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_E[iVar0], iVar1);
}

void func_923()//Position - 0x29B43
{
	int iVar0;
	
	if (func_930())
	{
		func_929(8);
		func_929(9);
		func_929(10);
		func_929(12);
		func_929(13);
		func_929(14);
		func_929(19);
		func_929(20);
		func_929(21);
		func_929(22);
		func_929(23);
		func_929(24);
		func_929(25);
		func_929(26);
		func_929(15);
		func_929(16);
		func_929(17);
		func_929(18);
		func_929(35);
		func_929(45);
		func_929(46);
		if (func_928(11))
		{
			func_929(11);
			iVar0 = func_428(7226, 4294967295, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_426(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_928(48))
	{
		if (func_927(151, 3))
		{
			func_926(151, 3);
		}
		func_929(48);
	}
	if (func_928(49))
	{
		if (func_927(152, 3))
		{
			func_926(152, 3);
		}
		func_929(49);
	}
	if (func_928(50))
	{
		if (func_927(153, 3))
		{
			func_926(153, 3);
		}
		func_929(50);
	}
	if (func_928(51))
	{
		if (func_927(func_924(), 3))
		{
			func_926(func_924(), 3);
		}
		func_929(51);
	}
}

int func_924()//Position - 0x29C8D
{
	if (func_925())
	{
		Global_19E56.f_6D76[154 /*29*/].f_18[Global_38B1] = 1;
	}
	return 154;
}

int func_925()//Position - 0x29CB1
{
	int iVar0;
	
	iVar0 = func_64(CAM::_0xDC9DA9E8789F5246());
	if (((iVar0 != CAM::_0xDC9DA9E8789F5246() && iVar0 != func_63()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_926(int iParam0, int iParam1)//Position - 0x29CF2
{
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

int func_927(int iParam0, int iParam1)//Position - 0x29D35
{
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_928(int iParam0)//Position - 0x29D5A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_1A[iVar0], iVar1);
}

void func_929(int iParam0)//Position - 0x29D83
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_1A[iVar0]), iVar1);
}

int func_930()//Position - 0x29DAC
{
	if (((((((((((((((((((((func_928(8) || func_928(9)) || func_928(10)) || func_928(12)) || func_928(11)) || func_928(13)) || func_928(14)) || func_928(19)) || func_928(20)) || func_928(21)) || func_928(22)) || func_928(23)) || func_928(24)) || func_928(25)) || func_928(26)) || func_928(15)) || func_928(16)) || func_928(17)) || func_928(18)) || func_928(35)) || func_928(45)) || func_928(46))
	{
		return 1;
	}
	return 0;
}

void func_931()//Position - 0x29EBE
{
	if (func_935())
	{
		func_934(0);
		func_934(1);
		func_934(2);
		func_934(3);
		func_934(4);
		func_934(5);
		if (func_933(32))
		{
			if (func_927(func_932(), 3))
			{
				func_926(func_932(), 3);
			}
			func_934(32);
		}
	}
}

int func_932()//Position - 0x29F12
{
	if (func_925())
	{
		Global_19E56.f_6D76[12 /*29*/].f_18[Global_38B1] = 1;
	}
	return 12;
}

bool func_933(int iParam0)//Position - 0x29F36
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_17[iVar0], iVar1);
}

void func_934(int iParam0)//Position - 0x29F5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_17[iVar0]), iVar1);
}

int func_935()//Position - 0x29F88
{
	if ((((func_933(1) || func_933(0)) || func_933(2)) || func_933(4)) || func_933(5))
	{
		return 1;
	}
	return 0;
}

void func_936()//Position - 0x29FC9
{
	if (func_940())
	{
		func_939(0);
		func_939(1);
		func_939(2);
		func_939(3);
		func_939(4);
		func_939(5);
		func_939(6);
		func_939(7);
		if (func_938(8))
		{
			func_939(8);
		}
		if (func_938(15))
		{
			if (func_927(func_937(), 3))
			{
				func_926(func_937(), 3);
			}
			func_939(15);
		}
	}
}

int func_937()//Position - 0x2A036
{
	if (func_925())
	{
		Global_19E56.f_6D76[20 /*29*/].f_18[Global_38B1] = 1;
	}
	return 20;
}

bool func_938(int iParam0)//Position - 0x2A05A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_15[iVar0], iVar1);
}

void func_939(int iParam0)//Position - 0x2A083
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_15[iVar0]), iVar1);
}

int func_940()//Position - 0x2A0AC
{
	if ((((((((func_938(0) || func_938(1)) || func_938(2)) || func_938(3)) || func_938(4)) || func_938(5)) || func_938(6)) || func_938(7)) || func_938(8))
	{
		return 1;
	}
	return 0;
}

void func_941()//Position - 0x2A11A
{
	if (func_945())
	{
		func_944(0);
		func_944(1);
		func_944(2);
		func_944(3);
		func_944(4);
		func_944(5);
		func_944(6);
		func_944(7);
		func_944(8);
		func_944(9);
		func_944(10);
		func_944(11);
		func_944(12);
		if (func_943(13))
		{
			if (func_927(func_942(), 3))
			{
				func_926(func_942(), 3);
			}
			func_944(13);
		}
	}
}

int func_942()//Position - 0x2A196
{
	if (func_925())
	{
		Global_19E56.f_6D76[76 /*29*/].f_18[Global_38B1] = 1;
	}
	return 76;
}

bool func_943(int iParam0)//Position - 0x2A1BA
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_1313.f_13[iVar0], iVar1);
}

void func_944(int iParam0)//Position - 0x2A1E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_13[iVar0]), iVar1);
}

int func_945()//Position - 0x2A20C
{
	if ((((((((((((func_943(0) || func_943(1)) || func_943(2)) || func_943(3)) || func_943(4)) || func_943(5)) || func_943(6)) || func_943(7)) || func_943(8)) || func_943(9)) || func_943(10)) || func_943(11)) || func_943(12))
	{
		return 1;
	}
	return 0;
}

void func_946()//Position - 0x2A2AA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26862F.f_1313.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_947(int iParam0)//Position - 0x2A2D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_1313.f_E[iVar0]), iVar1);
}

void func_948()//Position - 0x2A2FB
{
	struct<14> Var0;
	
	Global_196EF6 = { Var0 };
	Global_196EF6.f_E = 0;
	Global_196EF6.f_F = 0;
}

void func_949()//Position - 0x2A31D
{
	int iVar0;
	int iVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("relHeadHunterPlayer", &iLocal_117);
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(AUDIO::_0x0626A247D2405330()), 2761840924);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_180824[iVar1], iLocal_117);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_117, Global_180824[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180824[iVar1], Global_180851);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180851, Global_180824[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, iLocal_117, 2761840924);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 2761840924, iLocal_117);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_117, Global_180854[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180854[5], iLocal_117);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_117, Global_180845);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180845, iLocal_117);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_117, Global_180851);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_180851, iLocal_117);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, Global_180851);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_117);
	func_951(1, &Global_180851);
	func_950(&Global_180851);
	func_950(&iLocal_117);
}

void func_950(int iParam0)//Position - 0x2A436
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2429016672, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2429016672);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2473492219, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2473492219);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 3261945386, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 3261945386);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 3008990876, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 3008990876);
}

void func_951(int iParam0, var uParam1)//Position - 0x2A528
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, 2761840924, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, 2761840924);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, 3822679795, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, 3822679795);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, 4111159735, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, 4111159735);
}

int func_952()//Position - 0x2A584
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
		if (func_864())
		{
			return 0;
		}
		if (func_862(155))
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

int func_953(int iParam0, int iParam1, bool bParam2)//Position - 0x2A5DD
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_870();
			}
			else
			{
				return 0;
			}
		}
		if (!func_814())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_870();
					}
					else
					{
						return 0;
					}
				}
				if (func_864())
				{
					if (!bParam2)
					{
						func_870();
					}
					else
					{
						return 0;
					}
				}
				if (func_862(155))
				{
					if (!bParam2)
					{
						func_870();
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
					func_870();
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
				func_870();
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
			func_870();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_954(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2A6F2
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_870();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_955(int iParam0)//Position - 0x2A711
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

int func_956(int iParam0, bool bParam1, bool bParam2)//Position - 0x2ADA7
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

