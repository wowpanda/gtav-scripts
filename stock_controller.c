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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	vector3 vLocal_28 = { 0f, 0f, 0f };
	int iLocal_29 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
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
	iLocal_20 = -15;
	iLocal_21 = -15;
	iLocal_22 = -1;
	iLocal_26 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_97();
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stock_controller")) > 1)
	{
		func_97();
	}
	Global_55887 = 1;
	iLocal_22 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) / 16f));
	func_96();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_51645[iVar0 /*7*/])
		{
			if (Global_51645[iVar0 /*7*/].f_2)
			{
				if (!Global_51645[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_51645[iVar0 /*7*/].f_3, &(Global_51645[iVar0 /*7*/].f_5), -1);
				}
				else
				{
					fVar1 = 0f;
					STATS::STAT_GET_FLOAT(Global_51645[iVar0 /*7*/].f_3, &fVar1, -1);
					Global_51645[iVar0 /*7*/].f_5 = SYSTEM::FLOOR(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_94();
	func_93();
	func_90();
	Global_55887 = 0;
	func_89(1);
	func_86();
	func_83();
	while (true)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 < 11)
			{
				Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
			}
			iVar2++;
		}
		func_79();
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_78(14))
		{
			func_67();
			iVar3 = 16;
			while (func_66() && iVar3 >= 0)
			{
				iVar3 = (iVar3 - 1);
				func_47();
				Global_53081 = 1;
				func_41();
				Global_55889 = 1;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0);
				func_38();
				func_27();
				func_38();
				func_86();
				func_38();
			}
			while (Global_53074 > 0)
			{
				func_11(&iLocal_20, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_21, 0, 480, 0, 0, 0, 0);
				Global_53074 = (Global_53074 - 1);
			}
		}
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	iVar1 = func_3(iVar0);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
	{
		func_2(89, 1);
		if (ENTITY::GET_ENTITY_SPEED(iVar1) > 5f)
		{
			func_2(90, 1);
		}
	}
}

void func_2(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51645[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_51645[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

int func_3(int iParam0)
{
	return iParam0;
}

void func_4()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_53075)
		{
			Global_53075 = 0;
			Global_53076 = MISC::GET_GAME_TIMER();
			Global_55888 = 1;
		}
		return;
	}
	if (Global_53075)
	{
		if (!STATS::_0xB1D2BB1E1631F5B1())
		{
			iVar0 = func_5();
			Global_53075 = 0;
			if (iVar0 < 5)
			{
				Global_55888 = 0;
			}
		}
	}
}

