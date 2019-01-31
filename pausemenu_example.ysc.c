#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == 2363121989)
			{
				func_2(1, 0, 2589096434, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, 2589096434, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == 2589095434)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case 2363121989:
					break;
				
				case 2589095434:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_1(int iParam0)//Position - 0xBA
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)//Position - 0xD6
{
	if (GRAPHICS::_BEGIN_SCALEFORM_MOVIE_METHOD_N("SET_DATA_SLOT"))
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam0);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam7);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		if (bParam4)
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		}
		else
		{
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam5);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_3(char* sParam0)//Position - 0x136
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

