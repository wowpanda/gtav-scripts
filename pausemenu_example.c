#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				WAIT(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
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
	TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	if (BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam5);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_3(var uParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