int func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_48202[iVar0 /*36*/].f_8)
		{
			if (Global_48202[iVar0 /*36*/].f_35 > -1)
			{
				iVar2 = Global_51083[Global_48202[iVar0 /*36*/].f_35 /*7*/];
				STATS::STAT_GET_FLOAT(iVar2, &(Global_48202[iVar0 /*36*/].f_9), -1);
				if (Global_48202[iVar0 /*36*/].f_9 > 0f)
				{
					fVar3 = 0f;
					STATS::_0xBED9F5693F34ED17(iVar2, 0, &(Global_48202[iVar0 /*36*/].f_33));
					Global_48202[iVar0 /*36*/].f_31 = Global_48202[iVar0 /*36*/].f_9;
					Global_48202[iVar0 /*36*/].f_32 = Global_48202[iVar0 /*36*/].f_9;
					fVar3 = (fVar3 + Global_48202[iVar0 /*36*/].f_33);
					iVar4 = 0;
					while (iVar4 < 4)
					{
						fVar5 = 0f;
						STATS::_0xBED9F5693F34ED17(iVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_48202[iVar0 /*36*/].f_31)
						{
							Global_48202[iVar0 /*36*/].f_31 = fVar5;
						}
						if (fVar5 < Global_48202[iVar0 /*36*/].f_32)
						{
							Global_48202[iVar0 /*36*/].f_32 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = func_6(iVar0);
					if (fVar6 > Global_48202[iVar0 /*36*/].f_31)
					{
						Global_48202[iVar0 /*36*/].f_31 = fVar6;
					}
					if (fVar6 < Global_48202[iVar0 /*36*/].f_32)
					{
						Global_48202[iVar0 /*36*/].f_32 = fVar6;
					}
					Global_48202[iVar0 /*36*/].f_33 = (fVar6 - fVar3);
					Global_48202[iVar0 /*36*/].f_34 = ((Global_48202[iVar0 /*36*/].f_33 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_6(int iParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_48202[iParam0 /*36*/].f_9 * func_7(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_7(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_104555.f_9055.f_99.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (func_10(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (func_10(74) || func_10(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (func_10(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (func_10(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (func_10(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (func_10(93))
			{
				if (!func_10(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(38))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(84))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (func_10(90))
			{
				if (!func_10(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (func_10(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (func_10(93))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (func_10(61))
			{
				if (!func_10(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_104555.f_20534.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_104555.f_20534.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_9(Global_104555.f_20534.f_452[iVar1], Global_104555.f_20534.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = func_8(0, iVar4);
		iVar6 = func_8(1, iVar4);
		iVar7 = func_8(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_53077[0] + Global_53077[1]) + Global_53077[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_104555.f_20534.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_104555.f_20534.f_11[iVar2]));
				}
				if (Global_104555.f_20534.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_104555.f_20534.f_44[iVar2]));
				}
				if (Global_104555.f_20534.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_104555.f_20534.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_104555.f_20534.f_22[iParam1];
			break;
		
		case 1:
			return Global_104555.f_20534.f_55[iParam1];
			break;
		
		case 2:
			return Global_104555.f_20534.f_88[iParam1];
			break;
	}
	return 0;
}

float func_9(int iParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = MISC::IS_BIT_SET(iParam1, 0);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (MISC::IS_BIT_SET(iParam1, 3))
	{
		iVar3++;
	}
	if (MISC::IS_BIT_SET(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (MISC::IS_BIT_SET(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (MISC::IS_BIT_SET(iParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (MISC::IS_BIT_SET(iParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (MISC::IS_BIT_SET(iParam1, 1))
	{
		if (func_10(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (MISC::IS_BIT_SET(iParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (MISC::IS_BIT_SET(iParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (MISC::IS_BIT_SET(iParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!MISC::IS_BIT_SET(iParam1, 1))
	{
		if (MISC::IS_BIT_SET(iParam1, 6))
		{
			fVar6 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (MISC::IS_BIT_SET(iParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (MISC::IS_BIT_SET(iParam1, 11))
		{
			fVar8 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (MISC::IS_BIT_SET(iParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}

bool func_10(int iParam0)
{
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((iParam4 == 0 && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		iVar7 = iVar0;
		if (iVar6 < 0)
		{
			iVar6 = 11;
			iVar7 = (iVar7 - 1);
		}
		iVar8 = iVar6;
		iVar9 = func_19(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_18(iParam0, iParam1);
	func_17(iParam0, iParam2);
	func_16(iParam0, iParam3);
	func_15(iParam0, iParam5);
	func_14(iParam0, iParam4);
	func_13(iParam0, iParam6);
}

void func_13(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_14(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(*iParam0);
	iVar1 = func_25(*iParam0);
	if (iParam1 < 1 || iParam1 > func_19(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

void func_16(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_18(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_19(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_20(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_21(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_22(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_23(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_24(int iParam0)
{
	return iParam0 & 15;
}

var func_25(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_26(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_26(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_27()
{
	int iVar0;
	
	if (Global_104555.f_20534.f_442 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_BIT_SET(Global_104555.f_20534.f_461[iVar0], 1))
		{
			if (Global_104555.f_20534.f_452[iVar0] > 0)
			{
				Global_104555.f_20534.f_452[iVar0] = (Global_104555.f_20534.f_452[iVar0] - 1);
				if (Global_104555.f_20534.f_452[iVar0] < 1)
				{
					Global_104555.f_20534.f_452[iVar0] = 0;
					Global_104555.f_20534.f_442 = (Global_104555.f_20534.f_442 - 1);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		func_29(iVar0, bParam0);
		SYSTEM::WAIT(0);
		if (!bParam0)
		{
			func_67();
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (Global_48202[iParam0 /*36*/].f_8)
	{
		return;
	}
	fVar0 = Global_48202[iParam0 /*36*/].f_9;
	if (!bParam1)
	{
		fVar0 = func_6(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_48202[iParam0 /*36*/].f_14[Global_48202[iParam0 /*36*/].f_13] = fVar0;
	if (fVar0 > Global_48202[iParam0 /*36*/].f_31)
	{
		Global_48202[iParam0 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_48202[iParam0 /*36*/].f_32)
	{
		Global_48202[iParam0 /*36*/].f_32 = fVar0;
	}
	Global_48202[iParam0 /*36*/].f_13++;
	if (Global_48202[iParam0 /*36*/].f_13 >= 16)
	{
		Global_48202[iParam0 /*36*/].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		fVar1 = (fVar1 + Global_48202[iParam0 /*36*/].f_14[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / SYSTEM::TO_FLOAT(16));
	Global_48202[iParam0 /*36*/].f_33 = (fVar0 - fVar1);
	Global_48202[iParam0 /*36*/].f_34 = ((Global_48202[iParam0 /*36*/].f_33 / fVar1) * 100f);
}

int func_30()
{
	int iVar0;
	
	if (iLocal_20 == -15)
	{
		iLocal_20 = func_37();
		iVar0 = func_22(iLocal_20);
		if (iVar0 == 24)
		{
			iVar0 = 0;
		}
		if (func_36(iVar0, 0, 8))
		{
			func_16(&iLocal_20, 8);
		}
		else if (func_36(iVar0, 8, 16))
		{
			func_16(&iLocal_20, 16);
		}
		else if (func_36(iVar0, 16, 24))
		{
			func_16(&iLocal_20, 0);
			func_35(&iLocal_20, 0, 0, 0, 1, 0, 0);
		}
		func_17(&iLocal_20, 0);
		func_18(&iLocal_20, 0);
		iLocal_21 = iLocal_20;
		return 0;
	}
	if (func_34(iLocal_20))
	{
		if (func_31(&iLocal_20, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_20, 0, 480, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_33(Global_1312464))
	{
		if (bParam1)
		{
			iVar0 = func_37();
			iVar1 = func_22(Global_1312464);
			iVar2 = func_21(Global_1312464);
			func_16(&iVar0, iVar1);
			func_17(&iVar0, iVar2);
			func_18(&iVar0, 0);
			if (func_32(func_37(), iVar0))
			{
				func_35(&iVar0, 0, 0, 0, 1, 0, 0);
			}
			iVar3 = 0;
			while (func_32(iVar0, *iParam0) && iVar3 < 24)
			{
				func_35(iParam0, 0, 0, iParam2, 0, 0, 0);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_33(iParam1) || !func_33(iParam0))
	{
		return 1;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_21(iParam0);
	iVar1 = func_21(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	iVar1 = func_20(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_21(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_22(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_25(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_24(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_23(iParam0);
	if (iVar5 < 1 || iVar5 > func_19(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0)
{
	return func_32(func_37(), iParam0);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_19(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_19(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	var uVar0;
	
	func_18(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_17(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_16(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_14(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_15(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_13(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_38()
{
	SYSTEM::WAIT(0);
	func_67();
}

void func_39()
{
	int iVar0;
	
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	if (iLocal_26 != iVar0)
	{
		if (iLocal_25 > 48)
		{
			switch (func_40(iLocal_26))
			{
				case 1:
					func_2(85, 1);
					break;
				
				case 2:
					func_2(84, 1);
					break;
				
				case 3:
					func_2(86, 1);
					break;
				
				case 4:
					func_2(87, 1);
					break;
				}
		}
		iLocal_25 = 0;
		iLocal_26 = iVar0;
	}
	switch (func_40(iVar0))
	{
		case 1:
			func_2(77, 1);
			break;
		
		case 2:
			func_2(76, 1);
			break;
		
		case 3:
			func_2(79, 1);
			break;
		
		case 4:
			func_2(80, 1);
			break;
		
		case 0:
			break;
	}
	func_2(78, 1);
	iLocal_25++;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	func_67();
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_51645[iVar0 /*7*/])
		{
			if (Global_51645[iVar0 /*7*/].f_2)
			{
				iVar1 = 0;
				if (!Global_51645[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_51645[iVar0 /*7*/].f_3, &iVar1, -1);
				}
				else
				{
					fVar2 = 0f;
					STATS::STAT_GET_FLOAT(Global_51645[iVar0 /*7*/].f_3, &fVar2, -1);
					iVar3 = SYSTEM::FLOOR(fVar2);
					if (Global_51645[iVar0 /*7*/].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_51645[iVar0 /*7*/].f_5;
					}
				}
				Global_51645[iVar0 /*7*/].f_6 = (iVar1 - Global_51645[iVar0 /*7*/].f_5);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_67();
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_48202[iVar0 /*36*/].f_8)
		{
			if (!Global_48202[iVar0 /*36*/].f_10 == 0f)
			{
				Global_48202[iVar0 /*36*/].f_11 = Global_48202[iVar0 /*36*/].f_10;
			}
		}
		if ((iVar0 % 40) == 0)
		{
			SYSTEM::WAIT(0);
			func_67();
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_48202[iVar0 /*36*/].f_8)
		{
			fVar5 = 0f;
			if (Global_48202[iVar0 /*36*/].f_10 != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_48202[iVar0 /*36*/].f_9) * Global_48202[iVar0 /*36*/].f_10) - Global_48202[iVar0 /*36*/].f_9));
			}
			fVar5 = (fVar5 + ((MISC::GET_RANDOM_FLOAT_IN_RANGE(-Global_51357[iVar4 /*7*/].f_6, Global_51357[iVar4 /*7*/].f_6) * 0.1f) * Global_48202[iVar0 /*36*/].f_9));
			Global_51357[iVar4 /*7*/] = (Global_51357[iVar4 /*7*/] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_51357[iVar4 /*7*/].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_51357[iVar4 /*7*/].f_1);
			}
			fVar5 = func_46(fVar5, -Global_51357[iVar4 /*7*/].f_5, Global_51357[iVar4 /*7*/].f_5);
			iVar6 = 61;
			if (((iVar0 == iVar6 && func_45(44)) && !func_45(64)) && fVar5 > 0f)
			{
				Global_48202[iVar0 /*36*/].f_9 = (Global_48202[iVar0 /*36*/].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_48202[iVar0 /*36*/].f_9 = (Global_48202[iVar0 /*36*/].f_9 + fVar5);
			}
			if (Global_48202[iVar0 /*36*/].f_9 > Global_51357[iVar4 /*7*/].f_3)
			{
				fVar8 = (Global_48202[iVar0 /*36*/].f_9 - Global_51357[iVar4 /*7*/].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_48202[iVar0 /*36*/].f_9 = (Global_48202[iVar0 /*36*/].f_9 - fVar8);
			}
			else if (Global_48202[iVar0 /*36*/].f_9 < Global_51357[iVar4 /*7*/].f_4)
			{
				fVar9 = (Global_51357[iVar4 /*7*/].f_4 - Global_48202[iVar0 /*36*/].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_48202[iVar0 /*36*/].f_9 = (Global_48202[iVar0 /*36*/].f_9 + fVar9);
			}
			Global_51357[iVar4 /*7*/] = (Global_51357[iVar4 /*7*/] - (((fVar5 * 0.66f) + (Global_51357[iVar4 /*7*/] * 0.33f)) * 0.02f));
			if (!Global_48202[iVar0 /*36*/].f_9 > 0f)
			{
				Global_48202[iVar0 /*36*/].f_9 = (-1f * Global_48202[iVar0 /*36*/].f_9);
				Global_48202[iVar0 /*36*/].f_9 = (Global_48202[iVar0 /*36*/].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_67();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_51645[iVar0 /*7*/])
		{
			if (Global_51645[iVar0 /*7*/].f_2)
			{
				Global_51645[iVar0 /*7*/].f_5 = (Global_51645[iVar0 /*7*/].f_5 + Global_51645[iVar0 /*7*/].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (!Global_48202[iVar1 /*36*/].f_8)
		{
			if (iVar0 < 42)
			{
				Global_104555.f_20534.f_103[iVar0] = Global_48202[iVar1 /*36*/].f_9;
				if (Global_48202[iVar1 /*36*/].f_31 > Global_104555.f_20534.f_146[iVar0])
				{
					Global_104555.f_20534.f_146[iVar0] = Global_48202[iVar1 /*36*/].f_31;
				}
				if (Global_104555.f_20534.f_189[iVar0] == 0f)
				{
					Global_104555.f_20534.f_189[iVar0] = Global_48202[iVar1 /*36*/].f_32;
				}
				else if (Global_48202[iVar1 /*36*/].f_32 < Global_104555.f_20534.f_189[iVar0])
				{
					Global_104555.f_20534.f_189[iVar0] = Global_48202[iVar1 /*36*/].f_32;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (Global_48202[iParam0 /*36*/].f_8)
	{
		return 1f;
	}
	iVar0 = func_8(0, iParam0);
	iVar1 = func_8(1, iParam0);
	iVar2 = func_8(2, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 1)
	{
		return 1f;
	}
	iVar3 = 1000000000;
	iVar4 = ((Global_53077[0] + Global_53077[1]) + Global_53077[2]);
	if (Global_53077[0] > iVar3)
	{
		return 0f;
	}
	if (Global_53077[1] > iVar3)
	{
		return 0f;
	}
	if (Global_53077[2] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0;
	while (iVar6 < 10)
	{
		iVar7 = func_8(0, iVar6);
		if (iVar7 > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(0, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(1, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(1, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(2, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(2, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (SYSTEM::FLOOR(fVar5) + iVar4);
	iVar9 = 700000000;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
	fVar11 = SYSTEM::TO_FLOAT((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_104555.f_20534[iParam1];
		
		case 1:
			return Global_104555.f_20534.f_33[iParam1];
		
		case 2:
			return Global_104555.f_20534.f_66[iParam1];
		
		default:
	}
	return 31;
}

int func_45(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

float func_46(float fParam0, float fParam1, float fParam2)
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

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		if (iVar0 == 0)
		{
			func_2(75, 1);
		}
		iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
			if (iVar2 != 0)
			{
				if (func_57(iVar2))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
					func_55(iVar3);
				}
			}
		}
		SYSTEM::WAIT(0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			iVar4 = WEAPON::GET_SELECTED_PED_WEAPON(iVar1);
			func_53(iVar4);
			switch (iVar4)
			{
				case joaat("weapon_molotov"):
				case joaat("weapon_petrolcan"):
					switch (func_48())
					{
						case 0:
							func_2(147, 1);
							break;
						
						case 1:
							func_2(148, 1);
							break;
						
						case 2:
							func_2(149, 1);
							break;
					}
					break;
				}
			}
	}
}

int func_48()
{
	func_49();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_49()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_52(Global_104555.f_2353.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_51(PLAYER::PLAYER_PED_ID());
			if (func_50(iVar0) && (!func_78(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_50(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	switch (iVar0)
	{
		case 0:
			func_2(51, 1);
			break;
		
		case 1:
			func_2(52, 1);
			break;
		
		case 2:
			func_2(53, 1);
			break;
	}
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_stickybomb"):
		case joaat("weapon_stungun"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_appistol"):
			return 0;
			break;
		
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_rpg"):
		case joaat("weapon_mg"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_grenade"):
		case joaat("weapon_minigun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_55(int iParam0)
{
	switch (func_56(iParam0))
	{
		case 0:
			func_2(39, 1);
			break;
		
		case 1:
			func_2(35, 1);
			break;
		
		case 2:
			func_2(32, 1);
			break;
		
		case 3:
			func_2(38, 1);
			break;
		
		case 4:
			func_2(31, 1);
			break;
		
		case 5:
			func_2(33, 1);
			break;
		
		case 6:
			func_2(36, 1);
			break;
		
		case 7:
			func_2(37, 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			func_2(34, 1);
			break;
	}
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case joaat("benson"):
		case joaat("bobcatxl"):
		case joaat("bullet"):
		case joaat("dominator"):
		case joaat("minivan"):
		case joaat("peyote"):
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("stanier"):
			return 3;
			break;
		
		case joaat("boxville"):
		case joaat("camper"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("tiptruck"):
			return 2;
			break;
		
		case joaat("fusilade"):
			return 6;
			break;
		
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
			return 1;
			break;
		
		case joaat("bfinjection"):
		case joaat("dune"):
		case joaat("surfer"):
		case joaat("surfer2"):
			return 4;
			break;
		
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("bulldozer"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("forklift"):
		case joaat("mixer"):
		case joaat("mixer2"):
			return 0;
			break;
		
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
			return 7;
			break;
	}
	return 8;
}

int func_57(int iParam0)
{
	var uVar0;
	
	if (Global_70856)
	{
		return VEHICLE::IS_VEHICLE_STOLEN(iParam0);
	}
	if (func_60(iParam0, &uVar0))
	{
		return 0;
	}
	if (func_59(iParam0))
	{
		return 0;
	}
	if (func_58(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_90309[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_90309[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_60(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (Global_69678.f_484[iVar0] == iParam0)
		{
			if (func_61(&(Global_69678.f_555[0 /*21*/]), iVar0))
			{
				if (MISC::IS_BIT_SET(Global_69678.f_555[0 /*21*/].f_9, 10) && Global_69678.f_555[0 /*21*/].f_4 == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					*uParam1 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_64(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_64(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_64(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_64(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_64(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_64(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_64(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_64(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_64(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_63())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_63())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104555.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_62(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104555.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104555.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_62(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_62(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_62(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_63()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
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
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
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

int func_64(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_65(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_65(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_66()
{
	if (iLocal_21 == -15)
	{
		return 0;
	}
	if (func_34(iLocal_21))
	{
		if (func_31(&iLocal_21, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_21, 0, iLocal_22, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (Global_53082)
	{
		Global_53082 = 0;
		switch (func_56(Global_53083))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
			
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
			}
	}
	iVar0 = 0;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar2 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar2)
		{
			case 140:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_77(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							func_73(iVar1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							if (func_72(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1)))
							{
								func_2(3, 1);
							}
							func_71(ENTITY::GET_ENTITY_MODEL(iVar1));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							switch (ENTITY::GET_ENTITY_MODEL(iVar1))
							{
								case joaat("prop_news_disp_01a"):
								case joaat("prop_news_disp_02a"):
								case joaat("prop_news_disp_02a_s"):
								case joaat("prop_news_disp_02b"):
								case joaat("prop_news_disp_02c"):
								case joaat("prop_news_disp_02d"):
								case joaat("prop_news_disp_02e"):
								case joaat("prop_news_disp_03a"):
								case joaat("prop_news_disp_03c"):
								case joaat("prop_news_disp_05a"):
								case -1389481633:
								case 1301918910:
								case joaat("prop_news_disp_06a"):
								case -1406224059:
									func_2(68, 1);
									break;
								
								case -959573699:
								case joaat("prop_postbox_01a"):
								case 1147034058:
								case 1444740423:
								case joaat("prop_postbox_ss_01a"):
									func_2(128, 1);
									break;
								}
							}
						}
				}
				break;
			
			case 139:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_77(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (func_48() == 0 && iVar3 != PLAYER::PLAYER_PED_ID())
							{
								if (ENTITY::IS_ENTITY_DEAD(iVar1, 0) || IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) < (0.5f * IntToFloat(PED::GET_PED_MAX_HEALTH(iVar3))))
								{
									if (ENTITY::IS_ENTITY_A_PED(iVar1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											func_69(3);
										}
									}
								}
							}
							func_2(111, 1);
							func_2(124, 1);
							if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
							{
								func_2(130, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_68(ENTITY::GET_ENTITY_MODEL(iVar1));
							func_2(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_68(int iParam0)
{
	switch (func_56(iParam0))
	{
		case 0:
			func_2(47, 1);
			break;
		
		case 1:
			func_2(43, 1);
			break;
		
		case 2:
			func_2(41, 1);
			break;
		
		case 3:
			func_2(46, 1);
			break;
		
		case 4:
			func_2(40, 1);
			break;
		
		case 5:
			func_2(42, 1);
			break;
		
		case 6:
			func_2(44, 1);
			break;
		
		case 7:
			func_2(45, 1);
			break;
	}
}

void func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_70(&Global_89446, 1);
			break;
		
		case 1:
			func_70(&Global_89448, 3);
			break;
		
		case 2:
			func_70(&Global_89452, 1);
			break;
		
		case 3:
			func_70(&Global_89454, 1);
			break;
		
		case 4:
			func_70(&Global_89456, 1);
			break;
		
		case 5:
			func_70(&Global_89458, 1);
			break;
		
		case 6:
			func_70(&Global_89460, 1);
			break;
		
		case 7:
			func_70(&Global_89462, 2);
			break;
		
		case 8:
			func_70(&Global_89465, 1);
			break;
		
		case 9:
			func_70(&Global_89467, 1);
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_71(int iParam0)
{
	switch (func_56(iParam0))
	{
		case 0:
			func_2(11, 1);
			break;
		
		case 1:
			func_2(6, 1);
			break;
		
		case 2:
			func_2(1, 1);
			break;
		
		case 3:
			func_2(10, 1);
			break;
		
		case 4:
			func_2(0, 1);
			break;
		
		case 5:
			func_2(2, 1);
			break;
		
		case 6:
			func_2(8, 1);
			break;
		
		case 7:
			func_2(9, 1);
			break;
	}
	if (iParam0 == joaat("taxi"))
	{
		func_2(100, 1);
	}
	func_2(111, 1);
}

int func_72(int iParam0)
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 3) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 4) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 11) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 12) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 13) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 14) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 15) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 16) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 23) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 24) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 8) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) != -1)
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 18))
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 22))
		{
			return 1;
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			func_76(iVar2, PED::GET_PED_TYPE(iVar0));
		}
		else
		{
			iVar3 = PED::GET_PED_CAUSE_OF_DEATH(iVar0);
			iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
			func_75(iVar3, PED::GET_PED_TYPE(iVar0), iVar4);
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		func_2(129, 1);
	}
	if (!func_74(iParam0))
	{
		return;
	}
	func_2(111, 1);
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = (iVar5 - iLocal_23);
	iLocal_23 = iVar5;
	if (iVar6 > 2000)
	{
		iLocal_24 = 0;
	}
	else
	{
		iLocal_24++;
		if (iLocal_24 == 3)
		{
			func_2(127, 1);
		}
	}
}

int func_74(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	if (func_3(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == iVar0)
	{
		return 1;
	}
	return 0;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (iVar0 == 0)
	{
		func_2(108, 1);
	}
	switch (iParam1)
	{
		case 4:
		case 5:
			switch (iVar0)
			{
				case 0:
					func_2(63, 1);
					break;
				
				case 1:
					func_2(64, 1);
					break;
				
				case 2:
					func_2(65, 1);
					break;
			}
			break;
		
		case 22:
			switch (iVar0)
			{
				case 0:
					func_2(57, 1);
					break;
				
				case 1:
					func_2(58, 1);
					break;
				
				case 2:
					func_2(59, 1);
					break;
			}
			break;
		
		case 27:
		case 6:
			switch (iVar0)
			{
				case 0:
					func_2(54, 1);
					break;
				
				case 1:
					func_2(55, 1);
					break;
				
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("s_f_y_hooker_01"):
			func_2(121, 1);
			break;
		
		case joaat("a_f_m_bodybuild_01"):
		case joaat("a_m_m_beach_02"):
		case joaat("a_m_y_musclbeac_02"):
		case joaat("a_m_y_runner_01"):
		case joaat("a_m_y_roadcyc_01"):
		case joaat("a_m_y_skater_01"):
		case joaat("a_m_y_skater_02"):
		case joaat("a_m_y_sunbathe_01"):
		case joaat("a_m_y_surfer_01"):
		case joaat("a_m_y_yoga_01"):
		case joaat("s_m_y_baywatch_01"):
		case joaat("s_m_y_marine_02"):
			func_2(69, 1);
			break;
		
		case joaat("s_m_y_dealer_01"):
			func_2(125, 1);
			break;
	}
}

void func_76(int iParam0, int iParam1)
{
	func_2(48, 1);
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(4, 1);
			break;
		
		case joaat("tanker"):
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
		
		case joaat("packer"):
			func_2(7, 1);
			break;
		
		case joaat("phantom"):
			func_2(5, 1);
			break;
	}
	switch (func_56(iParam0))
	{
		case 0:
			func_2(109, 1);
			break;
		
		case 1:
			func_2(104, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
		
		case 2:
			func_2(102, 1);
			break;
		
		case 3:
			func_2(107, 1);
			break;
		
		case 4:
			func_2(101, 1);
			break;
		
		case 5:
			func_2(103, 1);
			break;
		
		case 6:
			func_2(105, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
		
		case 7:
			func_2(106, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}
}

void func_77(int iParam0)
{
	ENTITY::DOES_ENTITY_EXIST(iParam0);
	ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

bool func_78(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_79()
{
	int iVar0;
	int iVar1;
	
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		iLocal_29 = 0;
		return;
	}
	if (func_81(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		iLocal_29 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0);
		if (iLocal_29 != iVar0)
		{
			vLocal_27 = { vLocal_28 };
			iLocal_29 = iVar0;
		}
		if (iVar0 == 0)
		{
			return;
		}
		vLocal_27 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		if (iLocal_29 == 0)
		{
			vLocal_28 = { vLocal_27 };
			iLocal_29 = iVar0;
			return;
		}
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_80(iVar1, MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_27, vLocal_28, false)))
		{
			vLocal_28 = { vLocal_27 };
		}
	}
}

int func_80(int iParam0, float fParam1)
{
	if (fParam1 < 10f)
	{
		return 0;
	}
	switch (func_56(iParam0))
	{
		case 0:
			func_2(28, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 1:
			func_2(24, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 2:
			func_2(21, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 3:
			func_2(27, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 4:
			func_2(20, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 5:
			func_2(22, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 6:
			func_2(25, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case 7:
			func_2(26, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(23, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (func_48())
			{
				case 0:
					func_2(141, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 1:
					func_2(142, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				
				case 2:
					func_2(143, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
			}
			break;
	}
	return 1;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_82(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_83()
{
	func_84(0);
	func_84(1);
	func_84(2);
}

void func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_48202[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_48202[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_85(iParam0, iVar0);
				if (Global_48202[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = 0;
				}
				STATS::STAT_SET_INT(Global_51083[iVar1 /*7*/].f_3[iParam0], iVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_104555.f_20534[iVar0] == iParam1)
				{
					if (Global_104555.f_20534.f_22[iVar0] > 0)
					{
						return Global_104555.f_20534.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_104555.f_20534.f_33[iVar0] == iParam1)
				{
					if (Global_104555.f_20534.f_55[iVar0] > 0)
					{
						return Global_104555.f_20534.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_104555.f_20534.f_66[iVar0] == iParam1)
				{
					if (Global_104555.f_20534.f_88[iVar0] > 0)
					{
						return Global_104555.f_20534.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_86()
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_53364;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_53367[iVar0 /*14*/].f_13 > 0)
		{
			Global_53367[iVar0 /*14*/].f_13 = (Global_53367[iVar0 /*14*/].f_13 - 1);
		}
		else if (func_88(iVar0))
		{
			func_87(&(Global_53367[iVar0 /*14*/]), -1);
			Global_53367[iVar0 /*14*/].f_13 = 60000;
		}
		SYSTEM::WAIT(0);
		func_67();
		iVar0++;
	}
}

int func_87(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = *uParam0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_55749[iVar0 /*34*/][iVar1 /*11*/].f_9 == uParam0->f_9)
		{
			uParam0->f_10 = (uParam0->f_10 + 0.05f);
			return 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	fVar2 = 0f;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_55749[iVar0 /*34*/][iVar1 /*11*/].f_10 > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_55749[iVar0 /*34*/][iVar1 /*11*/].f_10;
		}
		iVar1++;
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	if (uParam0->f_10 <= Global_55749[iVar0 /*34*/][iVar3 /*11*/].f_10)
	{
		uParam0->f_10 = (uParam0->f_10 + 1f);
		Global_55749[iVar0 /*34*/][iVar3 /*11*/].f_10 = uParam0->f_10;
		Global_55749[iVar0 /*34*/][iVar3 /*11*/].f_1 = { uParam0->f_1 };
		Global_55749[iVar0 /*34*/][iVar3 /*11*/].f_5 = { uParam0->f_5 };
		Global_55749[iVar0 /*34*/][iVar3 /*11*/].f_9 = uParam0->f_9;
		Global_55749[iVar0 /*34*/][iVar3 /*11*/] = *uParam0;
		return 1;
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	iVar0 = Global_53367[iParam0 /*14*/].f_12;
	fVar1 = Global_48202[iVar0 /*36*/].f_9;
	iVar2 = Global_48202[iVar0 /*36*/].f_13;
	while (iVar2 > 15)
	{
		iVar2 = (iVar2 - 16);
	}
	iVar3 = (iVar2 - 10);
	while (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	fVar4 = Global_48202[iVar0 /*36*/].f_14[iVar3];
	Global_48202[iVar0 /*36*/].f_14[Global_48202[iVar0 /*36*/].f_13] = func_6(iVar0);
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = iVar3 + 1;
	if (iVar8 == 16)
	{
		iVar8 = 0;
	}
	iVar9 = 0;
	iVar10 = iVar8;
	iVar11 = 0;
	iVar12 = 0;
	iVar9 = 0;
	while (iVar9 < 8)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 16)
		{
			iVar11 = 0;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 16)
		{
			iVar12 = 0;
		}
		if (Global_48202[iVar0 /*36*/].f_14[iVar10] < Global_48202[iVar0 /*36*/].f_14[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_48202[iVar0 /*36*/].f_14[iVar11] - Global_48202[iVar0 /*36*/].f_14[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_48202[iVar0 /*36*/].f_14[iVar10] - Global_48202[iVar0 /*36*/].f_14[iVar11]));
		}
		if (Global_48202[iVar0 /*36*/].f_14[iVar10] < Global_48202[iVar0 /*36*/].f_14[iVar11] && Global_48202[iVar0 /*36*/].f_14[iVar12] < Global_48202[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		if (Global_48202[iVar0 /*36*/].f_14[iVar10] > Global_48202[iVar0 /*36*/].f_14[iVar11] && Global_48202[iVar0 /*36*/].f_14[iVar12] > Global_48202[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 16)
		{
			iVar10 = 0;
		}
		iVar9++;
	}
	if (iVar6 < 0)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_53367[iParam0 /*14*/].f_11)
	{
		case 0:
			if (iVar6 < 6)
			{
				return 0;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (iVar7 < 6)
			{
				return 0;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (iVar5 < 7)
			{
				return 0;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_90()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (iVar0 < 42)
		{
			if (!Global_48202[iVar1 /*36*/].f_8)
			{
				if (Global_104555.f_20534.f_103[iVar0] > 0f)
				{
					Global_48202[iVar1 /*36*/].f_9 = Global_104555.f_20534.f_103[iVar0];
				}
				if (Global_104555.f_20534.f_146[iVar0] > 0f)
				{
					Global_48202[iVar1 /*36*/].f_31 = Global_104555.f_20534.f_146[iVar0];
				}
				if (Global_104555.f_20534.f_189[iVar0] > 0f)
				{
					Global_48202[iVar1 /*36*/].f_32 = Global_104555.f_20534.f_189[iVar0];
				}
				iVar0++;
			}
			if ((Global_48202[iVar1 /*36*/].f_32 > 0f && Global_48202[iVar1 /*36*/].f_31 > 0f) && Global_48202[iVar1 /*36*/].f_9 > 0f)
			{
				fVar2 = Global_48202[iVar1 /*36*/].f_9;
				if (fVar2 > Global_48202[iVar1 /*36*/].f_31)
				{
					Global_48202[iVar1 /*36*/].f_31 = fVar2;
				}
				if (fVar2 < Global_48202[iVar1 /*36*/].f_32)
				{
					Global_48202[iVar1 /*36*/].f_32 = fVar2;
				}
				iVar3 = 0;
				fVar4 = (Global_48202[iVar1 /*36*/].f_31 - Global_48202[iVar1 /*36*/].f_32);
				fVar5 = 0f;
				fVar10 = 2.147484E+09f;
				fVar11 = -2.147484E+09f;
				iVar3 = 15;
				while (iVar3 >= 0)
				{
					fVar6 = ((fVar4 * MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 15)
					{
						fVar12 = ((Global_48202[iVar1 /*36*/].f_31 - Global_48202[iVar1 /*36*/].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_48202[iVar1 /*36*/].f_9 - Global_48202[iVar1 /*36*/].f_32) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_48202[iVar1 /*36*/].f_14[iVar3] = Global_48202[iVar1 /*36*/].f_9;
					}
					else
					{
						fVar14 = ((Global_48202[iVar1 /*36*/].f_31 - Global_48202[iVar1 /*36*/].f_14[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_48202[iVar1 /*36*/].f_14[iVar3 + 1] - Global_48202[iVar1 /*36*/].f_32) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_48202[iVar1 /*36*/].f_14[iVar3] = (Global_48202[iVar1 /*36*/].f_14[iVar3 + 1] + fVar7);
					}
					fVar10 = func_92(fVar10, Global_48202[iVar1 /*36*/].f_14[iVar3]);
					fVar11 = func_91(fVar11, Global_48202[iVar1 /*36*/].f_14[iVar3]);
					fVar5 = (fVar5 + Global_48202[iVar1 /*36*/].f_14[iVar3]);
					iVar3 = (iVar3 + -1);
				}
				Global_48202[iVar1 /*36*/].f_32 = fVar10;
				Global_48202[iVar1 /*36*/].f_31 = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_48202[iVar1 /*36*/].f_33 = (Global_48202[iVar1 /*36*/].f_9 - fVar5);
				Global_48202[iVar1 /*36*/].f_34 = ((Global_48202[iVar1 /*36*/].f_33 / fVar5) * 100f);
				fVar16 = func_7(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						fVar18 = (SYSTEM::TO_FLOAT(iVar3) / 16f);
						Global_48202[iVar1 /*36*/].f_14[iVar3] = (Global_48202[iVar1 /*36*/].f_14[iVar3] * (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 15)
						{
							Global_48202[iVar1 /*36*/].f_14[iVar3] = (Global_48202[iVar1 /*36*/].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_48202[iVar1 /*36*/].f_14[iVar3]);
						Global_48202[iVar1 /*36*/].f_32 = func_92(Global_48202[iVar1 /*36*/].f_32, Global_48202[iVar1 /*36*/].f_14[iVar3]);
						Global_48202[iVar1 /*36*/].f_31 = func_91(Global_48202[iVar1 /*36*/].f_31, Global_48202[iVar1 /*36*/].f_14[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_48202[iVar1 /*36*/].f_33 = (Global_48202[iVar1 /*36*/].f_9 - fVar5);
					Global_48202[iVar1 /*36*/].f_34 = ((Global_48202[iVar1 /*36*/].f_33 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}

float func_91(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_92(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_93()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (!Global_104555.f_20534.f_101)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (!Global_48202[iVar0 /*36*/].f_8)
			{
				Global_48202[iVar0 /*36*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			func_28(1);
			iVar0 = 0;
			while (iVar0 < 80)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_48202[iVar0 /*36*/].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_48202[iVar0 /*36*/].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_48202[iVar0 /*36*/].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_48202[iVar0 /*36*/].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_48202[iVar0 /*36*/].f_9 = (Global_48202[iVar0 /*36*/].f_9 * MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar2, fVar3));
				Global_48202[iVar0 /*36*/].f_9 = func_92(func_91(MISC::ABSF(Global_48202[iVar0 /*36*/].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_104555.f_20534.f_101 = 1;
	}
}

void func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_53364 = 0;
	Global_53366 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			StringCopy(&(Global_55749[iVar0 /*34*/][iVar1 /*11*/].f_1), "BSNEWS_DEFAULT", 16);
			StringCopy(&(Global_55749[iVar0 /*34*/][iVar1 /*11*/].f_5), "BSNEWS_DEFAULT", 16);
			iVar1++;
		}
		iVar0++;
	}
	func_95(55, "ECL_P_SR_H", "ECL_P_SR_C", 0, 0);
	func_95(55, "ECL_P_SF_H", "ECL_P_SF_C", 1, 0);
	func_95(55, "ECL_P_RF_H", "ECL_P_RF_C", 2, 0);
	func_95(51, "BGR_P_SR_H", "BGR_P_SR_C", 0, 0);
	func_95(51, "BGR_P_SF_H", "BGR_P_SF_C", 1, 0);
	func_95(52, "CLK_P_SR_H", "CLK_P_SR_C", 0, 0);
	func_95(52, "CLK_P_SF_H", "CLK_P_SF_C", 1, 0);
	func_95(52, "CLK_P_RF_H", "CLK_P_RF_C", 2, 0);
	func_95(48, "BEN_P_SR_H", "BEN_P_SR_C", 0, 0);
	func_95(48, "BEN_P_SF_H", "BEN_P_SF_C", 1, 0);
	func_95(48, "BEN_P_RF_H", "BEN_P_RF_C", 2, 0);
	func_95(13, "FLC_P_SR_H", "FLC_P_SR_C", 0, 0);
	func_95(13, "FLC_P_SF_H", "FLC_P_SF_C", 1, 0);
	func_95(13, "FLC_P_RF_H", "FLC_P_RF_C", 2, 0);
	func_95(64, "PRO_P_SR_H", "PRO_P_SR_C", 0, 0);
	func_95(64, "PRO_P_SF_H", "PRO_P_SF_C", 1, 0);
	func_95(64, "PRO_P_RF_H", "PRO_P_RF_C", 2, 0);
	func_95(70, "UNI_P_SR_H", "UNI_P_SR_C", 0, 0);
	func_95(70, "UNI_P_SF_H", "UNI_P_SF_C", 1, 0);
	func_95(70, "UNI_P_RF_H", "UNI_P_RF_C", 2, 0);
	func_95(60, "KRP_P_SR_H", "KRP_P_SR_C", 0, 0);
	func_95(60, "KRP_P_SF_H", "KRP_P_SF_C", 1, 0);
	func_95(60, "KRP_P_RF_H", "KRP_P_RF_C", 2, 0);
	func_95(56, "FUS_P_SR_H", "FUS_P_SR_C", 0, 0);
	func_95(56, "FUS_P_SF_H", "FUS_P_SF_C", 1, 0);
	func_95(56, "FUS_P_RF_H", "FUS_P_RF_C", 2, 0);
	func_95(58, "GOP_P_SR_H", "GOP_P_SR_C", 0, 0);
	func_95(58, "GOP_P_SF_H", "GOP_P_SF_C", 1, 0);
	func_95(58, "GOP_P_RF_H", "GOP_P_RF_C", 2, 0);
	func_95(53, "BAN_P_SR_H", "BAN_P_SR_C", 0, 0);
	func_95(53, "BAN_P_SF_H", "BAN_P_SF_C", 1, 0);
	func_95(53, "BAN_P_RF_H", "BAN_P_RF_C", 2, 0);
	func_95(62, "MAX_P_SR_H", "MAX_P_SR_C", 0, 0);
	func_95(62, "MAX_P_SF_H", "MAX_P_SF_C", 1, 0);
	func_95(62, "MAX_P_RF_H", "MAX_P_RF_C", 2, 0);
	func_95(57, "GAS_P_SR_H", "GAS_P_SR_C", 0, 0);
	func_95(57, "GAS_P_SF_H", "GAS_P_SF_C", 1, 0);
	func_95(57, "GAS_P_RF_H", "GAS_P_RF_C", 2, 0);
	func_95(59, "GRU_P_SR_H", "GRU_P_SR_C", 0, 0);
	func_95(59, "GRU_P_SF_H", "GRU_P_SF_C", 1, 0);
	func_95(59, "GRU_P_RF_H", "GRU_P_RF_C", 2, 0);
	func_95(44, "PMP_P_SR_H", "PMP_P_SR_C", 0, 0);
	func_95(44, "PMP_P_SF_H", "PMP_P_SF_C", 1, 0);
	func_95(44, "PMP_P_RF_H", "PMP_P_RF_C", 2, 0);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_53364 - 1));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_55749[iVar0 /*34*/][iVar1 /*11*/].f_10 = 5000f;
			while (!func_87(&(Global_53367[iVar2 /*14*/]), iVar0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_53364 - 1));
				SYSTEM::WAIT(2000);
			}
			Global_53367[iVar2 /*14*/].f_10 = 0f;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_53364 - 1));
			iVar1++;
		}
		iVar0++;
	}
}

void func_95(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	if (Global_53364 == 150)
	{
		return;
	}
	Global_53367[Global_53364 /*14*/].f_11 = iParam3;
	Global_53367[Global_53364 /*14*/] = iParam4;
	StringCopy(&(Global_53367[Global_53364 /*14*/].f_1), sParam1, 16);
	StringCopy(&(Global_53367[Global_53364 /*14*/].f_5), sParam2, 16);
	Global_53367[Global_53364 /*14*/].f_9 = Global_53366;
	Global_53367[Global_53364 /*14*/].f_12 = iParam0;
	Global_53364++;
	Global_53366++;
}

void func_96()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		Global_48202[iVar0 /*36*/].f_33 = 0f;
		Global_48202[iVar0 /*36*/].f_13 = 0;
		Global_48202[iVar0 /*36*/].f_12 = 0;
		Global_48202[iVar0 /*36*/].f_31 = 0f;
		Global_48202[iVar0 /*36*/].f_32 = 3.402823E+38f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_48202[iVar0 /*36*/].f_14[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		Global_51645[iVar0 /*7*/].f_2 = 0;
		iVar0++;
	}
	StringCopy(&(Global_48202[0 /*36*/]), "BSS_BSTR_0", 16);
	StringCopy(&(Global_48202[0 /*36*/].f_4), "BSS_BSTR_1", 16);
	Global_48202[0 /*36*/].f_8 = 1;
	Global_48202[0 /*36*/].f_35 = 0;
	StringCopy(&(Global_48202[1 /*36*/]), "BSS_BSTR_2", 16);
	StringCopy(&(Global_48202[1 /*36*/].f_4), "BSS_BSTR_3", 16);
	Global_48202[1 /*36*/].f_8 = 1;
	Global_48202[1 /*36*/].f_35 = 1;
	StringCopy(&(Global_48202[2 /*36*/]), "BSS_BSTR_4", 16);
	StringCopy(&(Global_48202[2 /*36*/].f_4), "BSS_BSTR_5", 16);
	Global_48202[2 /*36*/].f_8 = 0;
	Global_48202[2 /*36*/].f_35 = 0;
	StringCopy(&(Global_48202[3 /*36*/]), "BSS_BSTR_6", 16);
	StringCopy(&(Global_48202[3 /*36*/].f_4), "BSS_BSTR_7", 16);
	Global_48202[3 /*36*/].f_8 = 1;
	Global_48202[3 /*36*/].f_35 = 2;
	StringCopy(&(Global_48202[4 /*36*/]), "BSS_BSTR_8", 16);
	StringCopy(&(Global_48202[4 /*36*/].f_4), "BSS_BSTR_9", 16);
	Global_48202[4 /*36*/].f_8 = 1;
	Global_48202[4 /*36*/].f_35 = 3;
	StringCopy(&(Global_48202[5 /*36*/]), "BSS_BSTR_10", 16);
	StringCopy(&(Global_48202[5 /*36*/].f_4), "BSS_BSTR_11", 16);
	Global_48202[5 /*36*/].f_8 = 1;
	Global_48202[5 /*36*/].f_35 = 4;
	StringCopy(&(Global_48202[6 /*36*/]), "BSS_BSTR_12", 16);
	StringCopy(&(Global_48202[6 /*36*/].f_4), "BSS_BSTR_13", 16);
	Global_48202[6 /*36*/].f_8 = 1;
	Global_48202[6 /*36*/].f_35 = 5;
	StringCopy(&(Global_48202[7 /*36*/]), "BSS_BSTR_14", 16);
	StringCopy(&(Global_48202[7 /*36*/].f_4), "BSS_BSTR_15", 16);
	Global_48202[7 /*36*/].f_8 = 1;
	Global_48202[7 /*36*/].f_35 = 6;
	StringCopy(&(Global_48202[8 /*36*/]), "BSS_BSTR_16", 16);
	StringCopy(&(Global_48202[8 /*36*/].f_4), "BSS_BSTR_16", 16);
	Global_48202[8 /*36*/].f_8 = 1;
	Global_48202[8 /*36*/].f_35 = 7;
	StringCopy(&(Global_48202[9 /*36*/]), "BSS_BSTR_17", 16);
	StringCopy(&(Global_48202[9 /*36*/].f_4), "BSS_BSTR_18", 16);
	Global_48202[9 /*36*/].f_8 = 1;
	Global_48202[9 /*36*/].f_35 = 8;
	StringCopy(&(Global_48202[10 /*36*/]), "BSS_BSTR_19", 16);
	StringCopy(&(Global_48202[10 /*36*/].f_4), "BSS_BSTR_20", 16);
	Global_48202[10 /*36*/].f_8 = 1;
	Global_48202[10 /*36*/].f_35 = 9;
	StringCopy(&(Global_48202[11 /*36*/]), "BSS_BSTR_21", 16);
	StringCopy(&(Global_48202[11 /*36*/].f_4), "BSS_BSTR_22", 16);
	Global_48202[11 /*36*/].f_8 = 1;
	Global_48202[11 /*36*/].f_35 = 10;
	StringCopy(&(Global_48202[12 /*36*/]), "BSS_BSTR_23", 16);
	StringCopy(&(Global_48202[12 /*36*/].f_4), "BSS_BSTR_24", 16);
	Global_48202[12 /*36*/].f_8 = 1;
	Global_48202[12 /*36*/].f_35 = 11;
	StringCopy(&(Global_48202[13 /*36*/]), "BSS_BSTR_25", 16);
	StringCopy(&(Global_48202[13 /*36*/].f_4), "BSS_BSTR_26", 16);
	Global_48202[13 /*36*/].f_8 = 0;
	Global_48202[13 /*36*/].f_35 = 1;
	StringCopy(&(Global_48202[14 /*36*/]), "BSS_BSTR_27", 16);
	StringCopy(&(Global_48202[14 /*36*/].f_4), "BSS_BSTR_28", 16);
	Global_48202[14 /*36*/].f_8 = 0;
	Global_48202[14 /*36*/].f_35 = 2;
	StringCopy(&(Global_48202[15 /*36*/]), "BSS_BSTR_29", 16);
	StringCopy(&(Global_48202[15 /*36*/].f_4), "BSS_BSTR_30", 16);
	Global_48202[15 /*36*/].f_8 = 1;
	Global_48202[15 /*36*/].f_35 = 12;
	StringCopy(&(Global_48202[16 /*36*/]), "BSS_BSTR_31", 16);
	StringCopy(&(Global_48202[16 /*36*/].f_4), "BSS_BSTR_32", 16);
	Global_48202[16 /*36*/].f_8 = 0;
	Global_48202[16 /*36*/].f_35 = 3;
	StringCopy(&(Global_48202[17 /*36*/]), "BSS_BSTR_33", 16);
	StringCopy(&(Global_48202[17 /*36*/].f_4), "BSS_BSTR_34", 16);
	Global_48202[17 /*36*/].f_8 = 0;
	Global_48202[17 /*36*/].f_35 = 4;
	StringCopy(&(Global_48202[18 /*36*/]), "BSS_BSTR_35", 16);
	StringCopy(&(Global_48202[18 /*36*/].f_4), "BSS_BSTR_36", 16);
	Global_48202[18 /*36*/].f_8 = 0;
	Global_48202[18 /*36*/].f_35 = 5;
	StringCopy(&(Global_48202[19 /*36*/]), "BSS_BSTR_37", 16);
	StringCopy(&(Global_48202[19 /*36*/].f_4), "BSS_BSTR_38", 16);
	Global_48202[19 /*36*/].f_8 = 0;
	Global_48202[19 /*36*/].f_35 = 6;
	StringCopy(&(Global_48202[20 /*36*/]), "BSS_BSTR_39", 16);
	StringCopy(&(Global_48202[20 /*36*/].f_4), "BSS_BSTR_40", 16);
	Global_48202[20 /*36*/].f_8 = 1;
	Global_48202[20 /*36*/].f_35 = 13;
	StringCopy(&(Global_48202[21 /*36*/]), "BSS_BSTR_41", 16);
	StringCopy(&(Global_48202[21 /*36*/].f_4), "BSS_BSTR_42", 16);
	Global_48202[21 /*36*/].f_8 = 1;
	Global_48202[21 /*36*/].f_35 = 14;
	StringCopy(&(Global_48202[22 /*36*/]), "BSS_BSTR_43", 16);
	StringCopy(&(Global_48202[22 /*36*/].f_4), "BSS_BSTR_44", 16);
	Global_48202[22 /*36*/].f_8 = 1;
	Global_48202[22 /*36*/].f_35 = 15;
	StringCopy(&(Global_48202[23 /*36*/]), "BSS_BSTR_45", 16);
	StringCopy(&(Global_48202[23 /*36*/].f_4), "BSS_BSTR_46", 16);
	Global_48202[23 /*36*/].f_8 = 1;
	Global_48202[23 /*36*/].f_35 = 16;
	StringCopy(&(Global_48202[24 /*36*/]), "BSS_BSTR_47", 16);
	StringCopy(&(Global_48202[24 /*36*/].f_4), "BSS_BSTR_48", 16);
	Global_48202[24 /*36*/].f_8 = 0;
	Global_48202[24 /*36*/].f_35 = 7;
	StringCopy(&(Global_48202[25 /*36*/]), "BSS_BSTR_49", 16);
	StringCopy(&(Global_48202[25 /*36*/].f_4), "BSS_BSTR_50", 16);
	Global_48202[25 /*36*/].f_8 = 1;
	Global_48202[25 /*36*/].f_35 = 17;
	StringCopy(&(Global_48202[26 /*36*/]), "BSS_BSTR_51", 16);
	StringCopy(&(Global_48202[26 /*36*/].f_4), "BSS_BSTR_52", 16);
	Global_48202[26 /*36*/].f_8 = 0;
	Global_48202[26 /*36*/].f_35 = 8;
	StringCopy(&(Global_48202[27 /*36*/]), "BSS_BSTR_53", 16);
	StringCopy(&(Global_48202[27 /*36*/].f_4), "BSS_BSTR_54", 16);
	Global_48202[27 /*36*/].f_8 = 1;
	Global_48202[27 /*36*/].f_35 = 18;
	StringCopy(&(Global_48202[28 /*36*/]), "BSS_BSTR_55", 16);
	StringCopy(&(Global_48202[28 /*36*/].f_4), "BSS_BSTR_56", 16);
	Global_48202[28 /*36*/].f_8 = 1;
	Global_48202[28 /*36*/].f_35 = 19;
	StringCopy(&(Global_48202[29 /*36*/]), "BSS_BSTR_57", 16);
	StringCopy(&(Global_48202[29 /*36*/].f_4), "BSS_BSTR_58", 16);
	Global_48202[29 /*36*/].f_8 = 0;
	Global_48202[29 /*36*/].f_35 = 9;
	StringCopy(&(Global_48202[30 /*36*/]), "BSS_BSTR_59", 16);
	StringCopy(&(Global_48202[30 /*36*/].f_4), "BSS_BSTR_60", 16);
	Global_48202[30 /*36*/].f_8 = 1;
	Global_48202[30 /*36*/].f_35 = 20;
	StringCopy(&(Global_48202[31 /*36*/]), "BSS_BSTR_61", 16);
	StringCopy(&(Global_48202[31 /*36*/].f_4), "BSS_BSTR_62", 16);
	Global_48202[31 /*36*/].f_8 = 1;
	Global_48202[31 /*36*/].f_35 = 21;
	StringCopy(&(Global_48202[32 /*36*/]), "BSS_BSTR_63", 16);
	StringCopy(&(Global_48202[32 /*36*/].f_4), "BSS_BSTR_64", 16);
	Global_48202[32 /*36*/].f_8 = 1;
	Global_48202[32 /*36*/].f_35 = 22;
	StringCopy(&(Global_48202[33 /*36*/]), "BSS_BSTR_65", 16);
	StringCopy(&(Global_48202[33 /*36*/].f_4), "BSS_BSTR_66", 16);
	Global_48202[33 /*36*/].f_8 = 1;
	Global_48202[33 /*36*/].f_35 = 23;
	StringCopy(&(Global_48202[34 /*36*/]), "BSS_BSTR_67", 16);
	StringCopy(&(Global_48202[34 /*36*/].f_4), "BSS_BSTR_68", 16);
	Global_48202[34 /*36*/].f_8 = 1;
	Global_48202[34 /*36*/].f_35 = 24;
	StringCopy(&(Global_48202[35 /*36*/]), "BSS_BSTR_69", 16);
	StringCopy(&(Global_48202[35 /*36*/].f_4), "BSS_BSTR_70", 16);
	Global_48202[35 /*36*/].f_8 = 1;
	Global_48202[35 /*36*/].f_35 = 25;
	StringCopy(&(Global_48202[36 /*36*/]), "BSS_BSTR_71", 16);
	StringCopy(&(Global_48202[36 /*36*/].f_4), "BSS_BSTR_72", 16);
	Global_48202[36 /*36*/].f_8 = 1;
	Global_48202[36 /*36*/].f_35 = 26;
	StringCopy(&(Global_48202[37 /*36*/]), "BSS_BSTR_73", 16);
	StringCopy(&(Global_48202[37 /*36*/].f_4), "BSS_BSTR_74", 16);
	Global_48202[37 /*36*/].f_8 = 1;
	Global_48202[37 /*36*/].f_35 = 27;
	StringCopy(&(Global_48202[38 /*36*/]), "BSS_BSTR_75", 16);
	StringCopy(&(Global_48202[38 /*36*/].f_4), "BSS_BSTR_76", 16);
	Global_48202[38 /*36*/].f_8 = 1;
	Global_48202[38 /*36*/].f_35 = 28;
	StringCopy(&(Global_48202[39 /*36*/]), "BSS_BSTR_77", 16);
	StringCopy(&(Global_48202[39 /*36*/].f_4), "BSS_BSTR_78", 16);
	Global_48202[39 /*36*/].f_8 = 1;
	Global_48202[39 /*36*/].f_35 = 29;
	StringCopy(&(Global_48202[40 /*36*/]), "BSS_BSTR_79", 16);
	StringCopy(&(Global_48202[40 /*36*/].f_4), "BSS_BSTR_80", 16);
	Global_48202[40 /*36*/].f_8 = 0;
	Global_48202[40 /*36*/].f_35 = 10;
	StringCopy(&(Global_48202[41 /*36*/]), "BSS_BSTR_81", 16);
	StringCopy(&(Global_48202[41 /*36*/].f_4), "BSS_BSTR_82", 16);
	Global_48202[41 /*36*/].f_8 = 1;
	Global_48202[41 /*36*/].f_35 = 30;
	StringCopy(&(Global_48202[42 /*36*/]), "BSS_BSTR_83", 16);
	StringCopy(&(Global_48202[42 /*36*/].f_4), "BSS_BSTR_84", 16);
	Global_48202[42 /*36*/].f_8 = 1;
	Global_48202[42 /*36*/].f_35 = 31;
	StringCopy(&(Global_48202[43 /*36*/]), "BSS_BSTR_85", 16);
	StringCopy(&(Global_48202[43 /*36*/].f_4), "BSS_BSTR_86", 16);
	Global_48202[43 /*36*/].f_8 = 1;
	Global_48202[43 /*36*/].f_35 = 32;
	StringCopy(&(Global_48202[44 /*36*/]), "BSS_BSTR_87", 16);
	StringCopy(&(Global_48202[44 /*36*/].f_4), "BSS_BSTR_88", 16);
	Global_48202[44 /*36*/].f_8 = 1;
	Global_48202[44 /*36*/].f_35 = 33;
	StringCopy(&(Global_48202[45 /*36*/]), "BSS_BSTR_89", 16);
	StringCopy(&(Global_48202[45 /*36*/].f_4), "BSS_BSTR_90", 16);
	Global_48202[45 /*36*/].f_8 = 1;
	Global_48202[45 /*36*/].f_35 = 34;
	StringCopy(&(Global_48202[46 /*36*/]), "BSS_BSTR_91", 16);
	StringCopy(&(Global_48202[46 /*36*/].f_4), "BSS_BSTR_92", 16);
	Global_48202[46 /*36*/].f_8 = 1;
	Global_48202[46 /*36*/].f_35 = 35;
	StringCopy(&(Global_48202[47 /*36*/]), "BSS_BSTR_93", 16);
	StringCopy(&(Global_48202[47 /*36*/].f_4), "BSS_BSTR_94", 16);
	Global_48202[47 /*36*/].f_8 = 0;
	Global_48202[47 /*36*/].f_35 = 11;
	StringCopy(&(Global_48202[48 /*36*/]), "BSS_BSTR_95", 16);
	StringCopy(&(Global_48202[48 /*36*/].f_4), "BSS_BSTR_96", 16);
	Global_48202[48 /*36*/].f_8 = 0;
	Global_48202[48 /*36*/].f_35 = 12;
	StringCopy(&(Global_48202[49 /*36*/]), "BSS_BSTR_97", 16);
	StringCopy(&(Global_48202[49 /*36*/].f_4), "BSS_BSTR_98", 16);
	Global_48202[49 /*36*/].f_8 = 0;
	Global_48202[49 /*36*/].f_35 = 13;
	StringCopy(&(Global_48202[50 /*36*/]), "BSS_BSTR_99", 16);
	StringCopy(&(Global_48202[50 /*36*/].f_4), "BSS_BSTR_100", 16);
	Global_48202[50 /*36*/].f_8 = 0;
	Global_48202[50 /*36*/].f_35 = 14;
	StringCopy(&(Global_48202[51 /*36*/]), "BSS_BSTR_101", 16);
	StringCopy(&(Global_48202[51 /*36*/].f_4), "BSS_BSTR_102", 16);
	Global_48202[51 /*36*/].f_8 = 0;
	Global_48202[51 /*36*/].f_35 = 15;
	StringCopy(&(Global_48202[52 /*36*/]), "BSS_BSTR_103", 16);
	StringCopy(&(Global_48202[52 /*36*/].f_4), "BSS_BSTR_104", 16);
	Global_48202[52 /*36*/].f_8 = 0;
	Global_48202[52 /*36*/].f_35 = 16;
	StringCopy(&(Global_48202[53 /*36*/]), "BSS_BSTR_105", 16);
	StringCopy(&(Global_48202[53 /*36*/].f_4), "BSS_BSTR_106", 16);
	Global_48202[53 /*36*/].f_8 = 0;
	Global_48202[53 /*36*/].f_35 = 17;
	StringCopy(&(Global_48202[54 /*36*/]), "BSS_BSTR_107", 16);
	StringCopy(&(Global_48202[54 /*36*/].f_4), "BSS_BSTR_108", 16);
	Global_48202[54 /*36*/].f_8 = 0;
	Global_48202[54 /*36*/].f_35 = 18;
	StringCopy(&(Global_48202[55 /*36*/]), "BSS_BSTR_109", 16);
	StringCopy(&(Global_48202[55 /*36*/].f_4), "BSS_BSTR_110", 16);
	Global_48202[55 /*36*/].f_8 = 0;
	Global_48202[55 /*36*/].f_35 = 19;
	StringCopy(&(Global_48202[56 /*36*/]), "BSS_BSTR_111", 16);
	StringCopy(&(Global_48202[56 /*36*/].f_4), "BSS_BSTR_112", 16);
	Global_48202[56 /*36*/].f_8 = 0;
	Global_48202[56 /*36*/].f_35 = 20;
	StringCopy(&(Global_48202[57 /*36*/]), "BSS_BSTR_113", 16);
	StringCopy(&(Global_48202[57 /*36*/].f_4), "BSS_BSTR_114", 16);
	Global_48202[57 /*36*/].f_8 = 0;
	Global_48202[57 /*36*/].f_35 = 21;
	StringCopy(&(Global_48202[58 /*36*/]), "BSS_BSTR_115", 16);
	StringCopy(&(Global_48202[58 /*36*/].f_4), "BSS_BSTR_116", 16);
	Global_48202[58 /*36*/].f_8 = 0;
	Global_48202[58 /*36*/].f_35 = 22;
	StringCopy(&(Global_48202[59 /*36*/]), "BSS_BSTR_117", 16);
	StringCopy(&(Global_48202[59 /*36*/].f_4), "BSS_BSTR_118", 16);
	Global_48202[59 /*36*/].f_8 = 0;
	Global_48202[59 /*36*/].f_35 = 23;
	StringCopy(&(Global_48202[60 /*36*/]), "BSS_BSTR_119", 16);
	StringCopy(&(Global_48202[60 /*36*/].f_4), "BSS_BSTR_120", 16);
	Global_48202[60 /*36*/].f_8 = 0;
	Global_48202[60 /*36*/].f_35 = 24;
	StringCopy(&(Global_48202[61 /*36*/]), "BSS_BSTR_121", 16);
	StringCopy(&(Global_48202[61 /*36*/].f_4), "BSS_BSTR_122", 16);
	Global_48202[61 /*36*/].f_8 = 0;
	Global_48202[61 /*36*/].f_35 = 25;
	StringCopy(&(Global_48202[62 /*36*/]), "BSS_BSTR_123", 16);
	StringCopy(&(Global_48202[62 /*36*/].f_4), "BSS_BSTR_124", 16);
	Global_48202[62 /*36*/].f_8 = 0;
	Global_48202[62 /*36*/].f_35 = 26;
	StringCopy(&(Global_48202[63 /*36*/]), "BSS_BSTR_125", 16);
	StringCopy(&(Global_48202[63 /*36*/].f_4), "BSS_BSTR_126", 16);
	Global_48202[63 /*36*/].f_8 = 0;
	Global_48202[63 /*36*/].f_35 = 27;
	StringCopy(&(Global_48202[64 /*36*/]), "BSS_BSTR_127", 16);
	StringCopy(&(Global_48202[64 /*36*/].f_4), "BSS_BSTR_128", 16);
	Global_48202[64 /*36*/].f_8 = 0;
	Global_48202[64 /*36*/].f_35 = 28;
	StringCopy(&(Global_48202[65 /*36*/]), "BSS_BSTR_129", 16);
	StringCopy(&(Global_48202[65 /*36*/].f_4), "BSS_BSTR_130", 16);
	Global_48202[65 /*36*/].f_8 = 0;
	Global_48202[65 /*36*/].f_35 = 29;
	StringCopy(&(Global_48202[66 /*36*/]), "BSS_BSTR_131", 16);
	StringCopy(&(Global_48202[66 /*36*/].f_4), "BSS_BSTR_132", 16);
	Global_48202[66 /*36*/].f_8 = 0;
	Global_48202[66 /*36*/].f_35 = 30;
	StringCopy(&(Global_48202[67 /*36*/]), "BSS_BSTR_133", 16);
	StringCopy(&(Global_48202[67 /*36*/].f_4), "BSS_BSTR_134", 16);
	Global_48202[67 /*36*/].f_8 = 0;
	Global_48202[67 /*36*/].f_35 = 31;
	StringCopy(&(Global_48202[68 /*36*/]), "BSS_BSTR_135", 16);
	StringCopy(&(Global_48202[68 /*36*/].f_4), "BSS_BSTR_136", 16);
	Global_48202[68 /*36*/].f_8 = 0;
	Global_48202[68 /*36*/].f_35 = 32;
	StringCopy(&(Global_48202[69 /*36*/]), "BSS_BSTR_137", 16);
	StringCopy(&(Global_48202[69 /*36*/].f_4), "BSS_BSTR_138", 16);
	Global_48202[69 /*36*/].f_8 = 0;
	Global_48202[69 /*36*/].f_35 = 33;
	StringCopy(&(Global_48202[70 /*36*/]), "BSS_BSTR_139", 16);
	StringCopy(&(Global_48202[70 /*36*/].f_4), "BSS_BSTR_140", 16);
	Global_48202[70 /*36*/].f_8 = 0;
	Global_48202[70 /*36*/].f_35 = 34;
	StringCopy(&(Global_48202[71 /*36*/]), "BSS_BSTR_141", 16);
	StringCopy(&(Global_48202[71 /*36*/].f_4), "BSS_BSTR_142", 16);
	Global_48202[71 /*36*/].f_8 = 1;
	Global_48202[71 /*36*/].f_35 = 36;
	StringCopy(&(Global_48202[72 /*36*/]), "BSS_BSTR_143", 16);
	StringCopy(&(Global_48202[72 /*36*/].f_4), "BSS_BSTR_144", 16);
	Global_48202[72 /*36*/].f_8 = 0;
	Global_48202[72 /*36*/].f_35 = 35;
	StringCopy(&(Global_48202[73 /*36*/]), "BSS_BSTR_145", 16);
	StringCopy(&(Global_48202[73 /*36*/].f_4), "BSS_BSTR_146", 16);
	Global_48202[73 /*36*/].f_8 = 0;
	Global_48202[73 /*36*/].f_35 = 36;
	StringCopy(&(Global_48202[74 /*36*/]), "BSS_BSTR_147", 16);
	StringCopy(&(Global_48202[74 /*36*/].f_4), "BSS_BSTR_148", 16);
	Global_48202[74 /*36*/].f_8 = 0;
	Global_48202[74 /*36*/].f_35 = 37;
	StringCopy(&(Global_48202[75 /*36*/]), "BSS_BSTR_149", 16);
	StringCopy(&(Global_48202[75 /*36*/].f_4), "BSS_BSTR_150", 16);
	Global_48202[75 /*36*/].f_8 = 0;
	Global_48202[75 /*36*/].f_35 = 38;
	StringCopy(&(Global_48202[76 /*36*/]), "BSS_BSTR_151", 16);
	StringCopy(&(Global_48202[76 /*36*/].f_4), "BSS_BSTR_152", 16);
	Global_48202[76 /*36*/].f_8 = 1;
	Global_48202[76 /*36*/].f_35 = 37;
	StringCopy(&(Global_48202[77 /*36*/]), "BSS_BSTR_153", 16);
	StringCopy(&(Global_48202[77 /*36*/].f_4), "BSS_BSTR_154", 16);
	Global_48202[77 /*36*/].f_8 = 1;
	Global_48202[77 /*36*/].f_35 = 38;
	StringCopy(&(Global_48202[78 /*36*/]), "BSS_BSTR_155", 16);
	StringCopy(&(Global_48202[78 /*36*/].f_4), "BSS_BSTR_156", 16);
	Global_48202[78 /*36*/].f_8 = 0;
	Global_48202[78 /*36*/].f_35 = 39;
	StringCopy(&(Global_48202[79 /*36*/]), "BSS_BSTR_157", 16);
	StringCopy(&(Global_48202[79 /*36*/].f_4), "BSS_BSTR_158", 16);
	Global_48202[79 /*36*/].f_8 = 0;
	Global_48202[79 /*36*/].f_35 = 40;
	Global_51357[0 /*7*/].f_2 = 1f;
	Global_51357[0 /*7*/].f_1 = 1f;
	Global_51357[0 /*7*/].f_3 = 1000f;
	Global_51357[0 /*7*/].f_4 = 3.5f;
	Global_51357[0 /*7*/].f_5 = 3.5f;
	Global_51357[0 /*7*/].f_6 = 0.1f;
	Global_51357[1 /*7*/].f_2 = 1f;
	Global_51357[1 /*7*/].f_1 = 1f;
	Global_51357[1 /*7*/].f_3 = 1000f;
	Global_51357[1 /*7*/].f_4 = 3.5f;
	Global_51357[1 /*7*/].f_5 = 3.5f;
	Global_51357[1 /*7*/].f_6 = 0.1f;
	Global_51357[2 /*7*/].f_2 = 1f;
	Global_51357[2 /*7*/].f_1 = 1f;
	Global_51357[2 /*7*/].f_3 = 1000f;
	Global_51357[2 /*7*/].f_4 = 3.5f;
	Global_51357[2 /*7*/].f_5 = 3.5f;
	Global_51357[2 /*7*/].f_6 = 0.1f;
	Global_51357[3 /*7*/].f_2 = 1f;
	Global_51357[3 /*7*/].f_1 = 1f;
	Global_51357[3 /*7*/].f_3 = 1000f;
	Global_51357[3 /*7*/].f_4 = 3.5f;
	Global_51357[3 /*7*/].f_5 = 3.5f;
	Global_51357[3 /*7*/].f_6 = 0.1f;
	Global_51357[4 /*7*/].f_2 = 1f;
	Global_51357[4 /*7*/].f_1 = 1f;
	Global_51357[4 /*7*/].f_3 = 1000f;
	Global_51357[4 /*7*/].f_4 = 3.5f;
	Global_51357[4 /*7*/].f_5 = 3.5f;
	Global_51357[4 /*7*/].f_6 = 0.1f;
	Global_51357[5 /*7*/].f_2 = 1f;
	Global_51357[5 /*7*/].f_1 = 1f;
	Global_51357[5 /*7*/].f_3 = 1000f;
	Global_51357[5 /*7*/].f_4 = 3.5f;
	Global_51357[5 /*7*/].f_5 = 3.5f;
	Global_51357[5 /*7*/].f_6 = 0.1f;
	Global_51357[6 /*7*/].f_2 = 1f;
	Global_51357[6 /*7*/].f_1 = 1f;
	Global_51357[6 /*7*/].f_3 = 1000f;
	Global_51357[6 /*7*/].f_4 = 3.5f;
	Global_51357[6 /*7*/].f_5 = 3.5f;
	Global_51357[6 /*7*/].f_6 = 0.1f;
	Global_51357[7 /*7*/].f_2 = 1f;
	Global_51357[7 /*7*/].f_1 = 1f;
	Global_51357[7 /*7*/].f_3 = 1000f;
	Global_51357[7 /*7*/].f_4 = 3.5f;
	Global_51357[7 /*7*/].f_5 = 3.5f;
	Global_51357[7 /*7*/].f_6 = 0.1f;
	Global_51357[8 /*7*/].f_2 = 1f;
	Global_51357[8 /*7*/].f_1 = 1f;
	Global_51357[8 /*7*/].f_3 = 1000f;
	Global_51357[8 /*7*/].f_4 = 3.5f;
	Global_51357[8 /*7*/].f_5 = 3.5f;
	Global_51357[8 /*7*/].f_6 = 0.1f;
	Global_51357[9 /*7*/].f_2 = 1f;
	Global_51357[9 /*7*/].f_1 = 1f;
	Global_51357[9 /*7*/].f_3 = 1000f;
	Global_51357[9 /*7*/].f_4 = 3.5f;
	Global_51357[9 /*7*/].f_5 = 3.5f;
	Global_51357[9 /*7*/].f_6 = 0.1f;
	Global_51357[10 /*7*/].f_2 = 1f;
	Global_51357[10 /*7*/].f_1 = 1f;
	Global_51357[10 /*7*/].f_3 = 1000f;
	Global_51357[10 /*7*/].f_4 = 3.5f;
	Global_51357[10 /*7*/].f_5 = 3.5f;
	Global_51357[10 /*7*/].f_6 = 0.1f;
	Global_51357[11 /*7*/].f_2 = 1f;
	Global_51357[11 /*7*/].f_1 = 1f;
	Global_51357[11 /*7*/].f_3 = 1000f;
	Global_51357[11 /*7*/].f_4 = 3.5f;
	Global_51357[11 /*7*/].f_5 = 3.5f;
	Global_51357[11 /*7*/].f_6 = 0.1f;
	Global_51357[12 /*7*/].f_2 = 1f;
	Global_51357[12 /*7*/].f_1 = 1f;
	Global_51357[12 /*7*/].f_3 = 1000f;
	Global_51357[12 /*7*/].f_4 = 3.5f;
	Global_51357[12 /*7*/].f_5 = 3.5f;
	Global_51357[12 /*7*/].f_6 = 0.1f;
	Global_51357[13 /*7*/].f_2 = 1f;
	Global_51357[13 /*7*/].f_1 = 1f;
	Global_51357[13 /*7*/].f_3 = 1000f;
	Global_51357[13 /*7*/].f_4 = 3.5f;
	Global_51357[13 /*7*/].f_5 = 3.5f;
	Global_51357[13 /*7*/].f_6 = 0.1f;
	Global_51357[14 /*7*/].f_2 = 1f;
	Global_51357[14 /*7*/].f_1 = 1f;
	Global_51357[14 /*7*/].f_3 = 1000f;
	Global_51357[14 /*7*/].f_4 = 3.5f;
	Global_51357[14 /*7*/].f_5 = 3.5f;
	Global_51357[14 /*7*/].f_6 = 0.1f;
	Global_51357[15 /*7*/].f_2 = 1f;
	Global_51357[15 /*7*/].f_1 = 1f;
	Global_51357[15 /*7*/].f_3 = 1000f;
	Global_51357[15 /*7*/].f_4 = 3.5f;
	Global_51357[15 /*7*/].f_5 = 3.5f;
	Global_51357[15 /*7*/].f_6 = 0.1f;
	Global_51357[16 /*7*/].f_2 = 1f;
	Global_51357[16 /*7*/].f_1 = 1f;
	Global_51357[16 /*7*/].f_3 = 1000f;
	Global_51357[16 /*7*/].f_4 = 3.5f;
	Global_51357[16 /*7*/].f_5 = 3.5f;
	Global_51357[16 /*7*/].f_6 = 0.1f;
	Global_51357[17 /*7*/].f_2 = 1f;
	Global_51357[17 /*7*/].f_1 = 1f;
	Global_51357[17 /*7*/].f_3 = 1000f;
	Global_51357[17 /*7*/].f_4 = 3.5f;
	Global_51357[17 /*7*/].f_5 = 3.5f;
	Global_51357[17 /*7*/].f_6 = 0.1f;
	Global_51357[18 /*7*/].f_2 = 1f;
	Global_51357[18 /*7*/].f_1 = 1f;
	Global_51357[18 /*7*/].f_3 = 1000f;
	Global_51357[18 /*7*/].f_4 = 3.5f;
	Global_51357[18 /*7*/].f_5 = 3.5f;
	Global_51357[18 /*7*/].f_6 = 0.1f;
	Global_51357[19 /*7*/].f_2 = 1f;
	Global_51357[19 /*7*/].f_1 = 1f;
	Global_51357[19 /*7*/].f_3 = 1000f;
	Global_51357[19 /*7*/].f_4 = 3.5f;
	Global_51357[19 /*7*/].f_5 = 3.5f;
	Global_51357[19 /*7*/].f_6 = 0.1f;
	Global_51357[20 /*7*/].f_2 = 1f;
	Global_51357[20 /*7*/].f_1 = 1f;
	Global_51357[20 /*7*/].f_3 = 1000f;
	Global_51357[20 /*7*/].f_4 = 3.5f;
	Global_51357[20 /*7*/].f_5 = 3.5f;
	Global_51357[20 /*7*/].f_6 = 0.1f;
	Global_51357[21 /*7*/].f_2 = 1f;
	Global_51357[21 /*7*/].f_1 = 1f;
	Global_51357[21 /*7*/].f_3 = 1000f;
	Global_51357[21 /*7*/].f_4 = 3.5f;
	Global_51357[21 /*7*/].f_5 = 3.5f;
	Global_51357[21 /*7*/].f_6 = 0.1f;
	Global_51357[22 /*7*/].f_2 = 1f;
	Global_51357[22 /*7*/].f_1 = 1f;
	Global_51357[22 /*7*/].f_3 = 1000f;
	Global_51357[22 /*7*/].f_4 = 3.5f;
	Global_51357[22 /*7*/].f_5 = 3.5f;
	Global_51357[22 /*7*/].f_6 = 0.1f;
	Global_51357[23 /*7*/].f_2 = 1f;
	Global_51357[23 /*7*/].f_1 = 1f;
	Global_51357[23 /*7*/].f_3 = 1000f;
	Global_51357[23 /*7*/].f_4 = 3.5f;
	Global_51357[23 /*7*/].f_5 = 3.5f;
	Global_51357[23 /*7*/].f_6 = 0.1f;
	Global_51357[24 /*7*/].f_2 = 1f;
	Global_51357[24 /*7*/].f_1 = 1f;
	Global_51357[24 /*7*/].f_3 = 1000f;
	Global_51357[24 /*7*/].f_4 = 3.5f;
	Global_51357[24 /*7*/].f_5 = 3.5f;
	Global_51357[24 /*7*/].f_6 = 0.1f;
	Global_51357[25 /*7*/].f_2 = 1f;
	Global_51357[25 /*7*/].f_1 = 1f;
	Global_51357[25 /*7*/].f_3 = 1000f;
	Global_51357[25 /*7*/].f_4 = 3.5f;
	Global_51357[25 /*7*/].f_5 = 3.5f;
	Global_51357[25 /*7*/].f_6 = 0.1f;
	Global_51357[26 /*7*/].f_2 = 1f;
	Global_51357[26 /*7*/].f_1 = 1f;
	Global_51357[26 /*7*/].f_3 = 1000f;
	Global_51357[26 /*7*/].f_4 = 3.5f;
	Global_51357[26 /*7*/].f_5 = 3.5f;
	Global_51357[26 /*7*/].f_6 = 0.1f;
	Global_51357[27 /*7*/].f_2 = 1f;
	Global_51357[27 /*7*/].f_1 = 1f;
	Global_51357[27 /*7*/].f_3 = 1000f;
	Global_51357[27 /*7*/].f_4 = 3.5f;
	Global_51357[27 /*7*/].f_5 = 3.5f;
	Global_51357[27 /*7*/].f_6 = 0.1f;
	Global_51357[28 /*7*/].f_2 = 1f;
	Global_51357[28 /*7*/].f_1 = 1f;
	Global_51357[28 /*7*/].f_3 = 1000f;
	Global_51357[28 /*7*/].f_4 = 3.5f;
	Global_51357[28 /*7*/].f_5 = 3.5f;
	Global_51357[28 /*7*/].f_6 = 0.1f;
	Global_51357[29 /*7*/].f_2 = 1f;
	Global_51357[29 /*7*/].f_1 = 1f;
	Global_51357[29 /*7*/].f_3 = 1000f;
	Global_51357[29 /*7*/].f_4 = 3.5f;
	Global_51357[29 /*7*/].f_5 = 3.5f;
	Global_51357[29 /*7*/].f_6 = 0.1f;
	Global_51357[30 /*7*/].f_2 = 1f;
	Global_51357[30 /*7*/].f_1 = 1f;
	Global_51357[30 /*7*/].f_3 = 1000f;
	Global_51357[30 /*7*/].f_4 = 3.5f;
	Global_51357[30 /*7*/].f_5 = 3.5f;
	Global_51357[30 /*7*/].f_6 = 0.1f;
	Global_51357[31 /*7*/].f_2 = 1f;
	Global_51357[31 /*7*/].f_1 = 1f;
	Global_51357[31 /*7*/].f_3 = 1000f;
	Global_51357[31 /*7*/].f_4 = 3.5f;
	Global_51357[31 /*7*/].f_5 = 3.5f;
	Global_51357[31 /*7*/].f_6 = 0.1f;
	Global_51357[32 /*7*/].f_2 = 1f;
	Global_51357[32 /*7*/].f_1 = 1f;
	Global_51357[32 /*7*/].f_3 = 1000f;
	Global_51357[32 /*7*/].f_4 = 3.5f;
	Global_51357[32 /*7*/].f_5 = 3.5f;
	Global_51357[32 /*7*/].f_6 = 0.1f;
	Global_51357[33 /*7*/].f_2 = 1f;
	Global_51357[33 /*7*/].f_1 = 1f;
	Global_51357[33 /*7*/].f_3 = 1000f;
	Global_51357[33 /*7*/].f_4 = 3.5f;
	Global_51357[33 /*7*/].f_5 = 3.5f;
	Global_51357[33 /*7*/].f_6 = 0.1f;
	Global_51357[34 /*7*/].f_2 = 1f;
	Global_51357[34 /*7*/].f_1 = 1f;
	Global_51357[34 /*7*/].f_3 = 1000f;
	Global_51357[34 /*7*/].f_4 = 3.5f;
	Global_51357[34 /*7*/].f_5 = 3.5f;
	Global_51357[34 /*7*/].f_6 = 0.1f;
	Global_51357[35 /*7*/].f_2 = 1f;
	Global_51357[35 /*7*/].f_1 = 1f;
	Global_51357[35 /*7*/].f_3 = 1000f;
	Global_51357[35 /*7*/].f_4 = 3.5f;
	Global_51357[35 /*7*/].f_5 = 3.5f;
	Global_51357[35 /*7*/].f_6 = 0.1f;
	Global_51357[36 /*7*/].f_2 = 1f;
	Global_51357[36 /*7*/].f_1 = 1f;
	Global_51357[36 /*7*/].f_3 = 1000f;
	Global_51357[36 /*7*/].f_4 = 3.5f;
	Global_51357[36 /*7*/].f_5 = 3.5f;
	Global_51357[36 /*7*/].f_6 = 0.1f;
	Global_51357[37 /*7*/].f_2 = 1f;
	Global_51357[37 /*7*/].f_1 = 1f;
	Global_51357[37 /*7*/].f_3 = 1000f;
	Global_51357[37 /*7*/].f_4 = 3.5f;
	Global_51357[37 /*7*/].f_5 = 3.5f;
	Global_51357[37 /*7*/].f_6 = 0.1f;
	Global_51357[38 /*7*/].f_2 = 1f;
	Global_51357[38 /*7*/].f_1 = 1f;
	Global_51357[38 /*7*/].f_3 = 1000f;
	Global_51357[38 /*7*/].f_4 = 3.5f;
	Global_51357[38 /*7*/].f_5 = 3.5f;
	Global_51357[38 /*7*/].f_6 = 0.1f;
	Global_51357[39 /*7*/].f_2 = 1f;
	Global_51357[39 /*7*/].f_1 = 1f;
	Global_51357[39 /*7*/].f_3 = 1000f;
	Global_51357[39 /*7*/].f_4 = 3.5f;
	Global_51357[39 /*7*/].f_5 = 3.5f;
	Global_51357[39 /*7*/].f_6 = 0.1f;
	Global_51357[40 /*7*/].f_2 = 1f;
	Global_51357[40 /*7*/].f_1 = 1f;
	Global_51357[40 /*7*/].f_3 = 1000f;
	Global_51357[40 /*7*/].f_4 = 3.5f;
	Global_51357[40 /*7*/].f_5 = 3.5f;
	Global_51357[40 /*7*/].f_6 = 0.1f;
	Global_51645[0 /*7*/].f_1 = joaat("sm_brvecdesbfa");
	Global_51645[0 /*7*/] = 1;
	Global_51645[1 /*7*/].f_1 = joaat("sm_brvecdesbru");
	Global_51645[1 /*7*/] = 1;
	Global_51645[3 /*7*/].f_1 = joaat("sm_brvecdeslsc");
	Global_51645[3 /*7*/] = 1;
	Global_51645[4 /*7*/].f_1 = joaat("sm_brvecdeslst");
	Global_51645[4 /*7*/] = 1;
	Global_51645[5 /*7*/].f_1 = joaat("sm_brvecdesltd");
	Global_51645[5 /*7*/] = 1;
	Global_51645[6 /*7*/].f_1 = joaat("sm_brvecdesmai");
	Global_51645[6 /*7*/] = 1;
	Global_51645[7 /*7*/].f_1 = joaat("sm_brvecdesron");
	Global_51645[7 /*7*/] = 1;
	Global_51645[8 /*7*/].f_1 = joaat("sm_brvecdessht");
	Global_51645[8 /*7*/] = 1;
	Global_51645[9 /*7*/].f_1 = joaat("sm_brvecdesuma");
	Global_51645[9 /*7*/] = 1;
	Global_51645[10 /*7*/].f_1 = joaat("sm_brvecdesvap");
	Global_51645[10 /*7*/] = 1;
	Global_51645[11 /*7*/].f_1 = joaat("sm_brvecdeshvy");
	Global_51645[11 /*7*/] = 1;
	Global_51645[12 /*7*/].f_1 = joaat("sm_vecbuybfa");
	Global_51645[12 /*7*/] = 1;
	Global_51645[13 /*7*/].f_1 = joaat("sm_vecbuybru");
	Global_51645[13 /*7*/] = 1;
	Global_51645[15 /*7*/].f_1 = joaat("sm_vecbuymai");
	Global_51645[15 /*7*/] = 1;
	Global_51645[16 /*7*/].f_1 = joaat("sm_vecbuysht");
	Global_51645[16 /*7*/] = 1;
	Global_51645[17 /*7*/].f_1 = joaat("sm_vecbuyuma");
	Global_51645[17 /*7*/] = 1;
	Global_51645[18 /*7*/].f_1 = joaat("sm_vecbuyvap");
	Global_51645[18 /*7*/] = 1;
	Global_51645[19 /*7*/].f_1 = joaat("sm_vecbuyhvy");
	Global_51645[19 /*7*/] = 1;
	Global_51645[20 /*7*/].f_1 = joaat("sm_disdrivbfa");
	Global_51645[20 /*7*/] = 1;
	Global_51645[21 /*7*/].f_1 = joaat("sm_disdrivbru");
	Global_51645[21 /*7*/] = 1;
	Global_51645[23 /*7*/].f_1 = joaat("sm_disdrivlst");
	Global_51645[23 /*7*/] = 1;
	Global_51645[24 /*7*/].f_1 = joaat("sm_disdrivmai");
	Global_51645[24 /*7*/] = 1;
	Global_51645[25 /*7*/].f_1 = joaat("sm_disdrivsht");
	Global_51645[25 /*7*/] = 1;
	Global_51645[26 /*7*/].f_1 = joaat("sm_disdrivuma");
	Global_51645[26 /*7*/] = 1;
	Global_51645[27 /*7*/].f_1 = joaat("sm_disdrivvap");
	Global_51645[27 /*7*/] = 1;
	Global_51645[28 /*7*/].f_1 = joaat("sm_disdrivhvy");
	Global_51645[28 /*7*/] = 1;
	Global_51645[30 /*7*/].f_1 = joaat("sm_vecmodlsc");
	Global_51645[30 /*7*/] = 1;
	Global_51645[31 /*7*/].f_1 = joaat("sm_vecstolbfa");
	Global_51645[31 /*7*/] = 1;
	Global_51645[32 /*7*/].f_1 = joaat("sm_vecstolbru");
	Global_51645[32 /*7*/] = 1;
	Global_51645[34 /*7*/].f_1 = joaat("sm_vecstollst");
	Global_51645[34 /*7*/] = 1;
	Global_51645[35 /*7*/].f_1 = joaat("sm_vecstolmai");
	Global_51645[35 /*7*/] = 1;
	Global_51645[36 /*7*/].f_1 = joaat("sm_vecstolsht");
	Global_51645[36 /*7*/] = 1;
	Global_51645[37 /*7*/].f_1 = joaat("sm_vecstoluma");
	Global_51645[37 /*7*/] = 1;
	Global_51645[38 /*7*/].f_1 = joaat("sm_vecstolvap");
	Global_51645[38 /*7*/] = 1;
	Global_51645[39 /*7*/].f_1 = joaat("sm_vecstolhvy");
	Global_51645[39 /*7*/] = 1;
	Global_51645[40 /*7*/].f_1 = joaat("sm_vecdmgbfa");
	Global_51645[40 /*7*/] = 1;
	Global_51645[41 /*7*/].f_1 = joaat("sm_vecdmgbru");
	Global_51645[41 /*7*/] = 1;
	Global_51645[43 /*7*/].f_1 = joaat("sm_vecdmgmai");
	Global_51645[43 /*7*/] = 1;
	Global_51645[44 /*7*/].f_1 = joaat("sm_vecdmgsht");
	Global_51645[44 /*7*/] = 1;
	Global_51645[45 /*7*/].f_1 = joaat("sm_vecdmguma");
	Global_51645[45 /*7*/] = 1;
	Global_51645[46 /*7*/].f_1 = joaat("sm_vecdmgvap");
	Global_51645[46 /*7*/] = 1;
	Global_51645[47 /*7*/].f_1 = joaat("sm_vecdmghvy");
	Global_51645[47 /*7*/] = 1;
	Global_51645[48 /*7*/].f_1 = joaat("sm_vecpedkil");
	Global_51645[48 /*7*/] = 1;
	Global_51645[49 /*7*/].f_1 = joaat("sm_wepbuyshr");
	Global_51645[49 /*7*/] = 1;
	Global_51645[50 /*7*/].f_1 = joaat("sm_wepbuyhal");
	Global_51645[50 /*7*/] = 1;
	Global_51645[51 /*7*/].f_1 = joaat("sm_weptakevom");
	Global_51645[51 /*7*/] = 1;
	Global_51645[52 /*7*/].f_1 = joaat("sm_weptakeshr");
	Global_51645[52 /*7*/] = 1;
	Global_51645[53 /*7*/].f_1 = joaat("sm_weptakehal");
	Global_51645[53 /*7*/] = 1;
	Global_51645[54 /*7*/].f_1 = joaat("sm_kilcopvom");
	Global_51645[54 /*7*/] = 1;
	Global_51645[55 /*7*/].f_1 = joaat("sm_kilcopshr");
	Global_51645[55 /*7*/] = 1;
	Global_51645[56 /*7*/].f_1 = joaat("sm_kilcophal");
	Global_51645[56 /*7*/] = 1;
	Global_51645[57 /*7*/].f_1 = joaat("sm_kilcrimvom");
	Global_51645[57 /*7*/] = 1;
	Global_51645[58 /*7*/].f_1 = joaat("sm_kilcrimshr");
	Global_51645[58 /*7*/] = 1;
	Global_51645[59 /*7*/].f_1 = joaat("sm_kilcrimhal");
	Global_51645[59 /*7*/] = 1;
	Global_51645[60 /*7*/].f_1 = joaat("sm_kilcivmai");
	Global_51645[60 /*7*/] = 1;
	Global_51645[61 /*7*/].f_1 = joaat("sm_kilcivsht");
	Global_51645[61 /*7*/] = 1;
	Global_51645[62 /*7*/].f_1 = joaat("sm_kilcivuma");
	Global_51645[62 /*7*/] = 1;
	Global_51645[63 /*7*/].f_1 = joaat("sm_kilcivvom");
	Global_51645[63 /*7*/] = 1;
	Global_51645[64 /*7*/].f_1 = joaat("sm_kilcivshr");
	Global_51645[64 /*7*/] = 1;
	Global_51645[65 /*7*/].f_1 = joaat("sm_kilcivhal");
	Global_51645[65 /*7*/] = 1;
	Global_51645[67 /*7*/].f_1 = joaat("sm_venusespu");
	Global_51645[67 /*7*/] = 1;
	Global_51645[68 /*7*/].f_1 = joaat("sm_newdam");
	Global_51645[68 /*7*/] = 1;
	Global_51645[69 /*7*/].f_1 = joaat("sm_hpkil");
	Global_51645[69 /*7*/] = 1;
	Global_51645[70 /*7*/].f_1 = joaat("sm_pubclub");
	Global_51645[70 /*7*/] = 1;
	Global_51645[71 /*7*/].f_1 = joaat("sm_tdrnk");
	Global_51645[71 /*7*/] = 1;
	Global_51645[72 /*7*/].f_1 = joaat("sm_frnpub");
	Global_51645[72 /*7*/] = 1;
	Global_51645[73 /*7*/].f_1 = joaat("sm_drnkcrm");
	Global_51645[73 /*7*/] = 1;
	Global_51645[74 /*7*/].f_1 = joaat("sm_ramcom");
	Global_51645[74 /*7*/] = 1;
	Global_51645[76 /*7*/].f_1 = joaat("sm_radcnt");
	Global_51645[76 /*7*/] = 1;
	Global_51645[77 /*7*/].f_1 = joaat("sm_radwzl");
	Global_51645[77 /*7*/] = 1;
	Global_51645[78 /*7*/].f_1 = joaat("sm_radzit");
	Global_51645[78 /*7*/] = 1;
	Global_51645[81 /*7*/].f_1 = joaat("sm_zititcnt");
	Global_51645[81 /*7*/] = 1;
	Global_51645[82 /*7*/].f_1 = joaat("sm_zititwzl");
	Global_51645[82 /*7*/] = 1;
	Global_51645[83 /*7*/].f_1 = joaat("sm_zititzit");
	Global_51645[83 /*7*/] = 1;
	Global_51645[84 /*7*/].f_1 = joaat("sm_radchacnt");
	Global_51645[84 /*7*/] = 1;
	Global_51645[85 /*7*/].f_1 = joaat("sm_radchawzl");
	Global_51645[85 /*7*/] = 1;
	Global_51645[88 /*7*/].f_1 = joaat("sm_para");
	Global_51645[88 /*7*/] = 1;
	Global_51645[89 /*7*/].f_1 = joaat("sm_tkfire");
	Global_51645[89 /*7*/] = 1;
	Global_51645[90 /*7*/].f_1 = joaat("sm_fibai");
	Global_51645[90 /*7*/] = 1;
	Global_51645[91 /*7*/].f_1 = joaat("sm_tandes");
	Global_51645[91 /*7*/] = 1;
	Global_51645[92 /*7*/].f_1 = joaat("sm_garep");
	Global_51645[92 /*7*/] = 1;
	Global_51645[93 /*7*/].f_1 = joaat("sm_gamonsp");
	Global_51645[93 /*7*/] = 1;
	Global_51645[94 /*7*/].f_1 = joaat("sm_monb");
	Global_51645[94 /*7*/] = 1;
	Global_51645[98 /*7*/].f_1 = joaat("sm_monupshk");
	Global_51645[98 /*7*/] = 1;
	Global_51645[100 /*7*/].f_1 = joaat("sm_taxdest");
	Global_51645[100 /*7*/] = 1;
	Global_51645[101 /*7*/].f_1 = joaat("sm_kilwbfa");
	Global_51645[101 /*7*/] = 1;
	Global_51645[102 /*7*/].f_1 = joaat("sm_kilwbru");
	Global_51645[102 /*7*/] = 1;
	Global_51645[104 /*7*/].f_1 = joaat("sm_kilwmai");
	Global_51645[104 /*7*/] = 1;
	Global_51645[105 /*7*/].f_1 = joaat("sm_kilwsht");
	Global_51645[105 /*7*/] = 1;
	Global_51645[106 /*7*/].f_1 = joaat("sm_kilwuma");
	Global_51645[106 /*7*/] = 1;
	Global_51645[107 /*7*/].f_1 = joaat("sm_kilwvap");
	Global_51645[107 /*7*/] = 1;
	Global_51645[108 /*7*/].f_1 = joaat("sm_kilwvom");
	Global_51645[108 /*7*/] = 1;
	Global_51645[109 /*7*/].f_1 = joaat("sm_kilwhvy");
	Global_51645[109 /*7*/] = 1;
	Global_51645[112 /*7*/].f_1 = joaat("sm_clobofbin");
	Global_51645[112 /*7*/] = 1;
	Global_51645[113 /*7*/].f_1 = joaat("sm_clobofpkw");
	Global_51645[113 /*7*/] = 1;
	Global_51645[114 /*7*/].f_1 = joaat("sm_clobofpon");
	Global_51645[114 /*7*/] = 1;
	Global_51645[117 /*7*/].f_1 = joaat("sm_yoga");
	Global_51645[117 /*7*/] = 1;
	Global_51645[118 /*7*/].f_1 = joaat("sm_tri");
	Global_51645[118 /*7*/] = 1;
	Global_51645[119 /*7*/].f_1 = joaat("sm_gym");
	Global_51645[119 /*7*/] = 1;
	Global_51645[120 /*7*/].f_1 = joaat("sm_strip");
	Global_51645[120 /*7*/] = 1;
	Global_51645[121 /*7*/].f_1 = joaat("sm_ughok");
	Global_51645[121 /*7*/] = 1;
	Global_51645[122 /*7*/].f_1 = joaat("sm_strtro");
	Global_51645[122 /*7*/] = 1;
	Global_51645[123 /*7*/].f_1 = joaat("sm_pisco");
	Global_51645[123 /*7*/] = 1;
	Global_51645[124 /*7*/].f_1 = joaat("sm_totinj");
	Global_51645[124 /*7*/] = 1;
	Global_51645[125 /*7*/].f_1 = joaat("sm_drugkil");
	Global_51645[125 /*7*/] = 1;
	Global_51645[126 /*7*/].f_1 = joaat("sm_hangovr");
	Global_51645[126 /*7*/] = 1;
	Global_51645[127 /*7*/].f_1 = joaat("sm_killspr");
	Global_51645[127 /*7*/] = 1;
	Global_51645[129 /*7*/].f_1 = joaat("sm_pedfirekill");
	Global_51645[129 /*7*/] = 1;
	Global_51645[130 /*7*/].f_1 = joaat("sm_pedfiretick");
	Global_51645[130 /*7*/] = 1;
	Global_51645[131 /*7*/].f_1 = joaat("sm_tvtickwap");
	Global_51645[131 /*7*/] = 1;
	Global_51645[132 /*7*/].f_1 = joaat("sm_tvtickwiw");
	Global_51645[132 /*7*/] = 1;
	Global_51645[134 /*7*/].f_1 = joaat("sm_zitpopzit");
	Global_51645[134 /*7*/] = 1;
	Global_51645[135 /*7*/].f_1 = joaat("sm_carapp");
	Global_51645[135 /*7*/] = 1;
	Global_51645[137 /*7*/].f_1 = joaat("sm_storob");
	Global_51645[137 /*7*/] = 1;
	Global_51645[162 /*7*/].f_1 = joaat("sm_phoncalbdg");
	Global_51645[162 /*7*/] = 1;
	Global_51645[163 /*7*/].f_1 = joaat("sm_phoncaltnk");
	Global_51645[163 /*7*/] = 1;
	Global_51645[164 /*7*/].f_1 = joaat("sm_phoncalwiz");
	Global_51645[164 /*7*/] = 1;
	Global_51645[165 /*7*/].f_1 = joaat("sm_phontxtbdg");
	Global_51645[165 /*7*/] = 1;
	Global_51645[166 /*7*/].f_1 = joaat("sm_phontxttnk");
	Global_51645[166 /*7*/] = 1;
	Global_51645[167 /*7*/].f_1 = joaat("sm_phontxtwiz");
	Global_51645[167 /*7*/] = 1;
	Global_51645[168 /*7*/].f_1 = joaat("sm_chtickbdg");
	Global_51645[168 /*7*/] = 1;
	Global_51645[169 /*7*/].f_1 = joaat("sm_chticktnk");
	Global_51645[169 /*7*/] = 1;
	Global_51645[170 /*7*/].f_1 = joaat("sm_chtickwiz");
	Global_51645[170 /*7*/] = 1;
	Global_51645[171 /*7*/].f_1 = joaat("sm_calcanbdg");
	Global_51645[171 /*7*/] = 1;
	Global_51645[172 /*7*/].f_1 = joaat("sm_calcantnk");
	Global_51645[172 /*7*/] = 1;
	Global_51645[173 /*7*/].f_1 = joaat("sm_calcanwiz");
	Global_51645[173 /*7*/] = 1;
	Global_51645[138 /*7*/].f_2 = 1;
	Global_51645[138 /*7*/].f_3 = joaat("sp0_dist_walking");
	Global_51645[138 /*7*/].f_4 = 1;
	Global_51645[139 /*7*/].f_2 = 1;
	Global_51645[139 /*7*/].f_3 = joaat("sp1_dist_walking");
	Global_51645[139 /*7*/].f_4 = 1;
	Global_51645[140 /*7*/].f_2 = 1;
	Global_51645[140 /*7*/].f_3 = joaat("sp2_dist_walking");
	Global_51645[140 /*7*/].f_4 = 1;
	Global_51645[141 /*7*/].f_2 = 1;
	Global_51645[141 /*7*/].f_3 = joaat("sp0_dist_driving_bicycle");
	Global_51645[141 /*7*/].f_4 = 1;
	Global_51645[142 /*7*/].f_2 = 1;
	Global_51645[142 /*7*/].f_3 = joaat("sp1_dist_driving_bicycle");
	Global_51645[142 /*7*/].f_4 = 1;
	Global_51645[143 /*7*/].f_2 = 1;
	Global_51645[143 /*7*/].f_3 = joaat("sp2_dist_driving_bicycle");
	Global_51645[143 /*7*/].f_4 = 1;
	Global_51645[144 /*7*/].f_2 = 1;
	Global_51645[144 /*7*/].f_3 = joaat("sp0_bailed_from_vehicle");
	Global_51645[144 /*7*/].f_4 = 0;
	Global_51645[145 /*7*/].f_2 = 1;
	Global_51645[145 /*7*/].f_3 = joaat("sp1_bailed_from_vehicle");
	Global_51645[145 /*7*/].f_4 = 0;
	Global_51645[146 /*7*/].f_2 = 1;
	Global_51645[146 /*7*/].f_3 = joaat("sp2_bailed_from_vehicle");
	Global_51645[146 /*7*/].f_4 = 0;
	Global_51645[150 /*7*/].f_2 = 1;
	Global_51645[150 /*7*/].f_3 = joaat("sp0_large_accidents");
	Global_51645[150 /*7*/].f_4 = 0;
	Global_51645[151 /*7*/].f_2 = 1;
	Global_51645[151 /*7*/].f_3 = joaat("sp1_large_accidents");
	Global_51645[151 /*7*/].f_4 = 0;
	Global_51645[152 /*7*/].f_2 = 1;
	Global_51645[152 /*7*/].f_3 = joaat("sp2_large_accidents");
	Global_51645[152 /*7*/].f_4 = 0;
	Global_51645[153 /*7*/].f_2 = 1;
	Global_51645[153 /*7*/].f_3 = joaat("sp0_total_legitimate_kills");
	Global_51645[153 /*7*/].f_4 = 0;
	Global_51645[154 /*7*/].f_2 = 1;
	Global_51645[154 /*7*/].f_3 = joaat("sp1_total_legitimate_kills");
	Global_51645[154 /*7*/].f_4 = 0;
	Global_51645[155 /*7*/].f_2 = 1;
	Global_51645[155 /*7*/].f_3 = joaat("sp2_total_legitimate_kills");
	Global_51645[155 /*7*/].f_4 = 0;
	Global_51645[156 /*7*/].f_2 = 1;
	Global_51645[156 /*7*/].f_3 = joaat("sp0_money_spent_on_taxis");
	Global_51645[156 /*7*/].f_4 = 0;
	Global_51645[157 /*7*/].f_2 = 1;
	Global_51645[157 /*7*/].f_3 = joaat("sp1_money_spent_on_taxis");
	Global_51645[157 /*7*/].f_4 = 0;
	Global_51645[158 /*7*/].f_2 = 1;
	Global_51645[158 /*7*/].f_3 = joaat("sp2_money_spent_on_taxis");
	Global_51645[158 /*7*/].f_4 = 0;
	Global_51645[159 /*7*/].f_2 = 1;
	Global_51645[159 /*7*/].f_3 = joaat("sp0_money_spent_on_healthcare");
	Global_51645[159 /*7*/].f_4 = 0;
	Global_51645[160 /*7*/].f_2 = 1;
	Global_51645[160 /*7*/].f_3 = joaat("sp1_money_spent_on_healthcare");
	Global_51645[160 /*7*/].f_4 = 0;
	Global_51645[161 /*7*/].f_2 = 1;
	Global_51645[161 /*7*/].f_3 = joaat("sp2_money_spent_on_healthcare");
	Global_51645[161 /*7*/].f_4 = 0;
	Global_51645[174 /*7*/].f_2 = 1;
	Global_51645[174 /*7*/].f_3 = joaat("sp0_money_spent_in_cop_bribes");
	Global_51645[174 /*7*/].f_4 = 0;
	Global_51645[175 /*7*/].f_2 = 1;
	Global_51645[175 /*7*/].f_3 = joaat("sp1_money_spent_in_cop_bribes");
	Global_51645[175 /*7*/].f_4 = 0;
	Global_51645[176 /*7*/].f_2 = 1;
	Global_51645[176 /*7*/].f_3 = joaat("sp2_money_spent_in_cop_bribes");
	Global_51645[176 /*7*/].f_4 = 0;
	Global_51645[177 /*7*/].f_2 = 1;
	Global_51645[177 /*7*/].f_3 = joaat("sp0_busted");
	Global_51645[177 /*7*/].f_4 = 0;
	Global_51645[178 /*7*/].f_2 = 1;
	Global_51645[178 /*7*/].f_3 = joaat("sp1_busted");
	Global_51645[178 /*7*/].f_4 = 0;
	Global_51645[179 /*7*/].f_2 = 1;
	Global_51645[179 /*7*/].f_3 = joaat("sp2_busted");
	Global_51645[179 /*7*/].f_4 = 0;
	Global_51645[180 /*7*/].f_2 = 1;
	Global_51645[180 /*7*/].f_3 = joaat("sp0_died_in_fall");
	Global_51645[180 /*7*/].f_4 = 0;
	Global_51645[181 /*7*/].f_2 = 1;
	Global_51645[181 /*7*/].f_3 = joaat("sp1_died_in_fall");
	Global_51645[181 /*7*/].f_4 = 0;
	Global_51645[182 /*7*/].f_2 = 1;
	Global_51645[182 /*7*/].f_3 = joaat("sp2_died_in_fall");
	Global_51645[182 /*7*/].f_4 = 0;
	Global_51645[183 /*7*/].f_2 = 1;
	Global_51645[183 /*7*/].f_3 = joaat("sp0_stars_attained");
	Global_51645[183 /*7*/].f_4 = 0;
	Global_51645[184 /*7*/].f_2 = 1;
	Global_51645[184 /*7*/].f_3 = joaat("sp1_stars_attained");
	Global_51645[184 /*7*/].f_4 = 0;
	Global_51645[185 /*7*/].f_2 = 1;
	Global_51645[185 /*7*/].f_3 = joaat("sp2_stars_attained");
	Global_51645[185 /*7*/].f_4 = 0;
	Global_51645[186 /*7*/].f_2 = 1;
	Global_51645[186 /*7*/].f_3 = joaat("sp0_stars_evaded");
	Global_51645[186 /*7*/].f_4 = 0;
	Global_51645[187 /*7*/].f_2 = 1;
	Global_51645[187 /*7*/].f_3 = joaat("sp1_stars_evaded");
	Global_51645[187 /*7*/].f_4 = 0;
	Global_51645[188 /*7*/].f_2 = 1;
	Global_51645[188 /*7*/].f_3 = joaat("sp2_stars_evaded");
	Global_51645[188 /*7*/].f_4 = 0;
	Global_51645[189 /*7*/].f_2 = 1;
	Global_51645[189 /*7*/].f_3 = joaat("sp0_manual_saved");
	Global_51645[189 /*7*/].f_4 = 0;
	Global_51645[190 /*7*/].f_2 = 1;
	Global_51645[190 /*7*/].f_3 = joaat("sp1_manual_saved");
	Global_51645[190 /*7*/].f_4 = 0;
	Global_51645[191 /*7*/].f_2 = 1;
	Global_51645[191 /*7*/].f_3 = joaat("sp2_manual_saved");
	Global_51645[191 /*7*/].f_4 = 0;
	Global_51645[192 /*7*/].f_2 = 1;
	Global_51645[192 /*7*/].f_3 = joaat("sp0_kills_cop");
	Global_51645[192 /*7*/].f_4 = 0;
	Global_51645[193 /*7*/].f_2 = 1;
	Global_51645[193 /*7*/].f_3 = joaat("sp1_kills_cop");
	Global_51645[193 /*7*/].f_4 = 0;
	Global_51645[194 /*7*/].f_2 = 1;
	Global_51645[194 /*7*/].f_3 = joaat("sp2_kills_cop");
	Global_51645[194 /*7*/].f_4 = 0;
	Global_51645[195 /*7*/].f_2 = 1;
	Global_51645[195 /*7*/].f_3 = joaat("sp0_kills_swat");
	Global_51645[195 /*7*/].f_4 = 0;
	Global_51645[196 /*7*/].f_2 = 1;
	Global_51645[196 /*7*/].f_3 = joaat("sp1_kills_swat");
	Global_51645[196 /*7*/].f_4 = 0;
	Global_51645[197 /*7*/].f_2 = 1;
	Global_51645[197 /*7*/].f_3 = joaat("sp2_kills_swat");
	Global_51645[197 /*7*/].f_4 = 0;
	Global_51645[198 /*7*/].f_2 = 1;
	Global_51645[198 /*7*/].f_3 = joaat("sp0_time_in_cover");
	Global_51645[198 /*7*/].f_4 = 0;
	Global_51645[199 /*7*/].f_2 = 1;
	Global_51645[199 /*7*/].f_3 = joaat("sp1_time_in_cover");
	Global_51645[199 /*7*/].f_4 = 0;
	Global_51645[200 /*7*/].f_2 = 1;
	Global_51645[200 /*7*/].f_3 = joaat("sp2_time_in_cover");
	Global_51645[200 /*7*/].f_4 = 0;
	Global_51083[0 /*7*/] = joaat("sm_price_amu");
	Global_51083[0 /*7*/].f_3[0] = joaat("amu_ow0");
	Global_51083[0 /*7*/].f_3[1] = joaat("amu_ow1");
	Global_51083[0 /*7*/].f_3[2] = joaat("amu_ow2");
	Global_51083[1 /*7*/] = joaat("sm_price_bdg");
	Global_51083[1 /*7*/].f_3[0] = joaat("bdg_ow0");
	Global_51083[1 /*7*/].f_3[1] = joaat("bdg_ow1");
	Global_51083[1 /*7*/].f_3[2] = joaat("bdg_ow2");
	Global_51083[2 /*7*/] = joaat("sm_price_bfa");
	Global_51083[2 /*7*/].f_3[0] = joaat("bfa_ow0");
	Global_51083[2 /*7*/].f_3[1] = joaat("bfa_ow1");
	Global_51083[2 /*7*/].f_3[2] = joaat("bfa_ow2");
	Global_51083[3 /*7*/] = joaat("sm_price_bin");
	Global_51083[3 /*7*/].f_3[0] = joaat("bin_ow0");
	Global_51083[3 /*7*/].f_3[1] = joaat("bin_ow1");
	Global_51083[3 /*7*/].f_3[2] = joaat("bin_ow2");
	Global_51083[4 /*7*/] = joaat("sm_price_btr");
	Global_51083[4 /*7*/].f_3[0] = joaat("btr_ow0");
	Global_51083[4 /*7*/].f_3[1] = joaat("btr_ow1");
	Global_51083[4 /*7*/].f_3[2] = joaat("btr_ow2");
	Global_51083[5 /*7*/] = joaat("sm_price_ble");
	Global_51083[5 /*7*/].f_3[0] = joaat("ble_ow0");
	Global_51083[5 /*7*/].f_3[1] = joaat("ble_ow1");
	Global_51083[5 /*7*/].f_3[2] = joaat("ble_ow2");
	Global_51083[6 /*7*/] = joaat("sm_price_bru");
	Global_51083[6 /*7*/].f_3[0] = joaat("bru_ow0");
	Global_51083[6 /*7*/].f_3[1] = joaat("bru_ow1");
	Global_51083[6 /*7*/].f_3[2] = joaat("bru_ow2");
	Global_51083[7 /*7*/] = joaat("sm_price_cnt");
	Global_51083[7 /*7*/].f_3[0] = joaat("cnt_ow0");
	Global_51083[7 /*7*/].f_3[1] = joaat("cnt_ow1");
	Global_51083[7 /*7*/].f_3[2] = joaat("cnt_ow2");
	Global_51083[8 /*7*/] = joaat("sm_price_cre");
	Global_51083[8 /*7*/].f_3[0] = joaat("cre_ow0");
	Global_51083[8 /*7*/].f_3[1] = joaat("cre_ow1");
	Global_51083[8 /*7*/].f_3[2] = joaat("cre_ow2");
	Global_51083[9 /*7*/] = joaat("sm_price_dgp");
	Global_51083[9 /*7*/].f_3[0] = joaat("dgp_ow0");
	Global_51083[9 /*7*/].f_3[1] = joaat("dgp_ow1");
	Global_51083[9 /*7*/].f_3[2] = joaat("dgp_ow2");
	Global_51083[10 /*7*/] = joaat("sm_price_wap");
	Global_51083[10 /*7*/].f_3[0] = joaat("wap_ow0");
	Global_51083[10 /*7*/].f_3[1] = joaat("wap_ow1");
	Global_51083[10 /*7*/].f_3[2] = joaat("wap_ow2");
	Global_51083[11 /*7*/] = joaat("sm_price_fac");
	Global_51083[11 /*7*/].f_3[0] = joaat("fac_ow0");
	Global_51083[11 /*7*/].f_3[1] = joaat("fac_ow1");
	Global_51083[11 /*7*/].f_3[2] = joaat("fac_ow2");
	Global_51083[12 /*7*/] = joaat("sm_price_frt");
	Global_51083[12 /*7*/].f_3[0] = joaat("frt_ow0");
	Global_51083[12 /*7*/].f_3[1] = joaat("frt_ow1");
	Global_51083[12 /*7*/].f_3[2] = joaat("frt_ow2");
	Global_51083[13 /*7*/] = joaat("sm_price_lsc");
	Global_51083[13 /*7*/].f_3[0] = joaat("lsc_ow0");
	Global_51083[13 /*7*/].f_3[1] = joaat("lsc_ow1");
	Global_51083[13 /*7*/].f_3[2] = joaat("lsc_ow2");
	Global_51083[14 /*7*/] = joaat("sm_price_lst");
	Global_51083[14 /*7*/].f_3[0] = joaat("lst_ow0");
	Global_51083[14 /*7*/].f_3[1] = joaat("lst_ow1");
	Global_51083[14 /*7*/].f_3[2] = joaat("lst_ow2");
	Global_51083[15 /*7*/] = joaat("sm_price_ltd");
	Global_51083[15 /*7*/].f_3[0] = joaat("ltd_ow0");
	Global_51083[15 /*7*/].f_3[1] = joaat("ltd_ow1");
	Global_51083[15 /*7*/].f_3[2] = joaat("ltd_ow2");
	Global_51083[16 /*7*/] = joaat("sm_price_mai");
	Global_51083[16 /*7*/].f_3[0] = joaat("mai_ow0");
	Global_51083[16 /*7*/].f_3[1] = joaat("mai_ow1");
	Global_51083[16 /*7*/].f_3[2] = joaat("mai_ow2");
	Global_51083[17 /*7*/] = joaat("sm_price_pkw");
	Global_51083[17 /*7*/].f_3[0] = joaat("pkw_ow0");
	Global_51083[17 /*7*/].f_3[1] = joaat("pkw_ow1");
	Global_51083[17 /*7*/].f_3[2] = joaat("pkw_ow2");
	Global_51083[18 /*7*/] = joaat("sm_price_pis");
	Global_51083[18 /*7*/].f_3[0] = joaat("pis_ow0");
	Global_51083[18 /*7*/].f_3[1] = joaat("pis_ow1");
	Global_51083[18 /*7*/].f_3[2] = joaat("pis_ow2");
	Global_51083[19 /*7*/] = joaat("sm_price_pon");
	Global_51083[19 /*7*/].f_3[0] = joaat("pon_ow0");
	Global_51083[19 /*7*/].f_3[1] = joaat("pon_ow1");
	Global_51083[19 /*7*/].f_3[2] = joaat("pon_ow2");
	Global_51083[20 /*7*/] = joaat("sm_price_ron");
	Global_51083[20 /*7*/].f_3[0] = joaat("ron_ow0");
	Global_51083[20 /*7*/].f_3[1] = joaat("ron_ow1");
	Global_51083[20 /*7*/].f_3[2] = joaat("ron_ow2");
	Global_51083[21 /*7*/] = joaat("sm_price_sht");
	Global_51083[21 /*7*/].f_3[0] = joaat("sht_ow0");
	Global_51083[21 /*7*/].f_3[1] = joaat("sht_ow1");
	Global_51083[21 /*7*/].f_3[2] = joaat("sht_ow2");
	Global_51083[22 /*7*/] = joaat("sm_price_spu");
	Global_51083[22 /*7*/].f_3[0] = joaat("spu_ow0");
	Global_51083[22 /*7*/].f_3[1] = joaat("spu_ow1");
	Global_51083[22 /*7*/].f_3[2] = joaat("spu_ow2");
	Global_51083[23 /*7*/] = joaat("sm_price_tnk");
	Global_51083[23 /*7*/].f_3[0] = joaat("tnk_ow0");
	Global_51083[23 /*7*/].f_3[1] = joaat("tnk_ow1");
	Global_51083[23 /*7*/].f_3[2] = joaat("tnk_ow2");
	Global_51083[24 /*7*/] = joaat("sm_price_wiw");
	Global_51083[24 /*7*/].f_3[0] = joaat("wiw_ow0");
	Global_51083[24 /*7*/].f_3[1] = joaat("wiw_ow1");
	Global_51083[24 /*7*/].f_3[2] = joaat("wiw_ow2");
	Global_51083[25 /*7*/] = joaat("sm_price_uma");
	Global_51083[25 /*7*/].f_3[0] = joaat("uma_ow0");
	Global_51083[25 /*7*/].f_3[1] = joaat("uma_ow1");
	Global_51083[25 /*7*/].f_3[2] = joaat("uma_ow2");
	Global_51083[26 /*7*/] = joaat("sm_price_vap");
	Global_51083[26 /*7*/].f_3[0] = joaat("vap_ow0");
	Global_51083[26 /*7*/].f_3[1] = joaat("vap_ow1");
	Global_51083[26 /*7*/].f_3[2] = joaat("vap_ow2");
	Global_51083[27 /*7*/] = joaat("sm_price_vom");
	Global_51083[27 /*7*/].f_3[0] = joaat("vom_ow0");
	Global_51083[27 /*7*/].f_3[1] = joaat("vom_ow1");
	Global_51083[27 /*7*/].f_3[2] = joaat("vom_ow2");
	Global_51083[28 /*7*/] = joaat("sm_price_wzl");
	Global_51083[28 /*7*/].f_3[0] = joaat("wzl_ow0");
	Global_51083[28 /*7*/].f_3[1] = joaat("wzl_ow1");
	Global_51083[28 /*7*/].f_3[2] = joaat("wzl_ow2");
	Global_51083[29 /*7*/] = joaat("sm_price_wiz");
	Global_51083[29 /*7*/].f_3[0] = joaat("wiz_ow0");
	Global_51083[29 /*7*/].f_3[1] = joaat("wiz_ow1");
	Global_51083[29 /*7*/].f_3[2] = joaat("wiz_ow2");
	Global_51083[30 /*7*/] = joaat("sm_price_zit");
	Global_51083[30 /*7*/].f_3[0] = joaat("zit_ow0");
	Global_51083[30 /*7*/].f_3[1] = joaat("zit_ow1");
	Global_51083[30 /*7*/].f_3[2] = joaat("zit_ow2");
	Global_51083[31 /*7*/] = joaat("sm_price_shk");
	Global_51083[31 /*7*/].f_3[0] = joaat("shk_ow0");
	Global_51083[31 /*7*/].f_3[1] = joaat("shk_ow1");
	Global_51083[31 /*7*/].f_3[2] = joaat("shk_ow2");
	Global_51083[32 /*7*/] = joaat("sm_price_mol");
	Global_51083[32 /*7*/].f_3[0] = joaat("mol_ow0");
	Global_51083[32 /*7*/].f_3[1] = joaat("mol_ow1");
	Global_51083[32 /*7*/].f_3[2] = joaat("mol_ow2");
	Global_51083[33 /*7*/] = joaat("sm_price_pmp");
	Global_51083[33 /*7*/].f_3[0] = joaat("pmp_ow0");
	Global_51083[33 /*7*/].f_3[1] = joaat("pmp_ow1");
	Global_51083[33 /*7*/].f_3[2] = joaat("pmp_ow2");
	Global_51083[34 /*7*/] = joaat("sm_price_got");
	Global_51083[34 /*7*/].f_3[0] = joaat("got_ow0");
	Global_51083[34 /*7*/].f_3[1] = joaat("got_ow1");
	Global_51083[34 /*7*/].f_3[2] = joaat("got_ow2");
	Global_51083[35 /*7*/] = joaat("sm_price_eye");
	Global_51083[35 /*7*/].f_3[0] = joaat("eye_ow0");
	Global_51083[35 /*7*/].f_3[1] = joaat("eye_ow1");
	Global_51083[35 /*7*/].f_3[2] = joaat("eye_ow2");
	Global_51083[36 /*7*/] = joaat("sm_price_hvy");
	Global_51083[36 /*7*/].f_3[0] = joaat("hvy_ow0");
	Global_51083[36 /*7*/].f_3[1] = joaat("hvy_ow1");
	Global_51083[36 /*7*/].f_3[2] = joaat("hvy_ow2");
	Global_51083[37 /*7*/] = joaat("sm_price_shr");
	Global_51083[37 /*7*/].f_3[0] = joaat("shr_ow0");
	Global_51083[37 /*7*/].f_3[1] = joaat("shr_ow1");
	Global_51083[37 /*7*/].f_3[2] = joaat("shr_ow2");
	Global_51083[38 /*7*/] = joaat("sm_price_hal");
	Global_51083[38 /*7*/].f_3[0] = joaat("hal_ow0");
	Global_51083[38 /*7*/].f_3[1] = joaat("hal_ow1");
	Global_51083[38 /*7*/].f_3[2] = joaat("hal_ow2");
}

void func_97()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

