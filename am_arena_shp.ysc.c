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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<62> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<33> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = 4294967295;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_51(ScriptParam_87);
	}
	else
	{
		func_49();
	}
	while (true)
	{
		func_48();
		if (Global_40001.f_5B83)
		{
			func_49();
		}
		if (func_38())
		{
			func_49();
		}
		func_1();
	}
}

void func_1()//Position - 0x78
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_410E27)
	{
		if (Global_411BA0[iLocal_21 /*12*/].f_B)
		{
			func_35(Local_22.f_3D);
			Global_411BA0[iLocal_21 /*12*/].f_B = 0;
		}
	}
	if (Local_22.f_3D.f_8)
	{
		func_17(Local_22.f_3D);
	}
	if ((Local_22.f_3D.f_2 == 1 && Global_410E28) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_410C0F[iLocal_21 /*80*/].f_3D == 2147483647 && Local_22.f_3D.f_C)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_49();
	}
	if (Local_22.f_3D.f_12 > 0 && !func_14())
	{
		iVar2 = (1000 / SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if ((MISC::GET_FRAME_COUNT() - Local_22.f_3D.f_12) > iVar2 * 10)
		{
			Local_22.f_3D.f_12 = 4294967295;
		}
	}
	if (((func_13() && Local_22.f_3D.f_2 == 1) && Local_22.f_3D.f_D) && !Local_22.f_3D.f_C)
	{
		if (MISC::GET_FRAME_COUNT() - Local_22.f_3D.f_E) >= func_12(Local_22.f_3D.f_5)
		{
			iVar1 = 0;
			if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_3D.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_3D.f_5 != 1 && !unk_0xEC103C948D1D3BEF(&(Local_22.f_3D), Local_22.f_3D.f_6, Local_22.f_3D.f_4, Local_22.f_3D.f_7, Local_22.f_3D.f_1, Local_22.f_3D.f_A))
			{
				iVar1 = 3;
			}
			else if (!unk_0x93EA4BE98F3F425A(Local_22.f_3D))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_3D.f_C = 1;
				Global_410C0F[iLocal_21 /*80*/].f_3D.f_C = 1;
				Global_410C0F[iLocal_21 /*80*/].f_3D = Local_22.f_3D;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_49();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)//Position - 0x27D
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_21, 70);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)//Position - 0x37B
{
	uParam0->f_23 = 0;
}

int func_4(var uParam0)//Position - 0x388
{
	return uParam0->f_23;
}

void func_5(var uParam0, bool bParam1)//Position - 0x394
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_23 = 1;
}

void func_6(var uParam0)//Position - 0x3B1
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)//Position - 0x3CC
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_10(iParam0))
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
		func_8(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_8(var uParam0)//Position - 0x420
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
	func_9(&(uParam0->f_D));
	func_9(&(uParam0->f_D.f_D));
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

void func_9(var uParam0)//Position - 0x527
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

int func_10(int iParam0)//Position - 0x56F
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

var func_11()//Position - 0x599
{
	return Global_1407E0;
}

int func_12(int iParam0)//Position - 0x5A5
{
	switch (iParam0)
	{
		case 0:
			return Global_410E2A;
			break;
		
		case 1:
			return Global_410E29;
			break;
	}
	return 0;
}

int func_13()//Position - 0x5D5
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_14()//Position - 0x5EC
{
	return Global_16C64.f_148 > 0;
}

void func_15(bool bParam0)//Position - 0x5FD
{
	HUD::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		unk_0xDC1A2868428162E5();
	}
}

