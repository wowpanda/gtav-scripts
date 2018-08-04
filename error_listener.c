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
	func_10();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_9())
		{
			return;
		}
		func_1();
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(2))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(2, iVar0);
		if (func_7(iVar1))
		{
			func_6(&Var2);
			func_5(2, iVar0, iVar1, &Var2);
			Var2.f_1 = (MISC::GET_FRAME_COUNT() - 1);
			Var2 = iVar1;
			if (!func_4(&Var2, &uVar3))
			{
				func_3(&Var2);
			}
		}
		iVar0++;
	}
}

int func_3(int iParam0)
{
	if (Global_25551.f_31 < 10)
	{
		Global_25551[Global_25551.f_31 /*3*/] = { *iParam0 };
		Global_25551.f_31++;
		return 1;
	}
	return 0;
}

int func_4(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_25551.f_31)
	{
		if (Global_25551[*uParam1 /*3*/] == *iParam0 && Global_25551[*uParam1 /*3*/].f_2 == iParam0->f_2)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	
	if (((iParam2 == 236 || iParam2 == 237) || iParam2 == 238) || iParam2 == 239)
	{
		if (SCRIPT::GET_EVENT_DATA(iParam0, iParam1, &uVar0, 1))
		{
			uParam3->f_2 = uVar0;
		}
	}
}

void func_6(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_7(int iParam0)
{
	return func_8(iParam0);
}

bool func_8(int iParam0)
{
	return (((iParam0 == 237 || iParam0 == 238) || iParam0 == 239) || iParam0 == 236);
}

int func_9()
{
	return 0;
}

void func_10()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

