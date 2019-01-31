#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == 3265147136)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == 2363121989)
			{
				func_2(1, 0, 3265148136, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, 3265148136, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == 3265147136)
			{
			}
			break;
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_1(int iParam0)//Position - 0x8A
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)//Position - 0xA6
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		if (bParam4)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		}
		else
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		}
		func_3(sParam5);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_3(char* sParam0)//Position - 0xF6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