int func_16(var uParam0)//Position - 0x612
{
	if (uParam0->f_3D.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)//Position - 0x62D
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<62> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		Var4.f_3D = 2147483647;
		iVar3 = func_34(Var0, &Var4);
		if (iVar3 != 4294967295)
		{
			Global_410C0F[iVar3 /*80*/].f_3D.f_8 = 0;
			if (Global_410C0F[iVar3 /*80*/].f_3D.f_12 == 0)
			{
				Global_410C0F[iVar3 /*80*/].f_3D.f_12 = MISC::GET_FRAME_COUNT();
			}
		}
		bVar5 = true;
		if (iVar3 != 4294967295)
		{
			Global_410C0F[iVar3 /*80*/].f_3D.f_11 = Var0.f_2;
		}
		else
		{
			Global_410E1B.f_4 = Var0.f_2;
			Global_410E1B.f_6 = Var0.f_3;
			Global_410E1B.f_7 = Var0.f_4;
			Global_410E1B.f_8 = Var0.f_5;
			Global_410E1B.f_9 = Var0.f_6;
			if (Global_410E1B.f_A == 0)
			{
				Global_410E1B.f_A = MISC::GET_FRAME_COUNT();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != 4294967295)
				{
					Global_411BA0[iVar3 /*12*/] = Global_410C0F[iVar3 /*80*/].f_3D.f_3;
					Global_411BA0[iVar3 /*12*/].f_1 = Global_410C0F[iVar3 /*80*/].f_3D.f_7;
					Global_411BA0[iVar3 /*12*/].f_2 = Global_410C0F[iVar3 /*80*/].f_3D.f_4;
					Global_411BA0[iVar3 /*12*/].f_3 = Global_410C0F[iVar3 /*80*/].f_3D.f_1;
					Global_411BA0[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_411BA0[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_411BA0[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_411BA0[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_411BA0[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_411BA0[iVar3 /*12*/].f_B = 1;
					Global_410C0F[iVar3 /*80*/].f_3D.f_2 = 2;
					if (Global_410C0F[iVar3 /*80*/].f_3D.f_B & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0x4EE06054B6A386C8(Global_410C0F[iVar3 /*80*/].f_3D, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != 4294967295)
				{
					Global_410C0F[iVar3 /*80*/].f_3D.f_2 = 3;
					if ((Global_410C0F[iVar3 /*80*/].f_3D.f_B & 1 != 0 && Global_410C0F[iVar3 /*80*/].f_3D.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_410C0F[iVar3 /*80*/].f_3D.f_2 = 1;
								Global_410C0F[iVar3 /*80*/].f_3D.f_9++;
							}
							else if (Global_410C0F[iVar3 /*80*/].f_3D.f_B & 2 != 0)
							{
								Global_410E38 = Global_410C0F[iVar3 /*80*/].f_3D.f_4;
								Global_410E3A = Global_410C0F[iVar3 /*80*/].f_3D.f_6;
								Global_410E3B = Var0.f_2;
								Global_410E39 = Global_410C0F[iVar3 /*80*/].f_3D.f_1;
								if (func_23(Global_410E38) && func_13())
								{
									if (!func_22(Global_410C0F[iVar3 /*80*/].f_3D))
									{
										iVar7 = func_21();
										Global_410DF0[iVar7 /*7*/] = Global_410C0F[iVar3 /*80*/].f_3D;
										Global_410DF0[iVar7 /*7*/].f_2 = Global_410E38;
										Global_410DF0[iVar7 /*7*/].f_3 = Global_410E3A;
										Global_410DF0[iVar7 /*7*/].f_1 = Global_410E39;
										Global_410DF0[iVar7 /*7*/].f_4 = HUD::_0x13C4B962653A5280();
									}
								}
								else
								{
									Global_410E35 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_410C0F[iVar3 /*80*/].f_3D.f_2 = 1;
							Global_410C0F[iVar3 /*80*/].f_3D.f_9++;
						}
						else if (Global_410C0F[iVar3 /*80*/].f_3D.f_B & 2 != 0)
						{
							Global_410E38 = Global_410C0F[iVar3 /*80*/].f_3D.f_4;
							Global_410E3A = Global_410C0F[iVar3 /*80*/].f_3D.f_6;
							Global_410E3B = Var0.f_2;
							Global_410E39 = Global_410C0F[iVar3 /*80*/].f_3D.f_1;
							if (func_23(Global_410E38) && func_13())
							{
								if (!func_22(Global_410C0F[iVar3 /*80*/].f_3D))
								{
									iVar8 = func_21();
									Global_410DF0[iVar8 /*7*/] = Global_410C0F[iVar3 /*80*/].f_3D;
									Global_410DF0[iVar8 /*7*/].f_2 = Global_410E38;
									Global_410DF0[iVar8 /*7*/].f_3 = Global_410E3A;
									Global_410DF0[iVar8 /*7*/].f_1 = Global_410E39;
									Global_410DF0[iVar8 /*7*/].f_4 = HUD::_0x13C4B962653A5280();
								}
							}
							else
							{
								Global_410E35 = 1;
							}
						}
					}
					else if (Global_410C0F[iVar3 /*80*/].f_3D.f_B & 2 != 0)
					{
						Global_410E38 = Global_410C0F[iVar3 /*80*/].f_3D.f_4;
						Global_410E3A = Global_410C0F[iVar3 /*80*/].f_3D.f_6;
						Global_410E3B = Var0.f_2;
						Global_410E39 = Global_410C0F[iVar3 /*80*/].f_3D.f_1;
						if ((func_23(Global_410E38) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_410C0F[iVar3 /*80*/].f_3D))
							{
								iVar9 = func_21();
								Global_410DF0[iVar9 /*7*/] = Global_410C0F[iVar3 /*80*/].f_3D;
								Global_410DF0[iVar9 /*7*/].f_2 = Global_410E38;
								Global_410DF0[iVar9 /*7*/].f_3 = Global_410E3A;
								Global_410DF0[iVar9 /*7*/].f_1 = Global_410E39;
								Global_410DF0[iVar9 /*7*/].f_4 = HUD::_0x13C4B962653A5280();
							}
						}
						else
						{
							Global_410E35 = 1;
						}
					}
					if (Global_410C0F[iVar3 /*80*/].f_3D.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_410C0F[iVar3 /*80*/].f_3D.f_4);
							Global_410E35 = 0;
						}
						if (Global_410C0F[iVar3 /*80*/].f_3D.f_B & 4 != 0)
						{
							func_18(iVar3, Global_410C0F[iVar3 /*80*/].f_3D.f_4, Global_410C0F[iVar3 /*80*/].f_3D.f_A, Global_410C0F[iVar3 /*80*/].f_3D.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xBA4
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)//Position - 0xBDC
{
	Global_258B69 = uParam1;
	Global_258B68 = iParam0;
}

int func_20(int iParam0)//Position - 0xBF0
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == 4294967295 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
		{
			Global_410E36 = 1;
			return 0;
		}
		if (Global_2586D5)
		{
			if (Global_410C0F[*iParam0 /*80*/].f_3D.f_6 == 1067618600 || Global_410C0F[*iParam0 /*80*/].f_3D.f_6 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(Global_410C0F[*iParam0 /*80*/].f_3D))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_410C0F[*iParam0 /*80*/].f_3D.f_D = 1;
		Global_410C0F[*iParam0 /*80*/].f_3D.f_C = 0;
		Global_410C0F[*iParam0 /*80*/].f_3D.f_E = MISC::GET_FRAME_COUNT();
		if (bVar0)
		{
			if (*iParam0 != 4294967295)
			{
				Global_410C0F[*iParam0 /*80*/].f_3D.f_8 = 1;
				Global_410C0F[*iParam0 /*80*/].f_3D.f_C = 1;
			}
		}
		Global_410C0F[*iParam0 /*80*/].f_3D.f_12 = 0;
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xD20
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_410DF0;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_410DF0[iVar0 /*7*/] != 0 && Global_410DF0[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)//Position - 0xD76
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_410DF0;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_410DF0[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_410DF0[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_410DF0[iVar0 /*7*/].f_4 = HUD::_0x13C4B962653A5280();
			Global_410DF0[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)//Position - 0xDF4
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == 2251272238) || iParam0 == 2708796979) || iParam0 == 393059668) || iParam0 == 3267748665) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == 3438960429) || iParam0 == 848090538) || iParam0 == 4001907056) || iParam0 == 4247420391) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == 4193659516) || iParam0 == 1052472386) || iParam0 == 2164767625) || iParam0 == 3067312758) || iParam0 == 3418954532) || iParam0 == 3572072971) || iParam0 == 1407278493) || iParam0 == 2715572802) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == 3986141121) || iParam0 == 603298940) || iParam0 == 4282347442) || iParam0 == 3983854621) || iParam0 == 870439158) || iParam0 == 3320678556) || iParam0 == 4290828642) || iParam0 == 3114013174) || iParam0 == 2376916280) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == 3122066507) || iParam0 == 2279567963) || iParam0 == 2720171655) || iParam0 == 3333932415) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == 3660240660) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == 3411090882) || iParam0 == 3230816581) || iParam0 == 2907714241) || iParam0 == 3578004144) || iParam0 == 1138089938) || iParam0 == 3733955243) || iParam0 == 1240683675) || iParam0 == 1241904665)
	{
		return 1;
	}
	return 0;
}

