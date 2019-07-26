#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
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
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
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

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		func_3(sParam5);
		END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_3(var uParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