int func_24()//Position - 0x1100
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == 4294967295)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
		{
			if (func_29(Global_410C0F[iVar2 /*80*/].f_3D.f_6, Global_410C0F[iVar2 /*80*/].f_3D.f_4, Global_410C0F[iVar2 /*80*/].f_3D.f_1) == 1)
			{
				Global_410E36 = 1;
			}
			return 0;
		}
		if (Global_2586D5)
		{
			if (Global_410C0F[iVar2 /*80*/].f_3D.f_6 == 1067618600 || Global_410C0F[iVar2 /*80*/].f_3D.f_6 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar3))
		{
			Global_410C0F[iVar2 /*80*/].f_3D.f_D = 1;
			Global_410C0F[iVar2 /*80*/].f_3D.f_C = 0;
			Global_410C0F[iVar2 /*80*/].f_3D.f_E = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_410C0F[iVar2 /*80*/].f_3D.f_8 = 1;
				Global_410C0F[iVar2 /*80*/].f_3D.f_C = 1;
			}
			Global_410C0F[iVar2 /*80*/].f_3D.f_12 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_410C0F[iVar2 /*80*/], iVar2);
			}
			Global_410E28 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x1260
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
	iVar1 = func_27(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_26()//Position - 0x12F2
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_27(int iParam0)//Position - 0x1301
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_28(int iParam0)//Position - 0x1313
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D;
	}
	return 4294967295;
}

int func_29(int iParam0, int iParam1, int iParam2)//Position - 0x1339
{
	if (iParam0 == 3861527201 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 4263810419:
			case 3967048882:
			case 550898518:
			case 835976347:
			case 1347433368:
			case 3194003497:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case 3630369731:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case 3411090882:
			case 3230816581:
			case 2907714241:
			case 3578004144:
			case 1138089938:
			case 3733955243:
			case 1240683675:
			case 1241904665:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case 3395164992:
			case 3631022961:
			case 1208553146:
			case 3681746286:
			case 3623904420:
			case 291576838:
			case 3018288428:
			case 711665950:
			case 3887766060:
			case 3540943093:
			case 2409522409:
			case 1931729587:
			case 1064954035:
			case 4114826223:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case 3418119454:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == 3160114106 || iParam0 == 925407197) || iParam0 == 2705588414)
	{
		return 0;
	}
	return 1;
}

int func_30()//Position - 0x1714
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_31(int iParam0)//Position - 0x174E
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)//Position - 0x177B
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	unk_0x7D3EC9370CE8AE07(func_28(iParam0));
	if (Global_410C0F[iParam0 /*80*/].f_3D.f_A == 1)
	{
	}
	else if (Global_410C0F[iParam0 /*80*/].f_3D.f_A == 4)
	{
		iVar0 = 1;
	}
	else if (Global_410C0F[iParam0 /*80*/].f_3D.f_A == 2)
	{
		bVar1 = true;
	}
	switch (Global_410C0F[iParam0 /*80*/].f_3D.f_4)
	{
		case 631654431:
			unk_0x63FCE5AD4680BF90(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 4114826223:
			NETWORKCASH::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D), bVar1, iVar0);
			break;
		
		case 68030260:
			NETWORKCASH::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], &(Global_410C0F[iParam0 /*80*/].f_D), bVar1, iVar0);
			break;
		
		case 3312573245:
			NETWORKCASH::NETWORK_SPENT_CINEMA(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 454359403:
			NETWORKCASH::NETWORK_SPENT_IN_STRIPCLUB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, Global_410C0F[iParam0 /*80*/].f_2, iVar0);
			break;
		
		case 2708796979:
			unk_0xB62321D71BC8301A(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), &(Global_410C0F[iParam0 /*80*/].f_D.f_22));
			break;
		
		case 650665123:
			NETWORKCASH::NETWORK_SPENT_TELESCOPE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 1654961868:
			NETWORKCASH::NETWORK_SPENT_CALL_PLAYER(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D), bVar1, iVar0);
			break;
		
		case 1182673174:
			NETWORKCASH::NETWORK_SPENT_CARWASH(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 563463121:
			NETWORKCASH::NETWORK_EARN_FROM_CRATE_DROP(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 1940862352:
			NETWORKCASH::NETWORK_PAY_MATCH_ENTRY_FEE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), bVar1, iVar0);
			break;
		
		case 2905739390:
			NETWORKCASH::NETWORK_PAY_MATCH_ENTRY_FEE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), bVar1, iVar0);
			break;
		
		case 3778748250:
			NETWORKCASH::NETWORK_BUY_HEALTHCARE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 2896648878:
			NETWORKCASH::NETWORK_EARN_FROM_BETTING(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_22));
			break;
		
		case 2043854386:
			NETWORKCASH::NETWORK_SPENT_CASH_DROP(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 277665518:
			NETWORKCASH::NETWORK_SPENT_ARREST_BAIL(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 3217811126:
			NETWORKCASH::_NETWORK_EARN_FROM_DAILY_OBJECTIVE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_22), 4294967295);
			break;
		
		case 4198373795:
			NETWORKCASH::NETWORK_SPENT_BOUNTY(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 742499889:
			unk_0x9A4E4C3B6C3B52D1(Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 2050093329:
			unk_0xE209E73A7B0A6AD9(Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 2542479227:
			unk_0x50F8AE13046CC392(Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 634375935:
			unk_0x75F2A5F0E2A8337E(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 3267748665:
			NETWORKCASH::NETWORK_EARN_FROM_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A));
			break;
		
		case 4247420391:
			unk_0x10F2ABFDA526964A(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A));
			break;
		
		case 291576838:
			NETWORKCASH::NETWORK_BUY_ITEM(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], 14, 1, bVar1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 0, 0, 0, iVar0);
			break;
		
		case 1612072658:
			NETWORKCASH::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 3304681061:
			NETWORKCASH::NETWORK_EARN_FROM_BOUNTY(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D), &(Global_410C0F[iParam0 /*80*/].f_D.f_D), 1);
			break;
		
		case 1349151477:
			NETWORKCASH::_NETWORK_EARN_FROM_GANG_PICKUP(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 4263810419:
		case 3967048882:
		case 550898518:
		case 835976347:
			unk_0x8B076004BF4B4EE2(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 3108887451:
			NETWORKCASH::_NETWORK_EARN_FROM_ARMOUR_TRUCK(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 1734805203:
			NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 2649738075:
			NETWORKCASH::NETWORK_PAY_EMPLOYEE_WAGE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 3709248901:
			NETWORKCASH::NETWORK_PAY_UTILITY_BILL(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 763367758:
			unk_0x4AC358E128E2CBFA(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 1850983186:
			NETWORKCASH::NETWORK_PAY_EMPLOYEE_WAGE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 2165185470:
			unk_0xD8B1EDA1F1B0A9D5(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], bVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0xA820D3FB27104253(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], bVar1, iVar0);
			break;
		
		case 1869490922:
			unk_0x50A40459190E7D92(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 3958163446:
			unk_0x50A40459190E7D92(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 2882274531:
			unk_0x50A40459190E7D92(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 618167454:
			unk_0x50A40459190E7D92(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 980623936:
			unk_0x50A40459190E7D92(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
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
		case 3630369731:
		case 3194003497:
			NETWORKCASH::NETWORK_REFUND_CASH(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_28), &(Global_410C0F[iParam0 /*80*/].f_D.f_2C), bVar1);
			break;
		
		case 312105838:
			NETWORKCASH::NETWORK_EARN_FROM_ROCKSTAR(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 2372412947:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case 2251272238:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			NETWORKCASH::NETWORK_BUY_FAIRGROUND_RIDE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_1, bVar1, iVar0);
			break;
		
		case 1839532116:
			NETWORKCASH::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 0);
			break;
		
		case 941287179:
			NETWORKCASH::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_3);
			break;
		
		case 3942610365:
			NETWORKCASH::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/]);
			break;
		
		case 1948102096:
			NETWORKCASH::NETWORK_SPENT_REQUEST_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 2460920732:
			NETWORKCASH::NETWORK_SPENT_TAXI(Global_410C0F[iParam0 /*80*/].f_3D.f_1, bVar1, iVar0);
			break;
		
		case 393059668:
			NETWORKCASH::NETWORK_EARN_FROM_MISSION_H(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A));
			break;
		
		case 4237099040:
			NETWORKCASH::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_22), Global_410C0F[iParam0 /*80*/].f_4);
			break;
		
		case 3167945912:
			NETWORKCASH::NETWORK_EARN_FROM_NOT_BADSPORT(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 1564537328:
			NETWORKCASH::NETWORK_PAY_MATCH_ENTRY_FEE(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "RaceToPoint", false, 0);
			break;
		
		case 2935592169:
			NETWORKCASH::NETWORK_SPENT_PROSTITUTES(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 0);
			break;
		
		case 283351220:
			NETWORKCASH::NETWORK_BUY_ITEM(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_5, 1, bVar1, &(Global_410C0F[iParam0 /*80*/].f_D.f_28), 0, 0, 0, iVar0);
			break;
		
		case 2209654107:
			switch (Global_410C0F[iParam0 /*80*/].f_3D.f_6)
			{
				case 1067618600:
					NETWORKCASH::NETWORK_BUY_ITEM(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_5, 1, bVar1, &(Global_410C0F[iParam0 /*80*/].f_D.f_28), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			NETWORKCASH::NETWORK_SPENT_BETTING(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, &(Global_410C0F[iParam0 /*80*/].f_D.f_22), 0, 0);
			break;
		
		case 1620609399:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case 4235299214:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case 2826443171:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case 3360501964:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case 3100714174:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case 4082360211:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case 3479420741:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x2BD751B94D5BD766(Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 569170531:
			unk_0x89E2AFDE111DBF05(Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 3438960429:
			unk_0xECDF3A47BBA3F980(Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_8);
			break;
		
		case 208223429:
			unk_0xF8ED2CAA140D95A9(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_9);
			break;
		
		case 848090538:
			unk_0xC12338E187F156AF(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 665109499:
			unk_0x4D816D41663C2256(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], 0, 1);
			break;
		
		case 2964212290:
			unk_0x725CA6D3AF0A9410(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0xAEB1EF139622883C(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], 0, 0);
			break;
		
		case 268924934:
			unk_0xA3273368BD1DC1F6(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_1, Global_410C0F[iParam0 /*80*/].f_9);
			break;
		
		case 4001907056:
			unk_0x1CC5C9F035F83AEF(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7);
			break;
		
		case 437291904:
			unk_0x118109DF4D09F19C(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1, Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_A, Global_410C0F[iParam0 /*80*/].f_B, Global_410C0F[iParam0 /*80*/].f_C);
			break;
		
		case 4159154248:
			unk_0x9531E95CBD2DFE09(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0xACD5CE18E734968D(Global_410C0F[iParam0 /*80*/].f_6, Global_410C0F[iParam0 /*80*/].f_7, Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_8);
			break;
		
		case 1550217370:
			unk_0x9C23FEDE077EBFB5(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 4193659516:
			unk_0xA87E6A481E93D301(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 599804707:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_410C0F[iParam0 /*80*/].f_3D.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			NETWORKCASH::NETWORK_EARN_FROM_PICKUP(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 1052472386:
			NETWORKCASH::_NETWORK_EARN_FROM_JOB_BONUS(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), &(Global_410C0F[iParam0 /*80*/].f_D.f_22));
			break;
		
		case 2164767625:
			unk_0xEE54D31476AF3C01(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), &(Global_410C0F[iParam0 /*80*/].f_D.f_22));
			break;
		
		case 3067312758:
			unk_0xDD6F2E9FACA5BD3F(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), &(Global_410C0F[iParam0 /*80*/].f_D.f_22));
			break;
		
		case 3364862819:
			unk_0x2F1BA57C908C9F77(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1, Global_410C0F[iParam0 /*80*/]);
			break;
		
		case 1864522104:
			unk_0xBAD3B6890940CE96(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0);
			break;
		
		case 215608230:
			unk_0xBAD3B6890940CE96(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 1);
			break;
		
		case 3418954532:
			unk_0x7EEF6D486B5757A7(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/]);
			break;
		
		case 3572072971:
			unk_0x814140B7C50AACCF(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/]);
			break;
		
		case 1407278493:
			unk_0x02A33E5F88B092E3(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 2715572802:
		case 4267523385:
			unk_0x39C8973CAA224C0A(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A));
			break;
		
		case 1179783540:
			unk_0x06C8B85247D0DC4D(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A));
			break;
		
		case 923419301:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 0);
			break;
		
		case 3986141121:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 1);
			break;
		
		case 603298940:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 2);
			break;
		
		case 4282347442:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 3);
			break;
		
		case 3983854621:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 4);
			break;
		
		case 870439158:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 5);
			break;
		
		case 3320678556:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 6);
			break;
		
		case 4290828642:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 7);
			break;
		
		case 3114013174:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 8);
			break;
		
		case 2376916280:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 9);
			break;
		
		case 844330594:
			unk_0xD6899E4601D6B9D0(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 10);
			break;
		
		case 1934825517:
			unk_0x7AB928559F8910E4(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 0);
			break;
		
		case 1852024236:
			unk_0x7AB928559F8910E4(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 1);
			break;
		
		case 2099238988:
			unk_0x7AB928559F8910E4(Global_410C0F[iParam0 /*80*/].f_3D.f_1, &(Global_410C0F[iParam0 /*80*/].f_D.f_1A), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case 3122066507:
			unk_0x65FA2C0B0A257672(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_9);
			break;
		
		case 2561569253:
			unk_0xB15B0131CD56F176(Global_410C0F[iParam0 /*80*/].f_9, Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1);
			break;
		
		case 2402207034:
			unk_0x115BC8AA3FA95502(Global_410C0F[iParam0 /*80*/].f_9, Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1);
			break;
		
		case 2279567963:
			unk_0x9484047AAC079157(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 402505853:
			if (func_33(PLAYER::INT_TO_PLAYERINDEX(Global_410C0F[iParam0 /*80*/]), 0, 0))
			{
				unk_0xFC71E8A3A3428520(PLAYER::INT_TO_PLAYERINDEX(Global_410C0F[iParam0 /*80*/]), Global_410C0F[iParam0 /*80*/].f_1, Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0xF56B64662927DE25(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], 0, 1);
			break;
		
		case 3151457114:
			unk_0x9C9B8748B3D0520C(Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1);
			break;
		
		case 2720171655:
			unk_0x4B8F4A73B92C2BDC(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 3333932415:
			unk_0x70275A5DEC872CA2(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 1135468152:
			unk_0xF03B782EEA848691(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 1265272476:
			unk_0x7C5AFBDB4A63099E(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_1, Global_410C0F[iParam0 /*80*/].f_9);
			break;
		
		case 3660240660:
			unk_0xB509D8DC0549312F(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 696556762:
			unk_0x7FCF7023D5DDA443(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 837955913:
			unk_0x14EAEA58F93B55AF(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_3D.f_F, 0, 1);
			break;
		
		case 403506509:
			unk_0xFDD8D2440DAF1590(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 3411090882:
			unk_0xE08256F972C7BB2C(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_3D.f_F);
			break;
		
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
			unk_0x0F99F70C61F14619(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/].f_3D.f_F);
			break;
		
		case 2762500152:
			unk_0x7049BF858601DC0F(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0xE5F5A060439C2F5D(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 0);
			break;
		
		case 3733955243:
			unk_0x676C48776CACBB5A(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 2952902635:
			unk_0x9A5BD1D0000B339C(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0x5E7AE8AABE8B7C0D(Global_410C0F[iParam0 /*80*/].f_3D.f_1);
			break;
		
		case 1241904665:
			unk_0x631F1CB8FB4130AA(Global_410C0F[iParam0 /*80*/].f_3D.f_1, Global_410C0F[iParam0 /*80*/], Global_410C0F[iParam0 /*80*/].f_3D.f_10, Global_410C0F[iParam0 /*80*/].f_1);
			break;
		
		case 3696988851:
			unk_0x619496D837EFD920(Global_410C0F[iParam0 /*80*/].f_3D.f_1, 0, 1);
			break;
		
		case 1982688246:
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x4EE06054B6A386C8(Global_410C0F[iParam0 /*80*/].f_3D, &uVar3);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)//Position - 0x2CA3
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

int func_34(int iParam0, var uParam1)//Position - 0x2CED
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D == iParam0)
		{
			*uParam1 = { Global_410C0F[iVar0 /*80*/] };
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_35(int iParam0)//Position - 0x2D2F
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_411BA0[iParam0 /*12*/].f_1 == Global_411BA0[iParam0 /*12*/].f_6)
	{
		if (Global_411BA0[iParam0 /*12*/].f_1 != 1445302971 && Global_411BA0[iParam0 /*12*/].f_1 != 2978375937)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = MISC::GET_HASH_KEY(sVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_4113B0);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 28);
	GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 29);
	GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 26);
	iVar3 = (Global_411BA0[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_411BA0[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_411BA0[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = 2209654107;
	}
	if (((Global_411BA0[iParam0 /*12*/] != Global_411BA0[iParam0 /*12*/].f_5 || Global_411BA0[iParam0 /*12*/].f_1 != Global_411BA0[iParam0 /*12*/].f_6) || Global_411BA0[iParam0 /*12*/].f_2 != iVar5) || Global_411BA0[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_19174 = 1;
	}
}

int func_36(var uParam0)//Position - 0x2E5B
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

var func_37()//Position - 0x2E70
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_38()//Position - 0x2E7F
{
	var uVar0;
	
	func_45(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_44())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_43())
	{
		return 1;
	}
	if (func_42(157))
	{
		if (!func_41())
		{
			return 1;
		}
	}
	if (func_42(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_39() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_39()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_39()//Position - 0x2F09
{
	switch (func_40())
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

int func_40()//Position - 0x2F3D
{
	return Global_6373;
}

bool func_41()//Position - 0x2F48
{
	return Global_255C02.f_24B;
}

int func_42(int iParam0)//Position - 0x2F57
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_43()//Position - 0x2F6E
{
	return Global_25824F;
}

bool func_44()//Position - 0x2F7A
{
	return Global_255C02.f_246;
}

void func_45(var uParam0)//Position - 0x2F89
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
					func_46(iVar0);
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

void func_46(int iParam0)//Position - 0x2FFC
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_33(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_47(iVar2, &bVar3))
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

int func_47(int iParam0, var uParam1)//Position - 0x307D
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

void func_48()//Position - 0x30DC
{
	SYSTEM::WAIT(0);
}

void func_49()//Position - 0x30E9
{
	func_50();
}

void func_50()//Position - 0x30F5
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_51(struct<33> Param0)//Position - 0x3101
{
	if (Global_40001.f_5B83)
	{
		func_49();
	}
	Local_22.f_3D = { Param0 };
	Local_22 = { Param0.f_13 };
	Local_22.f_D = { Global_410C0F[Param0.f_20 /*80*/].f_D };
	iLocal_21 = Param0.f_20;
	if (Param0.f_20 < 0)
	{
		func_49();
	}
	if (!func_52(Param0, Param0.f_20))
	{
		func_7(Param0.f_20);
		func_49();
	}
}

int func_52(struct<18> Param0, var uParam1, int iParam2)//Position - 0x3174
{
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_E != Param0.f_E)
	{
		return 0;
	}
	if (Global_410C0F[iParam2 /*80*/].f_3D.f_11 != Param0.f_11)
	{
		return 0;
	}
	return 1;
}

